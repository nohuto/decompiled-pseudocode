/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x18009053C
 * Callers:
 *     _CDesktopPositioner::_GetRestorePosition_::_1_::dtor$6 @ 0x1800E7A66 (_CDesktopPositioner--_GetRestorePosition_--_1_--dtor$6.c)
 *     _TaskFlowImmersiveShellBroker::ReinitializeObjects_::_1_::dtor$3 @ 0x180213FB6 (_TaskFlowImmersiveShellBroker--ReinitializeObjects_--_1_--dtor$3.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::Start_::_1_::dtor$1 @ 0x180218874 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--Start_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}
