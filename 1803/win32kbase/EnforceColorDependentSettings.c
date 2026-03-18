/*
 * XREFs of EnforceColorDependentSettings @ 0x1C006E5E0
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0053D74 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     GreGetDeviceCaps @ 0x1C0054280 (GreGetDeviceCaps.c)
 */

__int64 EnforceColorDependentSettings()
{
  __int64 result; // rax

  result = *(unsigned int *)(gpDispInfo + 132);
  if ( (result & 2) != 0 )
  {
    gbDisableAlpha = 1;
  }
  else
  {
    result = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 24);
    gbDisableAlpha = result != -1;
  }
  return result;
}
