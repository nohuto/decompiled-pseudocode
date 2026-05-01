/*
 * XREFs of Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6467f9191169c2bc35f91af727f9d16b__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs_____ @ 0x180140390
 * Callers:
 *     _lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator() @ 0x1800324A4 (_lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___::Run @ 0x18004DFB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___--Run.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_6467f9191169c2bc35f91af727f9d16b___ @ 0x18013FFEC (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Internal--Composabl.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18004DF74 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180147EFC (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6467f9191169c2bc35f91af727f9d16b__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs_____(
        _QWORD **a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 *v7; // r14
  _QWORD *i; // rsi
  unsigned int v9; // eax
  int MatchingRestrictedErrorInfo; // ebx
  unsigned int v11; // eax
  __int64 v13[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v13[2] = -2LL;
  v5 = 0;
  v13[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v13, a2);
  v6 = v13[0];
  v7 = *(__int64 **)(v13[0] + 32);
  for ( i = *(_QWORD **)(v13[0] + 16); i != *(_QWORD **)(v6 + 24); ++i )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, **a1, *a1[1]);
    v5 = v9;
    if ( v9 == -2147417848 || v9 == -2147023174 || v9 == -1996357631 || v9 == -2147418105 || v9 == -2147418094 )
    {
      RoTransformError(v9, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        a3,
        *i);
      v5 = 0;
    }
    if ( (v5 & 0x80000000) != 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v13[1] = *v7;
        v14 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v14);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v14);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        v11 = 0;
        if ( MatchingRestrictedErrorInfo < 0 )
          v11 = v5;
        v5 = v11;
        v6 = v13[0];
        break;
      }
      RoTransformError(v5, 0LL, 0LL);
      v5 = 0;
    }
    ++v7;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13[0] + 24LL))(v13[0], 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v5;
}
