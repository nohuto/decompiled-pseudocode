/*
 * XREFs of ?SwitchTo@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1801576A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_0287d14f7e0736f839859862c6d8b070___ @ 0x180153A4C (ShellPositionerHelpers--PerformCallbackOnView__lambda_0287d14f7e0736f839859862c6d8b070___.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::SwitchTo(CApplicationViewManager *this, struct IApplicationView *a2)
{
  char v2; // di
  int v3; // ebx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IApplicationView **v7; // [rsp+60h] [rbp+20h] BYREF
  struct IApplicationView *v8; // [rsp+68h] [rbp+28h] BYREF
  IUnknown *punk; // [rsp+70h] [rbp+30h] BYREF

  v8 = a2;
  v2 = 1;
  punk = 0LL;
  LODWORD(v7) = 2;
  (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 15) + 32LL))(
    (char *)this - 120,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  v7 = &v8;
  v3 = ShellPositionerHelpers::PerformCallbackOnView__lambda_0287d14f7e0736f839859862c6d8b070___(punk, (__int64)v8, &v7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( v3 >= 0 )
  {
    v3 = 0;
    v2 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D2,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v3);
  }
  if ( v2 )
  {
    v4 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v8 + 56LL))(v8);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2C7,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v4);
  }
  return (unsigned int)v3;
}
