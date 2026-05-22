/*
 * XREFs of ?OnHomeGestureDetected@SpectrumListener@@AEAAJPEAUIInspectable@@PEAUIHomeGestureDetectedEventArgs@Internal@Mirage@Windows@@@Z @ 0x180095D30
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x1800935B4 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x180094AE4 (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 */

__int64 __fastcall SpectrumListener::OnHomeGestureDetected(
        SpectrumListener *this,
        struct IInspectable *a2,
        struct Windows::Mirage::Internal::IHomeGestureDetectedEventArgs *a3)
{
  __int64 v5; // rax
  int v6; // eax
  const char *v7; // r9
  int v8; // esi
  int v9; // edx
  int v10; // ebp
  int v11; // eax
  int v12; // eax
  _DWORD v14[4]; // [rsp+30h] [rbp-828h] BYREF
  int v15[508]; // [rsp+40h] [rbp-818h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+858h] [rbp+0h]

  memset_0(v15, 0, sizeof(v15));
  v5 = *(_QWORD *)a3;
  v14[0] = 0;
  v15[6] = 2032;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Mirage::Internal::IHomeGestureDetectedEventArgs *, _DWORD *))(v5 + 56))(
         a3,
         v14);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      226LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  if ( v14[0] == 1 )
  {
    AcquireSRWLockShared((PSRWLOCK)this + 12);
    if ( *((_QWORD *)this + 14) )
    {
      v10 = 512;
      v8 = *(_DWORD *)(**((_QWORD **)this + 13) + 32LL);
    }
    else
    {
      v8 = *((_DWORD *)this + 32);
      v10 = 0x400000;
    }
    if ( this != (SpectrumListener *)-96LL )
      ReleaseSRWLockShared((PSRWLOCK)this + 12);
    v9 = 9;
  }
  else
  {
    if ( v14[0] != 2 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        261LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
        v7);
      __debugbreak();
    }
    v8 = *((_DWORD *)this + 31);
    v9 = 10;
    v10 = 0x40000;
  }
  v11 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, v9, v10, v8, (__int64)v15);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      264LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = MPCRawInputProvider::QueueInput(*((MPCRawInputProvider **)this + 2), (struct InputInfo *)v15);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      265LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  return 0LL;
}
