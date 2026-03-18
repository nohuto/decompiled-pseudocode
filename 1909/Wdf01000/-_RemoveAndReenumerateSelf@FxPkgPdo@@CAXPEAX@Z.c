/*
 * XREFs of ?_RemoveAndReenumerateSelf@FxPkgPdo@@CAXPEAX@Z @ 0x1C007CEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPdo::_RemoveAndReenumerateSelf(void *Context)
{
  KeGetCurrentIrql();
  (*(void (__fastcall **)(void *))(*(_QWORD *)Context + 264LL))(Context);
}
