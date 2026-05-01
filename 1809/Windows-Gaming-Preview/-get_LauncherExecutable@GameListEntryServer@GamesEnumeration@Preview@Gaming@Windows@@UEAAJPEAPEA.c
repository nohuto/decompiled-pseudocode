/*
 * XREFs of ?get_LauncherExecutable@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIStorageFile@Storage@5@@Z @ 0x18002AFD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LauncherExecutable(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct Windows::Storage::IStorageFile **a2)
{
  __int64 v3; // rcx

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 36);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *a2 = (struct Windows::Storage::IStorageFile *)*((_QWORD *)this + 36);
  }
  return 0LL;
}
