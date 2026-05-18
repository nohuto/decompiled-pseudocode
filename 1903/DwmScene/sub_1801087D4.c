/*
 * XREFs of sub_1801087D4 @ 0x1801087D4
 * Callers:
 *     sub_1801097AC @ 0x1801097AC (sub_1801097AC.c)
 * Callees:
 *     sub_1801082BC @ 0x1801082BC (sub_1801082BC.c)
 *     memcmp @ 0x180125AA8 (memcmp.c)
 */

__int64 __fastcall sub_1801087D4(_QWORD *a1, __int64 a2, char a3, size_t *a4, _QWORD *a5)
{
  _QWORD *v8; // r13
  __int64 *v9; // rbx
  unsigned int v10; // eax
  const void *v11; // rdx
  const void *v12; // rcx
  size_t v13; // r15
  size_t v14; // r14
  size_t v15; // r8
  unsigned int v16; // eax
  const void *v17; // rdx
  const void *v18; // rcx
  size_t v19; // r15
  size_t v20; // r14
  size_t v21; // r8
  unsigned int v22; // eax
  __int64 result; // rax
  char v24; // [rsp+30h] [rbp-58h]
  _QWORD *v25; // [rsp+38h] [rbp-50h] BYREF
  _QWORD *v26; // [rsp+40h] [rbp-48h]
  _QWORD *v27; // [rsp+48h] [rbp-40h]
  __int64 v28; // [rsp+50h] [rbp-38h]

  v28 = -2LL;
  v24 = a3;
  v27 = a1;
  v25 = a5;
  v26 = a5;
  v8 = (_QWORD *)*a1;
  v9 = *(__int64 **)(*a1 + 8LL);
  LOBYTE(v10) = 1;
  while ( !*((_BYTE *)v9 + 25) )
  {
    v8 = v9;
    if ( a3 )
    {
      v11 = a4;
      if ( a4[3] >= 0x10 )
        v11 = (const void *)*a4;
      v12 = v9 + 4;
      if ( (unsigned __int64)v9[7] >= 0x10 )
        v12 = (const void *)v9[4];
      v13 = a4[2];
      v14 = v9[6];
      v15 = v14;
      if ( v13 < v14 )
        v15 = a4[2];
      v16 = memcmp(v12, v11, v15);
      if ( !v16 )
      {
        if ( v14 >= v13 )
          v16 = v14 > v13;
        else
          v16 = -1;
      }
      v10 = v16 >> 31;
      LOBYTE(v10) = v10 ^ 1;
    }
    else
    {
      v17 = v9 + 4;
      if ( (unsigned __int64)v9[7] >= 0x10 )
        v17 = (const void *)v9[4];
      v18 = a4;
      if ( a4[3] >= 0x10 )
        v18 = (const void *)*a4;
      v19 = v9[6];
      v20 = a4[2];
      v21 = v20;
      if ( v19 < v20 )
        v21 = v9[6];
      v22 = memcmp(v18, v17, v21);
      if ( !v22 )
      {
        if ( v20 >= v19 )
          v22 = v20 > v19;
        else
          v22 = -1;
      }
      v10 = v22 >> 31;
    }
    if ( (_BYTE)v10 )
      v9 = (__int64 *)*v9;
    else
      v9 = (__int64 *)v9[2];
    a3 = v24;
  }
  try
  {
    *(_QWORD *)a2 = *sub_1801082BC(a1, &v25, v10, v8, (int)a4, v25);
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    sub_18010A354(v27, v26);
    throw;
  }
  return result;
}
