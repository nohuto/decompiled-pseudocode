/*
 * XREFs of ??1?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAA@XZ @ 0x1800682C0
 * Callers:
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$22 @ 0x18003BE15 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$22.c)
 *     _CursorNotificationProcessor::Initialize_::_1_::dtor$1 @ 0x18003CA95 (_CursorNotificationProcessor--Initialize_--_1_--dtor$1.c)
 *     _CursorNotificationProcessor::CheckAndEnsureCursorManagerClient_::_1_::dtor$1 @ 0x18003DE8E (_CursorNotificationProcessor--CheckAndEnsureCursorManagerClient_--_1_--dtor$1.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$3 @ 0x1800FE563 (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::~unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>(
        _QWORD *a1)
{
  return wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
           a1,
           0LL);
}
