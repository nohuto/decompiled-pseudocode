/*
 * XREFs of CmpAddToLeaf @ 0x1406C50F8
 * Callers:
 *     CmpAddSubKeyToList @ 0x1406C4F28 (CmpAddSubKeyToList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     HvpMarkCellDirty @ 0x1405D57B0 (HvpMarkCellDirty.c)
 *     HvFreeCell @ 0x140631B28 (HvFreeCell.c)
 *     HvReallocateCell @ 0x140632E5C (HvReallocateCell.c)
 *     CmpCompareInIndex @ 0x1406662F0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1406667C0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpHashUnicodeComponent @ 0x1406C533C (CmpHashUnicodeComponent.c)
 *     CmpGenerateFastLeafHintForUnicodeString @ 0x1406C53B0 (CmpGenerateFastLeafHintForUnicodeString.c)
 */

__int64 __fastcall CmpAddToLeaf(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        unsigned __int16 *a4)
{
  unsigned int v4; // r15d
  _WORD *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // r14d
  _WORD *v9; // rdi
  unsigned int v10; // r13d
  unsigned int v11; // edx
  unsigned int v12; // r12d
  __int64 v13; // r14
  int v14; // eax
  int v15; // ecx
  size_t v16; // r8
  _WORD *v17; // rdx
  _WORD *v18; // rcx
  int FastLeafHintForUnicodeString; // eax
  int v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h] BYREF
  __int64 v23[2]; // [rsp+40h] [rbp-10h] BYREF

  v23[0] = 0xFFFFFFFFLL;
  v4 = BugCheckParameter3;
  if ( !HvpMarkCellDirty(BugCheckParameter2, BugCheckParameter3, 0) )
    return 0xFFFFFFFFLL;
  v6 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  v4,
                  v23);
  v7 = (__int64)v6;
  if ( !v6 )
    return 0xFFFFFFFFLL;
  v8 = -4 - *((_DWORD *)v6 - 1);
  if ( *v6 == 26988 )
  {
    v9 = 0LL;
    v11 = v8 - 4 * (unsigned __int16)v6[1];
    v10 = 4;
  }
  else
  {
    v9 = v6;
    v10 = 8;
    v11 = v8 - 8 * (unsigned __int16)v6[1];
  }
  v12 = v4;
  if ( v11 - 4 < v10 )
  {
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, v23);
    v22 = 0LL;
    if ( (v8 >> 1) + v8 >= v8 + v10 )
      v10 = v8 >> 1;
    v12 = HvReallocateCell(BugCheckParameter2, v4, v8 + v10, 0, &v22, v23);
    if ( v12 == -1 )
      return 0xFFFFFFFFLL;
    v7 = v22;
    if ( v9 )
      v9 = (_WORD *)v22;
  }
  CmpFindSubKeyInLeafWithStatus(BugCheckParameter2, v7, a4, &v21, (int *)&v22);
  v13 = (unsigned int)v22;
  if ( (int)v22 < 0 || v21 != -1 )
  {
LABEL_34:
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, v23);
    if ( v12 != v4 )
      HvFreeCell(BugCheckParameter2, v12);
    return 0xFFFFFFFFLL;
  }
  if ( (_DWORD)v22 != *(unsigned __int16 *)(v7 + 2) )
  {
    v14 = CmpCompareInIndex(BugCheckParameter2, a4, v22, (__int16 *)v7, &v21);
    if ( v14 != 2 )
    {
      if ( v14 > 0 )
        v13 = (unsigned int)(v13 + 1);
      v15 = *(unsigned __int16 *)(v7 + 2);
      if ( (_DWORD)v13 != v15 )
      {
        if ( v9 )
        {
          v16 = 8LL * ((unsigned __int16)v9[1] - (unsigned int)v13);
          v17 = &v9[4 * v13 + 2];
          v18 = &v9[4 * (unsigned int)(v13 + 1) + 2];
        }
        else
        {
          v16 = 4LL * (unsigned int)(v15 - v13);
          v17 = (_WORD *)(v7 + 4 * ((unsigned int)v13 + 1LL));
          v18 = (_WORD *)(v7 + 4 * ((unsigned int)(v13 + 1) + 1LL));
        }
        memmove(v18, v17, v16);
      }
      goto LABEL_16;
    }
    goto LABEL_34;
  }
LABEL_16:
  if ( v9 )
  {
    *(_DWORD *)&v9[4 * v13 + 2] = a3;
    if ( *v9 == 26732 )
      FastLeafHintForUnicodeString = CmpHashUnicodeComponent(a4);
    else
      FastLeafHintForUnicodeString = CmpGenerateFastLeafHintForUnicodeString(a4);
    *(_DWORD *)&v9[4 * v13 + 4] = FastLeafHintForUnicodeString;
  }
  else
  {
    *(_DWORD *)(v7 + 4 * v13 + 4) = a3;
  }
  ++*(_WORD *)(v7 + 2);
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, v23);
  if ( v12 != v4 )
    HvFreeCell(BugCheckParameter2, v4);
  return v12;
}
