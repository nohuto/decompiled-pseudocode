/*
 * XREFs of CmpFindSubKeyInRoot @ 0x140652FB0
 * Callers:
 *     CmpWalkOneLevel @ 0x140652490 (CmpWalkOneLevel.c)
 *     CmpRemoveSubKeyFromList @ 0x1406D69DC (CmpRemoveSubKeyFromList.c)
 *     CmpMarkIndexDirty @ 0x1406D8A5C (CmpMarkIndexDirty.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1407122F0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpSelectLeaf @ 0x14071AEFC (CmpSelectLeaf.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CmpCompareInIndex @ 0x1406531F0 (CmpCompareInIndex.c)
 */

__int64 __fastcall CmpFindSubKeyInRoot(__int64 a1, __int64 a2, int a3, unsigned int *a4)
{
  unsigned int v4; // ebp
  unsigned int v5; // r14d
  __int64 v9; // rbx
  unsigned int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // eax
  int v14; // eax
  void (__fastcall *v15)(__int64, int *); // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v21; // rax
  int v22; // eax
  int v23; // [rsp+70h] [rbp+8h] BYREF
  int v24; // [rsp+74h] [rbp+Ch]
  __int64 v25; // [rsp+78h] [rbp+10h]

  v25 = a2;
  v4 = *(unsigned __int16 *)(a2 + 2) - 1;
  v23 = -1;
  v5 = 0;
  v24 = 0;
  while ( 1 )
  {
    v9 = v5 + ((v4 - v5) >> 1);
    v10 = *(_DWORD *)(a2 + 4 * v9 + 4);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v10, &v23);
    v12 = v11;
    if ( !v11 )
      goto LABEL_26;
    v13 = CmpCompareInIndex(a1, a3, (unsigned int)*(unsigned __int16 *)(v11 + 2) - 1, v11, (__int64)a4);
    if ( v13 == 2 )
      goto LABEL_26;
    if ( !v13 )
      goto LABEL_17;
    if ( v13 >= 0 )
    {
      v5 += (v4 - v5) >> 1;
    }
    else
    {
      v14 = CmpCompareInIndex(a1, a3, 0, v12, (__int64)a4);
      if ( v14 == 2 )
        goto LABEL_26;
      if ( v14 >= 0 )
        goto LABEL_17;
      v4 = v5 + ((v4 - v5) >> 1);
    }
    v15 = *(void (__fastcall **)(__int64, int *))(a1 + 16);
    if ( v4 - v5 <= 1 )
      break;
    v15(a1, &v23);
    a2 = v25;
  }
  v15(a1, &v23);
  v16 = v25;
  v10 = *(_DWORD *)(v25 + 4LL * v5 + 4);
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v10, &v23);
  v12 = v17;
  if ( !v17 )
    goto LABEL_26;
  v18 = CmpCompareInIndex(a1, a3, (unsigned int)*(unsigned __int16 *)(v17 + 2) - 1, v17, (__int64)a4);
  if ( v18 == 2 )
    goto LABEL_26;
  if ( v18 )
  {
    if ( v18 >= 0 )
    {
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v23);
      v10 = *(_DWORD *)(v16 + 4LL * v4 + 4);
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v10, &v23);
      v12 = v21;
      if ( v21 )
      {
        v22 = CmpCompareInIndex(a1, a3, (unsigned int)*(unsigned __int16 *)(v21 + 2) - 1, v21, (__int64)a4);
        if ( v22 != 2 )
        {
          LODWORD(v9) = v4;
          if ( v22 <= 0 )
            goto LABEL_17;
          goto LABEL_24;
        }
      }
    }
    else
    {
      v19 = CmpCompareInIndex(a1, a3, 0, v12, (__int64)a4);
      if ( v19 != 2 )
      {
        LODWORD(v9) = v5;
        if ( v19 >= 0 )
          goto LABEL_17;
        goto LABEL_24;
      }
    }
LABEL_26:
    LODWORD(v9) = 0x80000000;
LABEL_24:
    v10 = -1;
    goto LABEL_17;
  }
  LODWORD(v9) = v5;
LABEL_17:
  *a4 = v10;
  if ( v12 )
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v23);
  return (unsigned int)v9;
}
