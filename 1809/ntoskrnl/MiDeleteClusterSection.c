/*
 * XREFs of MiDeleteClusterSection @ 0x140081EF0
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140094EC0 (MiDeleteSubsectionPages.c)
 * Callees:
 *     MiInsertLargePageInNodeList @ 0x140028C1C (MiInsertLargePageInNodeList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileSpace @ 0x140082394 (MiReleasePageFileSpace.c)
 *     MiAbortCombineScan @ 0x140082658 (MiAbortCombineScan.c)
 *     MiClearPfnImageVerified @ 0x140082944 (MiClearPfnImageVerified.c)
 *     MiTryLockLeafPage @ 0x1400829FC (MiTryLockLeafPage.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

_BOOL8 __fastcall MiDeleteClusterSection(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned __int64 v4; // r15
  unsigned int v5; // r9d
  __int64 v6; // rax
  int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // r11
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  ULONG_PTR v12; // r14
  __int64 v13; // rbp
  __int64 v14; // r13
  unsigned __int64 v15; // r10
  _QWORD *v16; // rsi
  __int64 v17; // rax
  ULONG_PTR v18; // rdi
  char v19; // dl
  __int64 v20; // rcx
  char v21; // cl
  __int64 v22; // rdx
  char v23; // al
  char v24; // al
  char v25; // cl
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  ULONG_PTR v30; // rdi
  _QWORD *v31; // rbx
  ULONG_PTR v32; // rax
  ULONG_PTR BugCheckParameter4; // r9
  __int64 v34; // [rsp+60h] [rbp+8h]

  v2 = 0;
  v4 = 0LL;
  v5 = 0;
  v34 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  do
  {
    v6 = MI_READ_PTE_LOCK_FREE(a2 + 8LL * v5);
    v10 = v6;
    if ( !v6 || (v6 & 0x800) == 0 )
      return 0LL;
    if ( qword_14043B180 )
    {
      if ( (v6 & 0x10) != 0 )
        v10 = v6 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v10 = ~qword_14043B180 & v6;
    }
    v11 = (v10 >> 12) & 0xFFFFFFFFFLL;
    if ( (*(_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 || v7 && v11 != v8 )
      return 0LL;
    v5 = v7 + 1;
  }
  while ( v5 < 0x10 );
  v12 = v11 - 15;
  v13 = 48 * v11 - 0x58000000000LL;
  v14 = 48 * v9 - 0x58000000000LL;
  v15 = 0x8000000000000000uLL;
  v16 = (_QWORD *)(a2 + 120);
  while ( 1 )
  {
    if ( v11 == v12 )
    {
      v18 = 48 * v12 - 0x58000000000LL;
    }
    else
    {
      v17 = MiTryLockLeafPage(v16, 1LL);
      v18 = v17;
      if ( !v17 )
        goto LABEL_32;
      if ( v17 != v13 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_32;
      }
    }
    if ( (_QWORD *)(v15 | *(_QWORD *)(v18 + 8)) != v16 )
    {
      v32 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v16);
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v16, v32, BugCheckParameter4);
    }
    v19 = *(_BYTE *)(v18 + 34);
    if ( (v19 & 7) == 6 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        (__int64)(v18 + 0x58000000000LL) / 48,
        v19 & 7,
        *(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    if ( *(_WORD *)(v18 + 32) || (*(_BYTE *)(v18 + 35) & 0x40) != 0 )
      break;
    MiUnlinkPageFromList(v18, 0);
    if ( ((*(_QWORD *)(v18 + 40) >> 54) & 7) == 3 )
      MiClearPfnImageVerified(v18);
    MiReleasePageFileSpace(v34, *(_QWORD *)(v18 + 16), 1LL);
    v20 = *(_QWORD *)(v18 + 16);
    if ( (v20 & 4) != 0 )
    {
      v20 &= ~4uLL;
      *(_QWORD *)(v18 + 16) = v20;
    }
    if ( (v20 & 2) != 0 )
      *(_QWORD *)(v18 + 16) = v20 & 0xFFFFFFFFFFFFFFFDuLL;
    v21 = *(_BYTE *)(v18 + 34);
    *(_QWORD *)(v18 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    *(_BYTE *)(v18 + 35) &= 0xF8u;
    v22 = *(_QWORD *)(v18 + 40);
    if ( (v21 & 0xC0) != 0x40 )
    {
      MiAbortCombineScan(v18);
      v22 = *(_QWORD *)(v18 + 40);
      v23 = *(_BYTE *)(v18 + 34) & 0x3F | 0x40;
      *(_BYTE *)(v18 + 34) = v23;
      v21 = v23;
    }
    *(_QWORD *)(v18 + 8) = 0LL;
    *(_QWORD *)(v18 + 16) = 0LL;
    v24 = *(_BYTE *)(v18 + 35);
    *(_QWORD *)(v18 + 24) &= 0x8000000000000000uLL;
    *(_QWORD *)(v18 + 40) = v22 & 0xFDFFFFFFFFFFFFFFuLL;
    *(_BYTE *)(v18 + 34) = v21 & 0xC7;
    v25 = *(_BYTE *)(v18 + 34);
    *(_BYTE *)(v18 + 35) = v24 & 0xDF;
    v25 &= ~0x10u;
    v26 = *(_QWORD *)(v18 + 40);
    *(_BYTE *)(v18 + 34) = v25;
    *(_QWORD *)(v18 + 40) = v26 & 0xFFFFFFF000000000uLL | 0xFFFFFFFFCLL;
    *(_BYTE *)(v18 + 34) = v25 & 0xF8 | 1;
    if ( MiPteInShadowRange((unsigned __int64)v16) )
    {
      if ( (unsigned int)MiPteHasShadow(v28, v27) )
      {
        if ( !HIBYTE(word_14043B26C) && (v27 & 1) != 0 )
          v27 |= v15;
        *v16 = v27;
        MiWritePteShadow(v16);
        v15 = 0x8000000000000000uLL;
        goto LABEL_29;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v27 & 1) != 0 )
      {
        v27 |= v15;
      }
    }
    *v16 = v27;
LABEL_29:
    ++v4;
    --v11;
    v13 -= 48LL;
    --v16;
    if ( v11 < v12 )
      goto LABEL_32;
  }
  if ( v11 != v12 )
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_32:
  v30 = v12 + 15;
  if ( v4 )
  {
    v31 = (_QWORD *)(48 * (v12 + 15) - 0x57FFFFFFFD8LL);
    do
    {
      if ( v30 == v12 )
        break;
      if ( v4 != 16 )
      {
        *v31 &= 0xFFFFFFF000000000uLL;
        MiInsertPageInFreeOrZeroedList(v30, 2);
      }
      _InterlockedAnd64(v31 - 2, 0x7FFFFFFFFFFFFFFFuLL);
      ++v2;
      --v30;
      v31 -= 6;
    }
    while ( v2 < v4 );
  }
  if ( v4 == 16 )
  {
    MiInsertLargePageInNodeList(v12);
    goto LABEL_40;
  }
  if ( v4 )
  {
LABEL_40:
    MiLockNestedPageAtDpcInline(v14);
    *(_QWORD *)(v14 + 24) ^= (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) - v4)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return v4 == 16;
}
