/*
 * XREFs of ??_E?$wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wil@@UEAAPEAXI@Z @ 0x18009E1E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wil@@UEAA@XZ @ 0x18009CAFC (--1-$wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wi.c)
 */

wil::details::wnf_subscription_state_base *__fastcall wil::details::wnf_subscription_state<enum Windows::Internal::Shell::Holographic::UserDisplayContext>::`vector deleting destructor'(
        wil::details::wnf_subscription_state_base *a1,
        char a2)
{
  wil::details::wnf_subscription_state<enum Windows::Internal::Shell::Holographic::UserDisplayContext>::~wnf_subscription_state<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x88);
  return a1;
}
