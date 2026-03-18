/*
 * XREFs of sub_140627254 @ 0x140627254
 * Callers:
 *     ExpHwidGetDevicePropertyData @ 0x140626D68 (ExpHwidGetDevicePropertyData.c)
 *     sub_14062720C @ 0x14062720C (sub_14062720C.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_140627254(__int64 a1)
{
  _WORD *result; // rax

  result = *(_WORD **)(a1 + 8);
  if ( result )
  {
    *(_DWORD *)(a1 + 4) = 0;
    *(_WORD *)a1 = 0;
    *result = 0;
  }
  return result;
}
