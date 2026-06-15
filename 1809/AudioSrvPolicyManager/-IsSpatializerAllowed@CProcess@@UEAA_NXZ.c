/*
 * XREFs of ?IsSpatializerAllowed@CProcess@@UEAA_NXZ @ 0x180017060
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001051C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CProcess::IsSpatializerAllowed(CProcess *this)
{
  int v1; // eax
  bool v2; // bl
  int v3; // eax
  __int64 v5; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+28h] [rbp-40h] BYREF
  HSTRING string; // [rsp+30h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = *((_DWORD *)this + 110);
  v2 = v1 != 0;
  v5 = 0LL;
  if ( v1 )
  {
    if ( WindowsCreateStringReference(
           L"Windows.Graphics.Holographic.HolographicDisplay",
           0x2Fu,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    if ( (int)RoGetActivationFactory(string, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v5) >= 0 )
    {
      v6 = 0LL;
      v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 64LL))(v5, &v6);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10D6,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v3);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      else
        v2 = 0;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v2;
}
