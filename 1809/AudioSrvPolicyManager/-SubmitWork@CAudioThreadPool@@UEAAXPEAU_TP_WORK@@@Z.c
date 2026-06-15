/*
 * XREFs of ?SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x18002E3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::SubmitWork(CAudioThreadPool *this, struct _TP_WORK *a2)
{
  SubmitThreadpoolWork(a2);
}
