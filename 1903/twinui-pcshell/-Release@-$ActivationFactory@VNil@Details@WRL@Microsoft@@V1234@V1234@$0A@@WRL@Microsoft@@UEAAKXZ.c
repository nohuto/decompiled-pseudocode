/*
 * XREFs of ?Release@?$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180082610
 * Callers:
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VCustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1801611B0 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VCustomShellExperienceRepository@Cus.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VTrayInfoTipAppInfoProvider@SystemTray@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18033B900 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VTrayInfoTipAppInfoProvider@SystemTr.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VTrayInfoTipActivator@SystemTray@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18033D080 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VTrayInfoTipActivator@SystemTray@@$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1)
{
  signed __int32 v1; // ebx
  int v2; // edi
  unsigned __int32 v3; // ebx
  void (*v5)(void); // rax

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF);
  v2 = *(_DWORD *)(a1 + 32) & 4;
  v3 = v1 - 1;
  if ( v3 )
  {
    if ( !v2 && v3 == 1 )
    {
      v5 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      goto LABEL_9;
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 1LL);
    if ( v2 && Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v5 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
LABEL_9:
      v5();
    }
  }
  return v3;
}
