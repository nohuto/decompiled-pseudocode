/*
 * XREFs of xxxDrainQueueCompletions @ 0x1C0130984
 * Callers:
 *     _GetQueueStatus @ 0x1C0130820 (_GetQueueStatus.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0132088 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall xxxDrainQueueCompletions(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // esi
  _QWORD *v4; // rbx
  _QWORD *ThreadWin32Thread; // rax
  int v6; // edi
  __int64 result; // rax
  int v8; // [rsp+28h] [rbp-40h]
  _DWORD v9[8]; // [rsp+40h] [rbp-28h] BYREF
  char v10; // [rsp+78h] [rbp+10h] BYREF
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = (_QWORD *)*ThreadWin32Thread;
  }
  memset(v9, 0, sizeof(v9));
  v11 = 0LL;
  v6 = 0;
  ZwSetIoCompletionEx(v4[178], v4[182], 0LL, 2LL, 0, 0LL);
  while ( 1 )
  {
    LOBYTE(v8) = 0;
    result = ZwRemoveIoCompletionEx(v4[178], v9, 1LL, &v10, &v11, v8);
    if ( (_DWORD)result )
      break;
    result = v9[2];
    if ( v9[2] == 1 )
    {
      v6 = 1;
    }
    else
    {
      if ( v9[2] || !v4[183] )
        break;
      xxxHandleCoreMessagingQueueCompletion(v4, v9, v3);
    }
  }
  if ( v6 )
    return ZwAssociateWaitCompletionPacket(v4[181], v4[178], v4[180], 0LL, 1LL, 0, 0LL, 0LL);
  return result;
}
