/*
 * XREFs of ??1NonPointerProcessor@@MEAA@XZ @ 0x180092044
 * Callers:
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$0 @ 0x18003C0CE (_MouseProcessor--MouseProcessor_--_1_--dtor$0.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$0 @ 0x1800747F8 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$0.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x1800749E0 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??_ENonPointerProcessor@@MEAAPEAXI@Z @ 0x1800920B4 (--_ENonPointerProcessor@@MEAAPEAXI@Z.c)
 *     ??_EButtonProcessor@@UEAAPEAXI@Z @ 0x180124A98 (--_EButtonProcessor@@UEAAPEAXI@Z.c)
 *     _GazeProcessor::GazeProcessor_::_1_::dtor$0 @ 0x1801252EB (_GazeProcessor--GazeProcessor_--_1_--dtor$0.c)
 *     ??1GazeProcessor@@MEAA@XZ @ 0x180125338 (--1GazeProcessor@@MEAA@XZ.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x1801260B8 (--1HeatProcessor@@MEAA@XZ.c)
 *     ??_GKeyboardProcessor@@MEAAPEAXI@Z @ 0x18012AE90 (--_GKeyboardProcessor@@MEAAPEAXI@Z.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x18012B35C (--1MouseProcessor@@MEAA@XZ.c)
 *     ??_GTouchProcessor@@MEAAPEAXI@Z @ 0x180140FB8 (--_GTouchProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NonPointerProcessor::~NonPointerProcessor(NonPointerProcessor *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &KeyboardProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
