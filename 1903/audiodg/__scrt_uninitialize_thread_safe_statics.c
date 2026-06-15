/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x140017310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_140086D48);
  if ( hEvent )
    CloseHandle(hEvent);
}
