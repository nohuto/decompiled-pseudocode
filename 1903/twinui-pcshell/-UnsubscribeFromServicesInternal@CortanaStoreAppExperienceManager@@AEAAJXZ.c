/*
 * XREFs of ?UnsubscribeFromServicesInternal@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BFCC0
 * Callers:
 *     wil::details::lambda_call__lambda_063ee9af54754716e70af8f1a99db6a8___::_lambda_call__lambda_063ee9af54754716e70af8f1a99db6a8___ @ 0x1801BB4B8 (wil--details--lambda_call__lambda_063ee9af54754716e70af8f1a99db6a8___--_lambda_call__lambda_063e.c)
 *     ?HolographicUsageUpdatedFromRegistry@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BD32C (-HolographicUsageUpdatedFromRegistry@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801BF568 (-SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801BFC80 (-UnsubscribeFromServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180030A98 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?UnsubscribeFromAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BFBD0 (-UnsubscribeFromAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppExperienceManager::UnsubscribeFromServicesInternal(
        CortanaStoreAppExperienceManager *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 216);
  v3 = *((_QWORD *)this + 27);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, *((_QWORD *)this + 21));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
    *((_QWORD *)this + 21) = 0LL;
  }
  if ( *((_QWORD *)this + 31) && *((_QWORD *)this + 22) )
  {
    v12 = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 31,
           &v12);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x202,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 88LL))(v12, *((_QWORD *)this + 22));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x203,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    *((_QWORD *)this + 22) = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  v6 = CortanaStoreAppExperienceManager::UnsubscribeFromAppEvents(this);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x207,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  v7 = *((_QWORD *)this + 38);
  if ( v7 )
  {
    if ( *((_DWORD *)this + 50) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
    if ( *((_DWORD *)this + 51) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 38) + 48LL))(*((_QWORD *)this + 38));
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 38);
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  v8 = *((_QWORD *)this + 39);
  if ( v8 && *((_DWORD *)this + 52) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
  v9 = *((_QWORD *)this + 39);
  if ( v9 )
  {
    *((_QWORD *)this + 39) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  *((_DWORD *)this + 52) = 0;
  return 0LL;
}
