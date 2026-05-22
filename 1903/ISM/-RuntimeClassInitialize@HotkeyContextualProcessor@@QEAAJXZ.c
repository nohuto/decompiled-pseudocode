/*
 * XREFs of ?RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ @ 0x180108700
 * Callers:
 *     ??$MakeAndInitialize@VHotkeyContextualProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyContextualProcessor@@@Z @ 0x1800C1BB0 (--$MakeAndInitialize@VHotkeyContextualProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0sqq @ 0x18005A684 (McTemplateU0sqq.c)
 *     ??$MakeAndInitialize@VHotKeyProcessor@@V1@PEAVHotkeyContextualProcessor@@@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyProcessor@@$$QEAPEAVHotkeyContextualProcessor@@@Z @ 0x18010853C (--$MakeAndInitialize@VHotKeyProcessor@@V1@PEAVHotkeyContextualProcessor@@@Details@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@VTextInputStateAdapter@@UITextInputStateAdapter@@AEAPEAUITextInputStateAdapterOwner@@@Details@WRL@Microsoft@@YAJPEAPEAUITextInputStateAdapter@@AEAPEAUITextInputStateAdapterOwner@@@Z @ 0x180147D74 (--$MakeAndInitialize@VTextInputStateAdapter@@UITextInputStateAdapter@@AEAPEAUITextInputStateAdap.c)
 */

__int64 __fastcall HotkeyContextualProcessor::RuntimeClassInitialize(HotkeyContextualProcessor *this)
{
  int v2; // eax
  HotkeyContextualProcessor *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HotkeyContextualProcessor *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = this;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 4);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<HotKeyProcessor,HotKeyProcessor,HotkeyContextualProcessor *>(
         (HotKeyProcessor **)this + 4,
         &v14);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      54LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkeyco"
               "ntextualprocessor.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  if ( this )
    v3 = (HotkeyContextualProcessor *)((char *)this + 8);
  else
    v3 = 0LL;
  v14 = v3;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 5);
  if ( !v3 )
  {
    v6 = -2147024809;
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq(v5, v4, "TextInputStateAdapterCreate", 31LL, 87);
    goto LABEL_12;
  }
  v7 = Microsoft::WRL::Details::MakeAndInitialize<TextInputStateAdapter,ITextInputStateAdapter,ITextInputStateAdapterOwner * &>(
         (char *)this + 40,
         &v14);
  v6 = v7;
  if ( v7 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq(v9, v8, "TextInputStateAdapterCreate", 35LL, v7);
LABEL_12:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      56LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkeyco"
               "ntextualprocessor.cpp",
      (const char *)v6);
    __debugbreak();
  }
  LOBYTE(v10) = 1;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 5) + 304LL))(
          *((_QWORD *)this + 5),
          30LL,
          v10);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      59LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkeyco"
               "ntextualprocessor.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  return 0LL;
}
