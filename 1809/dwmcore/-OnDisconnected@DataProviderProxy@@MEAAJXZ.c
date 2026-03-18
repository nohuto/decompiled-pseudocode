/*
 * XREFs of ?OnDisconnected@DataProviderProxy@@MEAAJXZ @ 0x180170DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z @ 0x1801543BC (-RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z.c)
 */

__int64 __fastcall DataProviderProxy::OnDisconnected(DataProviderManager **this)
{
  if ( this[9] )
    DataProviderManager::RemoveDataProvider(this[9], (struct DataProviderProxy *)this);
  return 0LL;
}
