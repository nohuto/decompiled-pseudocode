/*
 * XREFs of MiOutSwapWorkingSetPte @ 0x1400C51D0
 * Callers:
 *     <none>
 * Callees:
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiReservePageFileSpaceForPage @ 0x14002CE60 (MiReservePageFileSpaceForPage.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiUpdatePageFileHighInPte @ 0x1400DBC30 (MiUpdatePageFileHighInPte.c)
 *     MiLockTransitionLeafPage @ 0x1400DD76C (MiLockTransitionLeafPage.c)
 *     MiCapturePageFileInfoInline @ 0x14011B568 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

__int64 __fastcall MiOutSwapWorkingSetPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r14
  __int64 v5; // r12
  int v6; // ebp
  char v7; // bl
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  ULONG_PTR v10; // r13
  __int64 v11; // r11
  __int64 v12; // rbx
  unsigned __int64 v14; // rax
  _QWORD *v15; // r12
  __int64 v16; // rcx
  unsigned __int64 *v17; // r9
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int8 v21; // dl
  __int64 v22; // r10
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  __int16 v26; // r8
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // r8
  unsigned __int64 *v30; // r9
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 *v33; // r10
  __int64 v34; // r15
  __int64 v35; // r9
  __int64 *v36; // r8
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned __int64 v42; // r11
  __int64 v43; // r9
  unsigned __int64 v44; // rdx
  __int64 updated; // rax
  __int64 v46; // r8
  bool v47; // zf
  char v48; // r8
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v50; // rax
  char v51; // r8^7
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rax
  unsigned __int64 *v55; // [rsp+20h] [rbp-48h]
  __int64 v56; // [rsp+70h] [rbp+8h]
  int v57; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v58; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 160);
  v5 = *(_QWORD *)(v3 + 16);
  if ( a3 )
    return 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v56 = *(_QWORD *)(v3 + 24);
  while ( 1 )
  {
    v11 = MI_READ_PTE_LOCK_FREE(a2);
    v58 = v11;
    if ( (v11 & 1) != 0 )
      break;
    if ( (v11 & 0x400) != 0 )
      goto LABEL_7;
    if ( (v11 & 0x800) == 0 )
    {
      if ( (v11 & 2) == 0 )
        goto LABEL_7;
      v58 = v11 & 0xFFFFFFFFFFFFFFFDuLL;
      if ( !MiPteInShadowRange(a2) )
        goto LABEL_70;
      if ( (unsigned int)MiPteHasShadow(v41) )
      {
        v6 = 1;
        if ( !HIBYTE(word_140465BEC) && (v48 & 1) != 0 )
          goto LABEL_91;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
             && (v48 & 1) != 0 )
      {
LABEL_91:
        v40 |= 0x8000000000000000uLL;
      }
LABEL_70:
      *(_QWORD *)a2 = v40;
      v8 = v42;
      if ( v6 )
        MiWritePteShadow(a2, v40);
      goto LABEL_7;
    }
    v37 = MiLockTransitionLeafPage(a2);
    v10 = v37;
    if ( v37 )
    {
      v38 = *(_BYTE *)(v37 + 34);
      v7 = 1;
      if ( (v38 & 0x28) == 0 )
      {
        v39 = *(_QWORD *)(v10 + 16);
        if ( (v39 & 2) != 0 )
        {
          v8 = *(_QWORD *)(v10 + 16);
          if ( *(_WORD *)(v10 + 32) || (v38 & 7) != 3 )
          {
            *(_QWORD *)(v10 + 16) = v39 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          else
          {
            MiUnlinkPageFromList(v10);
            *(_QWORD *)(v10 + 16) &= ~2uLL;
            MiInsertPageInList(v10, 8u);
          }
        }
      }
      goto LABEL_7;
    }
  }
  v14 = MI_READ_PTE_LOCK_FREE(&v58);
  if ( (*(_QWORD *)(48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    goto LABEL_7;
  v10 = 48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
  {
    v15 = *(_QWORD **)(v3 + 8);
    if ( !v15 )
      goto LABEL_7;
    goto LABEL_83;
  }
  if ( (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) != a2 )
    goto LABEL_7;
  v57 = 0;
  v7 = 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v57);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v10 + 34) & 8) != 0 )
    goto LABEL_7;
  v16 = *(_QWORD *)(v10 + 16);
  v17 = (unsigned __int64 *)(v10 + 16);
  if ( (v16 & 2) != 0 )
  {
    v8 = *(_QWORD *)(v10 + 16);
    *v17 = v16 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  if ( *(_WORD *)(v10 + 32) != 1 )
    goto LABEL_7;
  v18 = 0xFFFFF68000000000uLL;
  if ( (*(_BYTE *)(v5 + 184) & 7) == 0 )
  {
    v19 = ((((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
    v20 = *(_QWORD *)v19;
    if ( v19 >= 0xFFFFF6FB7DBED000uLL
      && v19 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v20 & 1) != 0
      && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v50 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v19 >> 3) & 0x1FF));
        v51 = HIBYTE(*(_QWORD *)v19);
        if ( (v50 & 0x20) == 0 )
          v51 = HIBYTE(v20);
        HIBYTE(v20) = v51;
        if ( (v50 & 0x42) != 0 )
          HIBYTE(v20) = v51;
      }
    }
    if ( (HIBYTE(v20) & 0xF) == 8 )
      goto LABEL_7;
  }
  v21 = *(_BYTE *)(v10 + 34);
  if ( (v58 & 0x42) == 0 )
  {
    if ( (v21 & 0x10) != 0 )
      goto LABEL_29;
    if ( (*(_DWORD *)v17 & 4) == 0 )
      goto LABEL_7;
    v7 = 3;
  }
  if ( (v21 & 0x10) == 0 )
  {
    if ( (((*v17 & 0x400) == 0) & (unsigned __int8)~(v21 >> 3)) != 0 )
    {
      v52 = MiCapturePageFileInfoInline(v10 + 16, 1LL);
      v21 = *(_BYTE *)(v10 + 34);
      v17 = (unsigned __int64 *)(v10 + 16);
      v9 = v52;
      v18 = 0xFFFFF68000000000uLL;
    }
    *(_BYTE *)(v10 + 34) = v21 | 0x10;
    v21 = *(_BYTE *)(v10 + 34);
  }
LABEL_29:
  if ( v21 >> 6 != 1 )
  {
    if ( v21 >> 6 == 2 )
    {
      v7 |= 4u;
    }
    else if ( v21 < 0x40u )
    {
      v7 |= 8u;
    }
  }
  v22 = v56;
  if ( *(_DWORD *)(v3 + 32) != -1 )
    goto LABEL_46;
  v23 = *(_QWORD *)(v56 + 8LL * *(unsigned int *)(v56 + 1140) + 7904);
  if ( (*v17 & 0x400) != 0 )
    v24 = -2049LL;
  else
    v24 = -9LL;
  v25 = *v17 & v24;
  if ( (*v17 & 0x400) == 0 )
    v25 &= 0xFFFFFFFFFFFFFFF9uLL;
  if ( v23 )
  {
    v26 = *(_WORD *)(v23 + 204);
    if ( v25 )
    {
      if ( qword_140465B00 )
      {
        if ( (v25 & 0x10) != 0 )
          LODWORD(v25) = v25 & 0xFFFFFFEF;
        else
          LODWORD(v25) = ~(_DWORD)qword_140465B00 & v25;
      }
      v27 = v25 | 0xFFFFFFFF00000000uLL;
      if ( qword_140465B00 )
      {
        if ( (v27 & qword_140465B00) != 0 )
          v27 |= 0x10uLL;
        else
          v27 |= qword_140465B00;
      }
    }
    else
    {
      v27 = MiSwizzleInvalidPte(0xFFFFFFFF00000000uLL);
    }
    v25 = (unsigned __int16)(v27 ^ (v26 << 12)) & 0xF000 ^ v27;
  }
  v58 = v25;
  if ( MiPteInShadowRange((unsigned __int64)v17) )
  {
    if ( (unsigned int)MiPteHasShadow(v28) )
    {
      v54 = v53;
      if ( !HIBYTE(word_140465BEC) && (v53 & 1) != 0 )
        v54 = v53 | 0x8000000000000000uLL;
      *v30 = v54;
      MiWritePteShadow(v30, v54);
      v22 = v56;
      goto LABEL_46;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      *v30 = v53;
      goto LABEL_46;
    }
    if ( (v53 & 1) != 0 )
      v29 |= 0x8000000000000000uLL;
  }
  *v30 = v29;
LABEL_46:
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v31 = *(unsigned int *)(v3 + 32);
  v7 &= ~1u;
  v15 = *(_QWORD **)v3;
  if ( (_DWORD)v31 == -1 )
    goto LABEL_47;
  v43 = 16 * v31 + v3 + 40;
  v55 = (unsigned __int64 *)v43;
  if ( (unsigned int)v31 >= 5 || !*(_DWORD *)(v43 + 8) )
    goto LABEL_7;
  MiReservePageFileSpaceForPage(v22, a2, 128, (_WORD *)v43);
  v44 = *v55;
  if ( qword_140465B00 && (v44 & 0x10) == 0 )
    v44 &= ~qword_140465B00;
  updated = MiUpdatePageFileHighInPte(*v55, HIDWORD(v44) + 1, v55);
  v47 = (*(_DWORD *)(v46 + 8))-- == 1;
  *(_QWORD *)v46 = updated;
  if ( v47 )
    ++*(_DWORD *)(v3 + 32);
  v7 |= 0x10u;
LABEL_83:
  v18 = 0xFFFFF68000000000uLL;
LABEL_47:
  v32 = v15[2];
  if ( v32 < v15[1] )
  {
    v33 = (__int64 *)(*v15 + 16 * v32);
    v34 = (__int64)((a2 << 25) - (v18 << 25)) >> 16;
    if ( !v32 || (v35 = *(v33 - 1), v36 = v33 - 1, v35 + *(v33 - 2) != v34) )
    {
      v35 = 0LL;
      v15[2] = v32 + 1;
      v36 = v33 + 1;
      *v33 = v34;
      v33[1] = 0LL;
    }
    *v36 = v35 + 4096;
    ++v15[3];
    if ( (v7 & 2) != 0 )
      ++*(_QWORD *)(v3 + 136);
    if ( (v7 & 4) != 0 )
    {
      ++*(_QWORD *)(v3 + 120);
    }
    else if ( (v7 & 8) != 0 )
    {
      ++*(_QWORD *)(v3 + 128);
    }
  }
LABEL_7:
  if ( (v7 & 1) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 )
  {
    if ( (v8 & 4) != 0 )
      v8 &= ~4uLL;
    v12 = v56;
    MiReleasePageFileInfo(v56, v8, 0);
  }
  else
  {
    v12 = v56;
  }
  if ( v9 )
    MiReleasePageFileInfo(v12, v9, 0);
  return 0LL;
}
