/*
 * XREFs of ?ThreadpoolCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x14004BF90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001357C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140013AF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001619C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_a85bab6ed30f25d4a586828200a843fd__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ @ 0x1400446BC (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_a85bab6ed30f25d4a586828200a843fd__Wind.c)
 *     ??0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@Storage@4@@Z @ 0x140045268 (--0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@St.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x140045E2C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14004B270 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAud_ea_14004B270.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::ThreadpoolCallback(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  BOOL v6; // r15d
  Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *v7; // rbx
  __int64 v8; // rdi
  struct Windows::Storage::Streams::IBuffer *v9; // rdi
  Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *v10; // rax
  volatile signed __int32 *v11; // rdi
  struct Windows::Storage::Streams::IBuffer *v12[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v13; // [rsp+30h] [rbp-40h] BYREF
  Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *v14; // [rsp+40h] [rbp-30h]
  PVOID v15; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-20h] BYREF
  __int128 v17; // [rsp+60h] [rbp-10h]
  int v18; // [rsp+A8h] [rbp+38h] BYREF

  v16[1] = -2LL;
  v6 = CoInitializeEx(0LL, 0) >= 0;
  if ( Context )
  {
    v18 = 0;
    while ( (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)Context + 25) + 56LL))(*((_QWORD *)Context + 25), &v18) >= 0
         && v18 )
    {
      v12[0] = 0LL;
      v7 = 0LL;
      v14 = 0LL;
      v8 = *((_QWORD *)Context + 25);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v12);
      (*(void (__fastcall **)(__int64, _QWORD, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v8 + 48LL))(
        v8,
        0LL,
        v12);
      if ( v12[0] )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)Context + 25) + 96LL))(*((_QWORD *)Context + 25), 0LL);
        v9 = v12[0];
        v10 = (Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *)operator new(
                                                                                        0x48uLL,
                                                                                        (const struct std::nothrow_t *)&std::nothrow);
        if ( v10 )
          v7 = Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::AudioDeviceBrokerChangedEventArgs(
                 v10,
                 v9);
        v14 = v7;
        if ( v7 )
        {
          v16[0] = v7;
          v15 = Context;
          *(_QWORD *)&v17 = &v15;
          *((_QWORD *)&v17 + 1) = v16;
          *(_QWORD *)&v13 = 0LL;
          AcquireSRWLockExclusive((PSRWLOCK)Context + 17);
          Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
            (volatile signed __int32 **)&v13,
            (volatile signed __int32 **)Context + 16);
          if ( Context != (PVOID)-136LL )
            ReleaseSRWLockExclusive((PSRWLOCK)Context + 17);
          v11 = (volatile signed __int32 *)v13;
          if ( (_QWORD)v13 )
          {
            v13 = v17;
            Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_a85bab6ed30f25d4a586828200a843fd__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____(
              (_QWORD **)&v13,
              (__int64)v11,
              (__int64)Context + 128);
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v11);
          }
        }
      }
      if ( v7 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v7);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v12);
    }
    AcquireSRWLockExclusive((PSRWLOCK)Context + 21);
    if ( !*((_BYTE *)Context + 192) )
      SetThreadpoolWait(Wait, *((HANDLE *)Context + 23), 0LL);
    if ( Context != (PVOID)-168LL )
      ReleaseSRWLockExclusive((PSRWLOCK)Context + 21);
  }
  if ( v6 )
    CoUninitialize();
}
