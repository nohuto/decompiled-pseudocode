/*
 * XREFs of ??1service_description@immersive_shell_component@winrt@@QEAA@XZ @ 0x1800C0830
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009FE64 (-unconditional_release_ref@-$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::immersive_shell_component::service_description::~service_description(
        winrt::immersive_shell_component::service_description *this)
{
  __int64 *v1; // rcx

  v1 = (__int64 *)((char *)this + 16);
  if ( *v1 )
    winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref(v1);
}
