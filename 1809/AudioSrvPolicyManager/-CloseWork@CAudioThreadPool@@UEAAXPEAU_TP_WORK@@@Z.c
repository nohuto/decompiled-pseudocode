/*
 * XREFs of ?CloseWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x18002E2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::CloseWork(CAudioThreadPool *this, struct _TP_WORK *a2)
{
  CloseThreadpoolWork(a2);
}
