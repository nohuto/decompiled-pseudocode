/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x14005DFB8
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x14002D7F0 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x14005E8F0 (MiRemoveMappedPtes.c)
 *     MiTrimSharedPageFromViews @ 0x1400C10E0 (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiEmptyWorkingSetHelper @ 0x140157348 (MiEmptyWorkingSetHelper.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402C458C (MiDeprioritizeVirtualAddresses.c)
 *     MiTrimPteWorker @ 0x1402C8EF4 (MiTrimPteWorker.c)
 * Callees:
 *     MiLogPageAccess @ 0x14004DAE0 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x14005B0B0 (MiGetVaAge.c)
 */

void __fastcall MI_WSLE_LOG_ACCESS(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // rdx

  v2 = a2;
  v3 = a1;
  v4 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( (v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL || MiGetVaAge(0xFFFFF68000000000uLL, v4) != 7)
    && (*v2 & 0x20) != 0 )
  {
    MiLogPageAccess(v3, (unsigned __int64)v2);
  }
}
