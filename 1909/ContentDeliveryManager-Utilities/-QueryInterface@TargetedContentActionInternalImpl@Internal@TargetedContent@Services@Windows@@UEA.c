/*
 * XREFs of ?QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004CC80
 * Callers:
 *     ?QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180054290 (-QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7E.c)
 *     ?QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800542A0 (-QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WCI.c)
 *     ?QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180054310 (-QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WDA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::QueryInterface(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::QueryInterface(
           this,
           a2,
           a3);
}
