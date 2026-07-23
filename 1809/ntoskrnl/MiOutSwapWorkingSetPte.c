/*
 * XREFs of MiOutSwapWorkingSetPte @ 0x14003DD60
 * Callers:
 *     <none>
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiReservePageFileSpaceForPage @ 0x1400817F0 (MiReservePageFileSpaceForPage.c)
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
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
  unsigned __int64 v11; // r11
  struct _KEVENT *v12; // r10
  __int64 v14; // r11
  _QWORD *v15; // r12
  __int64 v16; // rcx
  unsigned __int64 *v17; // r9
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int8 v21; // dl
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  __int16 v25; // r8
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 *v30; // r11
  __int64 v31; // r15
  __int64 v32; // r9
  __int64 *v33; // r8
  __int64 v34; // rax
  char v35; // al
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // r11
  char v40; // r8
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  char v46; // r8^7
  __int64 v47; // rax
  int HasShadow; // eax
  unsigned __int64 v49; // rdx
  unsigned __int64 *v50; // r9
  bool v51; // zf
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rdx
  __int64 updated; // rax
  __int64 v55; // r8
  __int64 *v56; // [rsp+20h] [rbp-48h]
  __int64 v57; // [rsp+70h] [rbp+8h]
  int v58; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v59; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v5 = *(_QWORD *)(v3 + 16);
  if ( a3 )
    return 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v57 = *(_QWORD *)(v3 + 24);
  while ( 1 )
  {
    v11 = MI_READ_PTE_LOCK_FREE(a2);
    v59 = v11;
    if ( (v11 & 1) != 0 )
      break;
    if ( (v11 & 0x400) != 0 )
    {
      v12 = (struct _KEVENT *)v57;
      goto LABEL_8;
    }
    if ( (v11 & 0x800) == 0 )
    {
      if ( (v11 & 2) == 0 )
      {
LABEL_7:
        v12 = (struct _KEVENT *)v57;
        goto LABEL_8;
      }
      v59 = v11 & 0xFFFFFFFFFFFFFFFDuLL;
      if ( !MiPteInShadowRange(a2) )
      {
LABEL_79:
        *(_QWORD *)a2 = v37;
        v8 = v39;
        if ( v6 )
          MiWritePteShadow(a2);
        goto LABEL_7;
      }
      if ( (unsigned int)MiPteHasShadow(v38, v37) )
      {
        v6 = 1;
        if ( HIBYTE(word_14043B26C) || (v40 & 1) == 0 )
          goto LABEL_79;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0
             || (v40 & 1) == 0 )
      {
        goto LABEL_79;
      }
      v37 |= 0x8000000000000000uLL;
      goto LABEL_79;
    }
    v34 = MiLockTransitionLeafPage(a2);
    v10 = v34;
    if ( v34 )
    {
      v35 = *(_BYTE *)(v34 + 34);
      v7 = 1;
      if ( (v35 & 0x28) == 0 )
      {
        v36 = *(_QWORD *)(v10 + 16);
        if ( (v36 & 2) != 0 )
        {
          v8 = *(_QWORD *)(v10 + 16);
          if ( *(_WORD *)(v10 + 32) || (v35 & 7) != 3 )
          {
            *(_QWORD *)(v10 + 16) = v36 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          else
          {
            MiUnlinkPageFromList(v10, 0);
            *(_QWORD *)(v10 + 16) &= ~2uLL;
            MiInsertPageInList(v10, 8);
          }
        }
      }
      goto LABEL_7;
    }
  }
  if ( (unsigned __int64)&v59 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v59 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    v41 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v41 )
    {
      v42 = *(_QWORD *)(v41 + 8 * (((unsigned __int64)&v59 >> 3) & 0x1FF));
      v43 = v11 | 0x20;
      if ( (v42 & 0x20) == 0 )
        v43 = v11;
      v11 = v43;
      if ( (v42 & 0x42) != 0 )
        v11 = v43 | 0x42;
    }
  }
  v14 = (v11 >> 12) & 0xFFFFFFFFFLL;
  if ( (*(_QWORD *)(48 * v14 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    goto LABEL_7;
  v10 = 48 * v14 - 0x58000000000LL;
  if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
  {
    v15 = *(_QWORD **)(v3 + 8);
    v12 = (struct _KEVENT *)v57;
    if ( !v15 )
      goto LABEL_8;
    goto LABEL_141;
  }
  if ( (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) != a2 )
    goto LABEL_7;
  v58 = 0;
  v7 = 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v58);
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
      v44 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v44 )
      {
        v45 = *(_QWORD *)(v44 + 8 * ((v19 >> 3) & 0x1FF));
        v46 = HIBYTE(*(_QWORD *)v19);
        if ( (v45 & 0x20) == 0 )
          v46 = HIBYTE(v20);
        HIBYTE(v20) = v46;
        if ( (v45 & 0x42) != 0 )
          HIBYTE(v20) = v46;
      }
    }
    if ( (HIBYTE(v20) & 0xF) == 8 )
      goto LABEL_7;
  }
  if ( (v59 & 0x42) == 0 && (*(_BYTE *)(v10 + 34) & 0x10) == 0 )
  {
    if ( (*(_DWORD *)v17 & 4) == 0 )
      goto LABEL_7;
    v7 = 3;
  }
  v21 = *(_BYTE *)(v10 + 34);
  if ( (v21 & 0x10) == 0 )
  {
    if ( (((*v17 & 0x400) == 0) & (unsigned __int8)~(v21 >> 3)) != 0 )
    {
      v47 = MiCapturePageFileInfoInline(v10 + 16, 1LL);
      v21 = *(_BYTE *)(v10 + 34);
      v17 = (unsigned __int64 *)(v10 + 16);
      v9 = v47;
      v18 = 0xFFFFF68000000000uLL;
    }
    *(_BYTE *)(v10 + 34) = v21 | 0x10;
    v21 = *(_BYTE *)(v10 + 34);
  }
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
  v12 = (struct _KEVENT *)v57;
  if ( *(_DWORD *)(v3 + 32) == -1 )
  {
    v22 = *(_QWORD *)(v57 + 8LL * *(unsigned int *)(v57 + 1140) + 7136);
    if ( (*v17 & 0x400) != 0 )
      v23 = -2049LL;
    else
      v23 = -9LL;
    v24 = *v17 & v23;
    if ( (*v17 & 0x400) == 0 )
      v24 &= 0xFFFFFFFFFFFFFFF9uLL;
    if ( v22 )
    {
      v25 = *(_WORD *)(v22 + 204);
      if ( v24 )
      {
        v22 = qword_14043B180;
        if ( qword_14043B180 )
        {
          if ( (v24 & 0x10) != 0 )
            LODWORD(v24) = v24 & 0xFFFFFFEF;
          else
            LODWORD(v24) = ~(_DWORD)qword_14043B180 & v24;
        }
        v26 = v24 | 0xFFFFFFFF00000000uLL;
        if ( qword_14043B180 )
        {
          if ( (v26 & qword_14043B180) != 0 )
            v26 |= 0x10uLL;
          else
            v26 |= qword_14043B180;
        }
      }
      else
      {
        v26 = MiSwizzleInvalidPte(0xFFFFFFFF00000000uLL);
      }
      v24 = (unsigned __int16)(v26 ^ (v25 << 12)) & 0xF000 ^ v26;
    }
    v59 = v24;
    if ( (unsigned __int64)v17 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v17 > 0xFFFFF6FB7DBED7F8uLL )
    {
      *v17 = v24;
    }
    else
    {
      HasShadow = MiPteHasShadow(v22, v24);
      v51 = HasShadow == 0;
      v52 = v49;
      if ( v51 )
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v49 & 1) != 0 )
        {
          v52 = v49 | 0x8000000000000000uLL;
        }
        *v50 = v52;
      }
      else
      {
        if ( !HIBYTE(word_14043B26C) && (v49 & 1) != 0 )
          v52 = v49 | 0x8000000000000000uLL;
        *v50 = v52;
        MiWritePteShadow(v50);
        v12 = (struct _KEVENT *)v57;
      }
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v27 = *(unsigned int *)(v3 + 32);
  v7 &= ~1u;
  v15 = *(_QWORD **)v3;
  if ( (_DWORD)v27 == -1 )
    goto LABEL_48;
  v56 = (__int64 *)(16 * v27 + v3 + 40);
  if ( (unsigned int)v27 < 5 && *(_DWORD *)(16 * v27 + v3 + 40 + 8) )
  {
    MiReservePageFileSpaceForPage(v12, a2, 128LL);
    v53 = *v56;
    if ( qword_14043B180 && (v53 & 0x10) == 0 )
      v53 &= ~qword_14043B180;
    updated = MiUpdatePageFileHighInPte(*v56, HIDWORD(v53) + 1);
    v51 = (*(_DWORD *)(v55 + 8))-- == 1;
    *(_QWORD *)v55 = updated;
    if ( v51 )
      ++*(_DWORD *)(v3 + 32);
    v12 = (struct _KEVENT *)v57;
    v7 |= 0x10u;
LABEL_141:
    v18 = 0xFFFFF68000000000uLL;
LABEL_48:
    v28 = v15[2];
    if ( v28 < v15[1] )
    {
      v29 = v18 << 25;
      v30 = (__int64 *)(*v15 + 16 * v28);
      v31 = (__int64)((a2 << 25) - v29) >> 16;
      if ( !v28 || (v32 = *(v30 - 1), v33 = v30 - 1, v32 + *(v30 - 2) != v31) )
      {
        v32 = 0LL;
        v15[2] = v28 + 1;
        v33 = v30 + 1;
        *v30 = v31;
        v30[1] = 0LL;
      }
      *v33 = v32 + 4096;
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
  }
LABEL_8:
  if ( (v7 & 1) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 )
  {
    if ( (v8 & 4) != 0 )
      v8 &= ~4uLL;
    MiReleasePageFileInfo(v12, v8, 0);
  }
  if ( v9 )
    MiReleasePageFileInfo((struct _KEVENT *)v57, v9, 0);
  return 0LL;
}
