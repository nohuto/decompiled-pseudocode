/*
 * XREFs of MagpFindThreadContext @ 0x1C001D364
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C01BC190 (MagContextThreadCallout.c)
 *     MagControl @ 0x1C01BC3DC (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01BC4E0 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01BCC24 (MagSetLensContextInformation.c)
 *     MagSlicerControl @ 0x1C01BD9C0 (MagSlicerControl.c)
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
