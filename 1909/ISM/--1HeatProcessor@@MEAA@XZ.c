/*
 * XREFs of ??1HeatProcessor@@MEAA@XZ @ 0x1801260B8
 * Callers:
 *     ??_EHeatProcessor@@MEAAPEAXI@Z @ 0x180126180 (--_EHeatProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HeatProcessor::~HeatProcessor(HeatProcessor *this)
{
  HMODULE v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &HeatProcessor::`vftable';
  *((_QWORD *)this + 1) = &HeatProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 2) = &HeatProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &HeatProcessor::`vftable'{for `RefCountedObject'};
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 11);
  v2 = (HMODULE)*((_QWORD *)this + 10);
  if ( v2 )
  {
    FreeLibrary(v2);
    *((_QWORD *)this + 10) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 11);
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  NonPointerProcessor::~NonPointerProcessor((HeatProcessor *)((char *)this + 8));
}
