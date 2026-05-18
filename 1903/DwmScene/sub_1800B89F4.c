/*
 * XREFs of sub_1800B89F4 @ 0x1800B89F4
 * Callers:
 *     sub_1800C35AC @ 0x1800C35AC (sub_1800C35AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B89F4(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  a1[23] = *a2;
  a1[24] = a2[1];
  a1[25] = a2[2];
  result = (unsigned int)a2[3];
  a1[26] = result;
  return result;
}
