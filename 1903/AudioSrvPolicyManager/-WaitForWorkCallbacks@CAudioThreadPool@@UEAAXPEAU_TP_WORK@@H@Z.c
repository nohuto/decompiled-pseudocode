/*
 * XREFs of ?WaitForWorkCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@H@Z @ 0x18002B090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::WaitForWorkCallbacks(CAudioThreadPool *this, struct _TP_WORK *a2, BOOL a3)
{
  WaitForThreadpoolWorkCallbacks(a2, a3);
}
