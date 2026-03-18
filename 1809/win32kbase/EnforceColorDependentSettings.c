/*
 * XREFs of EnforceColorDependentSettings @ 0x1C00428C0
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0044B64 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     GreGetDeviceCaps @ 0x1C0045080 (GreGetDeviceCaps.c)
 */

__int64 EnforceColorDependentSettings()
{
  __int64 result; // rax

  result = *(unsigned int *)(gpDispInfo + 132);
  gbDisableAlpha = (result & 2) != 0 || (result = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 24), (_DWORD)result != -1);
  return result;
}
