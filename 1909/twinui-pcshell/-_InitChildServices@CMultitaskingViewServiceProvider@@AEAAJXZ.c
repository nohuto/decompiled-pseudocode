/*
 * XREFs of ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x180360130
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ @ 0x18035F9E0 (-RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x1803629F4 (-CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x1803631F4 (-CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@.c)
 *     ?MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180363A3C (-MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x180364A64 (-MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMult.c)
 *     ?TabletModeViewManagerProxy_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180365760 (-TabletModeViewManagerProxy_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CIconLoader_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180366078 (-CIconLoader_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::_InitChildServices(IUnknown *punkSite)
{
  IUnknown *v1; // rsi
  struct IMultitaskingViewTaskScheduler *v3; // rbp
  const struct _GUID *v4; // rdx
  HRESULT Instance; // ebx
  __int64 v6; // rdx
  const struct _GUID *v7; // rdx
  const struct _GUID *v8; // rcx
  const struct _GUID *v9; // r8
  const struct _GUID *v10; // rcx
  const struct _GUID *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = punkSite + 23;
  v3 = (struct IMultitaskingViewTaskScheduler *)&punkSite[12];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[23]);
  Instance = CAllUpViewService_CreateInstance(
               (struct IMultitaskingViewTaskScheduler *)((unsigned __int64)v3 & -(__int64)(punkSite != 0LL)),
               v4,
               (void **)&v1->lpVtbl);
  if ( Instance < 0 )
  {
    v6 = 218LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Instance = IUnknown_SetSite((IUnknown *)v1->lpVtbl, punkSite);
  if ( Instance < 0 )
  {
    v6 = 219LL;
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[24]);
  Instance = CPPIAllUpViewService_CreateInstance(v3, v7, (void **)&punkSite[24].lpVtbl);
  if ( Instance < 0 )
  {
    v6 = 220LL;
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[25]);
  Instance = MultitaskingViewVisibilityService_CreateInstance(v8, (void **)&punkSite[25].lpVtbl);
  if ( Instance < 0 )
  {
    v6 = 221LL;
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[22]);
  Instance = MultitaskingViewGestureHandler_CreateInstance(
               v3,
               (struct IMultitaskingViewVisibilityService *)punkSite[25].lpVtbl,
               v9,
               (void **)&punkSite[22].lpVtbl);
  if ( Instance < 0 )
  {
    v6 = 222LL;
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[26]);
  Instance = TabletModeViewManagerProxy_CreateInstance(v10, (void **)&punkSite[26].lpVtbl);
  if ( Instance < 0 )
  {
    v6 = 223LL;
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[27]);
  Instance = CIconLoader_CreateInstance(v11, (void **)&punkSite[27].lpVtbl);
  if ( Instance < 0 )
  {
    v6 = 224LL;
    goto LABEL_15;
  }
  return (unsigned int)Instance;
}
