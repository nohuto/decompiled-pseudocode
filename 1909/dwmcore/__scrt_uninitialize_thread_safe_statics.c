/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1800E9380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_180339598);
  if ( hHandle )
    CloseHandle(hHandle);
}
