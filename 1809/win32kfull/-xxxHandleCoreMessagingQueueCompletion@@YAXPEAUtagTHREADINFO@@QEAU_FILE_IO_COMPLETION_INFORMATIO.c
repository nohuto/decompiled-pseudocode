/*
 * XREFs of ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00262E4
 * Callers:
 *     _DrainThreadCoreMessagingCompletions @ 0x1C00260B0 (_DrainThreadCoreMessagingCompletions.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0030D50 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00BC580 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 *     NtUserGetQueueStatusReadonly @ 0x1C00E7490 (NtUserGetQueueStatusReadonly.c)
 *     xxxDrainQueueCompletions @ 0x1C00E93E4 (xxxDrainQueueCompletions.c)
 * Callees:
 *     _PostMessageExtended @ 0x1C002663C (_PostMessageExtended.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

ULONG64 __fastcall xxxHandleCoreMessagingQueueCompletion(__int64 a1, ULONG64 *a2, int a3)
{
  __int64 *v5; // r13
  ULONG64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v12; // rsi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  PVOID v16; // rcx
  ULONG64 v17; // rdi
  _QWORD *v18; // rcx
  ULONG64 result; // rax
  _QWORD v20[3]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+20h]

  v5 = (__int64 *)((char *)KeGetPcr()->NtTib.Self[45].StackLimit + 8);
  v6 = MmUserProbeAddress;
  v7 = v5;
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v8 = *v7;
  v21 = *v7;
  v9 = 0LL;
  if ( a3 && !v8 )
  {
    v10 = *(_QWORD *)(a1 + 1440);
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(MmUserProbeAddress, a2) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v12 = *ThreadWin32Thread;
    }
    v20[0] = *(_QWORD *)(v12 + 416);
    *(_QWORD *)(v12 + 416) = v20;
    v20[1] = v10;
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v14 = PostMessageExtended(*(_QWORD *)(a1 + 1440), 96, 1, 0, 0LL);
    v16 = MmSystemRangeStart;
    if ( v14 >= (unsigned __int64)MmSystemRangeStart )
    {
      if ( v14 )
      {
LABEL_15:
        ThreadUnlock1(v16, v15);
        v8 = v21;
        goto LABEL_16;
      }
      LODWORD(v14) = 0;
    }
    if ( !(_DWORD)v14 )
      xxxSendMessage(*(_QWORD *)(a1 + 1440), 96LL, 2LL, 0LL);
    goto LABEL_15;
  }
LABEL_16:
  v17 = *a2;
  if ( !PsGetCurrentProcessWow64Process(v6) )
    v9 = 3LL;
  if ( (v9 & *a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v18 = (_QWORD *)v17;
  if ( v17 >= MmUserProbeAddress )
    v18 = (_QWORD *)MmUserProbeAddress;
  *v18 = v8;
  result = MmUserProbeAddress;
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (__int64 *)MmUserProbeAddress;
  *v5 = v17;
  return result;
}
