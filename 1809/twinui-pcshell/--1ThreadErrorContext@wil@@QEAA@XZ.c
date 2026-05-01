/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x180126FF8
 * Callers:
 *     _CDesktopPositioner::_GetRestorePosition_::_1_::dtor$4 @ 0x1800AE0F2 (_CDesktopPositioner--_GetRestorePosition_--_1_--dtor$4.c)
 *     _TaskFlowImmersiveShellBroker::SessionDisposed_::_1_::dtor$0 @ 0x1800AE116 (_TaskFlowImmersiveShellBroker--SessionDisposed_--_1_--dtor$0.c)
 *     _TaskFlowImmersiveShellBroker::SessionCreated_::_1_::dtor$0 @ 0x1800AE128 (_TaskFlowImmersiveShellBroker--SessionCreated_--_1_--dtor$0.c)
 *     _TaskFlowImmersiveShellBroker::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1801AB171 (_TaskFlowImmersiveShellBroker--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _TaskFlowImmersiveShellBroker::StartAppActivitySessionListener_::_1_::dtor$0 @ 0x1801AB702 (_TaskFlowImmersiveShellBroker--StartAppActivitySessionListener_--_1_--dtor$0.c)
 *     _TaskFlowImmersiveShellBroker::StartFileListener_::_1_::dtor$0 @ 0x1801ABAF2 (_TaskFlowImmersiveShellBroker--StartFileListener_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}
