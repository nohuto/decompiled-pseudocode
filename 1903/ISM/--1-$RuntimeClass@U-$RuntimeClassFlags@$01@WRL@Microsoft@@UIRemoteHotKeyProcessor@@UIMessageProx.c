/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRemoteHotKeyProcessor@@UIMessageProxyReconnectAdapterOwner@@@WRL@Microsoft@@UEAA@XZ @ 0x1800BAA50
 * Callers:
 *     _NonBamoInputDeliveryServer::NonBamoInputDeliveryServer_::_1_::dtor$0 @ 0x18003B9CC (_NonBamoInputDeliveryServer--NonBamoInputDeliveryServer_--_1_--dtor$0.c)
 *     _KeyboardOverriderDispatcher::KeyboardOverriderDispatcher_::_1_::dtor$0 @ 0x18003C34A (_KeyboardOverriderDispatcher--KeyboardOverriderDispatcher_--_1_--dtor$0.c)
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$0 @ 0x180145940 (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRemoteHotKeyProcessor,IMessageProxyReconnectAdapterOwner>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRemoteHotKeyProcessor,IMessageProxyReconnectAdapterOwner>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 20) = -1073741823;
}
