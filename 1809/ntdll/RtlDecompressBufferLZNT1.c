/*
 * XREFs of RtlDecompressBufferLZNT1 @ 0x18010AF70
 * Callers:
 *     <none>
 * Callees:
 *     LZNT1DecompressChunk @ 0x1800A53F0 (LZNT1DecompressChunk.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlDecompressBufferLZNT1(char *a1, int a2, __int16 *a3, unsigned int a4, int a5, int *a6)
{
  __int16 *v6; // rsi
  char *v7; // r15
  int v8; // edi
  char *v9; // rbp
  __int16 v10; // bx
  unsigned __int64 v11; // r13
  __int16 i; // r14
  __int64 v13; // r9
  _BYTE *v14; // r8
  __int64 v15; // rbx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  size_t v18; // r8
  char *v19; // r14
  __int64 v20; // r14
  int *v21; // rax
  int v23; // [rsp+70h] [rbp+8h]
  int v24; // [rsp+78h] [rbp+10h] BYREF
  int v25; // [rsp+88h] [rbp+20h] BYREF

  v23 = (int)a1;
  v6 = a3;
  v7 = &a1[a2];
  v24 = 0;
  v8 = 0;
  v9 = a1;
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
      v8 = -1073741246;
      *v21 = (int)v6;
      return (unsigned int)v8;
    }
    if ( v10 >= 0 )
    {
      if ( (unsigned int)v20 < 2 )
        goto LABEL_22;
      v17 = v20 - 2;
      v24 = v20 - 2;
      if ( &v9[(unsigned int)(v20 - 2)] > v7 )
      {
        v17 = (_DWORD)v7 - (_DWORD)v9;
        v24 = (_DWORD)v7 - (_DWORD)v9;
      }
      if ( (unsigned __int64)v6 + v17 + 2 > v11 )
        goto LABEL_22;
      memmove(v9, v6 + 1, v17);
      v15 = (unsigned int)v20;
      goto LABEL_13;
    }
    v13 = (__int64)v6 + v20;
    v14 = v6 + 1;
    v15 = (unsigned int)v20;
    if ( !a5 )
    {
      v8 = LZNT1DecompressChunk(v9, v7, v14, v13, &v24);
      if ( v8 < 0 )
      {
LABEL_7:
        *a6 = v24;
        return (unsigned int)v8;
      }
LABEL_13:
      v16 = v24;
      goto LABEL_14;
    }
    v8 = LZNT1DecompressChunk(v9, v7, v14, v13, &v25);
    if ( v8 < 0 )
      goto LABEL_7;
    v16 = a5;
    v24 = a5;
LABEL_14:
    v6 = (__int16 *)((char *)v6 + v15);
    v9 += v16;
    if ( v9 == v7 )
      break;
    if ( (unsigned __int64)v6 > v11 - 2 )
      break;
    v10 = *v6;
    if ( !*v6 )
      break;
    if ( v16 < 0x1000 )
    {
      v18 = (int)(4096 - v16);
      v19 = &v9[v18];
      if ( &v9[v18] >= v7 )
        break;
      memset(v9, 0, v18);
      v9 = v19;
    }
  }
  v21 = a6;
  if ( (unsigned __int64)v6 > v11 )
    goto LABEL_23;
  *a6 = (_DWORD)v9 - v23;
  return (unsigned int)v8;
}
