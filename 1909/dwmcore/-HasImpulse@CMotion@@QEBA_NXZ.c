/*
 * XREFs of ?HasImpulse@CMotion@@QEBA_NXZ @ 0x180205C10
 * Callers:
 *     ?IsInMotion@CMotion@@QEBA_NXZ @ 0x18020E780 (-IsInMotion@CMotion@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMotion::HasImpulse(CMotion *this)
{
  return *((float *)this + 10) != 0.0;
}
