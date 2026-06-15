/*
 * XREFs of ?QueueWorkItem@CSyncWorkItem@@UEAAJXZ @ 0x18000B230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSyncWorkItem::QueueWorkItem(ULONG_PTR dwCompletionKey)
{
  signed int LastError; // ecx
  __int64 result; // rax

  if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, dwCompletionKey, 0LL) )
    return 0LL;
  LastError = GetLastError();
  result = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    return (unsigned int)LastError;
  return result;
}
