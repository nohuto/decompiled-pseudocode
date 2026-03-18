/*
 * XREFs of EnforceColorDependentSettings @ 0x1C00504D0
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0050C44 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     GreGetDeviceCaps @ 0x1C00511A0 (GreGetDeviceCaps.c)
 */

_BOOL8 EnforceColorDependentSettings()
{
  _BOOL8 result; // rax

  result = (*(_DWORD *)(gpDispInfo + 132) & 2) != 0
        || (unsigned int)GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 24) != -1;
  gbDisableAlpha = result;
  return result;
}
