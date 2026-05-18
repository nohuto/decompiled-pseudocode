/*
 * XREFs of sub_1800BBBD4 @ 0x1800BBBD4
 * Callers:
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 * Callees:
 *     sub_1800BBB68 @ 0x1800BBB68 (sub_1800BBB68.c)
 *     sub_1800CAEB4 @ 0x1800CAEB4 (sub_1800CAEB4.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800BBBD4(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rsi
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 *v13; // r12
  __int64 *v14; // rdi
  char *v15; // rax
  unsigned __int64 *v16; // rdx
  unsigned __int64 v17; // r10
  signed __int64 v18; // rdx
  unsigned __int16 v19; // cx
  int v20; // eax
  __int64 result; // rax
  __int64 *v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v35[2]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v36; // [rsp+38h] [rbp-50h] BYREF

  v35[1] = -2LL;
  v5 = a3[2];
  v6 = (unsigned __int64)a3;
  if ( a3[3] >= 8 )
    v6 = *a3;
  v7 = 0xCBF29CE484222325uLL;
  v8 = 2 * v5;
  v9 = 0LL;
  if ( v6 > 2 * v5 + v6 )
    v8 = 0LL;
  if ( v8 )
  {
    do
    {
      v7 = 0x100000001B3LL * (*(unsigned __int8 *)(v9 + v6) ^ (unsigned __int64)v7);
      ++v9;
    }
    while ( v9 != v8 );
  }
  v10 = v7 & a1[6];
  v11 = (__int64 *)a1[1];
  v12 = a1[3];
  v13 = *(__int64 **)(v12 + 16 * v10);
  if ( v13 == v11 )
    v14 = (__int64 *)a1[1];
  else
    v14 = **(__int64 ***)(v12 + 16 * v10 + 8);
  while ( v14 != v13 )
  {
    v14 = (__int64 *)v14[1];
    v15 = (char *)(v14 + 2);
    if ( (unsigned __int64)v14[5] >= 8 )
      v15 = (char *)v14[2];
    v16 = a3;
    if ( a3[3] >= 8 )
      v16 = (unsigned __int64 *)*a3;
    if ( v5 == v14[4] )
    {
      v17 = a3[2];
      if ( v5 )
      {
        v18 = (char *)v16 - v15;
        while ( 1 )
        {
          v19 = *(_WORD *)&v15[v18];
          if ( v19 != *(_WORD *)v15 )
            break;
          v15 += 2;
          if ( !--v17 )
            goto LABEL_20;
        }
        v20 = v19 < *(_WORD *)v15 ? -1 : 1;
      }
      else
      {
LABEL_20:
        v20 = 0;
      }
      if ( !v20 )
      {
        *(_QWORD *)a2 = v14;
        *(_BYTE *)(a2 + 8) = 0;
        result = a2;
        goto LABEL_39;
      }
    }
  }
  sub_1800BBB68((__int64)(a1 + 1), *v11, (__int64)a3);
  v22 = (__int64 *)a1[1];
  v23 = *v22;
  v35[0] = v23;
  v24 = *(_QWORD *)v23;
  if ( v14 != *(__int64 **)v23 )
  {
    **(_QWORD **)(v23 + 8) = v24;
    **(_QWORD **)(v24 + 8) = v14;
    *(_QWORD *)v14[1] = v23;
    v25 = v14[1];
    v14[1] = *(_QWORD *)(v24 + 8);
    *(_QWORD *)(v24 + 8) = *(_QWORD *)(v23 + 8);
    *(_QWORD *)(v23 + 8) = v25;
    v22 = (__int64 *)a1[1];
  }
  v26 = 2 * v10;
  v27 = a1[3];
  if ( *(__int64 **)(v27 + 8 * v26) == v22 )
  {
    *(_QWORD *)(v27 + 8 * v26) = v23;
    v28 = a1[3];
    *(_QWORD *)(v28 + 8 * v26 + 8) = v23;
  }
  else if ( *(__int64 **)(v27 + 8 * v26) == v14 )
  {
    *(_QWORD *)(v27 + 8 * v26) = v23;
  }
  else
  {
    v29 = *(__int64 **)(v27 + 8 * v26 + 8);
    v30 = *v29;
    *(_QWORD *)(v27 + 8 * v26 + 8) = *v29;
    if ( v30 != v23 )
    {
      v31 = a1[3];
      v32 = *(_QWORD *)(v31 + 8 * v26 + 8);
      *(_QWORD *)(v31 + 8 * v26 + 8) = *(_QWORD *)(v32 + 8);
    }
  }
  try
  {
    sub_1800CAEB4(a1);
    *(_QWORD *)a2 = v23;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    v33 = sub_18008D568((__int64)a1, v35, v35[0]);
    sub_1800CB4B0(a1, &v36, *v33);
    throw;
  }
LABEL_39:
  try
  {
  }
  catch ( ... )
  {
    throw;
  }
  return result;
}
