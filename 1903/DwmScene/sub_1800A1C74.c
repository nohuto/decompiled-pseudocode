/*
 * XREFs of sub_1800A1C74 @ 0x1800A1C74
 * Callers:
 *     sub_1800A4330 @ 0x1800A4330 (sub_1800A4330.c)
 * Callees:
 *     sub_180020AB0 @ 0x180020AB0 (sub_180020AB0.c)
 *     sub_1800A0BE8 @ 0x1800A0BE8 (sub_1800A0BE8.c)
 *     memcmp @ 0x180125AA8 (memcmp.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800A1C74(_QWORD *a1, __int64 a2, char a3, const void **a4)
{
  __int64 *v6; // rax
  __int64 *v7; // r13
  __int64 v8; // rbx
  char v9; // r14
  const void *v10; // rdx
  const void *v11; // rcx
  size_t v12; // r12
  size_t v13; // r8
  int v14; // r14d
  const void *v15; // rdx
  const void *v16; // rcx
  size_t v17; // r12
  size_t v18; // r14
  size_t v19; // r8
  int v20; // eax
  __int64 *v21; // rbx
  __int64 result; // rax
  const void *v23; // rdx
  const void *v24; // rcx
  const void *v25; // r13
  size_t v26; // r12
  size_t v27; // r8
  int v28; // eax
  char v29; // [rsp+30h] [rbp-68h]
  __int64 *v30; // [rsp+38h] [rbp-60h] BYREF
  __int64 *v31; // [rsp+40h] [rbp-58h] BYREF
  _QWORD *v32[2]; // [rsp+48h] [rbp-50h] BYREF

  v32[1] = (_QWORD *)-2LL;
  v29 = a3;
  v32[0] = a1;
  v6 = (__int64 *)*a1;
  v30 = v6;
  v7 = v6;
  v31 = v6;
  v8 = v6[1];
  v9 = 1;
  if ( !*(_BYTE *)(v8 + 25) )
  {
    do
    {
      v7 = (__int64 *)v8;
      v31 = (__int64 *)v8;
      if ( a3 )
      {
        v10 = a4;
        if ( (unsigned __int64)a4[3] >= 0x10 )
          v10 = *a4;
        v11 = (const void *)(v8 + 32);
        if ( *(_QWORD *)(v8 + 56) >= 0x10uLL )
          v11 = *(const void **)(v8 + 32);
        v12 = *(_QWORD *)(v8 + 48);
        v13 = v12;
        if ( (unsigned __int64)a4[2] < v12 )
          v13 = (size_t)a4[2];
        v14 = memcmp(v11, v10, v13);
        if ( !v14 )
        {
          if ( v12 >= (unsigned __int64)a4[2] )
            v14 = v12 > (unsigned __int64)a4[2];
          else
            v14 = -1;
        }
        v9 = v14 >= 0;
      }
      else
      {
        v15 = (const void *)(v8 + 32);
        if ( *(_QWORD *)(v8 + 56) >= 0x10uLL )
          v15 = *(const void **)(v8 + 32);
        v16 = a4;
        if ( (unsigned __int64)a4[3] >= 0x10 )
          v16 = *a4;
        v17 = *(_QWORD *)(v8 + 48);
        v18 = (size_t)a4[2];
        v19 = v18;
        if ( v17 < v18 )
          v19 = *(_QWORD *)(v8 + 48);
        v20 = memcmp(v16, v15, v19);
        if ( !v20 )
        {
          if ( v18 >= v17 )
            v20 = v18 > v17;
          else
            v20 = -1;
        }
        v9 = v20 < 0;
      }
      if ( v9 )
        v8 = *(_QWORD *)v8;
      else
        v8 = *(_QWORD *)(v8 + 16);
      a3 = v29;
    }
    while ( !*(_BYTE *)(v8 + 25) );
    v6 = v30;
    a1 = v32[0];
  }
  try
  {
    v21 = v7;
    v30 = v7;
    if ( v9 )
    {
      if ( v7 == (__int64 *)*v6 )
      {
        *(_QWORD *)a2 = *sub_1800A0BE8(a1, v32, 1, v7, (__int64)a4);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      sub_180020AB0(&v30);
      v21 = v30;
    }
    v23 = a4;
    if ( (unsigned __int64)a4[3] >= 0x10 )
      v23 = *a4;
    v24 = v21 + 4;
    if ( (unsigned __int64)v21[7] >= 0x10 )
      v24 = (const void *)v21[4];
    v25 = a4[2];
    v26 = v21[6];
    v27 = v26;
    if ( (unsigned __int64)v25 < v26 )
      v27 = (size_t)a4[2];
    v28 = memcmp(v24, v23, v27);
    if ( !v28 )
    {
      if ( v26 >= (unsigned __int64)v25 )
        v28 = v26 > (unsigned __int64)v25;
      else
        v28 = -1;
    }
    if ( v28 >= 0 )
    {
      *(_QWORD *)a2 = v21;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *sub_1800A0BE8(v32[0], &v31, v9, v31, (__int64)a4);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    throw;
  }
  return result;
}
