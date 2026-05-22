/*
 * XREFs of _anonymous_namespace_::UpdateIfChanged_float_ @ 0x1801624F4
 * Callers:
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x180166C80 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::UpdateIfChanged_float_(float *a1, float a2, _BYTE *a3)
{
  float v3; // xmm3_4

  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*a1 - a2)) & _xmm);
  if ( v3 > 0.001 )
  {
    *a1 = a2;
    *a3 = 1;
  }
}
