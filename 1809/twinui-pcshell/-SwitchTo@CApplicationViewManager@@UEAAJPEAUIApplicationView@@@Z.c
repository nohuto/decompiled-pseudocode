/*
 * XREFs of ?SwitchTo@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18012E030
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_310dc8e09bda01c6ffd3caaf734d3fa2___ @ 0x18012A358 (ShellPositionerHelpers--PerformCallbackOnView__lambda_310dc8e09bda01c6ffd3caaf734d3fa2___.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::SwitchTo(CApplicationViewManager *this, struct IApplicationView *a2)
{
  char v2; // di
  char *v3; // rbx
  int v4; // ebx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IApplicationView **v8; // [rsp+60h] [rbp+20h] BYREF
  struct IApplicationView *v9; // [rsp+68h] [rbp+28h] BYREF
  IUnknown *punk; // [rsp+70h] [rbp+30h] BYREF

  v9 = a2;
  v2 = 1;
  v3 = (char *)this - 120;
  punk = 0LL;
  LODWORD(v8) = 2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*(_QWORD *)v3 + 32LL))(
    v3,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  v8 = &v9;
  v4 = ShellPositionerHelpers::PerformCallbackOnView__lambda_310dc8e09bda01c6ffd3caaf734d3fa2___(punk, (__int64)v9, &v8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( v4 >= 0 )
  {
    v4 = 0;
    v2 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D2,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v4);
  }
  if ( v2 )
  {
    v5 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v9 + 56LL))(v9);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        711LL,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v5);
  }
  return (unsigned int)v4;
}
