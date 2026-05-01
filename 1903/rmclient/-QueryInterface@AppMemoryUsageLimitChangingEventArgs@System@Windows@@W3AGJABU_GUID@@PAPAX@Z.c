/*
 * XREFs of ?QueryInterface@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W3AGJABU_GUID@@PAPAX@Z @ 0x1000D610
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
           (Windows::System::AppMemoryUsageLimitChangingEventArgs *)(a1 - 4),
           a2,
           a3);
}
