/*
 * XREFs of ??1ManipulationInjector@@QEAA@XZ @ 0x1800E7464
 * Callers:
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$5 @ 0x180074A99 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$5.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180074C20 (--1ControllerProcessor@@MEAA@XZ.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$1 @ 0x18008CF2B (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$1.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x18008D11C (--1MPCGestureHandler@@UEAA@XZ.c)
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
