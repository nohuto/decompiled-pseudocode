/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x140088044
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiDeleteSystemPagableVm @ 0x140079F10 (MiDeleteSystemPagableVm.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiRemoveMappedPtes @ 0x1400855D0 (MiRemoveMappedPtes.c)
 *     MiTrimPte @ 0x140087BD0 (MiTrimPte.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB40C (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x1400EBF44 (MiStealPage.c)
 *     MiEmptyWorkingSetHelper @ 0x14013FFE8 (MiEmptyWorkingSetHelper.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402AB6BC (MiDeprioritizeVirtualAddresses.c)
 *     MiTrimPteWorker @ 0x1402B3D34 (MiTrimPteWorker.c)
 * Callees:
 *     MiLogPageAccess @ 0x14006BDB0 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x1400880B0 (MiGetVaAge.c)
 */

void __fastcall MI_WSLE_LOG_ACCESS(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // rdx

  v2 = a2;
  v3 = a1;
  v4 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( (v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL
     || (unsigned __int8)MiGetVaAge(0xFFFFF68000000000uLL, v4) != 7)
    && (*v2 & 0x20) != 0 )
  {
    MiLogPageAccess(v3, (unsigned __int64)v2);
  }
}
