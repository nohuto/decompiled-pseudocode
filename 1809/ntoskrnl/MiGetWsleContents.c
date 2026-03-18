/*
 * XREFs of MiGetWsleContents @ 0x140085F40
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiDecommitPages @ 0x140068950 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x140069700 (MiDeleteVa.c)
 *     MiDemoteCombinedPte @ 0x14006C200 (MiDemoteCombinedPte.c)
 *     MiProtectPrivateMemory @ 0x140070DC0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A40 (MiMoveDirtyBitsToPfns.c)
 *     MmUnmapViewInSystemCache @ 0x140078710 (MmUnmapViewInSystemCache.c)
 *     MiTerminateWsle @ 0x14007ACA0 (MiTerminateWsle.c)
 *     MiCrcStillIntact @ 0x140082C54 (MiCrcStillIntact.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     MiAppendWsleCluster @ 0x1400859FC (MiAppendWsleCluster.c)
 *     MiSetReadOnlyOnSectionView @ 0x140085B00 (MiSetReadOnlyOnSectionView.c)
 *     MiLockCode @ 0x1400975A0 (MiLockCode.c)
 *     MiSetPagingOfDriver @ 0x1400DADDC (MiSetPagingOfDriver.c)
 *     MiSetWsleProtection @ 0x1400DB144 (MiSetWsleProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB3F0 (MiMakeDriverPagesPrivate.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB3EC (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x1400EBF24 (MiStealPage.c)
 *     MiConvertAndFlushWsleVas @ 0x1400EEBC0 (MiConvertAndFlushWsleVas.c)
 *     MiGetPfnProtection @ 0x14011FD70 (MiGetPfnProtection.c)
 *     MiCountSystemImageCommitment @ 0x14017341C (MiCountSystemImageCommitment.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402AB5BC (MiDeprioritizeVirtualAddresses.c)
 *     MiProcessVmAccessedInfo @ 0x1402B353C (MiProcessVmAccessedInfo.c)
 *     MiBuildForkPte @ 0x1402C7AF0 (MiBuildForkPte.c)
 *     MmFreeLoaderBlock @ 0x1409C5164 (MmFreeLoaderBlock.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetWsleContents(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax

  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL
    && v2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v5 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v5 )
    {
      v6 = v3 | 0x20;
      v7 = *(_QWORD *)(v5 + 8 * ((v2 >> 3) & 0x1FF));
      if ( (v7 & 0x20) == 0 )
        v6 = v3;
      v3 = v6;
      if ( (v7 & 0x42) != 0 )
        v3 = v6 | 0x42;
    }
  }
  result = v3 >> 60;
  LOBYTE(result) = HIBYTE(v3) & 0xF | (16 * ((v3 >> 60) & 7));
  return result;
}
