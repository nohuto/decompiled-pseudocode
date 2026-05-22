/*
 * XREFs of ??1MouseProcessor@@MEAA@XZ @ 0x18012B35C
 * Callers:
 *     ??_GMouseProcessor@@MEAAPEAXI@Z @ 0x18012B434 (--_GMouseProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x180076F90 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MouseProcessor::~MouseProcessor(MouseProcessor *this)
{
  *(_QWORD *)this = &MouseProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &MouseProcessor::`vftable'{for `IMouseProcessorForwarding'};
  *((_QWORD *)this + 2) = &MouseProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 3) = &MouseProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 4) = &MouseProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 215) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 214);
  if ( *((_BYTE *)this + 1704) )
    InjectionDevice::Remove((MouseProcessor *)((char *)this + 128));
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 13);
  NonPointerProcessor::~NonPointerProcessor((MouseProcessor *)((char *)this + 16));
}
