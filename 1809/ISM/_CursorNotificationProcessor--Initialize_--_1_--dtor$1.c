/*
 * XREFs of _CursorNotificationProcessor::Initialize_::_1_::dtor$1 @ 0x180131FAE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CursorNotificationProcessor::Initialize_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::~unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>((_QWORD *)(a2 + 64));
}
