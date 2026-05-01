/*
 * XREFs of ?OnViewEvent@CortanaStoreAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1801BE460
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ @ 0x1801BC1A0 (-CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ.c)
 *     ?OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BDCFC (-OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?OnViewCreated@CortanaStoreAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801BDDD8 (-OnViewCreated@CortanaStoreAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?OnViewDestroyed@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BE2EC (-OnViewDestroyed@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?OnViewRequestNavigate@CortanaStoreAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801BE588 (-OnViewRequestNavigate@CortanaStoreAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Found.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppExperienceManager::OnViewEvent(
        CortanaStoreAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall *v9)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v12; // [rsp+60h] [rbp+18h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v13; // [rsp+68h] [rbp+20h] BYREF

  CortanaStoreAppExperienceManager::CheckThread(this);
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AE,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  if ( v12 )
  {
    switch ( v12 )
    {
      case 2:
        v13 = 0LL;
        v9 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)a3 + 56LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
        v10 = v9(a3, &v13);
        v7 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2B8,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
            (const char *)(unsigned int)v10);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
          return v7;
        }
        CortanaStoreAppExperienceManager::OnViewRequestNavigate(this, v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
        break;
      case 4:
        CortanaStoreAppExperienceManager::OnViewDestroyed(this);
        break;
      case 35:
        CortanaStoreAppExperienceManager::OnViewConsolidationRequested(this);
        break;
    }
  }
  else
  {
    CortanaStoreAppExperienceManager::OnViewCreated(this, a2);
  }
  return 0LL;
}
