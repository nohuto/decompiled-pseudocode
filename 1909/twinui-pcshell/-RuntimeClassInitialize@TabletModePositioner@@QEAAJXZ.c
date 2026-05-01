/*
 * XREFs of ?RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ @ 0x1803CF380
 * Callers:
 *     ??$MakeAndInitialize@VTabletModePositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803C8254 (--$MakeAndInitialize@VTabletModePositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnk.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801354D4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?AppLayoutCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803D7FC8 (-AppLayoutCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803D9834 (-ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall TabletModePositioner::RuntimeClassInitialize(IUnknown *punkSite)
{
  IUnknown *v1; // rsi
  const struct _GUID *v3; // rcx
  int Instance; // ebx
  __int64 v5; // rdx
  const struct _GUID *v6; // rcx
  int v8[4]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v9; // [rsp+30h] [rbp-68h]
  __int64 v10; // [rsp+38h] [rbp-60h]
  GUID v11; // [rsp+40h] [rbp-58h]
  __int64 v12; // [rsp+50h] [rbp-48h]
  __int64 v13; // [rsp+58h] [rbp-40h]
  GUID v14; // [rsp+60h] [rbp-38h]
  struct IUnknownVtbl *lpVtbl; // [rsp+70h] [rbp-28h]
  __int64 v16; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v1 = punkSite + 32;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[32]);
  Instance = AppLayoutCache_CreateInstance(v3, (void **)&v1->lpVtbl);
  if ( Instance < 0 )
  {
    v5 = 320LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Instance = IUnknown_SetSite((IUnknown *)v1->lpVtbl, punkSite);
  if ( Instance < 0 )
  {
    v5 = 321LL;
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[38]);
  Instance = ScreenManager_CreateInstance(v6, (void **)&punkSite[38].lpVtbl);
  if ( Instance < 0 )
  {
    v5 = 322LL;
    goto LABEL_9;
  }
  v9 = 0LL;
  *(GUID *)v8 = GUID_975d55f5_ce62_42c0_868a_eda817f3871e;
  v10 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  lpVtbl = v1->lpVtbl;
  v11 = GUID_3f48d9d3_200d_4446_bb9d_dae2a43781a2;
  v16 = 0LL;
  v14 = GUID_e511e73c_cad4_40aa_bf1a_b9938ac75ff0;
  Instance = CImmersiveShellComponent::RegisterServiceInformation(
               (CImmersiveShellComponent *)&punkSite[3],
               (const struct CImmersiveShellComponent::ISC_SERVICE *)v8,
               3LL);
  if ( Instance < 0 )
  {
    v5 = 330LL;
    goto LABEL_9;
  }
  return (unsigned int)Instance;
}
