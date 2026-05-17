/*
 * XREFs of sub_180029888 @ 0x180029888
 * Callers:
 *     sub_18002979C @ 0x18002979C (sub_18002979C.c)
 *     sub_180077E18 @ 0x180077E18 (sub_180077E18.c)
 * Callees:
 *     sub_180029934 @ 0x180029934 (sub_180029934.c)
 */

__int64 __fastcall sub_180029888(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned __int16 *v4; // rcx
  unsigned __int64 *v5; // r9
  _QWORD *v6; // r10
  __int64 v7; // rdx

  *a2 = 0LL;
  *a3 = 0LL;
  result = sub_180029934(a1, a2, a3, a3);
  if ( (int)result >= 0 )
  {
    if ( v4 )
    {
      v7 = *((_QWORD *)v4 + 1);
      *v5 = (unsigned __int64)*v4 >> 1;
      *v6 = v7;
    }
  }
  return result;
}
