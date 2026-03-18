/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequests @ 0x1406E6B10
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406E657C (PipProcessDevNodeTree.c)
 * Callees:
 *     PnpDeviceCompletionQueueIsEmpty @ 0x140159B1C (PnpDeviceCompletionQueueIsEmpty.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x14018D948 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1406E7E44 (PnpDeviceCompletionProcessCompletedRequest.c)
 */

__int64 __fastcall PnpDeviceCompletionProcessCompletedRequests(int a1, int a2, _BYTE *a3)
{
  unsigned int v6; // ebx
  void *CompletedRequest; // rax
  int v9; // eax

  *a3 = 0;
  v6 = 0;
  while ( !PnpDeviceCompletionQueueIsEmpty() )
  {
    if ( !dword_140434BAC && (!a2 || !a1 && *a3) )
      break;
    CompletedRequest = (void *)PnpDeviceCompletionQueueGetCompletedRequest();
    v9 = PnpDeviceCompletionProcessCompletedRequest(CompletedRequest);
    *a3 = 1;
    if ( v9 == -1073741106 )
      v6 = -1073741106;
  }
  return v6;
}
