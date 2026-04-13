/*
 * XREFs of ?EnableLockScreenRotationAsync@ContentManagementService@ContentManagement@@UEAAJEPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18002A460
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020AA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     ??0?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x18003BAD8 (--0-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler_ea_18003BAD8.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CABF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800CAE48 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ContentManagement::ContentManagementService::EnableLockScreenRotationAsync(
        ContentManagement::ContentManagementService *this,
        char a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  volatile signed __int64 *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  volatile signed __int64 *v8; // r14
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  volatile signed __int64 **v13; // rax
  int v14; // edi
  void *v15; // rax
  __int64 v16; // rsi
  _DWORD v18[4]; // [rsp+40h] [rbp-20h] BYREF
  volatile signed __int64 *v19; // [rsp+50h] [rbp-10h] BYREF
  char v20; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v5 = (volatile signed __int64 *)((char *)this - 56);
  if ( this != (ContentManagement::ContentManagementService *)56 )
  {
    v6 = *((_QWORD *)v5 + 14);
    while ( v6 >= 0 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange64(v5 + 14, v6 + 1, v6);
      if ( v7 == v6 )
        goto LABEL_6;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v6 + 16));
LABEL_6:
    v5 = (volatile signed __int64 *)((char *)this - 56);
  }
  v8 = v5;
  v19 = v5;
  if ( v5 )
  {
    v9 = *((_QWORD *)v5 + 14);
    while ( v9 >= 0 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64(v5 + 14, v9 + 1, v9);
      if ( v10 == v9 )
        goto LABEL_12;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v9 + 16));
LABEL_12:
    v8 = v19;
    v5 = (volatile signed __int64 *)((char *)this - 56);
  }
  v20 = a2;
  v18[0] = 3;
  v18[1] = 128;
  v18[2] = 0;
  v11 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    *v11 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
    v13 = (volatile signed __int64 **)(v11 + 1);
    v12[1] = 0LL;
    if ( v12 + 1 != &v19 )
    {
      *v13 = v5;
      v8 = 0LL;
      v19 = 0LL;
    }
    *((_BYTE *)v12 + 16) = a2;
    *v12 = off_1800DB1F0;
    *((_DWORD *)v12 + 6) = 0;
    `eh vector constructor iterator'(
      v12 + 4,
      8uLL,
      1uLL,
      (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
    *((_DWORD *)v12 + 6) = 0;
  }
  else
  {
    v12 = 0LL;
  }
  *a3 = 0LL;
  if ( !v12 )
    goto LABEL_19;
  v15 = operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = 0LL;
  if ( v15 )
    v16 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
            v15,
            v18,
            L"Windows.Foundation.IAsyncAction",
            0LL);
  if ( !v16 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v12)(v12, 1LL);
LABEL_19:
    v14 = -2147024882;
    goto LABEL_28;
  }
  *(_QWORD *)(v16 + 256) = v12;
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v16 + 8) + 104LL))(v16 + 8);
  if ( v14 >= 0 )
  {
    *a3 = (struct Windows::Foundation::IAsyncAction *)(v16 + 176);
    v16 = 0LL;
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v16 + 8) + 16LL))(v16 + 8);
LABEL_28:
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v8);
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x222,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v14);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v5);
  return (unsigned int)v14;
}
