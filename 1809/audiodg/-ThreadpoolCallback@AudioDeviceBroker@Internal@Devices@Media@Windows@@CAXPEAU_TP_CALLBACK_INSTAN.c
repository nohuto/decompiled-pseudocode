/*
 * XREFs of ?ThreadpoolCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x14004E6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019F84 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_d65a1343ddfc987a61a87e0c3596fa56___ @ 0x140046AB0 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Media--Devices--Int.c)
 *     ??0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@Storage@4@@Z @ 0x140047A60 (--0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@St.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14004D970 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAud_ea_14004D970.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::ThreadpoolCallback(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  BOOL v6; // r14d
  Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *v7; // rbx
  PVOID Ptr; // rdi
  struct Windows::Storage::Streams::IBuffer *v9; // rdi
  Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *v10; // rax
  struct Windows::Storage::Streams::IBuffer *v11; // [rsp+20h] [rbp-40h] BYREF
  RTL_SRWLOCK *v12; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h]
  __int128 v15; // [rsp+50h] [rbp-10h] BYREF
  int v16; // [rsp+88h] [rbp+28h] BYREF

  v13[1] = -2LL;
  v6 = CoInitializeEx(0LL, 0) >= 0;
  if ( Context )
  {
    v16 = 0;
    while ( (*(int (__fastcall **)(PVOID, int *))(*(_QWORD *)Context[25].Ptr + 56LL))(Context[25].Ptr, &v16) >= 0 && v16 )
    {
      v11 = 0LL;
      v7 = 0LL;
      v13[0] = 0LL;
      Ptr = Context[25].Ptr;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
      (*(void (__fastcall **)(PVOID, _QWORD, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)Ptr + 48LL))(
        Ptr,
        0LL,
        &v11);
      if ( v11 )
      {
        (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)Context[25].Ptr + 96LL))(Context[25].Ptr, 0LL);
        v9 = v11;
        v10 = (Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *)operator new(
                                                                                        0x48uLL,
                                                                                        (const struct std::nothrow_t *)&std::nothrow);
        if ( v10 )
          v7 = Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::AudioDeviceBrokerChangedEventArgs(
                 v10,
                 v9);
        if ( v7 )
        {
          v13[0] = v7;
          v12 = Context;
          *(_QWORD *)&v14 = &v12;
          *((_QWORD *)&v14 + 1) = v13;
          v15 = v14;
          Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_d65a1343ddfc987a61a87e0c3596fa56___(
            Context + 16,
            &v15);
        }
      }
      if ( v7 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::Release((__int64)v7);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
    }
    AcquireSRWLockExclusive(Context + 21);
    if ( !LOBYTE(Context[24].Ptr) )
      SetThreadpoolWait(Wait, Context[23].Ptr, 0LL);
    if ( Context != (RTL_SRWLOCK *)-168LL )
      ReleaseSRWLockExclusive(Context + 21);
  }
  if ( v6 )
    CoUninitialize();
}
