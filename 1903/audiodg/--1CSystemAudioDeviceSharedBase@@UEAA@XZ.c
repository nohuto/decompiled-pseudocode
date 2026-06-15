/*
 * XREFs of ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x1400314B0
 * Callers:
 *     ??_GCSystemAudioDeviceSharedBase@@UEAAPEAXI@Z @ 0x140031610 (--_GCSystemAudioDeviceSharedBase@@UEAAPEAXI@Z.c)
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x140032CE0 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 *     ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x14003346C (--1CSystemAudioDeviceOffloadGraph@@UEAA@XZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCC4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140030264 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x1400317F0 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 */

void __fastcall CSystemAudioDeviceSharedBase::~CSystemAudioDeviceSharedBase(CSystemAudioDeviceSharedBase *this)
{
  DWORD v2; // ecx
  DWORD v3; // ecx
  __int64 v4; // rcx
  __int64 v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v7; // [rsp+28h] [rbp-40h]
  __int64 v8; // [rsp+30h] [rbp-38h]
  __int128 v9; // [rsp+38h] [rbp-30h]
  __int128 v10; // [rsp+48h] [rbp-20h] BYREF

  v8 = -2LL;
  *(_QWORD *)this = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISubmix'};
  *((_QWORD *)this + 37) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISaDeviceCallback'};
  *((_QWORD *)this + 38) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISubmixInternal'};
  v9 = *(_OWORD *)((char *)this + 248);
  v10 = v9;
  EtwEventActivityIdControl(4LL, &v10);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CSystemAudioDeviceSharedBase::Cleanup(this);
  v2 = *((_DWORD *)this + 90);
  if ( v2 != -1 )
  {
    FlsSetValue(v2, 0LL);
    FlsFree(*((_DWORD *)this + 90));
  }
  v3 = *((_DWORD *)this + 89);
  if ( v3 != -1 )
    TlsFree(v3);
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v10);
  v4 = *((_QWORD *)this + 41);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 40);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CSystemAudioDeviceBase::~CSystemAudioDeviceBase(this);
}
