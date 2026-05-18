/*
 * XREFs of sub_1800BC360 @ 0x1800BC360
 * Callers:
 *     sub_1800BBF4C @ 0x1800BBF4C (sub_1800BBF4C.c)
 * Callees:
 *     sub_180020AB0 @ 0x180020AB0 (sub_180020AB0.c)
 *     sub_1800675A8 @ 0x1800675A8 (sub_1800675A8.c)
 *     sub_1800BBCC0 @ 0x1800BBCC0 (sub_1800BBCC0.c)
 *     memcmp @ 0x180125AA8 (memcmp.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800BC360(_QWORD *a1, __int64 a2, char a3, size_t *a4, _QWORD *a5)
{
  _QWORD *v7; // rax
  __int64 *v8; // rdx
  __int64 *v9; // r13
  __int64 v10; // rbx
  char v11; // si
  const void *v12; // rdx
  const void *v13; // rcx
  size_t v14; // r15
  size_t v15; // r8
  int v16; // esi
  const void *v17; // rdx
  const void *v18; // rcx
  size_t v19; // r15
  size_t v20; // rsi
  size_t v21; // r8
  int v22; // eax
  __int64 *v23; // rbx
  __int64 result; // rax
  const void *v25; // rdx
  const void *v26; // rcx
  size_t v27; // r15
  size_t v28; // r8
  int v29; // eax
  _QWORD *v30; // r15
  char v31; // [rsp+30h] [rbp-68h]
  __int64 *v32; // [rsp+38h] [rbp-60h] BYREF
  _QWORD *v33; // [rsp+40h] [rbp-58h]
  _QWORD *v34; // [rsp+48h] [rbp-50h] BYREF
  _QWORD *v35; // [rsp+50h] [rbp-48h]
  _QWORD *v36; // [rsp+58h] [rbp-40h]
  __int64 v37; // [rsp+60h] [rbp-38h]

  v37 = -2LL;
  v31 = a3;
  v34 = a1;
  v36 = a1;
  v7 = a5;
  v33 = a5;
  v35 = a5;
  v8 = (__int64 *)*a1;
  v32 = v8;
  v9 = v8;
  v10 = v8[1];
  v11 = 1;
  if ( !*(_BYTE *)(v10 + 25) )
  {
    do
    {
      v9 = (__int64 *)v10;
      if ( a3 )
      {
        v12 = a4;
        if ( a4[3] >= 0x10 )
          v12 = (const void *)*a4;
        v13 = (const void *)(v10 + 32);
        if ( *(_QWORD *)(v10 + 56) >= 0x10uLL )
          v13 = *(const void **)(v10 + 32);
        v14 = *(_QWORD *)(v10 + 48);
        v15 = v14;
        if ( a4[2] < v14 )
          v15 = a4[2];
        v16 = memcmp(v13, v12, v15);
        if ( !v16 )
        {
          if ( v14 >= a4[2] )
            v16 = v14 > a4[2];
          else
            v16 = -1;
        }
        v11 = v16 >= 0;
      }
      else
      {
        v17 = (const void *)(v10 + 32);
        if ( *(_QWORD *)(v10 + 56) >= 0x10uLL )
          v17 = *(const void **)(v10 + 32);
        v18 = a4;
        if ( a4[3] >= 0x10 )
          v18 = (const void *)*a4;
        v19 = *(_QWORD *)(v10 + 48);
        v20 = a4[2];
        v21 = v20;
        if ( v19 < v20 )
          v21 = *(_QWORD *)(v10 + 48);
        v22 = memcmp(v18, v17, v21);
        if ( !v22 )
        {
          if ( v20 >= v19 )
            v22 = v20 > v19;
          else
            v22 = -1;
        }
        v11 = v22 < 0;
      }
      if ( v11 )
        v10 = *(_QWORD *)v10;
      else
        v10 = *(_QWORD *)(v10 + 16);
      a3 = v31;
    }
    while ( !*(_BYTE *)(v10 + 25) );
    v7 = v33;
    a1 = v34;
    v8 = v32;
  }
  try
  {
    v23 = v9;
    v32 = v9;
    if ( v11 )
    {
      if ( v9 == (__int64 *)*v8 )
      {
        *(_QWORD *)a2 = *sub_1800BBCC0(a1, &v34, 1, v9, (int)a4, v7);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      sub_180020AB0(&v32);
      v23 = v32;
    }
    v25 = a4;
    if ( a4[3] >= 0x10 )
      v25 = (const void *)*a4;
    v26 = v23 + 4;
    if ( (unsigned __int64)v23[7] >= 0x10 )
      v26 = (const void *)v23[4];
    v27 = v23[6];
    v28 = v27;
    if ( a4[2] < v27 )
      v28 = a4[2];
    v29 = memcmp(v26, v25, v28);
    if ( !v29 )
    {
      if ( v27 >= a4[2] )
        v29 = v27 > a4[2];
      else
        v29 = -1;
    }
    v30 = v33;
    if ( v29 >= 0 )
    {
      sub_1800675A8(v33 + 4, 0);
      j_j__o_free(v30);
      *(_QWORD *)a2 = v23;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *sub_1800BBCC0(v34, &v32, v11, v9, (int)a4, v33);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    sub_1800CAF38(v36, v35);
    throw;
  }
  return result;
}
