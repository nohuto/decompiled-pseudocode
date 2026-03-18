/*
 * XREFs of ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0016108
 * Callers:
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C000E840 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 *     xxxDrainQueueCompletions @ 0x1C0014A04 (xxxDrainQueueCompletions.c)
 *     NtUserGetQueueStatusReadonly @ 0x1C0014EB0 (NtUserGetQueueStatusReadonly.c)
 *     _DrainThreadCoreMessagingCompletions @ 0x1C0015EC0 (_DrainThreadCoreMessagingCompletions.c)
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3A50 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 * Callees:
 *     _PostMessageExtended @ 0x1C001632C (_PostMessageExtended.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 */

ULONG64 __fastcall xxxHandleCoreMessagingQueueCompletion(__int64 a1, ULONG64 *a2, int a3)
{
  __int64 *v5; // r14
  ULONG64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  ULONG64 v11; // rdi
  _QWORD *v12; // rcx
  ULONG64 result; // rax
  __int64 v14; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+58h] [rbp-40h]
  __int64 v21; // [rsp+60h] [rbp-38h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v5 = (__int64 *)((char *)KeGetPcr()->NtTib.Self[45].StackLimit + 8);
  v6 = MmUserProbeAddress;
  v7 = v5;
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v8 = *v7;
  v9 = 0LL;
  if ( a3 && !v8 )
  {
    v10 = PostMessageExtended(*(_QWORD *)(a1 + 1464), 96, 1, 0, 0LL);
    v6 = (ULONG64)MmSystemRangeStart;
    if ( v10 >= (unsigned __int64)MmSystemRangeStart )
    {
      if ( v10 )
        goto LABEL_7;
      LODWORD(v10) = 0;
    }
    if ( !(_DWORD)v10 )
    {
      v14 = *(_QWORD *)(a1 + 1464);
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v19 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v19;
      v20 = v14;
      if ( v14 )
        HMLockObject(v14);
      xxxSendMessage(*(_QWORD *)(a1 + 1464), 96LL, 2LL, 0LL);
      ThreadUnlock1(v17, v16, v18);
    }
  }
LABEL_7:
  v11 = *a2;
  if ( !PsGetCurrentProcessWow64Process(v6) )
    v9 = 3LL;
  if ( (v9 & *a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = (_QWORD *)v11;
  if ( v11 >= MmUserProbeAddress )
    v12 = (_QWORD *)MmUserProbeAddress;
  *v12 = v8;
  result = MmUserProbeAddress;
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (__int64 *)MmUserProbeAddress;
  *v5 = v11;
  return result;
}
