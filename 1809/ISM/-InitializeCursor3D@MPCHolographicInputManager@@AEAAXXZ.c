/*
 * XREFs of ?InitializeCursor3D@MPCHolographicInputManager@@AEAAXXZ @ 0x1800423B8
 * Callers:
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x180042F48 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHolographicInputManager::InitializeCursor3D(MPCHolographicInputManager *this)
{
  int v2; // eax
  int v3; // eax
  __int64 (__fastcall ***v4)(_QWORD, GUID *, char *); // rdi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, char *); // rcx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, char *); // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v10[3]; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD v11[248]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+450h] [rbp+348h]

  v10[1] = -2LL;
  v9 = 0LL;
  v10[0] = 0LL;
  memset_0(v11, 0, 0x3D8uLL);
  v11[2] = 984;
  v11[1] = 514;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 226) + 72LL))(*((_QWORD *)this + 226), v10);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3D1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v10[0] + 24LL))(
         v10[0],
         v11,
         1LL,
         &v9);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3D2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x180042582LL);
  }
  v4 = v9;
  v5 = *((_QWORD *)this + 232);
  if ( v5 )
  {
    *((_QWORD *)this + 232) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (**v4)(v4, &GUID_a906d320_9167_4955_a961_8a982929b899, (char *)this + 1856);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3D3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = v10[0];
  if ( v10[0] )
  {
    v10[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v8)[2])(v8);
  }
}
