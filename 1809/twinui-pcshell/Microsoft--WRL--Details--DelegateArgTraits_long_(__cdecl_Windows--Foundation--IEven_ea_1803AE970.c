/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::_)(IInspectable_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_0892b5d6e8bbbb5224cd765ab176e94b___1_IInspectable_____ptr64_IInspectable_____ptr64_::Invoke @ 0x1803AE970
 * Callers:
 *     <none>
 * Callees:
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180017534 (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x18007CBF4 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::___IInspectable_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_0892b5d6e8bbbb5224cd765ab176e94b___1_IInspectable_____ptr64_IInspectable_____ptr64_::Invoke(
        __int64 a1,
        __int64 a2,
        struct IInspectable *a3)
{
  __int64 v3; // rbx
  struct IInspectable *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  v3 = a1 + 16;
  ExperienceManagerUtils::AsStrong<IInspectable>(&v5, (Microsoft::WRL::WeakRef *)(a1 + 16));
  if ( v5 )
    CSingleViewShellExperience::UnboostPriority(*(_QWORD *)(v3 + 8), 0);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  return 0LL;
}
