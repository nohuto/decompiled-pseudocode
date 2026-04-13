/*
 * XREFs of ?Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAAKXZ @ 0x18001F800
 * Callers:
 *     ?Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ @ 0x1800230B0 (-Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@W7.c)
 *     ?Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAKXZ @ 0x180023300 (-Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@WB.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::Release(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition,Microsoft::WRL::FtmBase>::Release(this);
}
