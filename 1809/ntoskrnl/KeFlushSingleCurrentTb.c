/*
 * XREFs of KeFlushSingleCurrentTb @ 0x140156FD8
 * Callers:
 *     MiDbgReleaseAddress @ 0x1402BAFFC (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402BB0E8 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1402BB494 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x1402BB574 (MiDbgWriteCheck.c)
 *     MmReadProcessPageTables @ 0x1402BBA8C (MmReadProcessPageTables.c)
 *     MmInvalidateDumpAddresses @ 0x14056E630 (MmInvalidateDumpAddresses.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x1400EDB74 (KiIsSecureProcessFlush.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetUserTbFlushPending @ 0x1401BD290 (KiSetUserTbFlushPending.c)
 *     HvlFlushRangeListTb @ 0x140279838 (HvlFlushRangeListTb.c)
 *     KiPrepareFlushCurrentAffinity @ 0x140294028 (KiPrepareFlushCurrentAffinity.c)
 *     KiPrepareFlushParameters @ 0x140294098 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x14030B8E0 (VmFlushTb.c)
 *     ExFlushTb @ 0x14031D4E8 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushSingleCurrentTb(unsigned __int64 a1, unsigned int a2)
{
  bool IsSecureProcessFlush; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  bool v9; // r14
  char v10; // di
  __int64 result; // rax
  unsigned __int64 v12; // rbx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rcx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  _BYTE v18[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+60h] [rbp-A0h]
  _BYTE v23[176]; // [rsp+70h] [rbp-90h] BYREF

  IsSecureProcessFlush = KiIsSecureProcessFlush(a1, a2);
  _R15D = 0;
  v9 = IsSecureProcessFlush;
  v10 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
  if ( !IsSecureProcessFlush && !v10
    || (KiPrepareFlushParameters(a2, &v21, v18),
        KiPrepareFlushCurrentAffinity(v23),
        LOBYTE(v13) = v18[0],
        LOBYTE(v14) = v9,
        v20 = a1 & 0xFFFFFFFFFFFFF000uLL,
        result = HvlFlushRangeListTb(v21, (unsigned int)v23, v13, v14, v10, 1, (__int64)&v20),
        !(_BYTE)result) )
  {
    result = (unsigned int)(1 << a2);
    if ( (result & 0xA) != 0 )
    {
      if ( KiFlushPcid )
      {
        result = (__int64)KeGetCurrentThread();
        v15 = *(_QWORD *)(result + 184);
        if ( !*(_BYTE *)(v15 + 640) )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v22 = 1LL;
            *((_QWORD *)&v22 + 1) = a1;
            __asm { invpcid r15d, [rsp+150h+var_F0] }
          }
          else
          {
            result = KiSetUserTbFlushPending(v15, v5, v6, v7);
          }
        }
      }
    }
    __invlpg((void *)a1);
  }
  v12 = a1 & 0xFFFFFFFFFFFFF001uLL;
  if ( VmTbFlushEnabled )
  {
    v19 = v12 | 1;
    result = VmFlushTb(1LL, &v19, a2);
  }
  if ( ExTbFlushActive )
  {
    v19 = v12 | 1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    ExFlushTb(1LL, &v19, a2);
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
