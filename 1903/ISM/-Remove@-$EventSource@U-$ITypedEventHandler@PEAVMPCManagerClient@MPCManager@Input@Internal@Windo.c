/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVServerConnectionArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180113ADC
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d0f00b216f9e073402124dc24bf27ba2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient___Windows::Internal::Input::MPCManager::HomeGestureEventArgs_____ @ 0x18010F11C (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_d0f00b216f9e073402124dc24bf27ba2__Wind.c)
 *     ?remove_ButtonsChangedDuringHomeGesture@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z @ 0x180115170 (-remove_ButtonsChangedDuringHomeGesture@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_HomeGestureReadyChanged@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z @ 0x180115190 (-remove_HomeGestureReadyChanged@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_InteractiveIntentGesture@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z @ 0x1801151B0 (-remove_InteractiveIntentGesture@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_OnHomeGestureDetected@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z @ 0x1801151D0 (-remove_OnHomeGestureDetected@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_ServerConnectionChanged@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z @ 0x1801151F0 (-remove_ServerConnectionChanged@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_68c34cd287e5a2a74578b99ce0d07767__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCConstantManagerClient___Windows::Internal::Input::MPCManager::ConstantChangedEventArgs_____ @ 0x180116F4C (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_68c34cd287e5a2a74578b99ce0d07767__Wind.c)
 *     ?remove_ConstantChanged@MPCConstantManagerClient@@UEAAJUEventRegistrationToken@@@Z @ 0x180122680 (-remove_ConstantChanged@MPCConstantManagerClient@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006B80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18010F53C (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18010FEDC (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18011069C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::ServerConnectionArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
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
  __int64 *v13; // r14
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
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v16, (char *)a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        (volatile signed __int32 **)a1,
        (char *)&v15);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      v4 = v16;
    }
    goto LABEL_23;
  }
  v7 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
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
    v13 = (__int64 *)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v9 || a2 != *v12 )
      {
        if ( !v11 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail((__int64 **)v15, *v12, *v13++);
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
