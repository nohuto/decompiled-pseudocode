/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1400029BC
 * Callers:
 *     ?add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x140002920 (-add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU-$ITy.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x140002B88 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019F84 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001AFC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001D7F4 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x14004903C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        __int64 a1,
        Microsoft::WRL::Details::EventTargetArray *a2,
        __int64 a3,
        Microsoft::WRL::Details::EventTargetArray **a4)
{
  RTL_SRWLOCK *v4; // rbp
  Microsoft::WRL::Details::EventTargetArray *v9; // rcx
  __int64 v10; // rax
  int v11; // edi
  __int64 v12; // r10
  Microsoft::WRL::Details::EventTargetArray *v13; // rax
  Microsoft::WRL::Details::EventTargetArray *v14; // rdi
  void **v15; // r15
  struct IUnknown **i; // r14
  Microsoft::WRL::Details::EventTargetArray **v17; // r14
  Microsoft::WRL::Details::EventTargetArray *v18; // rax
  Microsoft::WRL::Details::EventTargetArray *v19; // rcx
  Microsoft::WRL::Details::EventTargetArray *v20; // rbx
  Microsoft::WRL::Details::EventTargetArray *v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = (RTL_SRWLOCK *)(a1 + 16);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v9 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
  v22 = 0LL;
  if ( v9 )
    v10 = ((__int64)(*((_QWORD *)v9 + 3) - *((_QWORD *)v9 + 2)) >> 3) + 1;
  else
    v10 = 1LL;
  v23 = v10;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v22,
          &v23);
  if ( v11 >= 0 )
  {
    v13 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
    v14 = v22;
    if ( *(_QWORD *)a1 )
    {
      v15 = (void **)*((_QWORD *)v13 + 4);
      for ( i = (struct IUnknown **)*((_QWORD *)v13 + 2); i != *((struct IUnknown ***)v13 + 3); ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v14, *i, *v15);
        v13 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
        ++v15;
      }
    }
    *a4 = a2;
    v17 = (Microsoft::WRL::Details::EventTargetArray **)*((_QWORD *)v14 + 3);
    v18 = *v17;
    if ( *v17 != a2 )
    {
      if ( a2 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *))(*(_QWORD *)a2 + 8LL))(a2);
        v18 = *v17;
      }
      v22 = v18;
      *v17 = a2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    }
    *(_QWORD *)(*((_QWORD *)v14 + 4) + 8 * ((__int64)(*((_QWORD *)v14 + 3) - *((_QWORD *)v14 + 2)) >> 3)) = a3;
    *((_QWORD *)v14 + 3) += 8LL;
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v19 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
    v20 = 0LL;
    if ( &v22 != (Microsoft::WRL::Details::EventTargetArray **)a1 )
    {
      *(_QWORD *)a1 = 0LL;
      v20 = v19;
      v19 = 0LL;
    }
    *(_QWORD *)a1 = v14;
    if ( v19 )
      ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release)();
    if ( a1 != -8 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 8));
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v11 = 0;
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v20);
  }
  else
  {
    if ( v22 )
    {
      if ( !ATL::SafeDecrementReferenceMultiThread((int *)v22 + 3) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  return (unsigned int)v11;
}
