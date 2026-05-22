/*
 * XREFs of ??_GTouchProcessor@@MEAAPEAXI@Z @ 0x180140FB8
 * Callers:
 *     ??_ETouchProcessor@@OBA@EAAPEAXI@Z @ 0x180039FB0 (--_ETouchProcessor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??1NonPointerProcessor@@MEAA@XZ @ 0x180092044 (--1NonPointerProcessor@@MEAA@XZ.c)
 */

TouchProcessor *__fastcall TouchProcessor::`scalar deleting destructor'(TouchProcessor *this, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &TouchProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &TouchProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &TouchProcessor::`vftable'{for `RefCountedObject'};
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  NonPointerProcessor::~NonPointerProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
