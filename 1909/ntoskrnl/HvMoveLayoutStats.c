/*
 * XREFs of HvMoveLayoutStats @ 0x1405D5628
 * Callers:
 *     HvCheckBin @ 0x1405D53E0 (HvCheckBin.c)
 *     HvCheckHive @ 0x1406323F0 (HvCheckHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvMoveLayoutStats(_DWORD *a1)
{
  __int64 result; // rax

  *a1 += a1[2];
  result = (unsigned int)a1[3];
  a1[1] += result;
  a1[3] = 0;
  a1[2] = 0;
  return result;
}
