/*
 * XREFs of sub_180095914 @ 0x180095914
 * Callers:
 *     sub_180095ADC @ 0x180095ADC (sub_180095ADC.c)
 *     sub_180095CA0 @ 0x180095CA0 (sub_180095CA0.c)
 * Callees:
 *     sub_180090018 @ 0x180090018 (sub_180090018.c)
 *     sub_180095C64 @ 0x180095C64 (sub_180095C64.c)
 *     sub_1800966B0 @ 0x1800966B0 (sub_1800966B0.c)
 *     sub_180096740 @ 0x180096740 (sub_180096740.c)
 */

__int64 __fastcall sub_180095914(char a1, __int64 a2, int *a3, _DWORD *a4, _QWORD *a5, int a6, __int64 a7, _DWORD *a8)
{
  _WORD **v8; // rdi
  _WORD *v11; // r15
  bool v13; // zf
  int v14; // r13d
  __int64 v16; // rcx
  int v17; // eax
  int v18; // ecx
  _WORD *v19; // rax
  __int16 v21; // [rsp+60h] [rbp+8h] BYREF
  __int64 v22; // [rsp+68h] [rbp+10h]
  int v23; // [rsp+70h] [rbp+18h]

  v22 = a2;
  v8 = (_WORD **)a5;
  v21 = 0;
  v11 = (_WORD *)*a5;
  --*a4;
  v13 = *a3 == -1;
  v23 = -((a1 & 8) != 0);
  if ( !v13 )
    sub_180096740((unsigned int)*a3, a7);
  v14 = a6;
  while ( (a1 & 1) == 0 || v14-- )
  {
    v16 = a7;
    ++*a4;
    v17 = sub_180095C64(v16);
    *a3 = v17;
    if ( v17 == -1
      || (a1 & 0x10) == 0
      && ((a1 & 0x20) == 0 || v17 >= 9 && v17 <= 13 || v17 == 32)
      && ((a1 & 0x40) == 0
       || v17 < 0
       || v17 < v17 >> 3
       || (v18 = v23 ^ *(char *)((v17 >> 3) + v22), !_bittest(&v18, v17 & 7))) )
    {
      --*a4;
      if ( *a3 != -1 )
        sub_180096740((unsigned int)*a3, a7);
      break;
    }
    if ( (a1 & 4) != 0 )
    {
      v11 = (_WORD *)((char *)v11 + 1);
    }
    else if ( (a1 & 2) != 0 )
    {
      LOBYTE(a5) = *(_BYTE *)a3;
      if ( (unsigned int)sub_180090018((unsigned __int8)a5) )
      {
        ++*a4;
        BYTE1(a5) = sub_180095C64(a7);
      }
      v21 = 63;
      sub_1800966B0(&v21, &a5, dword_18015FF34);
      *(*v8)++ = v21;
    }
    else
    {
      *(_BYTE *)*v8 = *(_BYTE *)a3;
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
      v19 = *v8;
      if ( (a1 & 2) != 0 )
        *v19 = 0;
      else
        *(_BYTE *)v19 = 0;
    }
  }
  return 0LL;
}
