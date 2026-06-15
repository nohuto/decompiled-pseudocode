/*
 * XREFs of ??1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x1400459BC
 * Callers:
 *     ??_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x140046610 (--_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001357C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140013AF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x140026880 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::~AudioDeviceBroker(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this)
{
  __int64 v2; // rcx
  char *v3; // rcx
  void *v4; // rdx
  wil::details *v5; // rcx
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = *((_QWORD *)this + 13);
  if ( v2 )
    CM_Unregister_Notification(v2);
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
  v3 = (char *)*((_QWORD *)this + 12);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 12) = 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 25);
  v5 = (wil::details *)*((_QWORD *)this + 23);
  if ( v5 )
    wil::details::CloseHandle(v5, v4);
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 16);
  if ( v6 )
  {
    *((_QWORD *)this + 16) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  }
  v7 = *((_QWORD *)this + 11);
  if ( v7 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 10);
  if ( v8 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>((__int64)this);
}
