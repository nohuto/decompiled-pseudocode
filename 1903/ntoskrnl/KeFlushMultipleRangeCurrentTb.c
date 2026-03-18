/*
 * XREFs of KeFlushMultipleRangeCurrentTb @ 0x14017A27C
 * Callers:
 *     MiDeleteVaTail @ 0x14004DE20 (MiDeleteVaTail.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052B60 (MiMoveDirtyBitsToPfns.c)
 *     MiAgeWorkingSetTail @ 0x1400B94E0 (MiAgeWorkingSetTail.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x14009FA08 (KiIsSecureProcessFlush.c)
 *     KiFlushRangeTb @ 0x14017A358 (KiFlushRangeTb.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlFlushRangeListTb @ 0x14028D990 (HvlFlushRangeListTb.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1402AA818 (KiPrepareFlushCurrentAffinity.c)
 *     KiPrepareFlushParameters @ 0x1402AA888 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x1403293DC (VmFlushTb.c)
 *     ExFlushTb @ 0x14033C588 (ExFlushTb.c)
 */

char __fastcall KeFlushMultipleRangeCurrentTb(unsigned int a1, unsigned __int64 *a2, unsigned int a3)
{
  __int64 v4; // rdi
  char result; // al
  char v7; // bp
  char v8; // bl
  unsigned __int64 *v9; // rbx
  __int64 v10; // rbp
  int v11; // r8d
  int v12; // r9d
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  _BYTE v15[8]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v17[176]; // [rsp+50h] [rbp-D8h] BYREF

  v4 = a1;
  memset(v17, 0, 0xA8uLL);
  result = KiIsSecureProcessFlush(*a2, a3);
  v7 = result;
  v8 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
  if ( !result && !v8
    || (KiPrepareFlushParameters(a3, &v16, v15),
        KiPrepareFlushCurrentAffinity(v17),
        LOBYTE(v11) = v15[0],
        LOBYTE(v12) = v7,
        (result = HvlFlushRangeListTb(v16, (unsigned int)v17, v11, v12, v8, v4, (__int64)a2)) == 0) )
  {
    if ( (_DWORD)v4 )
    {
      v9 = a2;
      v10 = v4;
      do
      {
        result = KiFlushRangeTb(*v9++, a3);
        --v10;
      }
      while ( v10 );
    }
  }
  if ( VmTbFlushEnabled )
    result = VmFlushTb((unsigned int)v4, a2, a3);
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    ExFlushTb((unsigned int)v4, a2, a3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
