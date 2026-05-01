/*
 * XREFs of ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VCustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1801611B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180082610 (-Release@-$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008C940 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0?$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180161354 (--0-$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AddRef@?$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1801614A0 (-AddRef@-$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@VNil@Details@23@V5623@V5623@V5623@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18016155C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Microsoft::WRL::SimpleSealedActivationFactory<Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository,0>>(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdi
  void *v9; // rax
  volatile signed __int32 *v10; // rbx
  int CanCastTo; // esi
  int v12; // eax
  void *v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0LL;
  v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14[0] = v9;
  v10 = (volatile signed __int32 *)v9;
  if ( v9 )
  {
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(v9);
    *(_QWORD *)v10 = &Microsoft::WRL::SimpleSealedActivationFactory<Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository,0>::`vftable';
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(v10);
    v14[1] = (void *)v10;
    v6 = (__int64)v10;
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release((__int64)v10);
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                  v10,
                  a3,
                  a4);
    if ( CanCastTo >= 0 )
    {
      v12 = *a1;
      if ( (*a1 & 4) == 0 )
      {
        _InterlockedIncrement(v10 + 3);
        v12 = *a1;
        v10 = (volatile signed __int32 *)v14[0];
      }
      v6 = 0LL;
      *((_DWORD *)v10 + 8) = v12;
      CanCastTo = 0;
      *((_QWORD *)v10 + 3) = a2;
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(v14);
    CanCastTo = -2147024882;
  }
  if ( v6 )
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v6);
  return (unsigned int)CanCastTo;
}
