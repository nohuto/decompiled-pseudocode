/*
 * XREFs of KeFlushSingleCurrentTb @ 0x140166B0C
 * Callers:
 *     MiDbgReleaseAddress @ 0x1402D0D9C (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402D0EBC (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1402D1268 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x1402D1348 (MiDbgWriteCheck.c)
 *     MmReadProcessPageTables @ 0x1402D1D88 (MmReadProcessPageTables.c)
 *     MmInvalidateDumpAddresses @ 0x14059C708 (MmInvalidateDumpAddresses.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x1400C5B48 (KiIsSecureProcessFlush.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetUserTbFlushPending @ 0x1401C5850 (KiSetUserTbFlushPending.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlFlushRangeListTb @ 0x14028D6F0 (HvlFlushRangeListTb.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1402AA578 (KiPrepareFlushCurrentAffinity.c)
 *     KiPrepareFlushParameters @ 0x1402AA5E8 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x140328E2C (VmFlushTb.c)
 *     ExFlushTb @ 0x14033BFE8 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushSingleCurrentTb(unsigned __int64 a1, unsigned int a2)
{
  bool IsSecureProcessFlush; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  bool v8; // r14
  char v9; // di
  __int64 result; // rax
  unsigned __int64 v11; // rbx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  _BYTE v17[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+60h] [rbp-A0h]
  _BYTE v22[176]; // [rsp+70h] [rbp-90h] BYREF

  memset(v22, 0, 0xA8uLL);
  IsSecureProcessFlush = KiIsSecureProcessFlush(a1, a2);
  _R15D = 0;
  v8 = IsSecureProcessFlush;
  v9 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
  if ( !IsSecureProcessFlush && !v9
    || (KiPrepareFlushParameters(a2, &v20, v17),
        KiPrepareFlushCurrentAffinity(v22),
        LOBYTE(v12) = v17[0],
        LOBYTE(v13) = v8,
        v19 = a1 & 0xFFFFFFFFFFFFF000uLL,
        result = HvlFlushRangeListTb(v20, (unsigned int)v22, v12, v13, v9, 1, (__int64)&v19),
        !(_BYTE)result) )
  {
    result = (unsigned int)(1 << a2);
    if ( (result & 0xA) != 0 )
    {
      if ( KiFlushPcid )
      {
        result = (__int64)KeGetCurrentThread();
        v14 = *(_QWORD *)(result + 184);
        if ( !*(_BYTE *)(v14 + 648) )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v21 = 1LL;
            *((_QWORD *)&v21 + 1) = a1;
            __asm { invpcid r15d, [rsp+150h+var_F0] }
          }
          else
          {
            result = KiSetUserTbFlushPending(v14, v5, v6);
          }
        }
      }
    }
    __invlpg((void *)a1);
  }
  v11 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( VmTbFlushEnabled )
  {
    v18 = v11;
    result = VmFlushTb(1LL, &v18, a2);
  }
  if ( ExTbFlushActive )
  {
    v18 = v11;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    ExFlushTb(1LL, &v18, a2);
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
