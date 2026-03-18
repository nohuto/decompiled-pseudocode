/*
 * XREFs of ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18001A260
 * Callers:
 *     ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@W7EBA_NXZ @ 0x1800F0D20 (-IsMonitorSpecificContent@CCompositionSurfaceBitmap@@W7EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CCompositionSurfaceBitmap::IsMonitorSpecificContent(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 5);
  result = 0;
  if ( v1 && (*(_BYTE *)(v1 + 268) & 1) != 0 )
  {
    if ( *(_QWORD *)(v1 + 160) )
      return 1;
  }
  return result;
}
