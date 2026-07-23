/*
 * XREFs of NtCreateJobObject @ 0x140606F80
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     PoEnergyEstimationEnabled @ 0x1400ACEC0 (PoEnergyEstimationEnabled.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExCreateHandleEx @ 0x1405D2380 (ExCreateHandleEx.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     PspIoRateEntryInitialize @ 0x140606F28 (PspIoRateEntryInitialize.c)
 *     ExUuidCreate @ 0x1406072C0 (ExUuidCreate.c)
 *     PspUnlockJobListExclusive @ 0x140607464 (PspUnlockJobListExclusive.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     EtwTraceJob @ 0x1408B875C (EtwTraceJob.c)
 */

NTSTATUS __stdcall NtCreateJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r13d
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 v6; // si
  __int64 v7; // rcx
  char v8; // r12
  unsigned int v9; // ebx
  NTSTATUS inserted; // esi
  size_t v11; // r8
  PRKEVENT v12; // rbx
  struct _KEVENT *v13; // rax
  struct _LIST_ENTRY *v14; // rcx
  __int64 Handle; // rax
  PRKEVENT v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-88h]
  PRKEVENT Event; // [rsp+58h] [rbp-50h] BYREF
  __int64 v20; // [rsp+60h] [rbp-48h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp-40h] BYREF
  unsigned int Flink; // [rsp+C8h] [rbp+20h]

  v3 = (int)ObjectAttributes;
  Event = 0LL;
  v20 = 0LL;
  Flink = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentThread->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  if ( v6 )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)JobHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)JobHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  *JobHandle = 0LL;
  v8 = PoEnergyEstimationEnabled();
  v9 = v8 != 0 ? 2000 : 1568;
  inserted = ObCreateObjectEx(v6, PsJobType, v3, v6, v18, v9, 0, v9, &Event, 0LL);
  if ( inserted < 0 )
  {
    v12 = Event;
  }
  else
  {
    v11 = v9;
    v12 = Event;
    memset(Event, 0, v11);
    *(_QWORD *)&v12[45].Header.Lock = v12;
    *(_QWORD *)&v12[2].Header.Lock = (char *)v12 + 40;
    v12[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&v12[1].Header.WaitListHead.Blink;
    v12[44].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v12[44];
    *(_QWORD *)&v12[44].Header.Lock = v12 + 44;
    v12[43].Header.WaitListHead.Blink = &v12[43].Header.WaitListHead;
    v12[43].Header.WaitListHead.Flink = &v12[43].Header.WaitListHead;
    v12[45].Header.WaitListHead.Blink = &v12[45].Header.WaitListHead;
    v12[45].Header.WaitListHead.Flink = &v12[45].Header.WaitListHead;
    KeInitializeEvent(v12, NotificationEvent, 0);
    *(_QWORD *)&v12[43].Header.Lock = 0LL;
    *(_QWORD *)&v12[11].Header.Lock = 1310721LL;
    memset(&v12[11].Header.WaitListHead, 0, 0xA0uLL);
    v12[25].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)1310721;
    memset(&v12[26], 0, 0xA0uLL);
    *(_QWORD *)&v12[53].Header.Lock = (char *)v12 + 1264;
    v12[52].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&v12[52].Header.WaitListHead.Blink;
    v12[53].Header.WaitListHead.Flink = 0LL;
    if ( v8 )
      v12[54].Header.WaitListHead.Blink = &v12[65].Header.WaitListHead;
    v12[20].Header.LockNV = -1;
    HIDWORD(v12[36].Header.WaitListHead.Flink) = 16382;
    v12[62].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)1;
    HIDWORD(v12[35].Header.WaitListHead.Flink) = 10;
    v12[20].Header.SignalState = 5;
    ExInitializeResourceLite((PERESOURCE)&v12[2].Header.WaitListHead);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobListLock, 0LL);
    v13 = v12 + 1;
    v14 = (struct _LIST_ENTRY *)qword_14096E300;
    if ( *(__int64 **)qword_14096E300 != &PspJobList )
      __fastfail(3u);
    *(_QWORD *)&v13->Header.Lock = &PspJobList;
    v12[1].Header.WaitListHead.Flink = v14;
    v14->Flink = (struct _LIST_ENTRY *)v13;
    qword_14096E300 = (__int64)&v12[1];
    PspUnlockJobListExclusive(CurrentThread);
    LODWORD(v12[54].Header.WaitListHead.Flink) |= 0x200000u;
    Flink = (unsigned int)v12[54].Header.WaitListHead.Flink;
    while ( 1 )
    {
      inserted = ExUuidCreate((UUID *)&v12[51]);
      if ( inserted != -1073741267 )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( inserted == 1073872982 )
      inserted = 0;
    if ( inserted >= 0 )
    {
      Handle = ExCreateHandleEx(PspUniqueJobIdTable, (__int64)v12, 0, 0, 0LL);
      if ( Handle )
        HIDWORD(v12[50].Header.WaitListHead.Blink) = Handle;
      else
        inserted = -1073741670;
    }
    PspIoRateEntryInitialize((struct _EX_RUNDOWN_REF *)&v12[57].Header.WaitListHead.Blink);
    v12[60].Header.WaitListHead.Flink = 0LL;
    v12[60].Header.WaitListHead.Blink = 0LL;
    v12[62].Header.WaitListHead.Flink = 0LL;
    v16 = v12;
    if ( inserted >= 0 )
    {
      ObfReferenceObject(v12);
      inserted = ObInsertObjectEx(v12, 0LL, 0, 0LL, (__int64)&v20);
      if ( inserted >= 0 )
      {
        *JobHandle = (HANDLE)v20;
        goto LABEL_20;
      }
      v16 = v12;
    }
    ObfDereferenceObject(v16);
    v12 = 0LL;
  }
LABEL_20:
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(v12, Flink, (unsigned int)inserted, 1824LL);
  if ( v12 )
    ObfDereferenceObject(v12);
  return inserted;
}
