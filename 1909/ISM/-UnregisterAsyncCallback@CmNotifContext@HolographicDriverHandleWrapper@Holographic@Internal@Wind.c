/*
 * XREFs of ?UnregisterAsyncCallback@CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180160000
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAPEAXI@Z @ 0x180152B58 (--_GCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAPEAXI@Z.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::UnregisterAsyncCallback(
        PTP_CALLBACK_INSTANCE Instance,
        struct _RTL_CRITICAL_SECTION *Context,
        PTP_WORK Work)
{
  if ( Context )
    Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::`scalar deleting destructor'(Context);
}
