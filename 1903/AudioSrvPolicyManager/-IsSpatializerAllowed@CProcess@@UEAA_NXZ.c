/*
 * XREFs of ?IsSpatializerAllowed@CProcess@@UEAA_NXZ @ 0x180013EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000D240 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CProcess::IsSpatializerAllowed(CProcess *this)
{
  char v1; // bl
  int v2; // eax
  __int64 v4; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+28h] [rbp-40h] BYREF
  HSTRING string; // [rsp+30h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = 0LL;
  v1 = 1;
  if ( WindowsCreateStringReference(L"Windows.Graphics.Holographic.HolographicDisplay", 0x2Fu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  if ( (int)RoGetActivationFactory(string, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v4) < 0 )
    goto LABEL_8;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 64LL))(v4, &v5);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1108,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v2);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  else
LABEL_8:
    v1 = 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v1;
}
