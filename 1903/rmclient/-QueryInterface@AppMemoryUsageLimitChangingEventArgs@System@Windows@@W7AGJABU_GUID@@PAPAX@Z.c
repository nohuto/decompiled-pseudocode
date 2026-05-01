/*
 * XREFs of ?QueryInterface@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7AGJABU_GUID@@PAPAX@Z @ 0x1000D620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::AppMemoryUsageLimitChangingEventArgs::QueryInterface(
        int a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::System::AppMemoryUsageLimitChangingEventArgs::QueryInterface(
           (Windows::System::AppMemoryUsageLimitChangingEventArgs *)(a1 - 8),
           a2,
           a3);
}
