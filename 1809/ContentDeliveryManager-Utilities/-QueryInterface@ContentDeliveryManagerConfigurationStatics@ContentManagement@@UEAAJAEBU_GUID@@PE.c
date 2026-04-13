/*
 * XREFs of ?QueryInterface@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001F5E0
 * Callers:
 *     ?QueryInterface@ContentDeliveryManagerConfigurationStatics@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023540 (-QueryInterface@ContentDeliveryManagerConfigurationStatics@ContentManagement@@W7EAAJAEBU_GUID@@P.c)
 *     ?QueryInterface@ContentDeliveryManagerConfigurationStatics@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023580 (-QueryInterface@ContentDeliveryManagerConfigurationStatics@ContentManagement@@WCI@EAAJAEBU_GUID@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContentDeliveryManagerConfigurationStatics::QueryInterface(
        ContentManagement::ContentDeliveryManagerConfigurationStatics *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::IContentDeliveryManagerConfiguration>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
           this,
           a2,
           a3);
}
