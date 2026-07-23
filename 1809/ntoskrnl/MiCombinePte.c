/*
 * XREFs of MiCombinePte @ 0x140088F00
 * Callers:
 *     <none>
 * Callees:
 *     MiGetUltraMapping @ 0x14003A740 (MiGetUltraMapping.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiCombineCandidate @ 0x1400B2610 (MiCombineCandidate.c)
 *     MiPerformCombineScan @ 0x140101DE0 (MiPerformCombineScan.c)
 *     MiComputeHash64 @ 0x140101E70 (MiComputeHash64.c)
 *     MiMapArbitraryPage @ 0x14010EA90 (MiMapArbitraryPage.c)
 *     MiReleaseArbitraryPage @ 0x140111CF0 (MiReleaseArbitraryPage.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiCombineWorkingSetTail @ 0x140122790 (MiCombineWorkingSetTail.c)
 *     MiHashIsCommon @ 0x1402CC1A8 (MiHashIsCommon.c)
 */

__int64 __fastcall MiCombinePte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v7; // r14
  _QWORD *v8; // r12
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // r11
  unsigned __int64 v14; // r15
  __int64 v15; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r9
  unsigned __int64 v20; // rdi
  unsigned __int64 Address; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  _QWORD *v24; // r11
  unsigned __int64 v25; // rax
  _QWORD *v26; // rdi
  __int64 v27; // rbx
  int v28; // ebp
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // [rsp+70h] [rbp+8h]
  __int64 v37; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v3 + 104) )
    return 3LL;
  v7 = *(_QWORD *)(a1 + 168);
  v8 = *(_QWORD **)(v7 + 24);
  v9 = *v8;
  if ( (*(_BYTE *)(v3 + 184) & 7) == 0 )
  {
    v10 = v3 - 1280;
    if ( (*(_DWORD *)(v3 - 508) & 0xC00u) < 0xC00 )
      return 3LL;
    v11 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v10 + 1454));
    if ( *(_DWORD *)(v11 + 1144) )
    {
      if ( *(_QWORD *)(v11 + 1264) == v10 )
        return 3LL;
    }
  }
  if ( a3 >= 1 )
    return 0LL;
  v12 = *(_QWORD *)a2;
  if ( MiPteInShadowRange(a2)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v12 & 1) != 0
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
  {
    v31 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v31 )
    {
      v32 = *(_QWORD *)(v31 + 8 * ((a2 >> 3) & 0x1FF));
      v33 = v12 | 0x20;
      if ( (v32 & 0x20) == 0 )
        v33 = v12;
      v12 = v33;
      if ( (v32 & 0x42) != 0 )
        v12 = v33 | 0x42;
    }
  }
  v37 = v12;
  v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v37) >> 12) & 0xFFFFFFFFFLL;
  v15 = 48 * v14 - 0x58000000000LL;
  if ( (*(_QWORD *)(v15 + 40) & 0x200000000000000LL) != 0 )
    return 0LL;
  v17 = v8[1];
  if ( v17 && *(_DWORD *)(v17 + 4) || (*(_DWORD *)(v13 + 1744) & 1) != 0 )
    return 4LL;
  if ( !(unsigned int)MiCombineCandidate(v9, 0LL, 48 * v14 - 0x58000000000LL) )
    return 0LL;
  v20 = (__int64)(a2 << 25) >> 16;
  if ( (*(_DWORD *)v7 & 8) != 0 )
  {
    Address = MiLocateAddress(v20);
    if ( !Address || (*(_DWORD *)(Address + 48) & 7) != 2 )
      return 0LL;
  }
  ++*(_QWORD *)(v8[3] + 16LL);
  v36 = *(_QWORD *)(v7 + 32) + 32LL * *(_QWORD *)(v7 + 8);
  if ( (v12 & 0x20) != 0 )
  {
    if ( (*(_DWORD *)v7 & 4) != 0 && ((*(_QWORD *)(v20 & 0xFFFFFFFFFFFFF000uLL) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      return 0LL;
    v22 = MiComputeHash64(v20 & 0xFFFFFFFFFFFFF000uLL, v18, 0LL, v19);
    *v24 = v22;
LABEL_20:
    if ( (*(_DWORD *)v7 & 4) == 0 )
      goto LABEL_21;
    if ( (unsigned int)MiHashIsCommon(v8, *v24) )
    {
      v23 = 0LL;
LABEL_21:
      v24[1] = v14;
      v24[2] = v23;
      v24[3] = v23;
      if ( ++*(_QWORD *)(v7 + 8) == *(_QWORD *)(v7 + 16) )
        return MiCombineWorkingSetTail(a1);
      return 0LL;
    }
    return 0LL;
  }
  v25 = (unsigned __int64)MiGetUltraMapping(v8 + 25, 3u, 1LL, 0) >> 9;
  v26 = (_QWORD *)((v25 & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (v25 & 0x7FFFFFFFF8LL) == 0x98000000000LL )
    return 0LL;
  v27 = v8[2];
  *(_QWORD *)(v27 + 72) = v26;
  *(_QWORD *)(v27 + 64) = v15;
  if ( (unsigned int)MiMapArbitraryPage(v9, v27, 0, 0, 0) )
  {
    v28 = MiPerformCombineScan(v8, v27, v36);
    MiReleaseArbitraryPage(v27);
    if ( MiPteInShadowRange((unsigned __int64)v26) )
    {
      if ( (unsigned int)MiPteHasShadow(v30, v29) )
      {
        if ( !HIBYTE(word_14043B26C) && (v29 & 1) != 0 )
          v29 |= 0x8000000000000000uLL;
        *v26 = v29;
        MiWritePteShadow(v26);
        goto LABEL_27;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v29 & 1) != 0 )
      {
        v29 |= 0x8000000000000000uLL;
      }
    }
    *v26 = v29;
LABEL_27:
    if ( v28 != 1 )
      return 0LL;
    v24 = (_QWORD *)v36;
    v23 = 0LL;
    goto LABEL_20;
  }
  if ( MiPteInShadowRange((unsigned __int64)v26) )
  {
    if ( (unsigned int)MiPteHasShadow(v35, v34) )
    {
      if ( !HIBYTE(word_14043B26C) && (v34 & 1) != 0 )
        v34 |= 0x8000000000000000uLL;
      *v26 = v34;
      MiWritePteShadow(v26);
      return 0LL;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
      && (v34 & 1) != 0 )
    {
      v34 |= 0x8000000000000000uLL;
    }
  }
  *v26 = v34;
  return 0LL;
}
