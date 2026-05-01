/*
 * XREFs of ?GetShouldShowTitleBarBackButton@CTaskWindow@@UEAA_NXZ @ 0x180042120
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CTaskWindow::GetShouldShowTitleBarBackButton(CTaskWindow *this)
{
  char v1; // bl
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, HSTRING, int *); // rsi
  HRESULT v4; // eax
  int v6; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+28h] [rbp-40h]
  HSTRING_HEADER v8; // [rsp+30h] [rbp-38h] BYREF
  HSTRING v9; // [rsp+48h] [rbp-20h] BYREF

  v7 = -2LL;
  v1 = 0;
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    v3 = *(int (__fastcall **)(__int64, HSTRING, int *))(*(_QWORD *)v2 + 408LL);
    v9 = 0LL;
    v4 = WindowsCreateStringReference(L"BackVisible", 0xBu, &v8, &v9);
    if ( v4 < 0 )
    {
      RaiseException(v4, 1u, 0, 0LL);
      JUMPOUT(0x1800DD52CLL);
    }
    if ( v3(v2, v9, &v6) >= 0 )
      return v6 == 0;
  }
  return v1;
}
