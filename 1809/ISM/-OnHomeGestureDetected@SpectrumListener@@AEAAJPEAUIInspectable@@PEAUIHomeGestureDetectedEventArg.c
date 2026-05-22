/*
 * XREFs of ?OnHomeGestureDetected@SpectrumListener@@AEAAJPEAUIInspectable@@PEAUIHomeGestureDetectedEventArgs@Internal@Mirage@Windows@@@Z @ 0x180059000
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

__int64 __fastcall SpectrumListener::OnHomeGestureDetected(
        SpectrumListener *this,
        struct IInspectable *a2,
        struct Windows::Mirage::Internal::IHomeGestureDetectedEventArgs *a3)
{
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _DWORD v10[4]; // [rsp+30h] [rbp-668h] BYREF
  int v11[400]; // [rsp+40h] [rbp-658h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+698h] [rbp+0h]

  memset_0(v11, 0, sizeof(v11));
  v5 = *(_QWORD *)a3;
  v10[0] = 0;
  v11[6] = 1600;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Mirage::Internal::IHomeGestureDetectedEventArgs *, _DWORD *))(v5 + 56))(
         a3,
         v10);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x93,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(
         0,
         10 - (unsigned int)(v10[0] != 2),
         512,
         *((_DWORD *)this + 6),
         (__int64)v11);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x97,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = MPCRawInputProvider::QueueInput(*((MPCRawInputProvider **)this + 2), (struct InputInfo *)v11);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x98,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x180059115LL);
  }
  return 0LL;
}
