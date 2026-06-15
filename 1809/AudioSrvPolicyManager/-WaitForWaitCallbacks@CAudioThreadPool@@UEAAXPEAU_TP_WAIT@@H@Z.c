/*
 * XREFs of ?WaitForWaitCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@H@Z @ 0x18002E3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::WaitForWaitCallbacks(CAudioThreadPool *this, struct _TP_WAIT *a2, BOOL a3)
{
  WaitForThreadpoolWaitCallbacks(a2, a3);
}
