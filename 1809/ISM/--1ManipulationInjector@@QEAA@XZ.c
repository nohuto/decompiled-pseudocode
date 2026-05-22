/*
 * XREFs of ??1ManipulationInjector@@QEAA@XZ @ 0x1800B8888
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180032D9C (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x18004D418 (--1MPCGestureHandler@@UEAA@XZ.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$5 @ 0x18012F282 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$5.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$1 @ 0x1801305B9 (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ManipulationInjector::~ManipulationInjector(ManipulationInjector *this)
{
  void *v2; // rcx

  if ( *((_QWORD *)this + 12) )
    RemoveInjectionDevice();
  v2 = (void *)*((_QWORD *)this + 98);
  if ( v2 )
    CloseHandle(v2);
}
