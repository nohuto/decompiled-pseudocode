/*
 * XREFs of ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x1800599D8
 * Callers:
 *     ?OnMessageCallbackStatic@SpeechRuntimeListener@@CAJPEAXPEBXH@Z @ 0x180059D40 (-OnMessageCallbackStatic@SpeechRuntimeListener@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x180056F34 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x180059900 (-LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpeechRuntimeListener::OnSelect(SpeechRuntimeListener *this)
{
  _DWORD *v2; // rdx
  ISMTracing *v3; // rcx
  int v4; // r9d
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v9[4]; // [rsp+30h] [rbp-658h] BYREF
  __int64 v10; // [rsp+40h] [rbp-648h]
  int v11; // [rsp+48h] [rbp-640h]
  int v12; // [rsp+4A8h] [rbp-1E0h]
  __int64 v13; // [rsp+4B0h] [rbp-1D8h]
  int v14; // [rsp+4BCh] [rbp-1CCh]
  wil::details::in1diag3 *retaddr; // [rsp+688h] [rbp+0h]

  v2 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v2 && *v2 )
  {
    ISMTracing::Instance();
    ISMTracing::LogSpeechRuntimeListenerFunct_(v3, L"OnSelect");
  }
  memset_0(v9, 0, 0x640uLL);
  v4 = *((_DWORD *)this + 20);
  v11 = 1600;
  v5 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 7, 0x40000, v4, (__int64)v9);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x180059AE6LL);
  }
  v6 = *((_QWORD *)this + 9);
  v14 = -1;
  v13 = v10;
  v12 = 1;
  v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 24LL))(v6, v9);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  return 0LL;
}
