/*
 * XREFs of ??1NonPointerProcessor@@MEAA@XZ @ 0x1800521BC
 * Callers:
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$0 @ 0x18012F20F (_ControllerProcessor--ControllerProcessor_--_1_--dtor$0.c)
 *     _ButtonProcessor::ButtonProcessor_::_1_::dtor$0 @ 0x18013485E (_ButtonProcessor--ButtonProcessor_--_1_--dtor$0.c)
 *     _GazeProcessor::GazeProcessor_::_1_::dtor$0 @ 0x180134985 (_GazeProcessor--GazeProcessor_--_1_--dtor$0.c)
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$0 @ 0x1801349CD (_MouseProcessor--MouseProcessor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall NonPointerProcessor::~NonPointerProcessor(NonPointerProcessor *this)
{
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
