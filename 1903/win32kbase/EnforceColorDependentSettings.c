/*
 * XREFs of EnforceColorDependentSettings @ 0x1C0065760
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0065220 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     GreGetDeviceCaps @ 0x1C0018CC0 (GreGetDeviceCaps.c)
 */

_BOOL8 EnforceColorDependentSettings()
{
  _BOOL8 result; // rax

  result = (*(_DWORD *)(gpDispInfo + 132) & 2) != 0
        || (unsigned int)GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 56), 24) != -1;
  gbDisableAlpha = result;
  return result;
}
