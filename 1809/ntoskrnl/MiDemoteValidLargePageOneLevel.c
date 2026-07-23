/*
 * XREFs of MiDemoteValidLargePageOneLevel @ 0x140184C44
 * Callers:
 *     MiPfnRangeIsZero @ 0x140184794 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiInitializePfnForOtherProcess @ 0x140026C2C (MiInitializePfnForOtherProcess.c)
 *     MiGetPageTablePages @ 0x140026E90 (MiGetPageTablePages.c)
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     MiInitializeColorBaseEx @ 0x140028994 (MiInitializeColorBaseEx.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x140121554 (MiInsertLargeTbFlushEntry.c)
 *     MiTransformValidPteInPlace @ 0x14016A80C (MiTransformValidPteInPlace.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
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
  __int64 v21; // rdx
  __int64 v22; // r8
  volatile signed __int32 *v23; // rbx
  __int64 v24; // r13
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rdi
  _QWORD *v30; // rcx
  __int64 v32; // rcx
  char v33; // r8
  __int64 v34; // r10
  __int64 v35; // [rsp+38h] [rbp-D0h] BYREF
  signed __int64 ValidPte; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *v37; // [rsp+48h] [rbp-C0h] BYREF
  int v38; // [rsp+50h] [rbp-B8h] BYREF
  int v39; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v40; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v41; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v42; // [rsp+68h] [rbp-A0h]
  _QWORD v43[36]; // [rsp+78h] [rbp-90h] BYREF
  int v44; // [rsp+198h] [rbp+90h] BYREF
  __int16 v45; // [rsp+19Ch] [rbp+94h]
  __int64 v46; // [rsp+1A0h] [rbp+98h]
  __int64 v47; // [rsp+1A8h] [rbp+A0h]
  __int64 v48; // [rsp+1B0h] [rbp+A8h]

  memset(v43, 0, sizeof(v43));
  v46 = 20LL;
  v44 = 0;
  v45 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v2 = MI_IS_PHYSICAL_ADDRESS(a1);
  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = 0x200000LL;
  if ( v2 != 1 )
  {
    v32 = v2 - 1;
    do
    {
      v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v4 <<= 9;
      --v32;
    }
    while ( v32 );
  }
  v40 = MI_READ_PTE_LOCK_FREE(v3);
  v5 = v40;
  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v40);
  LODWORD(v43[6]) = 4;
  v7 = (v6 >> 12) & 0xFFFFFFFFFLL;
  v43[3] = &MiSystemPartition;
  MiInitializeColorBaseEx(a1);
  if ( (int)MiGetPageTablePages((__int64)v43, 1uLL, &v37) < 0 )
    return 0LL;
  v8 = v37;
  *v37 = 0LL;
  v9 = (__int64)(v8 + 0xB000000000LL) / 48;
  ValidPte = MI_READ_PTE_LOCK_FREE(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte);
  v12 = -2147483644;
  v42 = (v10 >> 12) & 0xFFFFFFFFFLL;
  if ( (v5 & 0x100) != 0 && v2 == 1 )
    v12 = -1610612732;
  v13 = (__int64)((v3 << 25) - (v11 << 25)) >> 16;
  ValidPte = MiMakeValidPte(v13, v7, v12);
  v14 = ValidPte;
  v41 = MiMapPageInHyperSpaceWorker(v9, (unsigned __int8 *)&v35, 0x80000000);
  v15 = v41;
  do
  {
    if ( MiPteInShadowRange(v15) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v17 = 1;
        if ( !HIBYTE(word_14043B26C) && (v33 & 1) != 0 )
          v16 |= v34;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v33 & 1) != 0 )
        {
          v16 |= v34;
        }
        v14 = ValidPte;
      }
    }
    *v18 = v16;
    if ( v17 )
      MiWritePteShadow((__int64)v18, v16);
    v15 = (unsigned __int64)(v18 + 1);
    v14 ^= (v14 ^ ((v14 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
    ValidPte = v14;
  }
  while ( (v15 & 0xFFF) != 0 );
  MiUnmapPageInHyperSpaceWorker(v41, v35, 0x80000000LL);
  v19 = -2080374780;
  if ( v2 == 1 )
    v19 = -2147483644;
  v20 = v19 | 0x20000000;
  if ( (v40 & 0x100) == 0 )
    v20 = v19;
  ValidPte = MiMakeValidPte(v3, v7, v20 | 0x8000000u);
  MiInitializePfnForOtherProcess(v9, v3, v42, 2560);
  v38 = 0;
  v23 = (volatile signed __int32 *)v37;
  while ( _interlockedbittestandset64(v23 + 6, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v38, v21, v22);
    while ( *((__int64 *)v23 + 3) < 0 );
  }
  *((_QWORD *)v23 + 3) ^= (*((_QWORD *)v23 + 3) ^ (*((_QWORD *)v23 + 3) + 512LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v23 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  v24 = v9 & 0xFFFFFFFFFLL;
  ValidPte = (v24 << 12) | ValidPte & 0xFFFF000000000FFFuLL;
  MiTransformValidPteInPlace((volatile signed __int64 *)v3, v3, ValidPte, v2);
  v27 = 3LL;
  if ( v2 == 3 )
    MiInsertLargeTbFlushEntry((__int64)&v44, 3u, v3);
  v28 = 48 * v7 - 0x58000000000LL;
  v29 = 512LL;
  v37 = (_QWORD *)v28;
  do
  {
    v39 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v39, v27, v25);
      while ( *(__int64 *)(v28 + 24) < 0 );
    }
    v30 = v37;
    v27 = 0xFFFFFFF000000000uLL;
    v37[1] = v13;
    v30[5] = v24 | v30[5] & 0xFFFFFFF000000000uLL;
    _InterlockedAnd64(v30 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    v13 += 8LL;
    v28 = (__int64)(v37 + 6);
    v37 += 6;
    --v29;
  }
  while ( v29 );
  if ( v2 == 1 )
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v7, v4 >> 12, 0, 1);
  MiFlushTbList(&v44, v27, v25, v26);
  return 1LL;
}
