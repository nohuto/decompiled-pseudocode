/*
 * XREFs of sub_1800FE47C @ 0x1800FE47C
 * Callers:
 *     sub_1800C78DC @ 0x1800C78DC (sub_1800C78DC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FE47C(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  a1[450] = *a2;
  a1[451] = a2[1];
  result = (unsigned int)a2[2];
  a1[452] = result;
  return result;
}
