/*
 * XREFs of ?HasImpulse@CMotion@@QEBA_NXZ @ 0x180207300
 * Callers:
 *     ?IsInMotion@CMotion@@QEBA_NXZ @ 0x18020FE90 (-IsInMotion@CMotion@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMotion::HasImpulse(CMotion *this)
{
  return *((float *)this + 10) != 0.0;
}
