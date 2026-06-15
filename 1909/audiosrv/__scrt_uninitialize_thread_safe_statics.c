/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180065520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1801B6FE8);
  if ( hHandle )
    CloseHandle(hHandle);
}
