/*
 * XREFs of ?InitializeCoreMessagingIocp@CMit@@CAXPEAX@Z @ 0x180088A28
 * Callers:
 *     ?Run@CMit@@AEAAKXZ @ 0x18008A6E8 (-Run@CMit@@AEAAKXZ.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MitLoopInversion@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800889C8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MitLoopInversion@@@wil@@CAX_NW4Repor.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMit::InitializeCoreMessagingIocp(void *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  (*(void (__fastcall **)(struct IMessageSession *, __int64 *))(*(_QWORD *)CMit::s_pMessageSession + 40LL))(
    CMit::s_pMessageSession,
    &v5);
  wil::Feature<__WilFeatureTraits_Feature_MitLoopInversion>::ReportUsageToService(v3, v2, v4);
  (*(void (__fastcall **)(__int64, void *, __int64 (__fastcall *)(void *, void *, void *), _QWORD))(*(_QWORD *)v5 + 104LL))(
    v5,
    a1,
    CMit::CompletionHandler,
    0LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
}
