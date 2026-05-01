/*
 * XREFs of ?Destroy@SwitchItemFilteredCollection@@WKI@EAAXXZ @ 0x1800E1D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SwitchItemFilteredCollection::Destroy(
        __int64 a1,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)(a1 - 168), a2, a3);
}
