/*
 * XREFs of xxxDrainQueueCompletions @ 0x1C003C400
 * Callers:
 *     _GetQueueStatus @ 0x1C003BE50 (_GetQueueStatus.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C003D780 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxDrainQueueCompletions(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // esi
  _QWORD *v4; // rbx
  _QWORD *ThreadWin32Thread; // rax
  int v6; // edi
  __int64 result; // rax
  int v8; // [rsp+28h] [rbp-40h]
  _BYTE v9[8]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+48h] [rbp-20h]
  char v11; // [rsp+78h] [rbp+10h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = (_QWORD *)*ThreadWin32Thread;
  }
  v12 = 0LL;
  v6 = 0;
  ZwSetIoCompletionEx(v4[176], v4[180], 0LL, 2LL, 0, 0LL);
  while ( 1 )
  {
    LOBYTE(v8) = 0;
    result = ZwRemoveIoCompletionEx(v4[176], v9, 1LL, &v11, &v12, v8);
    if ( (_DWORD)result )
      break;
    result = v10;
    if ( v10 == 1 )
    {
      v6 = 1;
    }
    else
    {
      if ( v10 || !v4[181] )
        break;
      xxxHandleCoreMessagingQueueCompletion(v4, v9, v3);
    }
  }
  if ( v6 )
    return ZwAssociateWaitCompletionPacket(v4[179], v4[176], v4[178], 0LL, 1LL, 0, 0LL, 0LL);
  return result;
}
