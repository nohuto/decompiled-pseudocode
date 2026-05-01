/*
 * XREFs of _lambda_490495f22ac349c27ec948cdb66a4eae_::operator() @ 0x18039B750
 * Callers:
 *     ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x18039E220 (-RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18016D6F4 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x18039ABCC (--$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall lambda_490495f22ac349c27ec948cdb66a4eae_::operator()(__int64 **a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 *result; // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int64 *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = **a1;
  if ( v4 == *a1[1] )
  {
    wil::MakeAndInitializeOrThrow<ApplicationViewOperation,>(&v9);
    *((_WORD *)v9 + 56) = 1;
    v7 = (*(__int64 (__fastcall **)(_QWORD, volatile signed __int64 *))(*(_QWORD *)*a2 + 320LL))(*a2, v9);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        232LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v7);
    return (__int64 *)Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v9);
  }
  else
  {
    v9 = *(volatile signed __int64 **)(v4 + 16);
    v10 = *a2;
    v5 = a1[2][7];
    if ( !v5 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int64 *, volatile signed __int64 **))(*(_QWORD *)v5 + 16LL))(v5, &v10, &v9);
    result = (__int64 *)**a1;
    **a1 = *result;
  }
  return result;
}
