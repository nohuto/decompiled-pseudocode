/*
 * XREFs of ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x18000B684
 * Callers:
 *     ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x18000B5C8 (-DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ.c)
 *     ?RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x18000D890 (-RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView.c)
 *     ?OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ @ 0x18015AD40 (-OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?PurloinForeground@HolographicForegroundAssistant@@UEAAJXZ @ 0x1801B9540 (-PurloinForeground@HolographicForegroundAssistant@@UEAAJXZ.c)
 *     ?IsDesktopInputContext@@YA_NXZ @ 0x1802E7EA0 (-IsDesktopInputContext@@YA_NXZ.c)
 * Callees:
 *     ??$GetActivationFactory@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000B730 (--$GetActivationFactory@V-$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Holographic::GetUserDisplayContext(
        Windows::Internal::Shell::Holographic *this,
        enum Windows::Internal::Shell::Holographic::UserDisplayContext *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  _QWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7[1] = -2LL;
  v7[0] = 0LL;
  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v8,
    L"Windows.Internal.Shell.Holographic.ContextIdentifier",
    0x35u,
    0x34u);
  v3 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IContextIdentifierStatics>>(
         v9,
         v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 70LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"internal\\onecoreuapshell\\inc\\holographicsession.h",
      (const char *)(unsigned int)v3,
      v7[0]);
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, Windows::Internal::Shell::Holographic *))(*(_QWORD *)v7[0] + 56LL))(
         v7[0],
         this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 72LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
  return v4;
}
