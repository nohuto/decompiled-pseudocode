/*
 * XREFs of VmpFlushTbVaRange @ 0x14032A1FC
 * Callers:
 *     VmpFlushTb @ 0x14032A084 (VmpFlushTb.c)
 *     VmpRemoveMemoryRange @ 0x14032B200 (VmpRemoveMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x140329A14 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     VmpInvalidateOutstandingFaults @ 0x14032A668 (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessContextLockExclusive @ 0x14032AD80 (VmpProcessContextLockExclusive.c)
 *     HvlMapGpaPages @ 0x14034D86C (HvlMapGpaPages.c)
 */

unsigned __int64 __fastcall VmpFlushTbVaRange(
        volatile LONG *SpinLock,
        unsigned __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned __int64 *a6)
{
  __int64 v6; // r8
  unsigned __int64 result; // rax
  unsigned __int64 *v10; // r15
  _QWORD *v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // rbp
  __int64 v14; // rbp
  unsigned __int64 v15; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h]
  unsigned __int64 v19; // [rsp+40h] [rbp-28h] BYREF
  __int64 v20; // [rsp+48h] [rbp-20h]
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF

  v19 = a2;
  v6 = a3 - a2;
  v17 = 0LL;
  v18 = 0LL;
  result = v6 + 1;
  v20 = v6 + 1;
  if ( v6 != -1 )
  {
    v10 = a6;
    v11 = a5;
    do
    {
      result = VmpConvertPortionVpnRangeToGpnRange((__int64)SpinLock, &v19, 0x40000LL - *v11, a4, &v17);
      v12 = v18;
      v13 = result;
      if ( !v18 )
        break;
      if ( (int)HvlMapGpaPages(*((_QWORD *)SpinLock + 9), v17, 66560, v18, 0LL, (__int64)&v21) < 0 )
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
      if ( v21 != v12 )
        NT_ASSERT("PageCountProcessed == NumberOfPages");
      result = VmpInvalidateOutstandingFaults(SpinLock, v13, v12);
      *v11 += v12;
      if ( *v11 >= 0x40000uLL )
      {
        v14 = *((_QWORD *)SpinLock + 5);
        v15 = *v10;
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v15 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8((unsigned __int8)v15);
        *v11 = 0LL;
        result = VmpProcessContextLockExclusive(SpinLock);
        *v10 = result;
        if ( v14 != *((_QWORD *)SpinLock + 5) )
        {
          result = 0LL;
          *a4 = 0LL;
          a4[1] = 0LL;
          a4[2] = 0LL;
        }
      }
    }
    while ( v20 );
  }
  return result;
}
