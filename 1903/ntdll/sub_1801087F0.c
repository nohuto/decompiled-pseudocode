/*
 * XREFs of sub_1801087F0 @ 0x1801087F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A18F0 @ 0x1800A18F0 (sub_1800A18F0.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_1801087F0(char *a1, int a2, __int16 *a3, unsigned int a4, int a5, int *a6)
{
  __int16 *v6; // rsi
  char *v7; // r14
  char *v8; // rbp
  int v9; // edi
  __int16 v10; // bx
  unsigned __int64 v11; // r13
  __int16 i; // cx
  __int64 v13; // r15
  __int64 v14; // r9
  _BYTE *v15; // r8
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  size_t v18; // r8
  char *v19; // r15
  __int64 v20; // rcx
  int *v21; // rax
  int v23; // [rsp+70h] [rbp+8h]
  int v24; // [rsp+78h] [rbp+10h] BYREF
  int v25; // [rsp+88h] [rbp+20h] BYREF

  v23 = (int)a1;
  v6 = a3;
  v7 = &a1[a2];
  v24 = 0;
  v8 = a1;
  v9 = 0;
  v10 = *a3;
  v11 = (unsigned __int64)a3 + a4;
  for ( i = *a3; ; i = v10 )
  {
    v20 = (i & 0xFFFu) + 3;
    if ( (unsigned __int64)v6 + (unsigned int)v20 > v11 )
    {
LABEL_22:
      v21 = a6;
LABEL_23:
      v9 = -1073741246;
      *v21 = (int)v6;
      return (unsigned int)v9;
    }
    v13 = (unsigned int)v20;
    if ( v10 >= 0 )
    {
      if ( (unsigned int)v20 < 2uLL )
        goto LABEL_22;
      v17 = v20 - 2;
      v24 = v17;
      if ( &v8[v17] > v7 )
      {
        v17 = (_DWORD)v7 - (_DWORD)v8;
        v24 = (_DWORD)v7 - (_DWORD)v8;
      }
      if ( (unsigned __int64)v6 + v17 + 2 > v11 )
        goto LABEL_22;
      memmove(v8, v6 + 1, v17);
      goto LABEL_13;
    }
    v14 = (__int64)v6 + v20;
    v15 = v6 + 1;
    if ( !a5 )
    {
      v9 = sub_1800A18F0(v8, v7, v15, v14, &v24);
      if ( v9 < 0 )
      {
LABEL_7:
        *a6 = v24;
        return (unsigned int)v9;
      }
LABEL_13:
      v16 = v24;
      goto LABEL_14;
    }
    v9 = sub_1800A18F0(v8, v7, v15, v14, &v25);
    if ( v9 < 0 )
      goto LABEL_7;
    v16 = a5;
    v24 = a5;
LABEL_14:
    v6 = (__int16 *)((char *)v6 + v13);
    v8 += v16;
    if ( v8 == v7 )
      break;
    if ( (unsigned __int64)v6 > v11 - 2 )
      break;
    v10 = *v6;
    if ( !*v6 )
      break;
    if ( v16 < 0x1000 )
    {
      v18 = (int)(4096 - v16);
      v19 = &v8[v18];
      if ( &v8[v18] >= v7 )
        break;
      memset(v8, 0, v18);
      v8 = v19;
    }
  }
  v21 = a6;
  if ( (unsigned __int64)v6 > v11 )
    goto LABEL_23;
  *a6 = (_DWORD)v8 - v23;
  return (unsigned int)v9;
}
