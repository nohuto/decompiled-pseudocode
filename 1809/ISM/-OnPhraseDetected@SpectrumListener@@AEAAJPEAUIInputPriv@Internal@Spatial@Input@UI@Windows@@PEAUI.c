/*
 * XREFs of ?OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z @ 0x180059270
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x180056F34 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x180057994 (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
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
  int v9; // eax
  int v11[286]; // [rsp+30h] [rbp-658h] BYREF
  _BYTE v12[8]; // [rsp+4A8h] [rbp-1E0h] BYREF
  _BYTE v13[448]; // [rsp+4B0h] [rbp-1D8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+688h] [rbp+0h]

  memset_0(v11, 0, 0x640uLL);
  v5 = *((_DWORD *)this + 6);
  v11[6] = 1600;
  v6 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 7, 512, v5, (__int64)v11);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xB5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *, _BYTE *))(*(_QWORD *)a3 + 48LL))(
         a3,
         v12);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcinputinfohelper.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *, _BYTE *))(*(_QWORD *)a3 + 56LL))(
         a3,
         v13);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcinputinfohelper.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = MPCRawInputProvider::QueueInput(*((MPCRawInputProvider **)this + 2), (struct InputInfo *)v11);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xB8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v9);
    JUMPOUT(0x1800593B3LL);
  }
  return 0LL;
}
