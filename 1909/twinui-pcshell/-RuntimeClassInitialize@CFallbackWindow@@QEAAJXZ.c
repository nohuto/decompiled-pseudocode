/*
 * XREFs of ?RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ @ 0x1801437B8
 * Callers:
 *     ??$MakeAndInitialize@VCFallbackWindow@@UIFallbackWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIFallbackWindow@@@Z @ 0x180142A04 (--$MakeAndInitialize@VCFallbackWindow@@UIFallbackWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIF.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800832E0 (--$GetActivationFactory@V-$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?InitializeSpecialWindow@CIAMSpecialWindowBase@@IEAAJPEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x18014331C (-InitializeSpecialWindow@CIAMSpecialWindowBase@@IEAAJPEBUSPECIAL_WINDOW_INIT_DATA@@@Z.c)
 */

__int64 __fastcall CFallbackWindow::RuntimeClassInitialize(CFallbackWindow *this)
{
  int v2; // ebx
  int v3; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = 0LL;
  hstringHeader.Reserved.Reserved1 = L"ApplicationManager_ImmersiveShellWindow";
  *(_DWORD *)&hstringHeader.Reserved.Reserved2[16] = 12;
  v2 = CIAMSpecialWindowBase::InitializeSpecialWindow(
         (CFallbackWindow *)((char *)this + 24),
         (const struct SPECIAL_WINDOW_INIT_DATA *)&hstringHeader);
  if ( v2 >= 0 )
  {
    SetPropW(*((HWND *)this + 5), L"UIA_WindowVisibilityOverridden", HANDLE_FLAG_PROTECT_FROM_CLOSE);
    ShowWindow(*((HWND *)this + 5), 4);
    v2 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                          + 24LL))(
           CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
           *((_QWORD *)this + 5),
           0LL);
    if ( v2 >= 0 )
    {
      v6 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Internal.Shell.Holographic.ContextIdentifier",
        0x35u,
        0x34u);
      v3 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IContextIdentifierStatics>>(
             v6,
             (__int64 *)this + 16);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x133,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\iamspecialwnd.cpp",
          (const char *)(unsigned int)v3);
    }
  }
  return (unsigned int)v2;
}
