/*
 * XREFs of ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0132088
 * Callers:
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C000DFC0 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0044820 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxDrainQueueCompletions @ 0x1C0130984 (xxxDrainQueueCompletions.c)
 *     NtUserGetQueueStatusReadonly @ 0x1C0130E30 (NtUserGetQueueStatusReadonly.c)
 *     _DrainThreadCoreMessagingCompletions @ 0x1C0131E40 (_DrainThreadCoreMessagingCompletions.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _PostMessageExtended @ 0x1C01322AC (_PostMessageExtended.c)
 */

ULONG64 __fastcall xxxHandleCoreMessagingQueueCompletion(__int64 a1, ULONG64 *a2, int a3)
{
  __int64 *v5; // r14
  ULONG64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  ULONG64 v13; // rdi
  _QWORD *v14; // rcx
  ULONG64 result; // rax
  __int64 v16; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // [rsp+50h] [rbp-48h] BYREF
  __int64 v22; // [rsp+58h] [rbp-40h]
  __int64 v23; // [rsp+60h] [rbp-38h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
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
      v16 = *(_QWORD *)(a1 + 1464);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12);
      v21 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v21;
      v22 = v16;
      if ( v16 )
        HMLockObject(v16);
      xxxSendMessage(*(_QWORD *)(a1 + 1464));
      ThreadUnlock1(v19, v18, v20);
    }
  }
LABEL_7:
  v13 = *a2;
  if ( !PsGetCurrentProcessWow64Process(v6) )
    v9 = 3LL;
  if ( (v9 & *a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (_QWORD *)v13;
  if ( v13 >= MmUserProbeAddress )
    v14 = (_QWORD *)MmUserProbeAddress;
  *v14 = v8;
  result = MmUserProbeAddress;
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (__int64 *)MmUserProbeAddress;
  *v5 = v13;
  return result;
}
