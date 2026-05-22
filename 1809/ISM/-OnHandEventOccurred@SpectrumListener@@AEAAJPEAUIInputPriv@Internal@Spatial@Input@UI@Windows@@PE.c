/*
 * XREFs of ?OnHandEventOccurred@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUILegacyPrivHandEventArgs@34567@@Z @ 0x180058DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180044D7C (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?Populate@MPCInputInfoHelper@@SAJPEAUILegacyPrivHandEventArgs@Internal@Spatial@Input@UI@Windows@@AEAUMPCInputInfo@@@Z @ 0x180056B2C (-Populate@MPCInputInfoHelper@@SAJPEAUILegacyPrivHandEventArgs@Internal@Spatial@Input@UI@Windows@.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x180056F34 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x180057994 (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpectrumListener::OnHandEventOccurred(
        SpectrumListener *this,
        struct Windows::UI::Input::Spatial::Internal::IInputPriv *a2,
        struct Windows::UI::Input::Spatial::Internal::ILegacyPrivHandEventArgs *a3)
{
  const char *v6; // r9
  int v7; // eax
  const char *v8; // r9
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  struct Windows::Foundation::Numerics::float4x4 *v13; // r8
  int v14; // eax
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v17[4]; // [rsp+34h] [rbp-CCh] BYREF
  _OWORD v18[4]; // [rsp+80h] [rbp-80h] BYREF
  int v19[125]; // [rsp+C0h] [rbp-40h] BYREF
  char v20; // [rsp+2B4h] [rbp+1B4h]
  _BYTE v21[824]; // [rsp+2C8h] [rbp+1C8h] BYREF
  _BYTE v22[256]; // [rsp+600h] [rbp+500h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+728h] [rbp+628h]

  memset_0(v19, 0, 0x640uLL);
  v19[6] = 1600;
  v16 = 1;
  if ( !a3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x64,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      v6);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::ILegacyPrivHandEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v16);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x66,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  if ( v16 == 1 )
  {
    v9 = 5;
  }
  else if ( v16 == 2 )
  {
    v9 = 4;
  }
  else
  {
    v9 = 2;
    if ( v16 == 4 )
    {
      v9 = 6;
    }
    else if ( v16 != 8 )
    {
      if ( v16 != 16 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x7B,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
          v8);
        __debugbreak();
      }
      v9 = 3;
    }
  }
  v10 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, v9, 512, *((_DWORD *)this + 6), (__int64)v19);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v20 = 1;
  v11 = MPCInputInfoHelper::Populate(a3, (struct MPCInputInfo *)v21);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x81,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  memset_0(v18, 0, sizeof(v18));
  v12 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::IInputPriv *, _OWORD *))(*(_QWORD *)a2 + 96LL))(
          a2,
          v18);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v17[0] = v18[0];
  v17[1] = v18[1];
  v17[2] = v18[2];
  v17[3] = v18[3];
  Windows::Foundation::Numerics::invert(
    (Windows::Foundation::Numerics *)v17,
    (const struct Windows::Foundation::Numerics::float4x4 *)v22,
    v13);
  v14 = MPCRawInputProvider::QueueInput(*((MPCRawInputProvider **)this + 2), (struct InputInfo *)v19);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x88,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v14);
    JUMPOUT(0x180058FEALL);
  }
  return 0LL;
}
