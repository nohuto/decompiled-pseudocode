/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180060EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1801B2F68);
  if ( hHandle )
    CloseHandle(hHandle);
}
