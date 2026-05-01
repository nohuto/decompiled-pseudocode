/*
 * XREFs of ?SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18005B290
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_8dfae0f1a0c35483e19f36087ce437d3___ @ 0x18005B370 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_8dfae0f1a0c35483e19f36087ce437d3___.c)
 *     ?ReconcileTitleBarconfiguration@@YA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@AEBUAppTitlebarConfiguration@@PEAUIApplicationViewTitlebarConfiguration@@W4APP_CHROME_CONFIGURATION_POLICY@@@Z @ 0x18005B540 (-ReconcileTitleBarconfiguration@@YA-AV-$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_e.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetTitlebarConfiguration(
        CFrameApplicationPresentation *this,
        struct IApplicationViewTitlebarConfiguration *a2)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    v4 = *((_QWORD *)this + 80);
    *((_QWORD *)this + 80) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)a2 + 8LL))(a2);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    ReconcileTitleBarconfiguration(&v10, (char *)this + 648, a2, *((unsigned int *)this + 163), -2LL);
    v8[0] = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v8[1] = this;
    v5 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_8dfae0f1a0c35483e19f36087ce437d3___(this, v8);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    result = v5;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x601,
                           (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
                           v6);
  }
  return result;
}
