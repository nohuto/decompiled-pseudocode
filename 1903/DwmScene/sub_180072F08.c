/*
 * XREFs of sub_180072F08 @ 0x180072F08
 * Callers:
 *     sub_180075270 @ 0x180075270 (sub_180075270.c)
 * Callees:
 *     sub_18006F198 @ 0x18006F198 (sub_18006F198.c)
 *     sub_180070FFC @ 0x180070FFC (sub_180070FFC.c)
 */

__int64 __fastcall sub_180072F08(__int64 **a1, __int64 a2, _QWORD *a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a1;
  v6 = (*a1)[1];
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_10;
  v7 = a3[1];
  do
  {
    if ( *(_QWORD *)(v6 + 40) >= v7 )
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
  if ( v3 == *a1 || v7 < v3[5] )
  {
LABEL_10:
    v11 = a3;
    v8 = sub_18006F198(a1, (__int64)&unk_1801DFD04, &v11);
    sub_180070FFC((__int64 ***)a1, &v10, v3, (__int64)(v8 + 4), v8);
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
