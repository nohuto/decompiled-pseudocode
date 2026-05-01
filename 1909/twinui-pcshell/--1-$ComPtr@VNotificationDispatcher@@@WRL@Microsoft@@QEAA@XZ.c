/*
 * XREFs of ??1?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x18012CFE0
 * Callers:
 *     _CApplicationManager::_HandleCreation_EnsureApplicationView_::_1_::dtor$2 @ 0x1800E736B (_CApplicationManager--_HandleCreation_EnsureApplicationView_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleCreation_EnsureApplicationView_::_1_::dtor$3 @ 0x1800E737D (_CApplicationManager--_HandleCreation_EnsureApplicationView_--_1_--dtor$3.c)
 *     _NotificationDispatcher::WndProc_::_1_::dtor$0 @ 0x1800E81E0 (_NotificationDispatcher--WndProc_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<NotificationDispatcher>::~ComPtr<NotificationDispatcher>(volatile int **a1)
{
  return Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(a1);
}
