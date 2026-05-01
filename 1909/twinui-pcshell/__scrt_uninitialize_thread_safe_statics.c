/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180089730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1805C0C88);
  if ( hHandle )
    CloseHandle(hHandle);
}
