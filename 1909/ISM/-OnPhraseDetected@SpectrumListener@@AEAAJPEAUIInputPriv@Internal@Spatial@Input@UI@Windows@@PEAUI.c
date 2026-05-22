/*
 * XREFs of ?OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z @ 0x180095CA0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Populate@MPCInputInfoHelper@@SAJPEAUIPrivVoiceEventArgs@Internal@Spatial@Input@UI@Windows@@AEAUMPCInputInfo@@@Z @ 0x1800930B0 (-Populate@MPCInputInfoHelper@@SAJPEAUIPrivVoiceEventArgs@Internal@Spatial@Input@UI@Windows@@AEAU.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x180093394 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x1800948C4 (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 */

__int64 __fastcall SpectrumListener::OnPhraseDetected(
        SpectrumListener *this,
        struct Windows::UI::Input::Spatial::Internal::IInputPriv *a2,
        struct Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *a3)
{
  int v5; // r9d
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10[16]; // [rsp+30h] [rbp-808h] BYREF
  _BYTE v11[1968]; // [rsp+70h] [rbp-7C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+838h] [rbp+0h]

  memset_0(v10, 0, 0x7F0uLL);
  v5 = *((_DWORD *)this + 31);
  v10[6] = 2032;
  v6 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 7, 0x40000, v5, (__int64)v10);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      294LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = MPCInputInfoHelper::Populate(a3, (struct MPCInputInfo *)v11);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      296LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = MPCRawInputProvider::QueueInput(*((MPCRawInputProvider **)this + 2), (struct InputInfo *)v10);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      297LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  return 0LL;
}
