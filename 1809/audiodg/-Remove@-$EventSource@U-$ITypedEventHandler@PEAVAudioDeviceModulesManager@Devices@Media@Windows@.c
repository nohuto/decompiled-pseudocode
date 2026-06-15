/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x14004DA84
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_f767560c0c974952e07d01e413afc9d2__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64___ @ 0x140046E90 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_f767560c0c974952e07d01e413afc9d2__Wind.c)
 *     ?remove_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x14004F100 (-remove_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJUEventR.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001AFC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001D7F4 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x1400471B0 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x140048468 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x14004903C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // r14
  __int64 v4; // rbx
  RTL_SRWLOCK v6; // rax
  int v7; // esi
  struct IUnknown **v8; // rcx
  bool v9; // r12
  __int64 v10; // r13
  __int64 v11; // r13
  __int64 v12; // r10
  struct IUnknown **v13; // rsi
  void **v14; // r14
  Microsoft::WRL::Details::EventTargetArray *v16; // [rsp+60h] [rbp+40h] BYREF
  __int64 v17; // [rsp+70h] [rbp+50h] BYREF
  __int64 v18; // [rsp+78h] [rbp+58h] BYREF

  v2 = a1 + 2;
  v4 = 0LL;
  v17 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  v6.Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    v7 = 0;
LABEL_10:
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return (unsigned int)v7;
  }
  v8 = (struct IUnknown **)*((_QWORD *)v6.Ptr + 2);
  v9 = 0;
  v10 = *((_QWORD *)v6.Ptr + 3);
  v16 = 0LL;
  v11 = ((v10 - (__int64)v8) >> 3) - 1;
  v18 = v11;
  if ( !v11 )
  {
    v9 = *v8 == a2;
LABEL_21:
    if ( v9 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v17, (char *)a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)a1, (char *)&v16);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      v4 = v17;
    }
    goto LABEL_25;
  }
  v7 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
         &v16,
         (unsigned __int64 *)&v18);
  if ( v7 < 0 )
  {
    if ( v16 )
    {
      if ( !(unsigned int)ATL::SafeDecrementReferenceMultiThread((int *)v16 + 3) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    goto LABEL_10;
  }
  v13 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
  if ( v13 != *((struct IUnknown ***)a1->Ptr + 3) )
  {
    v14 = (void **)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v9 || a2 != *v13 )
      {
        if ( !v11 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v16, *v13, *v14++);
        --v11;
      }
      else
      {
        v9 = 1;
      }
      ++v13;
    }
    while ( v13 != *((struct IUnknown ***)a1->Ptr + 3) );
    v2 = a1 + 2;
    goto LABEL_21;
  }
LABEL_25:
  if ( v16 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v16);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v7 = 0;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  return (unsigned int)v7;
}
