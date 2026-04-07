/*
 * XREFs of ?ReleaseResources@SharedDwmDcompVisual@@QEAAXPEAUIDwmChannel@@@Z @ 0x18002357C
 * Callers:
 *     ??1UdwmDcompVisual@@UEAA@XZ @ 0x1800234F8 (--1UdwmDcompVisual@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037508 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SharedDwmDcompVisual::ReleaseResources(HANDLE *this, struct IDwmChannel *a2)
{
  volatile signed __int32 *v4; // rcx

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(this + 1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(this + 2);
  CloseHandle(this[4]);
  v4 = (volatile signed __int32 *)*this;
  if ( *this )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 && v4 )
      (**(void (__fastcall ***)(HANDLE, __int64))v4)((HANDLE)v4, 1LL);
    *this = 0LL;
  }
  if ( a2 )
  {
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    (*(void (__fastcall **)(struct IDwmChannel *, _QWORD))(*(_QWORD *)a2 + 128LL))(a2, *((unsigned int *)this + 6));
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  }
}
