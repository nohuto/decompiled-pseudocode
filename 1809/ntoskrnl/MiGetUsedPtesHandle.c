/*
 * XREFs of MiGetUsedPtesHandle @ 0x140098640
 * Callers:
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiProtectPrivateMemory @ 0x140070DB0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiReservePageFileSpaceForPage @ 0x1400817F0 (MiReservePageFileSpaceForPage.c)
 *     MiSplitPrivatePage @ 0x140083B60 (MiSplitPrivatePage.c)
 *     MiEvictPageTableLock @ 0x1400982E0 (MiEvictPageTableLock.c)
 *     MiInPagePageTable @ 0x140098720 (MiInPagePageTable.c)
 *     MiUpdatePageTableUseCount @ 0x14010FC78 (MiUpdatePageTableUseCount.c)
 *     MiInsertPhysicalPteMapping @ 0x14010FF00 (MiInsertPhysicalPteMapping.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402A5DA8 (MiUpdatePrivateDemandZeroView.c)
 *     MiDeleteAwePageTable @ 0x1402B0424 (MiDeleteAwePageTable.c)
 *     MiUpdateAwePageTable @ 0x1402B2338 (MiUpdateAwePageTable.c)
 *     MiCommitHotPatchTable @ 0x1402B9590 (MiCommitHotPatchTable.c)
 *     MiDeleteLargeUserPde @ 0x1402C76B0 (MiDeleteLargeUserPde.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetUsedPtesHandle(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // [rsp+8h] [rbp+8h] BYREF

  v1 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v2 = *(_QWORD *)v1;
  if ( v1 >= 0xFFFFF6FB7DBED000uLL
    && v1 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    v4 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v4 )
    {
      v5 = v2 | 0x20;
      v6 = *(_QWORD *)(v4 + 8 * ((v1 >> 3) & 0x1FF));
      if ( (v6 & 0x20) == 0 )
        v5 = v2;
      v2 = v5;
      if ( (v6 & 0x42) != 0 )
        v2 = v5 | 0x42;
    }
  }
  v10 = v2;
  if ( (unsigned __int64)&v10 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v10 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    v7 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 8 * (((unsigned __int64)&v10 >> 3) & 0x1FF));
      v9 = v2 | 0x20;
      if ( (v8 & 0x20) == 0 )
        v9 = v2;
      v2 = v9;
      if ( (v8 & 0x42) != 0 )
        v2 = v9 | 0x42;
    }
  }
  return 48 * ((v2 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
}
