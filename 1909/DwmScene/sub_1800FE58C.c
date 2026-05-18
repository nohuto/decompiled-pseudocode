/*
 * XREFs of sub_1800FE58C @ 0x1800FE58C
 * Callers:
 *     sub_1800C79EC @ 0x1800C79EC (sub_1800C79EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FE58C(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  a1[450] = *a2;
  a1[451] = a2[1];
  result = (unsigned int)a2[2];
  a1[452] = result;
  return result;
}
