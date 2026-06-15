/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x14000227C
 * Callers:
 *     ?add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1400021E0 (-add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU-$ITy.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x14000238C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1400023C8 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x140002450 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140013AF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  RTL_SRWLOCK *v4; // rbx
  _QWORD *Ptr; // rcx
  __int64 v10; // rcx
  int v11; // edi
  _QWORD *v12; // rax
  Microsoft::WRL::Details::EventTargetArray *v13; // rcx
  void **v15; // r14
  struct IUnknown **i; // rdi
  __int64 v17[7]; // [rsp+20h] [rbp-38h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = a1 + 2;
  v19 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v18 = 0LL;
  if ( Ptr )
    v10 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) + 1;
  else
    v10 = 1LL;
  v17[0] = v10;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v18,
          v17);
  if ( v11 < 0 )
  {
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release();
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  else
  {
    v12 = a1->Ptr;
    if ( a1->Ptr )
    {
      v15 = (void **)v12[4];
      for ( i = (struct IUnknown **)v12[2]; i != (struct IUnknown **)v12[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v18, *i, *v15);
        v12 = a1->Ptr;
        ++v15;
      }
    }
    v13 = v18;
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v13, a2, a3);
    AcquireSRWLockExclusive(a1 + 1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v19, a1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v18);
    if ( a1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(a1 + 1);
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release();
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v11 = 0;
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release();
  }
  return (unsigned int)v11;
}
