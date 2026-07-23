/*
 * XREFs of ReadStringDelimited_0 @ 0x14019E660
 * Callers:
 *     _winput_s @ 0x14019E8D8 (_winput_s.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ReadString_0 @ 0x14019E420 (ReadString_0.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall ReadStringDelimited_0(
        char a1,
        unsigned __int16 **a2,
        wint_t *a3,
        _DWORD *a4,
        void **a5,
        int a6,
        FILE *File,
        unsigned __int64 Src,
        _DWORD *a9)
{
  unsigned __int16 v12; // di
  unsigned __int16 *v14; // rdx
  char v15; // r10
  unsigned __int16 *v16; // rcx
  unsigned __int16 *v17; // r8
  unsigned __int16 i; // ax
  unsigned __int16 v19; // cx
  unsigned __int16 v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  int v23; // ecx
  int v25[2048]; // [rsp+50h] [rbp-2048h] BYREF

  v12 = 0;
  memset(v25, 0, sizeof(v25));
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
  HIBYTE(v25[2]) = 32;
  v17 = v16 + 2;
  v12 = 93;
  for ( i = v16[2]; i != 93; i = *v17 )
  {
LABEL_5:
    if ( i == 45 && v12 && (v19 = v17[1], v19 != 93) )
    {
      v20 = v17[1];
      if ( v12 >= v19 )
      {
        v20 = v12;
        v12 = v17[1];
      }
      while ( v12 <= v20 )
      {
        *((_BYTE *)v25 + ((unsigned __int64)v12 >> 3)) |= 1 << (v12 & 7);
        ++v12;
      }
      v12 = 0;
      v21 = 4LL;
    }
    else
    {
      v12 = i;
      v22 = (unsigned __int64)i >> 3;
      v23 = *((char *)v25 + v22) | (1 << (i & 7));
      v21 = 2LL;
      *((_BYTE *)v25 + v22) = v23;
    }
    v17 = (unsigned __int16 *)((char *)v17 + v21);
  }
  *a2 = v17;
  return ReadString_0(v15, (__int64)v25, a3, a4, a5, a6, File, Src, a9);
}
