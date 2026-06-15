/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x14001D4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_140088D58);
  if ( hEvent )
    CloseHandle(hEvent);
}
