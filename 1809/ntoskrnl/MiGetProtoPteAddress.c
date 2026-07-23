/*
 * XREFs of MiGetProtoPteAddress @ 0x140042770
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x14003FFE0 (MiGetPageProtection.c)
 *     MiResolveSharedZeroFault @ 0x1400429B0 (MiResolveSharedZeroFault.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiIsCfgBitMapPageShared @ 0x140076140 (MiIsCfgBitMapPageShared.c)
 *     MiSplitPrivatePage @ 0x140083B60 (MiSplitPrivatePage.c)
 *     MiSetReadOnlyOnSectionView @ 0x140085AF0 (MiSetReadOnlyOnSectionView.c)
 *     MiWalkVaRange @ 0x140093BD0 (MiWalkVaRange.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     MiCheckUserVirtualAddress @ 0x140098DE0 (MiCheckUserVirtualAddress.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     MiCountSharedPages @ 0x14010ACF0 (MiCountSharedPages.c)
 *     MiPteNeedsCommitCharge @ 0x14010B164 (MiPteNeedsCommitCharge.c)
 *     MiExpandSharedZeroCluster @ 0x14010F790 (MiExpandSharedZeroCluster.c)
 *     MiResolvePageFileFault @ 0x140154C44 (MiResolvePageFileFault.c)
 *     MiUpControlAreaRefs @ 0x1402A3640 (MiUpControlAreaRefs.c)
 *     MiComputeImageVadCommitCharge @ 0x1402A4060 (MiComputeImageVadCommitCharge.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402A5DA8 (MiUpdatePrivateDemandZeroView.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402B9B84 (MiPrepareImagePagesForHotPatch.c)
 *     MiGetLargeVadMappingIndex @ 0x1402BC328 (MiGetLargeVadMappingIndex.c)
 *     MiGetClusterPage @ 0x1402C69AC (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x1402C6E04 (MiIdealClusterPage.c)
 *     MmProtectVirtualMemory @ 0x1405EEFD0 (MmProtectVirtualMemory.c)
 *     MiCfgMarkValidEntries @ 0x1405F731C (MiCfgMarkValidEntries.c)
 *     MiIsRangeFullyCommitted @ 0x140619858 (MiIsRangeFullyCommitted.c)
 *     MiCommitPagefileBackedSection @ 0x14061EFB0 (MiCommitPagefileBackedSection.c)
 *     MmFlushVirtualMemory @ 0x1406B7EBC (MmFlushVirtualMemory.c)
 *     MiFillMapFileInfo @ 0x14084D3B8 (MiFillMapFileInfo.c)
 *     MiCloneLargeFileOnlyVad @ 0x140853B74 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x14085F728 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     MiLocateSubsectionNode @ 0x140077B30 (MiLocateSubsectionNode.c)
 *     MiSetVadFlags @ 0x1400879D0 (MiSetVadFlags.c)
 *     MiGetSharedProtos @ 0x140177274 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiGetProtoPteAddress(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rtt
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  __int64 SubsectionNode; // rax
  unsigned int SessionId; // eax

  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( (*(_DWORD *)(a1 + 48) & 7) != 2 || (*(_DWORD *)(**(_QWORD **)(a1 + 72) + 56LL) & 0x4000000) == 0 )
  {
    v8 = a2 - v7;
    if ( (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 3 >= v8 && (a3 & 4) == 0 )
    {
      *a4 = *(_QWORD *)(a1 + 72);
      return *(_QWORD *)(a1 + 80) + 8 * v8;
    }
  }
  v9 = 0LL;
  *a4 = 0LL;
  v10 = *(_QWORD **)(a1 + 72);
  v11 = a2 + ((__int64)(*(_QWORD *)(a1 + 80) - v10[1]) >> 3) - v7;
  v12 = *v10;
  if ( !*(_QWORD *)(*v10 + 64LL) )
  {
    if ( (*(_DWORD *)(v12 + 56) & 0x1000) != 0 || *((_DWORD *)v10 + 12) >= 0x40000000u )
    {
      v16 = 0x100000LL;
      if ( *((_DWORD *)v10 + 12) >= 0x40000000u )
        v16 = 0x200000LL;
      v17 = v16 >> 3;
      v19 = v11;
      v18 = v11 / v17;
      v11 %= v17;
      v20 = (unsigned int)(v19 / v17);
      v21 = v20 + 1;
      if ( !v11 )
        v21 = v20;
      if ( v21 > *(unsigned int *)(v12 + 96) )
        return 0LL;
      v10 += 11 * v18;
      if ( v11 >= *((unsigned int *)v10 + 11) )
        return 0LL;
    }
    else if ( v11 >= *((unsigned int *)v10 + 11) )
    {
      return 0LL;
    }
    if ( v10 )
    {
      *a4 = v10;
      v14 = v10[1];
      if ( !v14 )
        return 0LL;
      goto LABEL_14;
    }
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 48) & 0x10000000) == 0 )
  {
    v13 = *((unsigned int *)v10 + 11);
    if ( v11 >= v13 )
    {
      do
      {
        v10 = (_QWORD *)v10[2];
        v11 -= v13;
        ++v9;
        if ( !v10 )
          break;
        v13 = *((unsigned int *)v10 + 11);
      }
      while ( v11 >= v13 );
      if ( v9 > 0x10 && (*(_DWORD *)(v12 + 56) & 0x20) == 0 )
        MiSetVadFlags(a1, 2LL, 1LL);
    }
    if ( v10 && v11 < *((_DWORD *)v10 + 11) - (*((_DWORD *)v10 + 13) & 0x3FFFFFFFu) )
      goto LABEL_13;
    return 0LL;
  }
  v22 = ((*((unsigned int *)v10 + 9) | ((unsigned __int64)((_WORD)v10[4] & 0xFFC0) << 26)) + v11) << 12;
  SubsectionNode = MiLocateSubsectionNode(*v10, v22, (a3 & 1) != 0);
  v10 = (_QWORD *)SubsectionNode;
  if ( !SubsectionNode )
    return 0LL;
  v11 = (v22 >> 12)
      - (*(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26));
LABEL_13:
  v14 = v10[1];
  *a4 = v10;
LABEL_14:
  if ( (*((_BYTE *)v10 + 34) & 2) != 0 && (*(_DWORD *)(v12 + 56) & 0x4000000) != 0 && (a3 & 2) == 0 )
  {
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    v14 = *(_QWORD *)(MiGetSharedProtos(v12, SessionId, v10) + 72);
  }
  return v14 + 8 * v11;
}
