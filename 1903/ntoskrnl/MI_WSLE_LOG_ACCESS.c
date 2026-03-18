/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x14005DF18
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x14002D400 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x14005E850 (MiRemoveMappedPtes.c)
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiTrimSharedPageFromViews @ 0x1400E1260 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x140124AE4 (MmProtectPool.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 *     MiEmptyWorkingSetHelper @ 0x140156CA8 (MiEmptyWorkingSetHelper.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402C482C (MiDeprioritizeVirtualAddresses.c)
 *     MiTrimPteWorker @ 0x1402C9194 (MiTrimPteWorker.c)
 * Callees:
 *     MiLogPageAccess @ 0x14004DA40 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x14005B010 (MiGetVaAge.c)
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
