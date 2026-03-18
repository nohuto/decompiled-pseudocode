/*
 * XREFs of sub_1406233A4 @ 0x1406233A4
 * Callers:
 *     ExpHwidGetDevicePropertyData @ 0x140622EB8 (ExpHwidGetDevicePropertyData.c)
 *     sub_14062335C @ 0x14062335C (sub_14062335C.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_1406233A4(__int64 a1)
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
