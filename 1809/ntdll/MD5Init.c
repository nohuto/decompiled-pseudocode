/*
 * XREFs of MD5Init @ 0x1800811F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MD5Init(_DWORD *a1)
{
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 1732584193;
  a1[3] = -271733879;
  a1[4] = -1732584194;
  a1[5] = 271733878;
}
