/*
 * XREFs of ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C003D780
 * Callers:
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C000DF00 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 *     xxxDrainQueueCompletions @ 0x1C003C400 (xxxDrainQueueCompletions.c)
 *     _DrainThreadCoreMessagingCompletions @ 0x1C003D5B0 (_DrainThreadCoreMessagingCompletions.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00467C0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     NtUserGetQueueStatusReadonly @ 0x1C00D6470 (NtUserGetQueueStatusReadonly.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _PostMessageExtended @ 0x1C003D9F8 (_PostMessageExtended.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

ULONG64 __fastcall xxxHandleCoreMessagingQueueCompletion(__int64 a1, ULONG64 *a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // r12
  ULONG64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // r13
  __int64 v13; // rsi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  PVOID v17; // rcx
  ULONG64 v18; // rdi
  _QWORD *v19; // rcx
  ULONG64 result; // rax
  _QWORD v21[3]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+20h]

  v6 = (__int64 *)((char *)KeGetPcr()->NtTib.Self[45].StackLimit + 8);
  v7 = MmUserProbeAddress;
  v8 = v6;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  v9 = *v8;
  v22 = *v8;
  v10 = 0LL;
  if ( (_DWORD)a3 && !v9 )
  {
    v11 = *(_QWORD *)(a1 + 1448);
    CurrentThread = KeGetCurrentThread();
    v13 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(MmUserProbeAddress, a2) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v13 = *ThreadWin32Thread;
    }
    v21[0] = *(_QWORD *)(v13 + 408);
    *(_QWORD *)(v13 + 408) = v21;
    v21[1] = v11;
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v15 = PostMessageExtended(*(_QWORD *)(a1 + 1448), 96, 1, 0, 0LL);
    v17 = MmSystemRangeStart;
    if ( v15 >= (unsigned __int64)MmSystemRangeStart )
      v15 = v15 != 0;
    if ( !(_DWORD)v15 )
      xxxSendMessage(*(_QWORD *)(a1 + 1448), 96LL, 2LL, 0LL);
    ThreadUnlock1(v17, v15, v16);
    v9 = v22;
  }
  v18 = *a2;
  if ( !PsGetCurrentProcessWow64Process(v7, a2, a3, a4) )
    v10 = 3LL;
  if ( (v10 & *a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v19 = (_QWORD *)v18;
  if ( v18 >= MmUserProbeAddress )
    v19 = (_QWORD *)MmUserProbeAddress;
  *v19 = v9;
  result = MmUserProbeAddress;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (__int64 *)MmUserProbeAddress;
  *v6 = v18;
  return result;
}
