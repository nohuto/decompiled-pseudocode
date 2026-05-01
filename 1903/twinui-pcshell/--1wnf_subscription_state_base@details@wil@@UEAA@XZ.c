/*
 * XREFs of ??1wnf_subscription_state_base@details@wil@@UEAA@XZ @ 0x180107C5C
 * Callers:
 *     ??1?$wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wil@@UEAA@XZ @ 0x18009CAFC (--1-$wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wi.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::wnf_subscription_state_base::~wnf_subscription_state_base(
        wil::details::wnf_subscription_state_base *this)
{
  *(_QWORD *)this = &wil::details::wnf_subscription_state_base::`vftable';
  if ( *((_QWORD *)this + 1) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
}
