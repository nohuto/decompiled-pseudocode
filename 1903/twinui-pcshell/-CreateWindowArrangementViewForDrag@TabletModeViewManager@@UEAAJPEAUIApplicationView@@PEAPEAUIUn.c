/*
 * XREFs of ?CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUnknown@@@Z @ 0x1803B6CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180129204 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$MakeAndInitialize@VCachedWindowArrangementViewLifetime@TabletModeViewManager@@UIUnknown@@PEAV2@PEAUIWindowArrangementView@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@$$QEAPEAVTabletModeViewManager@@$$QEAPEAUIWindowArrangementView@@@Z @ 0x1803B6544 (--$MakeAndInitialize@VCachedWindowArrangementViewLifetime@TabletModeViewManager@@UIUnknown@@PEAV.c)
 *     ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x1803B6F78 (-GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARR.c)
 *     ?WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803C5268 (-WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall TabletModeViewManager::CreateWindowArrangementViewForDrag(
        TabletModeViewManager *this,
        struct IApplicationView *a2,
        struct IUnknown **a3)
{
  unsigned int v6; // ebx
  const struct _GUID *v7; // rcx
  int Instance; // eax
  int AppLayoutForDropFeedback; // eax
  __int64 v10; // rdx
  char v11; // di
  struct TabletModeViewManager *v13; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  IUnknown *punk; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+80h] [rbp+40h] BYREF
  IUnknown *v17; // [rsp+88h] [rbp+48h] BYREF

  *a3 = 0LL;
  if ( !*((_QWORD *)this + 5) )
  {
    punk = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
    Instance = WindowArrangementView_CreateInstance(v7, (void **)&punk);
    v6 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC8,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)Instance);
LABEL_15:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
      return v6;
    }
    IUnknown_SetSite(punk, (IUnknown *)this - 11);
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    AppLayoutForDropFeedback = TabletModeViewManager::GetAppLayoutForDropFeedback((char *)this - 88, a2, 3LL, &v16);
    v6 = AppLayoutForDropFeedback;
    if ( AppLayoutForDropFeedback >= 0 )
    {
      AppLayoutForDropFeedback = ((__int64 (__fastcall *)(IUnknown *, struct IApplicationView *, __int64, __int64, int))punk->lpVtbl[1].QueryInterface)(
                                   punk,
                                   a2,
                                   v16,
                                   3LL,
                                   3);
      v6 = AppLayoutForDropFeedback;
      if ( AppLayoutForDropFeedback >= 0 )
      {
        v17 = punk;
        v13 = (TabletModeViewManager *)((char *)this - 88);
        AppLayoutForDropFeedback = Microsoft::WRL::Details::MakeAndInitialize<TabletModeViewManager::CachedWindowArrangementViewLifetime,IUnknown,TabletModeViewManager *,IWindowArrangementView *>(
                                     a3,
                                     &v13,
                                     (struct IWindowArrangementView **)&v17);
        v6 = AppLayoutForDropFeedback;
        if ( AppLayoutForDropFeedback >= 0 )
        {
          Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 6, (__int64 *)&punk);
          v6 = 0;
          v11 = 0;
LABEL_13:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
          if ( v11 )
            IUnknown_SetSite(punk, 0LL);
          goto LABEL_15;
        }
        v10 = 211LL;
      }
      else
      {
        v10 = 209LL;
      }
    }
    else
    {
      v10 = 208LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)AppLayoutForDropFeedback);
    v11 = 1;
    goto LABEL_13;
  }
  v6 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC5,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)0x8007139FLL);
  return v6;
}
