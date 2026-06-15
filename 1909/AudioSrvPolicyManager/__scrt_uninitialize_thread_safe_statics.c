/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180035620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18004D970);
  if ( hHandle )
    CloseHandle(hHandle);
}
