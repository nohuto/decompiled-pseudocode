/*
 * XREFs of _lambda_a95b93df32bd5c2434c79e330695bd51_::operator() @ 0x1800EB1C8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_a95b93df32bd5c2434c79e330695bd51__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Do_call @ 0x1800EFE70 (std--_Func_impl_no_alloc__lambda_a95b93df32bd5c2434c79e330695bd51__void_Windows--In_ea_1800EFE70.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D8450 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D9FDC (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800E4260 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     std::function_void___cdecl(std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&)_::function_void___cdecl(std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&)___lambda_af431538d8c12ab4948a501325c7eb75__void_ @ 0x1800E9754 (std--function_void___cdecl(std--shared_ptr_Windows--Internal--SpatialInteractions--SpatialIntera.c)
 *     ?SpatialObjectDeviceInitializationDone_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJ@Z @ 0x1800ED70C (-SpatialObjectDeviceInitializationDone_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAX.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_a95b93df32bd5c2434c79e330695bd51_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // esi
  const wchar_t *v6; // rbx
  __int64 v7; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v8; // rcx
  RTL_SRWLOCK *v9; // rbx
  __int64 v10; // rsi
  _QWORD *v11; // rax
  int v12; // eax
  __int64 v13[2]; // [rsp+28h] [rbp-70h] BYREF
  std::_Ref_count_base *v14[2]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v15[9]; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a1 + 64LL))(*a1, a2);
  v6 = (const wchar_t *)(*a1 + 80);
  if ( *(_QWORD *)(*a1 + 104) >= 8uLL )
    v6 = *(const wchar_t **)v6;
  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v4) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v7,
      (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceInitializationDone_(v8, v6, v5);
  }
  v9 = (RTL_SRWLOCK *)(a1[1] + 712);
  AcquireSRWLockShared(v9);
  v10 = a1[1];
  if ( *(_BYTE *)(v10 + 720) )
  {
    *(_OWORD *)v14 = 0LL;
    v13[0] = *a1;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v13);
    v13[1] = v10;
    v11 = std::function_void___cdecl_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const____::function_void___cdecl_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const______lambda_af431538d8c12ab4948a501325c7eb75__void_(
            v15,
            v13);
    v12 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
            a1[1],
            v14,
            (__int64)v11,
            1);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        389LL,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)v12);
    if ( v14[1] )
      std::_Ref_count_base::_Decref(v14[1]);
  }
  if ( v9 )
    ReleaseSRWLockShared(v9);
}
