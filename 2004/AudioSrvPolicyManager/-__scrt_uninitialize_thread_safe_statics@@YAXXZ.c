/*
 * XREFs of ?__scrt_uninitialize_thread_safe_statics@@YAXXZ @ 0x180039FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall __scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18004FC18);
  if ( hHandle )
    CloseHandle(hHandle);
}
