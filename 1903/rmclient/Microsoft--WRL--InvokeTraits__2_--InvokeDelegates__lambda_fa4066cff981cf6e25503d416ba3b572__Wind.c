/*
 * XREFs of Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_fa4066cff981cf6e25503d416ba3b572__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ @ 0x10007B2B
 * Callers:
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CGX_K0@Z @ 0x10008790 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CGX_K0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMarshal@@@WRL@Microsoft@@IAEKXZ @ 0x100074B4 (-InternalRelease@-$ComPtr@UIMarshal@@@WRL@Microsoft@@IAEKXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QAEAAV012@PAVEventTargetArray@Details@12@@Z @ 0x10007A3B (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QAEAAV012@PAVEventTargetArr.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__stdcall_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::AppMemoryUsageLimitChangingEventArgs___Windows::System::IAppMemoryUsageLimitChangingEventArgs_____::_)(IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs____Microsoft::WRL::FtmBase___lambda_8fe8453917231015a81499f07f9fc156___1_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___::Invoke @ 0x10007AB0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__stdcall_Windows--Foundation--IEve_ea_10007AB0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UAGKXZ @ 0x100094C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAEJUEventRegistrationToken@@@Z @ 0x10010F84 (-Remove@-$EventSource@U-$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@.c)
 */

int __thiscall Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_fa4066cff981cf6e25503d416ba3b572__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____(
        volatile signed __int32 *this,
        int *a2,
        int *a3)
{
  int v3; // edi
  Microsoft::WRL::Details::EventTargetArray *v4; // esi
  _DWORD **v5; // ebx
  int v6; // eax
  int (__stdcall *v7)(int, char, char); // edi
  int v8; // eax
  int *v10; // [esp-Ch] [ebp-24h]
  int v11; // [esp-8h] [ebp-20h]
  int v12; // [esp-4h] [ebp-1Ch]
  Microsoft::WRL::Details::EventTargetArray *v13; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h] BYREF

  v3 = 0;
  v13 = 0;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v13, this);
  v4 = v13;
  v5 = (_DWORD **)*((_DWORD *)v13 + 3);
  v14 = *((_DWORD *)v13 + 5);
  while ( v5 != *((_DWORD ***)v4 + 4) )
  {
    v12 = *a3;
    v6 = **v5;
    v11 = *a2;
    v10 = *v5;
    v7 = *(int (__stdcall **)(int, char, char))(v6 + 12);
    if ( v7 == Microsoft::WRL::Details::DelegateArgTraits_long____stdcall_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::AppMemoryUsageLimitChangingEventArgs___Windows::System::IAppMemoryUsageLimitChangingEventArgs_____::___IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs____Microsoft::WRL::FtmBase___lambda_8fe8453917231015a81499f07f9fc156___1_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___::Invoke )
      v8 = Microsoft::WRL::Details::DelegateArgTraits_long____stdcall_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::AppMemoryUsageLimitChangingEventArgs___Windows::System::IAppMemoryUsageLimitChangingEventArgs_____::___IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs____Microsoft::WRL::FtmBase___lambda_8fe8453917231015a81499f07f9fc156___1_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___::Invoke(
             (int)v10,
             v11,
             v12);
    else
      v8 = ((int (__thiscall *)(_DWORD, int *, int, int))v7)(*(_DWORD *)(v6 + 12), v10, v11, v12);
    v3 = v8;
    if ( v8 == -2147417848 || v8 == -2147023174 || v8 == -1996357631 || v8 == -2147418105 || v8 == -2147418094 )
    {
      RoTransformError(v8, 0, 0);
      Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        *v5,
        (int)*v5 >> 31);
      v3 = 0;
    }
    if ( v3 < 0 )
    {
      if ( IsErrorPropagationEnabled() )
      {
        v14 = 0;
        Microsoft::WRL::ComPtr<IMarshal>::InternalRelease(&v14);
        if ( (int)RoGetMatchingRestrictedErrorInfo(v3, &v14) >= 0 && (int)RoReportFailedDelegate(*v5, v14) >= 0 )
          v3 = 0;
        Microsoft::WRL::ComPtr<IMarshal>::InternalRelease(&v14);
        v4 = v13;
        break;
      }
      RoTransformError(v3, 0, 0);
      v3 = 0;
    }
    v14 += 4;
    ++v5;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  return v3;
}
