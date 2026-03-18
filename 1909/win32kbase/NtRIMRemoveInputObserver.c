/*
 * XREFs of NtRIMRemoveInputObserver @ 0x1C01346C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall NtRIMRemoveInputObserver(void *a1)
{
  return ObCloseHandle(a1, 1);
}
