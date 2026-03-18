/*
 * XREFs of TtmiCreateTerminal @ 0x1408BBBFC
 * Callers:
 *     TtmInitCurrentSession @ 0x1408BCCE8 (TtmInitCurrentSession.c)
 *     TtmpDispatchCreateTerminal @ 0x1408BF2E0 (TtmpDispatchCreateTerminal.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x1400820A0 (KeInitializeTimerEx.c)
 *     RtlFindClearBitsAndSet @ 0x140085750 (RtlFindClearBitsAndSet.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1408BC75C (TtmpSetTerminalPendingCleanup.c)
 *     TtmiUpdateActiveTerminalCount @ 0x1408BDAE8 (TtmiUpdateActiveTerminalCount.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 *     TtmiLogTerminalCreated @ 0x1408C3170 (TtmiLogTerminalCreated.c)
 */

__int64 __fastcall TtmiCreateTerminal(
        __int64 a1,
        ACCESS_MASK a2,
        unsigned __int8 a3,
        _QWORD *a4,
        PVOID DeferredContext,
        _QWORD *a6)
{
  _DWORD *v6; // r14
  ULONG ClearBitsAndSet; // esi
  int inserted; // ebx
  char *v13; // rbx
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 v19; // [rsp+20h] [rbp-78h]
  _DWORD v20[12]; // [rsp+50h] [rbp-48h] BYREF

  v6 = DeferredContext;
  *a4 = 0LL;
  DeferredContext = 0LL;
  *v6 = -1;
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 56), 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    inserted = -1073741756;
    TtmiLogError("TtmiAcquireTerminalId");
LABEL_3:
    TtmiLogError("TtmiCreateTerminal");
    return (unsigned int)inserted;
  }
  memset(v20, 0, sizeof(v20));
  v20[0] = 48;
  v20[6] = a3 == 0 ? 0x200 : 0;
  inserted = ObCreateObjectEx(0, TtmpTerminalObjectType, (int)v20, a3, v19, 288, 0, 0, &DeferredContext, 0LL);
  if ( inserted < 0 )
  {
    _bittestandreset(*(signed __int32 **)(a1 + 64), ClearBitsAndSet);
    goto LABEL_3;
  }
  v13 = (char *)DeferredContext;
  memset(DeferredContext, 0, 0x120uLL);
  *((_DWORD *)v13 + 6) = 1416459348;
  *((_DWORD *)v13 + 7) = ClearBitsAndSet;
  if ( ClearBitsAndSet )
  {
    *((_DWORD *)v13 + 10) = 1;
    *((_DWORD *)v13 + 69) = 1;
    *((_DWORD *)v13 + 12) = 2;
    *((_QWORD *)v13 + 9) = 300000000LL;
  }
  else
  {
    *((_DWORD *)v13 + 10) = 3;
    *((_DWORD *)v13 + 69) = 3;
    LOBYTE(v14) = 1;
    *((_DWORD *)v13 + 12) = 0;
    *((_DWORD *)v13 + 9) |= 0x10u;
    v13 = (char *)DeferredContext;
    *((_QWORD *)DeferredContext + 10) = MEMORY[0xFFFFF78000000008];
    TtmiUpdateActiveTerminalCount(a1, v14, 26LL);
  }
  KeInitializeTimerEx((PKTIMER)(v13 + 88), NotificationTimer);
  KeInitializeDpc((PRKDPC)(v13 + 152), (PKDEFERRED_ROUTINE)TtmpScheduledEvaluationDpc, v13);
  *((_QWORD *)v13 + 27) = 0LL;
  *((_QWORD *)v13 + 29) = TtmpScheduledEvaluationWorker;
  *((_QWORD *)v13 + 30) = v13;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v15 = DeferredContext;
  *((_QWORD *)DeferredContext + 2) = a1;
  v16 = *(_QWORD **)(a1 + 48);
  if ( *v16 != a1 + 40 )
    __fastfail(3u);
  v15[1] = v16;
  *v15 = a1 + 40;
  *v16 = v15;
  *(_QWORD *)(a1 + 48) = v15;
  TtmiLogTerminalCreated(v15, ClearBitsAndSet);
  inserted = ObInsertObjectEx(v15, 0LL, a2, 1, 0, 0LL, a4);
  if ( inserted >= 0 )
  {
    v17 = a6;
    *v6 = ClearBitsAndSet;
    if ( v17 )
      *v17 = v15;
    return 0;
  }
  else
  {
    TtmiLogError("TtmiCreateTerminal");
    TtmpSetTerminalPendingCleanup(a1, v15);
  }
  return (unsigned int)inserted;
}
