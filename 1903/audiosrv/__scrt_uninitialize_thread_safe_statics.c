/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180064530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1801B7FE8);
  if ( hHandle )
    CloseHandle(hHandle);
}
