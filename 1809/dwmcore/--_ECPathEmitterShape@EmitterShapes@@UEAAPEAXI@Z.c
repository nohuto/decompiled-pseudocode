/*
 * XREFs of ??_ECPathEmitterShape@EmitterShapes@@UEAAPEAXI@Z @ 0x1801DC210
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UFigure@CPathEmitterShape@EmitterShapes@@V?$allocator@UFigure@CPathEmitterShape@EmitterShapes@@@std@@@std@@AEAAXXZ @ 0x1801DCCFC (-_Tidy@-$vector@UFigure@CPathEmitterShape@EmitterShapes@@V-$allocator@UFigure@CPathEmitterShape@.c)
 */

EmitterShapes::CPathEmitterShape *__fastcall EmitterShapes::CPathEmitterShape::`vector deleting destructor'(
        EmitterShapes::CPathEmitterShape *this,
        char a2)
{
  std::vector<EmitterShapes::CPathEmitterShape::Figure>::_Tidy((char *)this + 32);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
