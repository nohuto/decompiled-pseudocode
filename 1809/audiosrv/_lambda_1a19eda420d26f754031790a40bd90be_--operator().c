/*
 * XREFs of _lambda_1a19eda420d26f754031790a40bd90be_::operator() @ 0x1800EA01C
 * Callers:
 *     wil::details::lambda_call__lambda_1a19eda420d26f754031790a40bd90be___::_lambda_call__lambda_1a19eda420d26f754031790a40bd90be___ @ 0x1800E9FC0 (wil--details--lambda_call__lambda_1a19eda420d26f754031790a40bd90be___--_lambda_call__lambda_1a19.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800EA36C (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?attach@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUISubmixProxy@@@Z @ 0x1800CCDD4 (-attach@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUISubmixProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_1a19eda420d26f754031790a40bd90be_::operator()(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a1;
  if ( *(_QWORD *)(*a1 + 48) )
  {
    v4 = 0LL;
    wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::attach(&v4, *(_QWORD *)(v2 + 64));
    v3 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 88LL))(v4, &v3) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 32LL))(v3, *(_QWORD *)(*a1 + 48));
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v3);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v4);
  }
}
