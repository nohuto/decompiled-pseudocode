/*
 * XREFs of _lambda_2998a484fcd7d742033ed970065ccf76_::_lambda_2998a484fcd7d742033ed970065ccf76_ @ 0x180061F04
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180061B90 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180018A84 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflector_ea_180018A84.c)
 *     ??0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z @ 0x180061F78 (--0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall lambda_2998a484fcd7d742033ed970065ccf76_::_lambda_2998a484fcd7d742033ed970065ccf76_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        const struct ExperienceManagerUtils::CopyableHString *a4,
        __int64 a5)
{
  __int64 v7; // rcx

  v7 = *a2;
  *a1 = *a2;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  a1[1] = a3;
  ExperienceManagerUtils::CopyableHString::CopyableHString((ExperienceManagerUtils::CopyableHString *)(a1 + 2), a4);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)(a1 + 4),
    a5);
  a1[4] = (__int64)&SingleViewExperienceTelemetry::Launch::`vftable';
  return a1;
}
