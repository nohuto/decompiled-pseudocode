/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x140017D70
 * Callers:
 *     ?remove_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x140017D60 (-remove_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJUEvent.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d65a1343ddfc987a61a87e0c3596fa56__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___ @ 0x140046CFC (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_d65a1343ddfc987a61a87e0c3596fa56__Wind.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001AFC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001D7F4 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x1400471B0 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x14004903C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // rbp
  PVOID v5; // rbx
  _QWORD *Ptr; // rax
  int v7; // edi
  struct IUnknown **v8; // rcx
  Microsoft::WRL::Details::EventTargetArray *v9; // rdi
  bool v10; // r12
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // r10
  struct IUnknown **v14; // r15
  void **v15; // rbp
  PVOID v16; // rcx
  Microsoft::WRL::Details::EventTargetArray *v17; // rax
  Microsoft::WRL::Details::EventTargetArray *v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  v2 = a1 + 2;
  v5 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    v7 = 0;
LABEL_10:
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return (unsigned int)v7;
  }
  v8 = (struct IUnknown **)Ptr[2];
  v9 = 0LL;
  v10 = 0;
  v11 = Ptr[3] - (_QWORD)v8;
  v19 = 0LL;
  v12 = (v11 >> 3) - 1;
  v20 = v12;
  if ( v12 )
  {
    v7 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
           &v19,
           &v20);
    if ( v7 < 0 )
    {
      if ( v19 )
      {
        if ( !ATL::SafeDecrementReferenceMultiThread((int *)v19 + 3) )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      goto LABEL_10;
    }
    v9 = v19;
    v14 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
    if ( v14 == *((struct IUnknown ***)a1->Ptr + 3) )
      goto LABEL_28;
    v15 = (void **)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v10 || a2 != *v14 )
      {
        if ( !v12 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v9, *v14, *v15++);
        --v12;
      }
      else
      {
        v10 = 1;
      }
      ++v14;
    }
    while ( v14 != *((struct IUnknown ***)a1->Ptr + 3) );
    v2 = a1 + 2;
  }
  else
  {
    v10 = *v8 == a2;
  }
  if ( v10 )
  {
    AcquireSRWLockExclusive(a1 + 1);
    v16 = a1->Ptr;
    if ( &v19 != (Microsoft::WRL::Details::EventTargetArray **)a1 )
    {
      a1->Ptr = 0LL;
      v5 = v16;
      v16 = 0LL;
    }
    v17 = v9;
    v9 = 0LL;
    a1->Ptr = v17;
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v16);
    if ( a1 == (RTL_SRWLOCK *)-8LL )
      goto LABEL_30;
    ReleaseSRWLockExclusive(a1 + 1);
  }
LABEL_28:
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v9);
LABEL_30:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v7 = 0;
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
  return (unsigned int)v7;
}
