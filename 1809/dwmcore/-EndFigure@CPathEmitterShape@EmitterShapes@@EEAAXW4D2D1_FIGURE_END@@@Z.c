/*
 * XREFs of ?EndFigure@CPathEmitterShape@EmitterShapes@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x1801DC770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EmitterShapes::CPathEmitterShape::EndFigure(
        EmitterShapes::CPathEmitterShape *this,
        enum D2D1_FIGURE_END a2)
{
  EmitterShapes::CPathEmitterShape::Figure::CalculateFigureLength(
    (EmitterShapes::CPathEmitterShape::Figure *)(*((_QWORD *)this + 3) - 56LL),
    a2 == D2D1_FIGURE_END_CLOSED);
}
