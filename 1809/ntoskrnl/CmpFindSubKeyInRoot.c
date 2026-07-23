/*
 * XREFs of CmpFindSubKeyInRoot @ 0x1405D5F64
 * Callers:
 *     CmpMarkIndexDirty @ 0x1405AE40C (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x1405AF780 (CmpRemoveSubKeyFromList.c)
 *     CmpWalkOneLevel @ 0x1405D5560 (CmpWalkOneLevel.c)
 *     CmpSelectLeaf @ 0x140701300 (CmpSelectLeaf.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x14073E2EC (CmpFindSubKeyByNameWithStatus.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpCompareInIndex @ 0x1405D61D0 (CmpCompareInIndex.c)
 */

__int64 __fastcall CmpFindSubKeyInRoot(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int *a5)
{
  unsigned int *v6; // r12
  unsigned int v7; // ebp
  unsigned int v8; // r15d
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r14
  int v14; // eax
  int v15; // eax
  void (__fastcall *v16)(__int64, int *); // rax
  __int64 v17; // rax
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  __int64 v22; // rax
  int v23; // eax
  int v24; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+74h] [rbp+Ch]
  __int64 v26; // [rsp+78h] [rbp+10h]
  __int64 v27; // [rsp+80h] [rbp+18h]

  v27 = a3;
  v26 = a2;
  v24 = -1;
  v6 = a5;
  v7 = *(unsigned __int16 *)(a2 + 2) - 1;
  v8 = 0;
  v25 = 0;
  while ( 1 )
  {
    v10 = v8 + ((v7 - v8) >> 1);
    v11 = *(_DWORD *)(a2 + 4 * v10 + 4);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v11, &v24);
    v13 = v12;
    if ( !v12 )
      goto LABEL_26;
    v14 = CmpCompareInIndex(a1, v27, a4, (unsigned int)*(unsigned __int16 *)(v12 + 2) - 1, v12, (__int64)v6);
    if ( v14 == 2 )
      goto LABEL_26;
    if ( !v14 )
      goto LABEL_17;
    if ( v14 >= 0 )
    {
      v8 += (v7 - v8) >> 1;
    }
    else
    {
      v15 = CmpCompareInIndex(a1, v27, a4, 0, v13, (__int64)v6);
      if ( v15 == 2 )
        goto LABEL_26;
      if ( v15 >= 0 )
        goto LABEL_17;
      v7 = v8 + ((v7 - v8) >> 1);
    }
    v16 = *(void (__fastcall **)(__int64, int *))(a1 + 16);
    if ( v7 - v8 <= 1 )
      break;
    v16(a1, &v24);
    a2 = v26;
  }
  v16(a1, &v24);
  v11 = *(_DWORD *)(v26 + 4LL * v8 + 4);
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v11, &v24);
  v13 = v17;
  if ( !v17 )
    goto LABEL_26;
  v18 = v27;
  v19 = CmpCompareInIndex(a1, v27, a4, (unsigned int)*(unsigned __int16 *)(v17 + 2) - 1, v17, (__int64)v6);
  if ( v19 == 2 )
    goto LABEL_26;
  if ( v19 )
  {
    if ( v19 >= 0 )
    {
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v24);
      v11 = *(_DWORD *)(v26 + 4LL * v7 + 4);
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v11, &v24);
      v13 = v22;
      if ( v22 )
      {
        v23 = CmpCompareInIndex(a1, v18, a4, (unsigned int)*(unsigned __int16 *)(v22 + 2) - 1, v22, (__int64)v6);
        if ( v23 != 2 )
        {
          LODWORD(v10) = v7;
          if ( v23 <= 0 )
            goto LABEL_17;
          goto LABEL_24;
        }
      }
    }
    else
    {
      v20 = CmpCompareInIndex(a1, v18, a4, 0, v13, (__int64)v6);
      if ( v20 != 2 )
      {
        LODWORD(v10) = v8;
        if ( v20 >= 0 )
          goto LABEL_17;
        goto LABEL_24;
      }
    }
LABEL_26:
    LODWORD(v10) = 0x80000000;
LABEL_24:
    v11 = -1;
    goto LABEL_17;
  }
  LODWORD(v10) = v8;
LABEL_17:
  *v6 = v11;
  if ( v13 )
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v24);
  return (unsigned int)v10;
}
