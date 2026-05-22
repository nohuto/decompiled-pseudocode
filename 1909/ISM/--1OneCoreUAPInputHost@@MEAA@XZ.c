/*
 * XREFs of ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x18004E850
 * Callers:
 *     ??_GOneCoreUAPInputHost@@MEAAPEAXI@Z @ 0x18004EEEC (--_GOneCoreUAPInputHost@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??_GInputProviderManager@@QEAAPEAXI@Z @ 0x18004EE3C (--_GInputProviderManager@@QEAAPEAXI@Z.c)
 *     TraceLoggingUnregister @ 0x180052ED4 (TraceLoggingUnregister.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall OneCoreUAPInputHost::~OneCoreUAPInputHost(OneCoreUAPInputHost *this, unsigned int a2)
{
  MPCManager *v3; // rcx
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &OneCoreUAPInputHost::`vftable'{for `ISystemInputHost'};
  *((_QWORD *)this + 1) = &OneCoreUAPInputHost::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &OneCoreUAPInputHost::`vftable'{for `RefCountedObject'};
  if ( *((_BYTE *)this + 80) )
  {
    InputProviderManager::`scalar deleting destructor'((OneCoreUAPInputHost *)((char *)this + 56), a2);
    *((_BYTE *)this + 80) = 0;
  }
  MPCGestureHandlerManager::s_instance = 0LL;
  MPCGamepadInputHelper::s_instance = 0LL;
  MPCConstantManager::s_instance = 0LL;
  v3 = MPCManager::s_instance;
  if ( MPCManager::s_instance )
  {
    MPCManager::s_instance = 0LL;
    (**((void (__fastcall ***)(__int64))v3 + 2))((__int64)v3 + 16);
  }
  MPCHolographicInputManager::s_instance = 0LL;
  MPC3DStateHelper::s_instance = 0LL;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 5);
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  OneCoreUAPInputHost::s_pInputHost = 0LL;
  TraceLoggingUnregister((TraceLoggingHProvider)&hProvider);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 12);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( *((_BYTE *)this + 80) )
    InputProviderManager::`scalar deleting destructor'((OneCoreUAPInputHost *)((char *)this + 56), v5);
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 5);
  if ( *((int *)this + 8) >= 0 )
    RoUninitialize(v8);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
