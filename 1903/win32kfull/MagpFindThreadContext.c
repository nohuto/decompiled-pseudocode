/*
 * XREFs of MagpFindThreadContext @ 0x1C009734C
 * Callers:
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C01CFDD0 (MagContextThreadCallout.c)
 *     MagControl @ 0x1C01D001C (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01D0120 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01D087C (MagSetLensContextInformation.c)
 *     MagSlicerControl @ 0x1C01D1620 (MagSlicerControl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MagpFindThreadContext(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; result != a1; result = (_QWORD *)*result )
  {
    if ( a2 == result[2] )
      return result;
  }
  return 0LL;
}
