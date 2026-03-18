/*
 * XREFs of ??_ECPathEmitterEdge@EmitterShapes@@UEAAPEAXI@Z @ 0x18020BD80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@AEAAXXZ @ 0x18020CD84 (-_Tidy@-$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V-$allocator@UFigure@CPathEmitterEdge@Em.c)
 */

EmitterShapes::CPathEmitterEdge *__fastcall EmitterShapes::CPathEmitterEdge::`vector deleting destructor'(
        EmitterShapes::CPathEmitterEdge *this,
        char a2)
{
  std::vector<EmitterShapes::CPathEmitterEdge::Figure>::_Tidy((char *)this + 32);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
