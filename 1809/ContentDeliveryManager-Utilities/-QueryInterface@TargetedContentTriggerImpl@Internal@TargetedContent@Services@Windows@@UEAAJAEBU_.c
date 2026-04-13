/*
 * XREFs of ?QueryInterface@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001F720
 * Callers:
 *     ?QueryInterface@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023320 (-QueryInterface@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@W7EAAJAEBU.c)
 *     ?QueryInterface@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800235F0 (-QueryInterface@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAJAE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::QueryInterface(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
