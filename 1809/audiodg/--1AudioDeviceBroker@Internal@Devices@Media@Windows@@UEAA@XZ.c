/*
 * XREFs of ??1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x14001873C
 * Callers:
 *     ??_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x140018700 (--_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001D7F4 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14002E520 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::~AudioDeviceBroker(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        void *a2)
{
  __int64 v3; // rcx
  char *v4; // rcx
  __int64 v5; // rcx
  wil::details *v6; // rcx
  __int64 v7; // r10
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)this = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v3 = *((_QWORD *)this + 13);
  if ( v3 )
    CM_Unregister_Notification(v3);
  if ( *((_QWORD *)this + 22) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)this + 21);
    *((_BYTE *)this + 192) = 1;
    if ( this != (Windows::Media::Devices::Internal::AudioDeviceBroker *)-168LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 21);
    SetThreadpoolWait(*((PTP_WAIT *)this + 22), 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 22), 1);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 22));
    *((_QWORD *)this + 22) = 0LL;
  }
  *((_BYTE *)this + 160) = 1;
  v4 = (char *)*((_QWORD *)this + 12);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 12) = 0LL;
  }
  v5 = *((_QWORD *)this + 25);
  if ( v5 )
  {
    *((_QWORD *)this + 25) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (wil::details *)*((_QWORD *)this + 23);
  if ( v6 )
    wil::details::CloseHandle(v6, a2);
  v7 = *((_QWORD *)this + 16);
  if ( v7 )
  {
    *((_QWORD *)this + 16) = 0LL;
    if ( !ATL::SafeDecrementReferenceMultiThread((int *)(v7 + 12)) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v9 = *((_QWORD *)this + 11);
  if ( v9 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 10);
  if ( v10 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>(this);
}
