/*
 * XREFs of ??1DWMFocusedInputTarget@@MEAA@XZ @ 0x18008E058
 * Callers:
 *     ??_GDWMFocusedInputTarget@@MEAAPEAXI@Z @ 0x18008E00C (--_GDWMFocusedInputTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DWMFocusedInputTarget::~DWMFocusedInputTarget(DWMFocusedInputTarget *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &DWMFocusedInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &DWMFocusedInputTarget::`vftable'{for `IInputTarget2'};
  *((_QWORD *)this + 2) = &DWMFocusedInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 3) = &DWMFocusedInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 4) = &DWMFocusedInputTarget::`vftable'{for `RefCountedObject'};
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
}
