/*
 * XREFs of ?UnsubscribeFromServices@TabletModePositionerManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803C8040
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1801286A8 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall TabletModePositionerManager::UnsubscribeFromServices(
        TabletModePositionerManager *this,
        struct IServiceProvider *a2)
{
  SmartCookie::Unregister((TabletModePositionerManager *)((char *)this + 152));
  return 0LL;
}
