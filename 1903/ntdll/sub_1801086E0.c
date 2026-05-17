/*
 * XREFs of sub_1801086E0 @ 0x1801086E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010825C @ 0x18010825C (sub_18010825C.c)
 */

__int64 __fastcall sub_1801086E0(
        __int16 a1,
        char *a2,
        int a3,
        _WORD *a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  int v8; // r15d
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbp
  char *v11; // rsi
  char v12; // di
  __int64 (__fastcall *v13)(char *, __int64); // r12
  _WORD *v14; // rbx
  __int64 v15; // r13
  __int64 result; // rax
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF

  v8 = (int)a4;
  v9 = (unsigned __int64)a4 + a5;
  v10 = (unsigned __int64)&a2[a3];
  v11 = a2;
  v12 = 1;
  if ( a1 )
  {
    if ( a1 != 256 )
      return 3221225659LL;
    v13 = sub_180108520;
  }
  else
  {
    v13 = sub_1801085A0;
  }
  v14 = a4;
  if ( (unsigned __int64)a2 >= v10 )
  {
LABEL_12:
    if ( (unsigned __int64)v14 <= v9 - 2 )
      *v14 = 0;
    *a7 = (_DWORD)v14 - v8;
    return v12 != 0 ? 0x117 : 0;
  }
  else
  {
    v15 = a8;
    while ( 1 )
    {
      result = sub_18010825C(v13, v11, v10, v14, v9, (int *)&v17, v15);
      if ( (int)result < 0 )
        break;
      if ( !v12 || (v12 = 1, (_DWORD)result != 279) )
        v12 = 0;
      v11 += 4096;
      v14 = (_WORD *)((char *)v14 + v17);
      if ( (unsigned __int64)v11 >= v10 )
        goto LABEL_12;
    }
  }
  return result;
}
