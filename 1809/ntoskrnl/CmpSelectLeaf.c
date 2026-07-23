/*
 * XREFs of CmpSelectLeaf @ 0x140701300
 * Callers:
 *     CmpAddSubKeyToList @ 0x1405AFCF4 (CmpAddSubKeyToList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyInRoot @ 0x1405D5F64 (CmpFindSubKeyInRoot.c)
 *     CmpDoCompareKeyName @ 0x1405D6C70 (CmpDoCompareKeyName.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     CmpSplitLeaf @ 0x1408012F0 (CmpSplitLeaf.c)
 */

__int64 __fastcall CmpSelectLeaf(
        ULONG_PTR BugCheckParameter2,
        unsigned int *a2,
        const UNICODE_STRING *a3,
        int a4,
        unsigned int **a5)
{
  ULONG_PTR v7; // rdx
  __int64 v9; // rdi
  unsigned int i; // esi
  unsigned int v11; // r14d
  __int64 v12; // rax
  unsigned int *v13; // r15
  __int64 v15; // rax
  int v16; // eax
  bool v17; // sf
  void (__fastcall *v18)(ULONG_PTR, _DWORD *); // rax
  __int64 (__fastcall *v19)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 (__fastcall *v23)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v24; // rax
  unsigned int v25; // esi
  _DWORD v26[2]; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v27[2]; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v28; // [rsp+88h] [rbp+48h] BYREF
  int v29; // [rsp+98h] [rbp+58h]

  v29 = a4;
  v27[0] = -1;
  v26[0] = -1;
  v27[1] = 0;
  v7 = *a2;
  v26[1] = 0;
  if ( HvpMarkCellDirty(BugCheckParameter2, v7, 0) )
  {
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, *a2, v27);
    if ( v9 )
    {
      for ( i = CmpFindSubKeyInRoot(BugCheckParameter2, v9, (__int64)a3, 0, &v28);
            (i & 0x80000000) == 0;
            i = CmpFindSubKeyInRoot(BugCheckParameter2, v9, (__int64)a3, 0, &v28) )
      {
        v11 = v28;
        if ( v28 == -1 )
        {
          v13 = (unsigned int *)(v9 + 4 * (i + 1LL));
          v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  *v13,
                  v26);
          if ( !v15 )
            break;
          v16 = CmpDoCompareKeyName(BugCheckParameter2, a3, 0LL, *(_DWORD *)(v15 + 4));
          if ( v16 == 2 )
          {
LABEL_29:
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v26);
            break;
          }
          v17 = v16 < 0;
          v18 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16);
          if ( v17 )
          {
            v18(BugCheckParameter2, v26);
            v19 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
            if ( i )
            {
              v20 = i - 1;
              goto LABEL_16;
            }
            v28 = *(_DWORD *)(v9 + 4);
            v11 = v28;
            v22 = v19(BugCheckParameter2, v28, v26);
            if ( !v22 )
              break;
            if ( *(_WORD *)(v22 + 2) < 0x3F5u )
            {
              v13 = (unsigned int *)(v9 + 4);
              goto LABEL_8;
            }
          }
          else
          {
            v18(BugCheckParameter2, v26);
            v23 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
            v28 = *v13;
            v11 = v28;
            v24 = v23(BugCheckParameter2, v28, v26);
            if ( !v24 )
              break;
            if ( *(_WORD *)(v24 + 2) < 0x3F5u )
              goto LABEL_8;
            if ( i < (unsigned int)*(unsigned __int16 *)(v9 + 2) - 1 )
            {
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v26);
              v19 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
              v20 = i + 1;
LABEL_16:
              v13 = (unsigned int *)(v9 + 4 * (v20 + 1));
              v28 = *v13;
              v11 = v28;
              v21 = v19(BugCheckParameter2, v28, v26);
              if ( !v21 )
                break;
              if ( *(_WORD *)(v21 + 2) < 0x3F5u )
                goto LABEL_8;
            }
          }
        }
        else
        {
          v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  v28,
                  v26);
          if ( !v12 )
            break;
          if ( *(_WORD *)(v12 + 2) < 0x3F5u )
          {
            v13 = (unsigned int *)(v9 + 4 * (i + 1LL));
LABEL_8:
            *a5 = v13;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v26);
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
            return v11;
          }
        }
        v25 = CmpSplitLeaf(BugCheckParameter2, *a2);
        if ( v25 == -1 )
          goto LABEL_29;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
        *a2 = v25;
        v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
               BugCheckParameter2,
               v25,
               v27);
        if ( !v9 )
          goto LABEL_29;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v26);
      }
      if ( v9 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
    }
  }
  return 0xFFFFFFFFLL;
}
