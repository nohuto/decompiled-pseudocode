/*
 * XREFs of VmpFlushTbVaRange @ 0x14030C834
 * Callers:
 *     VmpFlushTb @ 0x14030C6BC (VmpFlushTb.c)
 *     VmpRemoveMemoryRange @ 0x14030D800 (VmpRemoveMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x14030C144 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     VmpInvalidateOutstandingFaults @ 0x14030CC88 (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessContextLockExclusive @ 0x14030D39C (VmpProcessContextLockExclusive.c)
 *     HvlMapGpaPages @ 0x14032C200 (HvlMapGpaPages.c)
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
  int v12; // r8d
  __int64 v13; // rdi
  unsigned __int64 v14; // rbp
  __int64 v15; // rbp
  unsigned __int64 v16; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  int v18; // [rsp+20h] [rbp-48h]
  unsigned __int64 v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-30h]
  __int64 v21; // [rsp+40h] [rbp-28h] BYREF
  __int64 v22; // [rsp+48h] [rbp-20h]
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF

  v6 = a3 - a2;
  v19 = a2;
  result = v6 + 1;
  v20 = v6 + 1;
  if ( v6 != -1 )
  {
    v10 = a6;
    v11 = a5;
    do
    {
      result = VmpConvertPortionVpnRangeToGpnRange((__int64)SpinLock, &v19, 0x40000LL - *v11, a4, &v21);
      v13 = v22;
      v14 = result;
      if ( !v22 )
        break;
      if ( (int)HvlMapGpaPages(*((_QWORD *)SpinLock + 9), v21, v12, v22, v18, (__int64)&v23) < 0 )
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
      if ( v23 != v13 )
        NT_ASSERT("PageCountProcessed == NumberOfPages");
      result = VmpInvalidateOutstandingFaults(SpinLock, v14, v13);
      *v11 += v13;
      if ( *v11 >= 0x40000uLL )
      {
        v15 = *((_QWORD *)SpinLock + 5);
        v16 = *v10;
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v16 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8((unsigned __int8)v16);
        *v11 = 0LL;
        result = VmpProcessContextLockExclusive(SpinLock);
        *v10 = result;
        if ( v15 != *((_QWORD *)SpinLock + 5) )
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
