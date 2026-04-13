/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AHPEAX@Z$1?CloseState@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180095210
 * Callers:
 *     ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x1800A4FD0 (-GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z.c)
 *     _CreativeFramework::Actions::PinnedWebsiteManager::GetEdgeFaviconCache_::_1_::dtor$0 @ 0x1800CF4C2 (_CreativeFramework--Actions--PinnedWebsiteManager--GetEdgeFaviconCache_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return CloseState();
  return result;
}
