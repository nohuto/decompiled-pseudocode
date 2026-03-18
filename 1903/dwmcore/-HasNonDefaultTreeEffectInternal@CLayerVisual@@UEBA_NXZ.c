/*
 * XREFs of ?HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ @ 0x1800115C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLayerVisual::HasNonDefaultTreeEffectInternal(CLayerVisual *this)
{
  return *((_QWORD *)this + 71) != 0LL;
}
