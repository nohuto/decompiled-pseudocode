/*
 * XREFs of ?UnregisterAsyncCallback@CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18010F260
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEBAXPEAUCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@Z @ 0x18011AAB8 (--R-$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::UnregisterAsyncCallback(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_WORK Work)
{
  if ( Context )
    std::default_delete<Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext>::operator()(
      Instance,
      Context,
      Work);
}
