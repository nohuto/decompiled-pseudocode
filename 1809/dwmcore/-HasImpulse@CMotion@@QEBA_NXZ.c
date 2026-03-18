/*
 * XREFs of ?HasImpulse@CMotion@@QEBA_NXZ @ 0x1801D6188
 * Callers:
 *     ?IsInMotion@CMotion@@QEBA_NXZ @ 0x1801DFD7C (-IsInMotion@CMotion@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMotion::HasImpulse(CMotion *this)
{
  return *((float *)this + 10) != 0.0;
}
