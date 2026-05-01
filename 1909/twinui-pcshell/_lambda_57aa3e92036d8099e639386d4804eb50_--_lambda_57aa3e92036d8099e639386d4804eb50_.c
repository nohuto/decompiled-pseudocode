/*
 * XREFs of _lambda_57aa3e92036d8099e639386d4804eb50_::_lambda_57aa3e92036d8099e639386d4804eb50_ @ 0x18006C978
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18006C678 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800128C8 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_1800128C8.c)
 *     ??0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z @ 0x18004DA30 (--0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall lambda_57aa3e92036d8099e639386d4804eb50_::_lambda_57aa3e92036d8099e639386d4804eb50_(
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
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)(a1 + 4),
    a5);
  a1[4] = (__int64)&SingleViewExperienceTelemetry::Launch::`vftable';
  return a1;
}
