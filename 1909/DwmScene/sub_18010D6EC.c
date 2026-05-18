/*
 * XREFs of sub_18010D6EC @ 0x18010D6EC
 * Callers:
 *     sub_18010DB00 @ 0x18010DB00 (sub_18010DB00.c)
 *     sub_180111C38 @ 0x180111C38 (sub_180111C38.c)
 * Callees:
 *     sub_1800676B8 @ 0x1800676B8 (sub_1800676B8.c)
 *     sub_180111C38 @ 0x180111C38 (sub_180111C38.c)
 *     memcmp @ 0x180125BB8 (memcmp.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18010D6EC(_QWORD *a1, __int64 a2, const void **a3, __int64 a4)
{
  size_t v8; // r10
  unsigned __int8 *v9; // rdx
  __int64 v10; // rax
  unsigned __int8 *v11; // r9
  unsigned __int8 *v12; // r8
  _QWORD *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r13
  const void *v16; // rdx
  const void *v17; // rcx
  int v18; // eax
  __int64 result; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v31; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+38h] [rbp-50h] BYREF

  v8 = (size_t)a3[2];
  v9 = (unsigned __int8 *)a3;
  if ( (unsigned __int64)a3[3] >= 0x10 )
    v9 = (unsigned __int8 *)*a3;
  v10 = 0xCBF29CE484222325uLL;
  v11 = v9;
  v12 = (unsigned __int8 *)a3[2];
  if ( v9 > &v9[v8] )
    v12 = 0LL;
  if ( v12 )
  {
    do
      v10 = 0x100000001B3LL * (*v11++ ^ (unsigned __int64)v10);
    while ( (unsigned __int8 *)(v11 - v9) != v12 );
  }
  v13 = (_QWORD *)a1[1];
  v14 = 2 * (v10 & a1[6]);
  v15 = a1[3];
  if ( v13 != *(_QWORD **)(v15 + 16 * (v10 & a1[6])) )
  {
    v13 = **(_QWORD ***)(v15 + 16 * (v10 & a1[6]) + 8);
    while ( v13 != *(_QWORD **)(v15 + 8 * v14) )
    {
      v13 = (_QWORD *)v13[1];
      v16 = v13 + 2;
      if ( v13[5] >= 0x10uLL )
        v16 = (const void *)v13[2];
      v17 = a3;
      if ( (unsigned __int64)a3[3] >= 0x10 )
        v17 = *a3;
      if ( v8 == v13[4] )
      {
        v18 = memcmp(v17, v16, v8);
        v8 = (size_t)a3[2];
        if ( !v18 )
        {
          **(_QWORD **)(a4 + 8) = *(_QWORD *)a4;
          *(_QWORD *)(*(_QWORD *)a4 + 8LL) = *(_QWORD *)(a4 + 8);
          --a1[2];
          sub_1800676B8((__int64 *)(a4 + 16), 0);
          j_j__o_free(a4);
          *(_QWORD *)a2 = v13;
          *(_BYTE *)(a2 + 8) = 0;
          result = a2;
          goto LABEL_32;
        }
      }
    }
  }
  v20 = *(_QWORD *)a4;
  if ( v13 != *(_QWORD **)a4 )
  {
    **(_QWORD **)(a4 + 8) = v20;
    **(_QWORD **)(v20 + 8) = v13;
    *(_QWORD *)v13[1] = a4;
    v21 = v13[1];
    v13[1] = *(_QWORD *)(v20 + 8);
    *(_QWORD *)(v20 + 8) = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v21;
  }
  v22 = a1[3];
  v23 = *(_QWORD **)(v22 + 8 * v14);
  if ( v23 == (_QWORD *)a1[1] )
  {
    *(_QWORD *)(v22 + 8 * v14) = a4;
    v24 = a1[3];
    *(_QWORD *)(v24 + 8 * v14 + 8) = a4;
  }
  else if ( v23 == v13 )
  {
    *(_QWORD *)(v22 + 8 * v14) = a4;
  }
  else
  {
    v25 = *(__int64 **)(v22 + 8 * v14 + 8);
    v26 = *v25;
    *(_QWORD *)(v22 + 8 * v14 + 8) = *v25;
    if ( v26 != a4 )
    {
      v27 = a1[3];
      v28 = *(_QWORD *)(v27 + 8 * v14 + 8);
      *(_QWORD *)(v27 + 8 * v14 + 8) = *(_QWORD *)(v28 + 8);
    }
  }
  try
  {
    sub_180111C38(a1);
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    v29 = sub_18008D568((__int64)a1, &v31, a4);
    sub_18010DA74(a1, &v32, *v29);
    throw;
  }
LABEL_32:
  try
  {
  }
  catch ( ... )
  {
    sub_180111CE8(a1, a4);
    throw;
  }
  return result;
}
