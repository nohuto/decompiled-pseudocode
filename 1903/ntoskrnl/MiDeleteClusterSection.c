/*
 * XREFs of MiDeleteClusterSection @ 0x1400D8E50
 * Callers:
 *     MiDeleteSubsectionPages @ 0x1400DC990 (MiDeleteSubsectionPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x14002EE30 (MiInsertLargePageInNodeList.c)
 *     MiAbortCombineScan @ 0x1400B8A28 (MiAbortCombineScan.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiClearPfnImageVerified @ 0x1400DBB6C (MiClearPfnImageVerified.c)
 *     MiTryLockLeafPage @ 0x1400DC7AC (MiTryLockLeafPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011CE00 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiReleasePageFileSpace @ 0x1401248E4 (MiReleasePageFileSpace.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

_BOOL8 __fastcall MiDeleteClusterSection(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned __int64 v4; // rbp
  unsigned int v5; // r9d
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  ULONG_PTR v9; // rsi
  __int64 v10; // rdx
  int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r13
  unsigned __int64 v15; // r11
  ULONG_PTR v16; // r15
  __int64 v17; // r13
  unsigned __int64 v18; // r10
  _QWORD *v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rcx
  ULONG_PTR v25; // rdi
  _QWORD *v26; // rbx
  ULONG_PTR v28; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+8h] BYREF
  __int64 v30; // [rsp+78h] [rbp+10h]

  v2 = 0;
  v4 = 0LL;
  v5 = 0;
  v30 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  do
  {
    v6 = MI_READ_PTE_LOCK_FREE(a2 + 8LL * v5);
    v7 = v6;
    if ( !v6 || (v6 & 0x800) == 0 )
      return 0LL;
    if ( qword_140465B00 )
    {
      if ( (v6 & 0x10) != 0 )
        v7 = v6 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v7 = ~qword_140465B00 & v6;
    }
    v8 = (v7 >> 12) & 0xFFFFFFFFFLL;
    if ( (*(_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
      return 0LL;
    v9 = 48 * v8 - 0x58000000000LL;
    BugCheckParameter2 = v9;
    if ( (unsigned int)MiIsPfnFromSlabAllocation(v9) || v11 && v8 != v12 )
      return 0LL;
    v5 = v11 + 1;
  }
  while ( v5 < 0x10 );
  v14 = 3 * v13;
  v15 = 0xFFFFFA8000000000uLL;
  v16 = v8 - 15;
  v17 = 16 * v14 - 0x58000000000LL;
  v18 = 0x8000000000000000uLL;
  v19 = (_QWORD *)(a2 + 120);
  while ( 1 )
  {
    if ( v8 == v16 )
    {
      v20 = 48 * v16 - 0x58000000000LL;
      BugCheckParameter2 = v20;
    }
    else
    {
      MiTryLockLeafPage(v19, v10, &BugCheckParameter2);
      v20 = BugCheckParameter2;
      if ( !BugCheckParameter2 )
        goto LABEL_32;
      if ( BugCheckParameter2 != v9 )
        goto LABEL_57;
    }
    if ( (_QWORD *)(v18 | *(_QWORD *)(v20 + 8)) != v19 )
    {
      v28 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v19);
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v19, v28, *(_QWORD *)(v20 + 8));
    }
    if ( (*(_BYTE *)(v20 + 34) & 7) == 6 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        (__int64)(v20 - v15) / 48,
        *(_BYTE *)(v20 + 34) & 7,
        *(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    if ( *(_WORD *)(v20 + 32) || (*(_BYTE *)(v20 + 35) & 0x40) != 0 || (unsigned int)MiIsPfnFromSlabAllocation(v20) )
      break;
    MiUnlinkPageFromList(v20, 0);
    if ( ((*(_QWORD *)(v20 + 40) >> 54) & 7) == 3 )
      MiClearPfnImageVerified(v20);
    MiReleasePageFileSpace(v30, *(_QWORD *)(v20 + 16), 1LL);
    v21 = *(_QWORD *)(v20 + 16);
    if ( (v21 & 4) != 0 )
    {
      v21 &= ~4uLL;
      *(_QWORD *)(v20 + 16) = v21;
    }
    if ( (v21 & 2) != 0 )
      *(_QWORD *)(v20 + 16) = v21 & 0xFFFFFFFFFFFFFFFDuLL;
    *(_BYTE *)(v20 + 35) &= 0xF8u;
    *(_QWORD *)(v20 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    v22 = *(_QWORD *)(v20 + 40);
    if ( (*(_BYTE *)(v20 + 34) & 0xC0) != 0x40 )
    {
      MiAbortCombineScan(v20);
      *(_BYTE *)(v20 + 34) = *(_BYTE *)(v20 + 34) & 0x3F | 0x40;
      v22 = *(_QWORD *)(v20 + 40);
    }
    v23 = *(_BYTE *)(v20 + 34);
    *(_QWORD *)(v20 + 40) = v22 & 0xFDFFFFFFFFFFFFFFuLL;
    *(_BYTE *)(v20 + 34) = v23 & 0xC7;
    *(_BYTE *)(v20 + 35) &= ~0x20u;
    *(_BYTE *)(v20 + 34) &= ~0x10u;
    *(_QWORD *)(v20 + 40) = *(_QWORD *)(v20 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFCLL;
    *(_BYTE *)(v20 + 34) = *(_BYTE *)(v20 + 34) & 0xF8 | 1;
    *(_QWORD *)(v20 + 8) = 0LL;
    *(_QWORD *)(v20 + 24) &= 0x8000000000000000uLL;
    *(_QWORD *)(v20 + 16) = 0LL;
    if ( MiPteInShadowRange((unsigned __int64)v19) )
    {
      if ( (unsigned int)MiPteHasShadow(v24) )
      {
        if ( !HIBYTE(word_140465BEC) && (v10 & 1) != 0 )
          v10 |= v18;
        *v19 = v10;
        MiWritePteShadow(v19, v10);
        v18 = 0x8000000000000000uLL;
        goto LABEL_31;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v10 & 1) != 0 )
      {
        v10 |= v18;
      }
    }
    *v19 = v10;
LABEL_31:
    ++v4;
    v15 = 0xFFFFFA8000000000uLL;
    --v8;
    v9 -= 48LL;
    --v19;
    if ( v8 < v16 )
      goto LABEL_32;
  }
  if ( v8 == v16 )
    goto LABEL_32;
LABEL_57:
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_32:
  v25 = v16 + 15;
  if ( v4 )
  {
    v26 = (_QWORD *)(48 * (v16 + 15) + v15 + 40);
    do
    {
      if ( v25 == v16 )
        break;
      if ( v4 != 16 )
      {
        *v26 &= 0xFFFFFFF000000000uLL;
        MiInsertPageInFreeOrZeroedList(v25, 2);
      }
      _InterlockedAnd64(v26 - 2, 0x7FFFFFFFFFFFFFFFuLL);
      ++v2;
      --v25;
      v26 -= 6;
    }
    while ( v2 < v4 );
  }
  if ( v4 == 16 )
  {
    MiInsertLargePageInNodeList(v16, 1, 0);
    goto LABEL_40;
  }
  if ( v4 )
  {
LABEL_40:
    MiLockNestedPageAtDpcInline(v17);
    *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) - v4)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return v4 == 16;
}
