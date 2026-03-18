/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1800EBFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_180307CF8);
  if ( hHandle )
    CloseHandle(hHandle);
}
