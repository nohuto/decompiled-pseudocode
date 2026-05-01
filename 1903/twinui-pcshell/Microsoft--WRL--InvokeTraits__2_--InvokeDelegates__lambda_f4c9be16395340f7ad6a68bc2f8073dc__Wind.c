/*
 * XREFs of Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_f4c9be16395340f7ad6a68bc2f8073dc__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs_____ @ 0x18026256C
 * Callers:
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_f4c9be16395340f7ad6a68bc2f8073dc___ @ 0x180262414 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_180262414.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18004DF74 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180147EFC (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_f4c9be16395340f7ad6a68bc2f8073dc__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs_____(
        _QWORD **a1,
        __int64 a2,
        RTL_SRWLOCK *a3)
{
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 *v7; // r14
  struct IUnknown **i; // rsi
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
  for ( i = *(struct IUnknown ***)(v13[0] + 16); i != *(struct IUnknown ***)(v6 + 24); ++i )
  {
    v9 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))(*i)->lpVtbl[1].QueryInterface)(
           *i,
           (**a1 + 120LL) & -(__int64)(**a1 != 0LL),
           *a1[1]);
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
