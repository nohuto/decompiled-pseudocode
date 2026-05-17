/*
 * XREFs of sub_180029824 @ 0x180029824
 * Callers:
 *     sub_18002979C @ 0x18002979C (sub_18002979C.c)
 *     sub_180077E18 @ 0x180077E18 (sub_180077E18.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180029824(__int64 a1, __int64 a2, _QWORD *a3, _WORD *a4, __int64 a5)
{
  unsigned int v5; // r10d
  _WORD *v6; // r11
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r9

  v5 = 0;
  v6 = a4;
  v7 = 0LL;
  if ( !a2 )
  {
    v9 = a5;
LABEL_8:
    if ( v9 )
      v5 = -2147483643;
    goto LABEL_6;
  }
  v8 = a1 - (_QWORD)a4;
  v9 = a5;
  do
  {
    if ( !v9 )
      break;
    --v9;
    *(_WORD *)((char *)v6 + v8) = *v6;
    ++v7;
    ++v6;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
    goto LABEL_8;
LABEL_6:
  *a3 = v7;
  return v5;
}
