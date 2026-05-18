/*
 * XREFs of sub_180111D30 @ 0x180111D30
 * Callers:
 *     sub_1801103C0 @ 0x1801103C0 (sub_1801103C0.c)
 * Callees:
 *     memcmp @ 0x180125AA8 (memcmp.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_180111D30(_QWORD *a1, _QWORD *a2, const void **a3)
{
  size_t v4; // r14
  size_t v5; // rdx
  const void **v6; // rdi
  unsigned __int8 *v8; // r8
  __int64 v9; // rax
  unsigned __int8 *v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rcx
  _QWORD *v14; // rbp
  __int64 v15; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rax
  const void *v18; // rdx
  unsigned __int64 v19; // r12
  const void *v20; // rcx
  __int64 v21; // r15
  _QWORD *v22; // rdx
  __int64 v24; // [rsp+20h] [rbp-38h]

  v4 = (size_t)a3[2];
  v5 = (size_t)a3;
  v6 = a3;
  if ( (unsigned __int64)a3[3] >= 0x10 )
    v5 = (size_t)*a3;
  v8 = (unsigned __int8 *)a3[2];
  v9 = 0xCBF29CE484222325uLL;
  v10 = (unsigned __int8 *)v5;
  if ( v5 > v5 + v4 )
    v8 = 0LL;
  if ( v8 )
  {
    do
    {
      v11 = *v10++ ^ (unsigned __int64)v9;
      v9 = 0x100000001B3LL * v11;
    }
    while ( &v10[-v5] != v8 );
  }
  v12 = a1[3];
  v13 = v9 & a1[6];
  v14 = (_QWORD *)a1[1];
  v15 = 2 * v13;
  v24 = 2 * v13;
  v16 = *(_QWORD **)(v12 + 16 * v13);
  while ( 1 )
  {
    if ( *(_QWORD **)(v12 + 8 * v15) == v14 )
      v17 = v14;
    else
      v17 = **(_QWORD ***)(v12 + 8 * v15 + 8);
    if ( v16 == v17 )
    {
      *a2 = v14;
      return a2;
    }
    v18 = v6;
    if ( (unsigned __int64)v6[3] >= 0x10 )
      v18 = *v6;
    v19 = v16[5];
    v20 = v16 + 2;
    if ( v19 >= 0x10 )
      v20 = (const void *)v16[2];
    v21 = v16[4];
    if ( v21 == v4 && !memcmp(v20, v18, v16[4]) )
      break;
    v16 = (_QWORD *)*v16;
    v15 = v24;
  }
  v22 = v16 + 2;
  if ( v19 >= 0x10 )
    v22 = (_QWORD *)*v22;
  if ( (unsigned __int64)v6[3] >= 0x10 )
    v6 = (const void **)*v6;
  if ( v4 != v21 || memcmp(v6, v22, v4) )
    v16 = v14;
  *a2 = v16;
  return a2;
}
