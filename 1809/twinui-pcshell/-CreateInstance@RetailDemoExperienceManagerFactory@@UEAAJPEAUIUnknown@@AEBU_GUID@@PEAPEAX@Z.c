/*
 * XREFs of ?CreateInstance@RetailDemoExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801845E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIAcrylicPolicyManager@@UIImmersiveWindowMessageNotification@@UIBatterySaverStateChangedHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E6DD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1800E6DD0.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180183A08 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellC.c)
 *     ??$MakeAndInitialize@VRetailDemoExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRetailDemoExperienceManager@@@Z @ 0x180183C18 (--$MakeAndInitialize@VRetailDemoExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRetai.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RetailDemoExperienceManagerFactory::CreateInstance(
        RetailDemoExperienceManagerFactory *this,
        struct IUnknown *a2,
        struct _GUID *a3,
        void **a4)
{
  int v6; // eax
  void **v7; // r8
  volatile signed __int64 *v8; // rbx
  int v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int64 *v13; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    *a4 = 0LL;
    if ( a2 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        812LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)0x80040110LL);
    v13 = 0LL;
    v6 = Microsoft::WRL::Details::MakeAndInitialize<RetailDemoExperienceManager,RetailDemoExperienceManager,>(&v13);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        815LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    v7 = a4;
    v8 = v13;
    v9 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,Windows::Internal::RetailDemo::IRetailDemoExperienceManager,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>>(
           (__int64)v13,
           a3,
           v7);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5800LL,
        (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
        (const char *)(unsigned int)v9);
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,Microsoft::WRL::FtmBase>::Release((__int64)v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x333,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v10);
  }
  return result;
}
