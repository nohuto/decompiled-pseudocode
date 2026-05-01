/*
 * XREFs of ?_IsCortanaAltTabProxyWindowView@SwitchItem@@AEAA_NPEAUIApplicationView@@@Z @ 0x18037FCC4
 * Callers:
 *     ?RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z @ 0x18037FAF8 (-RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall SwitchItem::_IsCortanaAltTabProxyWindowView(SwitchItem *this, struct IApplicationView *a2)
{
  bool v2; // di
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp-238h] BYREF
  HWND hWnd; // [rsp+38h] [rbp-230h] BYREF
  WCHAR ClassName[264]; // [rsp+40h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  v2 = 0;
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
         &v6) >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v6 + 24LL))(v6, &hWnd);
    if ( v4 >= 0 )
    {
      if ( GetClassNameW(hWnd, ClassName, 260) )
        v2 = CompareStringOrdinal(ClassName, -1, L"Shell_CortanaProxy", -1, 1) == 2;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB0,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitem.cpp",
        (const char *)(unsigned int)v4);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  return v2;
}
