/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x180004464
 * Callers:
 *     _ContentManagement::AppManager::StartProductInstallWithOverrides_::_1_::dtor$0 @ 0x1800CC29D (_ContentManagement--AppManager--StartProductInstallWithOverrides_--_1_--dtor$0.c)
 *     _CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger_::_1_::dtor$1 @ 0x1800CC351 (_CreativeFramework--CommonHelper--RegisterBackgroundTaskWithWnfTrigger_--_1_--dtor$1.c)
 *     _ContentManagement::AppManager::StartProductInstall_::_1_::dtor$0 @ 0x1800CF556 (_ContentManagement--AppManager--StartProductInstall_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}
