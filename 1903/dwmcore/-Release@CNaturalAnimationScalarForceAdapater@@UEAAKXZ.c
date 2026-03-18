/*
 * XREFs of ?Release@CNaturalAnimationScalarForceAdapater@@UEAAKXZ @ 0x1800D5C00
 * Callers:
 *     ?Release@CInteractionContextWrapper@@W7EAAKXZ @ 0x1800ED420 (-Release@CInteractionContextWrapper@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNaturalAnimationScalarForceAdapater::Release(CNaturalAnimationScalarForceAdapater *this)
{
  return CDirtyRegion::Release((CNaturalAnimationScalarForceAdapater *)((char *)this + 8));
}
