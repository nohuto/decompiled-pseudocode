/*
 * XREFs of ??_ECPathEmitterEdge@EmitterShapes@@UEAAPEAXI@Z @ 0x18020A690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@AEAAXXZ @ 0x18020B694 (-_Tidy@-$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V-$allocator@UFigure@CPathEmitterEdge@Em.c)
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
