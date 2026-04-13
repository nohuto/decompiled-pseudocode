/*
 * XREFs of ?QueryInterface@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001FC90
 * Callers:
 *     ?QueryInterface@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024020 (-QueryInterface@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Servi_ea_180024020.c)
 *     ?QueryInterface@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024070 (-QueryInterface@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Servi_ea_180024070.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::QueryInterface(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
           this,
           a2,
           a3);
}
