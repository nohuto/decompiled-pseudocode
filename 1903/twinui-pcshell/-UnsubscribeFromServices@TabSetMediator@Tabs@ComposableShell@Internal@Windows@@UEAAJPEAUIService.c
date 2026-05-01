/*
 * XREFs of ?UnsubscribeFromServices@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIServiceProvider@@@Z @ 0x180265740
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180109598 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediator::UnsubscribeFromServices(
        Windows::Internal::ComposableShell::Tabs::TabSetMediator *this,
        struct IServiceProvider *a2)
{
  SmartCookie::Unregister((Windows::Internal::ComposableShell::Tabs::TabSetMediator *)((char *)this + 144));
  return 0LL;
}
