/*
 * XREFs of MiDemoteValidLargePageOneLevel @ 0x140186EF8
 * Callers:
 *     MiPfnRangeIsZero @ 0x14018673C (MiPfnRangeIsZero.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026E50 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiInitializeColorBase @ 0x140091860 (MiInitializeColorBase.c)
 *     MiInitializePfnForOtherProcess @ 0x1400966C4 (MiInitializePfnForOtherProcess.c)
 *     MiGetPageTablePages @ 0x140096860 (MiGetPageTablePages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdateLargePageBitMap @ 0x1400BD2AC (MiUpdateLargePageBitMap.c)
 *     MiPageToNode @ 0x1400C53C4 (MiPageToNode.c)
 *     MiInsertLargeTbFlushEntry @ 0x1400F86C0 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiTransformValidPteInPlace @ 0x140174574 (MiTransformValidPteInPlace.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiDemoteValidLargePageOneLevel(unsigned __int64 a1)
{
  unsigned int v2; // r15d
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int16 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  _QWORD *v8; // rcx
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  int v12; // r8d
  unsigned __int64 v13; // r12
  signed __int64 v14; // rbx
  unsigned __int64 v15; // r11
  __int64 v16; // rdx
  int v17; // r9d
  __int64 *v18; // r11
  int v19; // ecx
  int v20; // r8d
  volatile signed __int32 *v21; // rbx
  __int64 v22; // r13
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  __int64 v26; // rdi
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  __int64 v30; // rcx
  char v31; // r8
  __int64 v32; // r10
  __int64 v33; // [rsp+38h] [rbp-D0h] BYREF
  signed __int64 ValidPte; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *v35; // [rsp+48h] [rbp-C0h] BYREF
  int v36; // [rsp+50h] [rbp-B8h] BYREF
  int v37; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v38; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v39; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v40; // [rsp+68h] [rbp-A0h]
  _QWORD v41[38]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v42[24]; // [rsp+1A8h] [rbp+A0h] BYREF

  memset(v42, 0, 0xB8uLL);
  memset(v41, 0, 0x128uLL);
  v42[3] = 0LL;
  LODWORD(v42[1]) = 20;
  v2 = MI_IS_PHYSICAL_ADDRESS(a1);
  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = 0x200000LL;
  if ( v2 != 1 )
  {
    v30 = v2 - 1;
    do
    {
      v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v4 <<= 9;
      --v30;
    }
    while ( v30 );
  }
  v38 = MI_READ_PTE_LOCK_FREE(v3);
  v5 = v38;
  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v38);
  LODWORD(v41[7]) = 4;
  v7 = (v6 >> 12) & 0xFFFFFFFFFLL;
  v41[4] = &MiSystemPartition;
  MiPageToNode(v7, 1);
  MiInitializeColorBase(a1);
  if ( (int)MiGetPageTablePages((__int64)v41, 1uLL, &v35) < 0 )
    return 0LL;
  v8 = v35;
  *v35 = 0LL;
  v9 = (__int64)(v8 + 0xB000000000LL) / 48;
  ValidPte = MI_READ_PTE_LOCK_FREE(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte);
  v12 = -2147483644;
  v40 = (v10 >> 12) & 0xFFFFFFFFFLL;
  if ( (v5 & 0x100) != 0 && v2 == 1 )
    v12 = -1610612732;
  v13 = (__int64)((v3 << 25) - (v11 << 25)) >> 16;
  ValidPte = MiMakeValidPte(v13, v7, v12);
  v14 = ValidPte;
  v39 = MiMapPageInHyperSpaceWorker(v9, (unsigned __int8 *)&v33, 0x80000000);
  v15 = v39;
  do
  {
    if ( MiPteInShadowRange(v15) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v17 = 1;
        if ( !HIBYTE(word_1404658EC) && (v31 & 1) != 0 )
          v16 |= v32;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v31 & 1) != 0 )
        {
          v16 |= v32;
        }
        v14 = ValidPte;
      }
    }
    *v18 = v16;
    if ( v17 )
      MiWritePteShadow((__int64)v18);
    v15 = (unsigned __int64)(v18 + 1);
    v14 ^= (v14 ^ ((v14 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
    ValidPte = v14;
  }
  while ( (v15 & 0xFFF) != 0 );
  LOBYTE(v16) = v33;
  MiUnmapPageInHyperSpaceWorker(v39, v16, 0x80000000LL);
  v19 = -2080374780;
  if ( v2 == 1 )
    v19 = -2147483644;
  v20 = v19 | 0x20000000;
  if ( (v38 & 0x100) == 0 )
    v20 = v19;
  ValidPte = MiMakeValidPte(v3, v7, v20 | 0x8000000u);
  MiInitializePfnForOtherProcess(v9, v3, v40, 2560);
  v36 = 0;
  v21 = (volatile signed __int32 *)v35;
  while ( _interlockedbittestandset64(v21 + 6, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v36);
    while ( *((__int64 *)v21 + 3) < 0 );
  }
  *((_QWORD *)v21 + 3) ^= (*((_QWORD *)v21 + 3) ^ (*((_QWORD *)v21 + 3) + 512LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v21 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  v22 = v9 & 0xFFFFFFFFFLL;
  ValidPte = (v22 << 12) | ValidPte & 0xFFFF000000000FFFuLL;
  MiTransformValidPteInPlace((volatile signed __int64 *)v3, v3, ValidPte, v2);
  if ( v2 == 3 )
    MiInsertLargeTbFlushEntry((__int64)v42, 3u, v3);
  v25 = 48 * v7 - 0x58000000000LL;
  v26 = 512LL;
  v35 = (_QWORD *)v25;
  do
  {
    v37 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v37);
      while ( *(__int64 *)(v25 + 24) < 0 );
    }
    v27 = v35;
    v28 = 0xFFFFFFF000000000uLL;
    v35[1] = v13;
    v27[5] = v22 | v27[5] & 0xFFFFFFF000000000uLL;
    _InterlockedAnd64(v27 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    v13 += 8LL;
    v25 = (__int64)(v35 + 6);
    v35 += 6;
    --v26;
  }
  while ( v26 );
  if ( v2 == 1 )
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v7, v4 >> 12, 0, 1);
  MiFlushTbList((int *)v42, v28, v23, v24);
  return 1LL;
}
