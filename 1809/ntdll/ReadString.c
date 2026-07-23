/*
 * XREFs of ReadString @ 0x180099074
 * Callers:
 *     ReadStringDelimited @ 0x180099244 (ReadStringDelimited.c)
 *     _input_l @ 0x180099400 (_input_l.c)
 * Callees:
 *     isleadbyte @ 0x180093778 (isleadbyte.c)
 *     _inc @ 0x1800993CC (_inc.c)
 *     mbtowc @ 0x180099E18 (mbtowc.c)
 *     _ungetc_nolock @ 0x180099EA0 (_ungetc_nolock.c)
 */

__int64 __fastcall ReadString(
        char a1,
        __int64 a2,
        int *a3,
        _DWORD *a4,
        _QWORD *SrcCh,
        int a6,
        FILE *Stream,
        _DWORD *a8)
{
  _WORD **v8; // rdi
  _WORD *v11; // r14
  bool v13; // zf
  int v14; // r13d
  FILE *v16; // rcx
  int v17; // eax
  unsigned __int8 v18; // r8
  int v19; // ecx
  _WORD *v20; // rax
  wchar_t DstCh; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+68h] [rbp+10h]
  int v24; // [rsp+70h] [rbp+18h]

  v23 = a2;
  v8 = (_WORD **)SrcCh;
  DstCh = 0;
  v11 = (_WORD *)*SrcCh;
  --*a4;
  v13 = *a3 == -1;
  v24 = -((a1 & 8) != 0);
  if ( !v13 )
    ungetc_nolock(*a3, Stream);
  v14 = a6;
  while ( (a1 & 1) == 0 || v14-- )
  {
    v16 = Stream;
    ++*a4;
    v17 = inc(v16);
    *a3 = v17;
    if ( v17 == -1
      || (v18 = v17, (a1 & 0x10) == 0)
      && ((a1 & 0x20) == 0 || v17 >= 9 && v17 <= 13 || (v18 = v17, v17 == 32))
      && ((a1 & 0x40) == 0
       || v17 < 0
       || v17 < v17 >> 3
       || (v18 = v17, v19 = v24 ^ *(char *)((v17 >> 3) + v23), !_bittest(&v19, v17 & 7))) )
    {
      --*a4;
      if ( *a3 != -1 )
        ungetc_nolock(*a3, Stream);
      break;
    }
    if ( (a1 & 4) != 0 )
    {
      v11 = (_WORD *)((char *)v11 + 1);
    }
    else if ( (a1 & 2) != 0 )
    {
      LOBYTE(SrcCh) = v18;
      if ( isleadbyte(v18) )
      {
        ++*a4;
        BYTE1(SrcCh) = inc(Stream);
      }
      DstCh = 63;
      mbtowc(&DstCh, (const char *)&SrcCh, _mb_cur_max);
      *(*v8)++ = DstCh;
    }
    else
    {
      *(_BYTE *)*v8 = v18;
      *v8 = (_WORD *)((char *)*v8 + 1);
    }
  }
  if ( v11 == *v8 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 4) == 0 )
  {
    ++*a8;
    if ( (a1 & 0x10) == 0 )
    {
      v20 = *v8;
      if ( (a1 & 2) != 0 )
        *v20 = 0;
      else
        *(_BYTE *)v20 = 0;
    }
  }
  return 0LL;
}
