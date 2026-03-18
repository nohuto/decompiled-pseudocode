/*
 * XREFs of KeFlushMultipleRangeCurrentTb @ 0x14017A96C
 * Callers:
 *     MiDeleteVaTail @ 0x14004DEC0 (MiDeleteVaTail.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     MiAgeWorkingSetTail @ 0x140099350 (MiAgeWorkingSetTail.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x1400C5B48 (KiIsSecureProcessFlush.c)
 *     KiFlushRangeTb @ 0x14017AA48 (KiFlushRangeTb.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlFlushRangeListTb @ 0x14028D6F0 (HvlFlushRangeListTb.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1402AA578 (KiPrepareFlushCurrentAffinity.c)
 *     KiPrepareFlushParameters @ 0x1402AA5E8 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x140328E2C (VmFlushTb.c)
 *     ExFlushTb @ 0x14033BFE8 (ExFlushTb.c)
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
