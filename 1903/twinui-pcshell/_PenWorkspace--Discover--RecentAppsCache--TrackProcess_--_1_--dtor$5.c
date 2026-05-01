/*
 * XREFs of _PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::dtor$5 @ 0x1800C3910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a2 + 64));
}
