/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180042F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18005CA08);
  if ( hObject )
    CloseHandle(hObject);
}
