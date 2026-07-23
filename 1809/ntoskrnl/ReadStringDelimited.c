/*
 * XREFs of ReadStringDelimited @ 0x14019D888
 * Callers:
 *     _input_s @ 0x14019DA48 (_input_s.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ReadString @ 0x14019D6DC (ReadString.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall ReadStringDelimited(
        char a1,
        unsigned __int8 **a2,
        int *a3,
        _DWORD *a4,
        _WORD **a5,
        int a6,
        FILE *File,
        __int64 a8,
        _DWORD *a9)
{
  unsigned __int8 v13; // di
  unsigned __int8 *v14; // rdx
  char v15; // r11
  unsigned __int8 *v16; // rcx
  unsigned __int8 *v17; // r8
  unsigned __int8 i; // al
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // r10
  unsigned __int8 v21; // r9
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  int v24; // ecx
  int v26[8]; // [rsp+50h] [rbp-68h] BYREF

  v13 = 0;
  memset(v26, 0, sizeof(v26));
  v14 = *a2;
  v15 = a1 | 8;
  v16 = *a2 + 1;
  *a2 = v16;
  if ( *v16 != 94 )
  {
    v16 = v14;
    v15 = a1;
  }
  v17 = v16 + 1;
  i = v16[1];
  if ( i != 93 )
    goto LABEL_5;
  HIBYTE(v26[2]) = 32;
  v17 = v16 + 2;
  v13 = 93;
  for ( i = v16[2]; i != 93; i = *v17 )
  {
LABEL_5:
    if ( i == 45 && v13 && (v19 = v17[1], v19 != 93) )
    {
      v20 = v17[1];
      if ( v13 >= v19 )
        v20 = v13;
      v21 = v13;
      if ( v13 >= v19 )
        v21 = v17[1];
      while ( v21 <= v20 )
      {
        *((_BYTE *)v26 + ((unsigned __int64)v21 >> 3)) |= 1 << (v21 & 7);
        ++v21;
      }
      v13 = 0;
      v22 = 2LL;
    }
    else
    {
      v13 = i;
      v23 = (unsigned __int64)i >> 3;
      v24 = *((char *)v26 + v23) | (1 << (i & 7));
      v22 = 1LL;
      *((_BYTE *)v26 + v23) = v24;
    }
    v17 += v22;
  }
  *a2 = v17;
  return ReadString(v15, (__int64)v26, a3, a4, a5, a6, File, a8, a9);
}
