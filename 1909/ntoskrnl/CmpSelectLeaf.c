/*
 * XREFs of CmpSelectLeaf @ 0x14071CCEC
 * Callers:
 *     CmpAddSubKeyToList @ 0x1406C4F28 (CmpAddSubKeyToList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x1405D57B0 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyInRoot @ 0x1406660B0 (CmpFindSubKeyInRoot.c)
 *     CmpDoCompareKeyName @ 0x140667370 (CmpDoCompareKeyName.c)
 *     CmpSplitLeaf @ 0x140838AD8 (CmpSplitLeaf.c)
 */

__int64 __fastcall CmpSelectLeaf(
        ULONG_PTR BugCheckParameter2,
        unsigned int *a2,
        const UNICODE_STRING *a3,
        int a4,
        unsigned int **a5)
{
  ULONG_PTR v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int i; // esi
  unsigned int v12; // r14d
  __int64 v13; // rax
  unsigned int *v14; // r15
  __int64 v16; // rax
  int v17; // eax
  bool v18; // sf
  void (__fastcall *v19)(ULONG_PTR, _DWORD *); // rax
  __int64 (__fastcall *v20)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 (__fastcall *v24)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v25; // rax
  unsigned int v26; // esi
  _DWORD v27[2]; // [rsp+20h] [rbp-10h] BYREF
  _DWORD v28[2]; // [rsp+28h] [rbp-8h] BYREF
  unsigned int v29; // [rsp+78h] [rbp+48h] BYREF
  int v30; // [rsp+88h] [rbp+58h]

  v30 = a4;
  v28[0] = -1;
  v27[0] = -1;
  v28[1] = 0;
  v7 = *a2;
  v27[1] = 0;
  if ( HvpMarkCellDirty(BugCheckParameter2, v7, 0) )
  {
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, *a2, v28);
    v10 = v9;
    if ( v9 )
    {
      for ( i = CmpFindSubKeyInRoot(BugCheckParameter2, v9, (int)a3, &v29);
            (i & 0x80000000) == 0;
            i = CmpFindSubKeyInRoot(BugCheckParameter2, v10, (int)a3, &v29) )
      {
        v12 = v29;
        if ( v29 == -1 )
        {
          v14 = (unsigned int *)(v10 + 4 * (i + 1LL));
          v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  *v14,
                  v27);
          if ( !v16 )
            break;
          v17 = CmpDoCompareKeyName(BugCheckParameter2, a3, *(_DWORD *)(v16 + 4));
          if ( v17 == 2 )
          {
LABEL_29:
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
            break;
          }
          v18 = v17 < 0;
          v19 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16);
          if ( v18 )
          {
            v19(BugCheckParameter2, v27);
            v20 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
            if ( i )
            {
              v21 = i - 1;
              goto LABEL_16;
            }
            v29 = *(_DWORD *)(v10 + 4);
            v12 = v29;
            v23 = v20(BugCheckParameter2, v29, v27);
            if ( !v23 )
              break;
            if ( *(_WORD *)(v23 + 2) < 0x3F5u )
            {
              v14 = (unsigned int *)(v10 + 4);
              goto LABEL_8;
            }
          }
          else
          {
            v19(BugCheckParameter2, v27);
            v24 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
            v29 = *v14;
            v12 = v29;
            v25 = v24(BugCheckParameter2, v29, v27);
            if ( !v25 )
              break;
            if ( *(_WORD *)(v25 + 2) < 0x3F5u )
              goto LABEL_8;
            if ( i < (unsigned int)*(unsigned __int16 *)(v10 + 2) - 1 )
            {
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
              v20 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
              v21 = i + 1;
LABEL_16:
              v14 = (unsigned int *)(v10 + 4 * (v21 + 1));
              v29 = *v14;
              v12 = v29;
              v22 = v20(BugCheckParameter2, v29, v27);
              if ( !v22 )
                break;
              if ( *(_WORD *)(v22 + 2) < 0x3F5u )
                goto LABEL_8;
            }
          }
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  v29,
                  v27);
          if ( !v13 )
            break;
          if ( *(_WORD *)(v13 + 2) < 0x3F5u )
          {
            v14 = (unsigned int *)(v10 + 4 * (i + 1LL));
LABEL_8:
            *a5 = v14;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
            return v12;
          }
        }
        v26 = CmpSplitLeaf(BugCheckParameter2, *a2);
        if ( v26 == -1 )
          goto LABEL_29;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
        *a2 = v26;
        v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v26,
                v28);
        if ( !v10 )
          goto LABEL_29;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
      }
      if ( v10 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
    }
  }
  return 0xFFFFFFFFLL;
}
