/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x14004B374
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_a85bab6ed30f25d4a586828200a843fd__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ @ 0x1400446BC (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_a85bab6ed30f25d4a586828200a843fd__Wind.c)
 *     ?remove_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x14004CA10 (-remove_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJUEvent.c)
 *     ?remove_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x14004CA20 (-remove_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJUEventR.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x14000238C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1400023C8 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140013AF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x1400449B8 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // r14
  volatile signed __int32 *v4; // rbx
  RTL_SRWLOCK v6; // rax
  int v7; // esi
  struct IUnknown **v8; // rcx
  bool v9; // r12
  __int64 v10; // r13
  __int64 v11; // r13
  struct IUnknown **v12; // rsi
  void **v13; // r14
  Microsoft::WRL::Details::EventTargetArray *v15; // [rsp+60h] [rbp+40h] BYREF
  volatile signed __int32 *v16; // [rsp+70h] [rbp+50h] BYREF
  __int64 v17; // [rsp+78h] [rbp+58h] BYREF

  v2 = a1 + 2;
  v4 = 0LL;
  v16 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  v6.Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    v7 = 0;
LABEL_8:
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return (unsigned int)v7;
  }
  v8 = (struct IUnknown **)*((_QWORD *)v6.Ptr + 2);
  v9 = 0;
  v10 = *((_QWORD *)v6.Ptr + 3);
  v15 = 0LL;
  v11 = ((v10 - (__int64)v8) >> 3) - 1;
  v17 = v11;
  if ( !v11 )
  {
    v9 = *v8 == a2;
LABEL_19:
    if ( v9 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v16, (char *)a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)a1, (char *)&v15);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      v4 = v16;
    }
    goto LABEL_23;
  }
  v7 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
         (volatile signed __int32 **)&v15,
         (unsigned __int64 *)&v17);
  if ( v7 < 0 )
  {
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v15);
    goto LABEL_8;
  }
  v12 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
  if ( v12 != *((struct IUnknown ***)a1->Ptr + 3) )
  {
    v13 = (void **)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v9 || a2 != *v12 )
      {
        if ( !v11 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v15, *v12, *v13++);
        --v11;
      }
      else
      {
        v9 = 1;
      }
      ++v12;
    }
    while ( v12 != *((struct IUnknown ***)a1->Ptr + 3) );
    v2 = a1 + 2;
    goto LABEL_19;
  }
LABEL_23:
  if ( v15 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v15);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v7 = 0;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  return (unsigned int)v7;
}
