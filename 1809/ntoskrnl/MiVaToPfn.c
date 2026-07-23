/*
 * XREFs of MiVaToPfn @ 0x140098F50
 * Callers:
 *     MiGetPhysicalAddress @ 0x1401211C8 (MiGetPhysicalAddress.c)
 *     MiCheckKernelShadow @ 0x14012B2E8 (MiCheckKernelShadow.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x140161360 (MiInsertNonPagedPoolOnSlist.c)
 *     MiDuplicateCloneLeaf @ 0x1402C9BC8 (MiDuplicateCloneLeaf.c)
 *     MiFreeInitializationCode @ 0x1406C8ABC (MiFreeInitializationCode.c)
 *     MiInitializeShadowPageTable @ 0x14072B5E4 (MiInitializeShadowPageTable.c)
 *     MiScrubNonPagedPool @ 0x140850338 (MiScrubNonPagedPool.c)
 *     MxConsumeLargePageSlush @ 0x1409BE51C (MxConsumeLargePageSlush.c)
 *     MiCheckLargePageOk @ 0x1409D8394 (MiCheckLargePageOk.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFillPteHierarchy @ 0x140099020 (MiFillPteHierarchy.c)
 */

unsigned __int64 __fastcall MiVaToPfn(__int64 a1)
{
  int v1; // r10d
  __int64 v2; // rdx
  unsigned __int64 v3; // r9
  __int64 v4; // rcx
  unsigned __int64 v5; // r9
  int v6; // r10d
  unsigned __int64 v7; // r11
  __int64 v8; // rcx
  unsigned __int64 v9; // r11
  __int16 v10; // ax
  __int64 v11; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  MiFillPteHierarchy(a1, v17);
  v1 = 4;
  v2 = 4LL;
  do
  {
    v3 = *(_QWORD *)&v17[8 * v2-- - 8];
    --v1;
    v4 = *(_QWORD *)v3;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL
      && v3 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v4 & 1) != 0
      && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
    {
      v13 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 8 * ((v3 >> 3) & 0x1FF));
        v15 = v4 | 0x20;
        if ( (v14 & 0x20) == 0 )
          v15 = v4;
        v4 = v15;
        if ( (v14 & 0x42) != 0 )
          v4 = v15 | 0x42;
      }
    }
    v18 = v4;
  }
  while ( v2 && (v4 & 0x80u) == 0LL );
  v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18) >> 12) & 0xFFFFFFFFFLL;
  if ( v6 )
  {
    v8 = 1LL;
    v9 = v7 >> 12;
    do
    {
      v10 = v9;
      v9 >>= 9;
      v11 = v8 * (v10 & 0x1FF);
      v8 <<= 9;
      v5 += v11;
      --v6;
    }
    while ( v6 );
  }
  return v5;
}
