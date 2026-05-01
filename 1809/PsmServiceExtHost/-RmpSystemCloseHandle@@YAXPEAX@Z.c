/*
 * XREFs of ?RmpSystemCloseHandle@@YAXPEAX@Z @ 0x18006621C
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024E90 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RmpSystemCloseHandle(HANDLE Handle)
{
  return NtClose(Handle);
}
