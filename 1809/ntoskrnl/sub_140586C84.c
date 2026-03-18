/*
 * XREFs of sub_140586C84 @ 0x140586C84
 * Callers:
 *     ExpHwidGetDevicePropertyData @ 0x140586784 (ExpHwidGetDevicePropertyData.c)
 *     sub_140586C3C @ 0x140586C3C (sub_140586C3C.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_140586C84(__int64 a1)
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
