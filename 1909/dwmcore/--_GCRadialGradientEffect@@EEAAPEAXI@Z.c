/*
 * XREFs of ??_GCRadialGradientEffect@@EEAAPEAXI@Z @ 0x1802581A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 */

CRadialGradientEffect *__fastcall CRadialGradientEffect::`scalar deleting destructor'(
        CRadialGradientEffect *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
