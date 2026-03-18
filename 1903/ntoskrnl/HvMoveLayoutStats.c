/*
 * XREFs of HvMoveLayoutStats @ 0x1405D4E68
 * Callers:
 *     HvCheckBin @ 0x1405D4C20 (HvCheckBin.c)
 *     HvCheckHive @ 0x14062E570 (HvCheckHive.c)
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
