/*
 * XREFs of CmpAddSubKeyToList @ 0x1405AFCF4
 * Callers:
 *     CmpAddSubKeyEx @ 0x1405AFA60 (CmpAddSubKeyEx.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140805204 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x1408057F8 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpAddToLeaf @ 0x1405AFEC0 (CmpAddToLeaf.c)
 *     CmpCopyCompressedName @ 0x1405B0298 (CmpCopyCompressedName.c)
 *     CmpSelectLeaf @ 0x140701300 (CmpSelectLeaf.c)
 */

char __fastcall CmpAddSubKeyToList(ULONG_PTR BugCheckParameter2, unsigned int *a2, unsigned int a3)
{
  __int64 (__fastcall *v5)(ULONG_PTR, _QWORD, int *); // rax
  unsigned int *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rsi
  char v9; // di
  __int16 v10; // cx
  __int64 (__fastcall *v11)(_QWORD, _QWORD, __int64); // rax
  unsigned int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned int v15; // r13d
  _WORD *v16; // rax
  unsigned int v17; // eax
  _DWORD v19[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int *v20; // [rsp+38h] [rbp-30h] BYREF
  _WORD *v21; // [rsp+40h] [rbp-28h]
  __int16 v22; // [rsp+48h] [rbp-20h]
  __int16 v23; // [rsp+4Ah] [rbp-1Eh]
  __int64 v24; // [rsp+50h] [rbp-18h]
  char v25; // [rsp+B0h] [rbp+48h]
  int v27; // [rsp+C8h] [rbp+60h] BYREF
  int v28; // [rsp+CCh] [rbp+64h]

  v19[1] = 0;
  v19[0] = -1;
  v27 = -1;
  v28 = 0;
  v5 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8);
  v20 = 0LL;
  v24 = 0LL;
  v6 = 0LL;
  v22 = 0;
  v7 = v5(BugCheckParameter2, a3, &v27);
  v8 = v7;
  if ( !v7 )
    return 0;
  v9 = 1;
  v10 = *(_WORD *)(v7 + 72);
  if ( (*(_BYTE *)(v7 + 2) & 0x20) != 0 )
  {
    v11 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24);
    v12 = (unsigned __int16)(2 * v10);
    v22 = 2 * v10;
    v23 = 2 * v10;
    v13 = v11((unsigned __int16)(2 * v10), 0LL, 540560707LL);
    v24 = v13;
    v14 = v13;
    if ( !v13 )
    {
      v9 = 0;
LABEL_14:
      if ( v8 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
      return v9;
    }
    v25 = 1;
    CmpCopyCompressedName(v13, v12, v8 + 76, *(unsigned __int16 *)(v8 + 72));
  }
  else
  {
    v25 = 0;
    LOWORD(v12) = *(_WORD *)(v7 + 72);
    v14 = v7 + 76;
    v22 = v12;
    v24 = v7 + 76;
    v23 = v10;
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
  v15 = *a2;
  v8 = 0LL;
  v16 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                   BugCheckParameter2,
                   v15,
                   v19);
  v21 = v16;
  if ( !v16 )
    goto LABEL_22;
  if ( *v16 == 26994 )
  {
    v15 = CmpSelectLeaf(BugCheckParameter2, (__int64)&v20);
    if ( v15 == -1 )
      goto LABEL_22;
    v6 = v20;
  }
  v17 = CmpAddToLeaf(BugCheckParameter2, v15);
  if ( v17 == -1 )
  {
LABEL_22:
    v9 = 0;
    goto LABEL_10;
  }
  if ( v6 )
    *v6 = v17;
  else
    *a2 = v17;
LABEL_10:
  if ( v25 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v14, (unsigned __int16)v12);
  if ( v21 )
  {
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
    goto LABEL_14;
  }
  return v9;
}
