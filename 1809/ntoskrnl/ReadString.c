/*
 * XREFs of ReadString @ 0x14019D6DC
 * Callers:
 *     ReadStringDelimited @ 0x14019D888 (ReadStringDelimited.c)
 *     _input_s @ 0x14019DA48 (_input_s.c)
 * Callees:
 *     _inc @ 0x14019DA14 (_inc.c)
 *     _ungetc_nolock @ 0x14019F2BC (_ungetc_nolock.c)
 */

__int64 __fastcall ReadString(
        char a1,
        __int64 a2,
        int *a3,
        _DWORD *a4,
        _WORD **a5,
        int a6,
        FILE *File,
        __int64 a8,
        _DWORD *a9)
{
  _WORD **v9; // rdi
  _WORD *v13; // rsi
  int v14; // eax
  int v15; // ecx
  __int64 v16; // r13
  int v17; // eax
  FILE *v19; // rcx
  int v20; // eax
  char v21; // r8
  int v22; // ecx
  _WORD *v23; // rax
  _WORD *v25; // rax
  char v26; // [rsp+60h] [rbp+8h] BYREF
  __int64 v27; // [rsp+68h] [rbp+10h]
  int v28; // [rsp+70h] [rbp+18h]

  v27 = a2;
  v9 = a5;
  v13 = *a5;
  v14 = -((a1 & 8) != 0);
  --*a4;
  v15 = *a3;
  v28 = v14;
  if ( v15 != -1 )
    ungetc_nolock(v15, File);
  v16 = a8 - 1;
  if ( (a1 & 0x10) != 0 )
    v16 = a8;
  v17 = a1 & 1;
  LODWORD(a5) = v17;
  while ( 1 )
  {
    if ( v17 )
    {
      if ( !a6-- )
        goto LABEL_31;
    }
    v19 = File;
    ++*a4;
    v20 = inc(v19, 0LL);
    *a3 = v20;
    if ( v20 == -1 )
      break;
    v21 = v20;
    if ( (a1 & 0x10) == 0 )
    {
      if ( (a1 & 0x20) == 0 || v20 >= 9 && v20 <= 13 || (v21 = v20, v20 == 32) )
      {
        if ( (a1 & 0x40) == 0 )
          break;
        if ( v20 < 0 )
          break;
        if ( v20 < v20 >> 3 )
          break;
        v21 = v20;
        v22 = v28 ^ *(char *)((v20 >> 3) + v27);
        if ( !_bittest(&v22, v20 & 7) )
          break;
      }
    }
    if ( (a1 & 4) != 0 )
    {
      v13 = (_WORD *)((char *)v13 + 1);
    }
    else
    {
      if ( !v16 )
      {
        if ( (a1 & 2) != 0 )
          *v13 = 0;
        else
          *(_BYTE *)v13 = 0;
        return 0xFFFFFFFFLL;
      }
      v23 = *v9;
      --v16;
      if ( (a1 & 2) != 0 )
      {
        *v23 = (unsigned __int16)&v26;
        ++*v9;
      }
      else
      {
        *(_BYTE *)v23 = v21;
        *v9 = (_WORD *)((char *)*v9 + 1);
      }
    }
    v17 = (int)a5;
  }
  --*a4;
  if ( *a3 != -1 )
    ungetc_nolock(*a3, File);
LABEL_31:
  if ( v13 == *v9 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 4) == 0 )
  {
    ++*a9;
    if ( (a1 & 0x10) == 0 )
    {
      v25 = *v9;
      if ( (a1 & 2) != 0 )
        *v25 = 0;
      else
        *(_BYTE *)v25 = 0;
    }
  }
  return 0LL;
}
