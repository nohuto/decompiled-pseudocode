/*
 * XREFs of Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_c8fac60120d0355ff66629c823b43c3a__Windows::Foundation::IEventHandler_IInspectable_____ @ 0x100078FC
 * Callers:
 *     Microsoft::WRL::EventSource_Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_c8fac60120d0355ff66629c823b43c3a___ @ 0x100078A0 (Microsoft--WRL--EventSource_Windows--Foundation--IEventHandler_IInspectable____Microsoft--WRL--I.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMarshal@@@WRL@Microsoft@@IAEKXZ @ 0x100074B4 (-InternalRelease@-$ComPtr@UIMarshal@@@WRL@Microsoft@@IAEKXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__stdcall_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::FtmBase___lambda_046e550ea9397cce661af54b6af0d395___1_IInspectable___IInspectable___::Invoke @ 0x100079C0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__stdcall_Windows--Foundation--IEventHandler_im.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QAEAAV012@PAVEventTargetArray@Details@12@@Z @ 0x10007A3B (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QAEAAV012@PAVEventTargetArr.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UAGKXZ @ 0x100094C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAEJUEventRegistrationToken@@@Z @ 0x10010E2B (-Remove@-$EventSource@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOption.c)
 */

int __thiscall Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_c8fac60120d0355ff66629c823b43c3a__Windows::Foundation::IEventHandler_IInspectable_____(
        void *this,
        int *a2,
        int *a3)
{
  int v3; // edi
  _DWORD **v4; // ebx
  int v5; // eax
  int (__thiscall *v6)(_DWORD, int *, int, int); // edi
  int v7; // eax
  int *v9; // [esp-Ch] [ebp-28h]
  int v10; // [esp-8h] [ebp-24h]
  int v11; // [esp-4h] [ebp-20h]
  int v12; // [esp+18h] [ebp-4h] BYREF

  v3 = 0;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(this);
  v4 = (_DWORD **)MEMORY[0xC];
  v12 = MEMORY[0x14];
  while ( v4 != (_DWORD **)MEMORY[0x10] )
  {
    v11 = *a3;
    v5 = **v4;
    v10 = *a2;
    v9 = *v4;
    v6 = *(int (__thiscall **)(_DWORD, int *, int, int))(v5 + 12);
    if ( (char *)v6 == (char *)Microsoft::WRL::Details::DelegateArgTraits_long____stdcall_Windows::Foundation::IEventHandler_impl_IInspectable___::___IInspectable___IInspectable____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::FtmBase___lambda_046e550ea9397cce661af54b6af0d395___1_IInspectable___IInspectable___::Invoke )
      v7 = Microsoft::WRL::Details::DelegateArgTraits_long____stdcall_Windows::Foundation::IEventHandler_impl_IInspectable___::___IInspectable___IInspectable____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::FtmBase___lambda_046e550ea9397cce661af54b6af0d395___1_IInspectable___IInspectable___::Invoke(
             v9,
             v10,
             v11);
    else
      v7 = v6(*(_DWORD *)(v5 + 12), v9, v10, v11);
    v3 = v7;
    if ( v7 == -2147417848 || v7 == -2147023174 || v7 == -1996357631 || v7 == -2147418105 || v7 == -2147418094 )
    {
      RoTransformError(v7, 0, 0);
      Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        *v4,
        (int)*v4 >> 31);
      v3 = 0;
    }
    if ( v3 < 0 )
    {
      if ( IsErrorPropagationEnabled() )
      {
        v12 = 0;
        Microsoft::WRL::ComPtr<IMarshal>::InternalRelease(&v12);
        if ( (int)RoGetMatchingRestrictedErrorInfo(v3, &v12) >= 0 && (int)RoReportFailedDelegate(*v4, v12) >= 0 )
          v3 = 0;
        Microsoft::WRL::ComPtr<IMarshal>::InternalRelease(&v12);
        break;
      }
      RoTransformError(v3, 0, 0);
      v3 = 0;
    }
    v12 += 4;
    ++v4;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(0);
  return v3;
}
