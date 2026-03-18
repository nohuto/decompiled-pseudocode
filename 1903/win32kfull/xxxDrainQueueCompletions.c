/*
 * XREFs of xxxDrainQueueCompletions @ 0x1C0014A04
 * Callers:
 *     _GetQueueStatus @ 0x1C00148A0 (_GetQueueStatus.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0016108 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall xxxDrainQueueCompletions(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v3; // rbx
  _QWORD *ThreadWin32Thread; // rax
  int v5; // edi
  __int64 result; // rax
  int v7; // [rsp+28h] [rbp-40h]
  _DWORD v8[8]; // [rsp+40h] [rbp-28h] BYREF
  char v9; // [rsp+78h] [rbp+10h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = (_QWORD *)*ThreadWin32Thread;
  }
  memset(v8, 0, sizeof(v8));
  v10 = 0LL;
  v5 = 0;
  ZwSetIoCompletionEx(v3[178], v3[182], 0LL, 2LL, 0, 0LL);
  while ( 1 )
  {
    LOBYTE(v7) = 0;
    result = ZwRemoveIoCompletionEx(v3[178], v8, 1LL, &v9, &v10, v7);
    if ( (_DWORD)result )
      break;
    result = v8[2];
    if ( v8[2] == 1 )
    {
      v5 = 1;
    }
    else
    {
      if ( v8[2] || !v3[183] )
        break;
      xxxHandleCoreMessagingQueueCompletion(v3, v8, a1);
    }
  }
  if ( v5 )
    return ZwAssociateWaitCompletionPacket(v3[181], v3[178], v3[180], 0LL, 1LL, 0, 0LL, 0LL);
  return result;
}
