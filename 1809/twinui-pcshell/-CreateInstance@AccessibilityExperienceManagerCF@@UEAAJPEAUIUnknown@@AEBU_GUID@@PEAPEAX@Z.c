/*
 * XREFs of ?CreateInstance@AccessibilityExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1802D1880
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VAccessibilityExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAccessibilityExperienceManager@@@Z @ 0x1802D079C (--$MakeAndInitialize@VAccessibilityExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAc.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCImmersiveShellComponentWithGITSite@@UIWeakReferenceSource@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlAdapterOwner@@UIEyeControlManager@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802D1810 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspect_ea_1802D1810.c)
 *     ?InternalRelease@?$ComPtr@VAccessibilityExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1802D1FC8 (-InternalRelease@-$ComPtr@VAccessibilityExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibilityExperienceManagerCF::CreateInstance(
        AccessibilityExperienceManagerCF *this,
        struct IUnknown *a2,
        struct _GUID *a3,
        void **a4)
{
  int v7; // eax
  int CanCastTo; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  volatile signed __int64 *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int64 *v14; // [rsp+48h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
    return 2147746064LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<AccessibilityExperienceManager>::InternalRelease(&v14);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<AccessibilityExperienceManager,AccessibilityExperienceManager,>(&v14);
  CanCastTo = v7;
  if ( v7 >= 0 )
  {
    *a4 = 0LL;
    if ( InlineIsEqualGUID(a3, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v11, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      v12 = v14;
      *a4 = (void *)v14;
      (*(void (__fastcall **)(volatile signed __int64 *))(*v12 + 8))(v12);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,CImmersiveShellComponentWithGITSite,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,IEyeControlAdapterOwner,IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::CanCastTo(
                    (__int64)v14,
                    a3);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
    }
    if ( CanCastTo >= 0 )
      goto LABEL_13;
    v9 = (unsigned int)CanCastTo;
    v10 = 951LL;
  }
  else
  {
    v9 = (unsigned int)v7;
    v10 = 950LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)v9);
LABEL_13:
  Microsoft::WRL::ComPtr<AccessibilityExperienceManager>::InternalRelease(&v14);
  return (unsigned int)CanCastTo;
}
