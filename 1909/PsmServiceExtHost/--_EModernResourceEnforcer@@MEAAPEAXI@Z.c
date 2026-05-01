/*
 * XREFs of ??_EModernResourceEnforcer@@MEAAPEAXI@Z @ 0x180061EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800476D8 (--3@YAXPEAX@Z.c)
 *     ??1ModernResourceEnforcer@@MEAA@XZ @ 0x180061E50 (--1ModernResourceEnforcer@@MEAA@XZ.c)
 */

ModernResourceEnforcer *__fastcall ModernResourceEnforcer::`vector deleting destructor'(
        ModernResourceEnforcer *this,
        char a2)
{
  ModernResourceEnforcer::~ModernResourceEnforcer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
