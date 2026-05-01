/*
 * XREFs of ?GetShouldShowTitleBarBackButton@CTaskWindow@@UEAA_NXZ @ 0x18002E280
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CTaskWindow::GetShouldShowTitleBarBackButton(CTaskWindow *this)
{
  char v1; // bl
  __int64 v2; // rdi
  HRESULT v3; // eax
  int v5; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+28h] [rbp-40h]
  HSTRING_HEADER v7; // [rsp+30h] [rbp-38h] BYREF
  HSTRING v8; // [rsp+48h] [rbp-20h] BYREF

  v6 = -2LL;
  v1 = 0;
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    v8 = 0LL;
    v3 = WindowsCreateStringReference(L"BackVisible", 0xBu, &v7, &v8);
    if ( v3 < 0 )
    {
      RaiseException(v3, 1u, 0, 0LL);
      JUMPOUT(0x1800BD250LL);
    }
    if ( (*(int (__fastcall **)(__int64, HSTRING, int *))(*(_QWORD *)v2 + 408LL))(v2, v8, &v5) >= 0 )
      return v5 == 0;
  }
  return v1;
}
