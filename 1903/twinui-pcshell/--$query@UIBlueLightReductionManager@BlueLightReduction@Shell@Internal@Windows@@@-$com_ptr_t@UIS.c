/*
 * XREFs of ??$query@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@@?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18008DA44
 * Callers:
 *     _lambda_ac5fb737bfb33d6d7b538363e61dea11_::operator() @ 0x18015FBD0 (_lambda_ac5fb737bfb33d6d7b538363e61dea11_--operator().c)
 *     _lambda_ae1862e88fce429ff542ba2505a27793_::operator() @ 0x18015FC9C (_lambda_ae1862e88fce429ff542ba2505a27793_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27514f07cfbff6e7a56951d9e4471be4___::Run @ 0x180160830 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_27514f07cfbff6e7a56951d9e4471be4___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b99ea844b066f66ee4bc802de9267df7___::Run @ 0x1801608D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b99ea844b066f66ee4bc802de9267df7___--Run.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IServiceHostComponent,wil::err_exception_policy>::query<Windows::Internal::Shell::BlueLightReduction::IBlueLightReductionManager>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_05357b73_71a8_4328_801f_d28e07a3d3ff, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5421LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  return a2;
}
