/*
 * XREFs of MagpFindThreadContext @ 0x1C0035C5C
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C019B120 (MagContextThreadCallout.c)
 *     MagControl @ 0x1C019B344 (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C019B440 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C019BB40 (MagSetLensContextInformation.c)
 *     MagSlicerControl @ 0x1C019C834 (MagSlicerControl.c)
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
