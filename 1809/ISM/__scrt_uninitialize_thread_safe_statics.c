/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x18012CB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_180193218);
  if ( hHandle )
    CloseHandle(hHandle);
}
