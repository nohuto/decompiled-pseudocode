/*
 * XREFs of ?IsInjecting@MPCGestureHandler@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180086638
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180086124 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008669C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180022274 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800E8F24 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall MPCGestureHandler::IsInjecting(__int64 a1, __int64 *a2)
{
  ManipulationInjector *v3; // rbx
  unsigned int v4; // eax

  v3 = (ManipulationInjector *)(a1 + 80);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 80LL))(*a2);
  LOBYTE(v3) = ManipulationInjector::IsInContactForDeviceId(v3, v4);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a2);
  return (char)v3;
}
