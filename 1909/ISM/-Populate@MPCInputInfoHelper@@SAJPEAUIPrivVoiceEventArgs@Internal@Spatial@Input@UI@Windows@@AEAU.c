/*
 * XREFs of ?Populate@MPCInputInfoHelper@@SAJPEAUIPrivVoiceEventArgs@Internal@Spatial@Input@UI@Windows@@AEAUMPCInputInfo@@@Z @ 0x1800930B0
 * Callers:
 *     ?OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z @ 0x180095CA0 (-OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUI.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputInfoHelper::Populate(
        struct Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *a1,
        struct MPCInputInfo *a2)
{
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *, char *))(*(_QWORD *)a1 + 48LL))(
         a1,
         (char *)a2 + 640);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      65LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcinputinfohelper.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *, char *))(*(_QWORD *)a1 + 56LL))(
         a1,
         (char *)a2 + 648);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      66LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcinputinfohelper.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  return 0LL;
}
