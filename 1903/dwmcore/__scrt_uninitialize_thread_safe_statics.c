/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1800E84D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18033C498);
  if ( hHandle )
    CloseHandle(hHandle);
}
