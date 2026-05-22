/*
 * XREFs of ??1?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAA@XZ @ 0x18002A5BC
 * Callers:
 *     _CursorNotificationProcessor::Initialize_::_1_::dtor$1 @ 0x180131FAE (_CursorNotificationProcessor--Initialize_--_1_--dtor$1.c)
 *     _CursorNotificationProcessor::ProcessVisibilityChangedNotification_::_1_::dtor$2 @ 0x180131FD2 (_CursorNotificationProcessor--ProcessVisibilityChangedNotification_--_1_--dtor$2.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$22 @ 0x180132204 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$22.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$3 @ 0x180133FE6 (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::~unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>(
        _QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( a1[1] )
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 144LL))(*a1);
  a1[1] = 0LL;
  v3 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
