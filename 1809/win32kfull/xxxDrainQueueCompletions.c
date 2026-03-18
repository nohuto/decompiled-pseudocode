/*
 * XREFs of xxxDrainQueueCompletions @ 0x1C00E93E4
 * Callers:
 *     _GetQueueStatus @ 0x1C00E9280 (_GetQueueStatus.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00262E4 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxDrainQueueCompletions(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v3; // esi
  _QWORD *v4; // rbx
  _QWORD **ThreadWin32Thread; // rax
  int v6; // edi
  __int64 result; // rax
  int v8; // [rsp+28h] [rbp-40h]
  ULONG64 v9; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+48h] [rbp-20h]
  char v11; // [rsp+78h] [rbp+10h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v12 = 0LL;
  v6 = 0;
  ZwSetIoCompletionEx(v4[175], v4[179], 0LL, 2LL, 0, 0LL);
  while ( 1 )
  {
    LOBYTE(v8) = 0;
    result = ZwRemoveIoCompletionEx(v4[175], &v9, 1LL, &v11, &v12, v8);
    if ( (_DWORD)result )
      break;
    result = v10;
    if ( v10 == 1 )
    {
      v6 = 1;
    }
    else
    {
      if ( v10 || !v4[180] )
        break;
      xxxHandleCoreMessagingQueueCompletion((__int64)v4, &v9, v3);
    }
  }
  if ( v6 )
    return ZwAssociateWaitCompletionPacket(v4[178], v4[175], v4[177], 0LL, 1LL, 0, 0LL, 0LL);
  return result;
}
