/*
 * XREFs of or_all_N_wide_unrotated @ 0x1C00D7FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall or_all_N_wide_unrotated(int a1, __int64 a2, int a3, char *a4, _BYTE *a5, int a6, int a7)
{
  _BYTE *result; // rax
  _BYTE *v8; // r10
  int v9; // r8d
  _BYTE *v10; // rdx
  char v11; // cl

  result = a5;
  v8 = &a5[a3 * a1];
  v9 = a3 - a7;
  do
  {
    v10 = &result[a7];
    do
    {
      v11 = *a4++;
      *result++ |= v11;
    }
    while ( result != v10 );
    result += v9;
  }
  while ( result != v8 );
  return result;
}
