/*
 * XREFs of sub_1800A1FB4 @ 0x1800A1FB4
 * Callers:
 *     sub_1800A4608 @ 0x1800A4608 (sub_1800A4608.c)
 * Callees:
 *     sub_18006F310 @ 0x18006F310 (sub_18006F310.c)
 *     sub_1800A13A8 @ 0x1800A13A8 (sub_1800A13A8.c)
 */

__int64 __fastcall sub_1800A1FB4(__int64 **a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 *v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a1;
  v6 = (*a1)[1];
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_10;
  v7 = *a3;
  do
  {
    if ( *(_QWORD *)(v6 + 32) >= v7 )
    {
      v3 = (__int64 *)v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  while ( !*(_BYTE *)(v6 + 25) );
  if ( v3 == *a1 || v7 < v3[4] )
  {
LABEL_10:
    v11 = a3;
    v8 = sub_18006F310(a1, (__int64)&unk_1801F0900, &v11);
    sub_1800A13A8((__int64 ***)a1, &v10, v3, v8 + 4, v8);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v3;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
