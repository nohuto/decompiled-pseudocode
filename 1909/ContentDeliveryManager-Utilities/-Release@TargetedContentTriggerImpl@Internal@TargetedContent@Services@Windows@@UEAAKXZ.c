/*
 * XREFs of ?Release@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAKXZ @ 0x18001FD50
 * Callers:
 *     ?Release@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ @ 0x180023DE0 (-Release@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ.c)
 *     ?Release@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAKXZ @ 0x180024060 (-Release@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::Release(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal,Microsoft::WRL::FtmBase>::Release(this);
}
