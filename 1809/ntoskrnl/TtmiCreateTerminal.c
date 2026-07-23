/*
 * XREFs of TtmiCreateTerminal @ 0x14087FA6C
 * Callers:
 *     TtmInitCurrentSession @ 0x140880AE8 (TtmInitCurrentSession.c)
 *     TtmpDispatchCreateTerminal @ 0x140882F08 (TtmpDispatchCreateTerminal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KeInitializeTimerEx @ 0x140089FE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     RtlFindClearBitsAndSet @ 0x1400D9660 (RtlFindClearBitsAndSet.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmpSetTerminalPendingCleanup @ 0x14088057C (TtmpSetTerminalPendingCleanup.c)
 *     TtmiUpdateActiveTerminalCount @ 0x1408817CC (TtmiUpdateActiveTerminalCount.c)
 *     TtmiLogTerminalCreated @ 0x140886BFC (TtmiLogTerminalCreated.c)
 */

__int64 __fastcall TtmiCreateTerminal(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned __int64 *a4,
        PVOID Object,
        _QWORD *a6)
{
  _DWORD *v6; // r14
  ULONG ClearBitsAndSet; // esi
  unsigned int v12; // ebx
  int v13; // r9d
  int v14; // r8d
  int v15; // edx
  int v16; // eax
  char *v17; // rbx
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  _QWORD *v20; // rdx
  int inserted; // eax
  _QWORD *v22; // rax
  __int64 v24; // [rsp+20h] [rbp-78h]
  _DWORD v25[12]; // [rsp+50h] [rbp-48h] BYREF

  v6 = Object;
  *a4 = 0LL;
  Object = 0LL;
  *v6 = -1;
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 56), 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v12 = -1073741756;
    TtmiLogError("TtmiAcquireTerminalId", 1623, -1, -1073741756);
    v13 = -1073741756;
    v14 = -1073741756;
    v15 = 581;
LABEL_3:
    TtmiLogError("TtmiCreateTerminal", v15, v14, v13);
    return v12;
  }
  memset(v25, 0, sizeof(v25));
  v25[0] = 48;
  v25[6] = a3 == 0 ? 0x200 : 0;
  v16 = ObCreateObjectEx(0, TtmpTerminalObjectType, (int)v25, a3, v24, 288, 0, 0, &Object, 0LL);
  v12 = v16;
  if ( v16 < 0 )
  {
    v13 = v16;
    v14 = v16;
    v15 = 614;
    _bittestandreset(*(signed __int32 **)(a1 + 64), ClearBitsAndSet);
    goto LABEL_3;
  }
  v17 = (char *)Object;
  ObfReferenceObject(Object);
  memset(v17, 0, 0x120uLL);
  *((_DWORD *)v17 + 6) = 1416459348;
  *((_DWORD *)v17 + 7) = ClearBitsAndSet;
  if ( ClearBitsAndSet )
  {
    *((_DWORD *)v17 + 10) = 1;
    *((_DWORD *)v17 + 69) = 1;
    *((_DWORD *)v17 + 12) = 2;
    *((_QWORD *)v17 + 9) = 300000000LL;
  }
  else
  {
    *((_DWORD *)v17 + 10) = 3;
    *((_DWORD *)v17 + 69) = 3;
    LOBYTE(v18) = 1;
    *((_DWORD *)v17 + 12) = 0;
    *((_DWORD *)v17 + 9) |= 0x10u;
    TtmiUpdateActiveTerminalCount(a1, v18, 26LL);
  }
  KeInitializeTimerEx((PKTIMER)(v17 + 88), NotificationTimer);
  KeInitializeDpc((PRKDPC)(v17 + 152), (PKDEFERRED_ROUTINE)TtmpScheduledEvaluationDpc, v17);
  *((_QWORD *)v17 + 27) = 0LL;
  *((_QWORD *)v17 + 29) = TtmpScheduledEvaluationWorker;
  *((_QWORD *)v17 + 30) = v17;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v19 = Object;
  *((_QWORD *)Object + 2) = a1;
  v20 = *(_QWORD **)(a1 + 48);
  if ( *v20 != a1 + 40 )
    __fastfail(3u);
  v19[1] = v20;
  *v19 = a1 + 40;
  *v20 = v19;
  *(_QWORD *)(a1 + 48) = v19;
  TtmiLogTerminalCreated(v19, ClearBitsAndSet);
  inserted = ObInsertObjectEx(v19, 0LL, a2, 1, 0, 0LL, a4);
  v12 = inserted;
  if ( inserted >= 0 )
  {
    v22 = a6;
    *v6 = ClearBitsAndSet;
    if ( v22 )
      *v22 = v19;
    else
      ObfDereferenceObject(v19);
    return 0;
  }
  else
  {
    TtmiLogError("TtmiCreateTerminal", 704, inserted, inserted);
    TtmpSetTerminalPendingCleanup(a1, v19);
  }
  return v12;
}
