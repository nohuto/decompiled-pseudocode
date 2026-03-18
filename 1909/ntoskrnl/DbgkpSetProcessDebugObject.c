/*
 * XREFs of DbgkpSetProcessDebugObject @ 0x1408486C0
 * Callers:
 *     NtDebugActiveProcess @ 0x140848C20 (NtDebugActiveProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PsGetNextProcessThread @ 0x14067C9D0 (PsGetNextProcessThread.c)
 *     DbgkpMarkProcessPeb @ 0x140847A20 (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeThreadMessages @ 0x140847D84 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpWakeTarget @ 0x1408489C4 (DbgkpWakeTarget.c)
 */

__int64 DbgkpSetProcessDebugObject(__int64 Object, PRKEVENT Event, int a3, ...)
{
  struct _KTHREAD *CurrentThread; // r13
  int v4; // edi
  _QWORD *v7; // rbx
  struct _EX_RUNDOWN_REF *NextProcessThread; // r14
  struct _KEVENT *Flink; // r14
  struct _KEVENT *v10; // rbx
  LONG SignalState; // eax
  struct _LIST_ENTRY *Blink; // r13
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *v14; // rax
  struct _KEVENT **v15; // rax
  PVOID *v16; // rax
  LONG v17; // eax
  PVOID v18; // rcx
  __int64 v19; // rax
  struct _KTHREAD *v21; // [rsp+30h] [rbp-30h]
  PVOID Objecta; // [rsp+38h] [rbp-28h] BYREF
  PKGUARDED_MUTEX Mutex; // [rsp+40h] [rbp-20h]
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PVOID *p_P; // [rsp+50h] [rbp-10h]
  char v26; // [rsp+A8h] [rbp+48h]
  char v27; // [rsp+B0h] [rbp+50h]
  __int64 v28; // [rsp+B8h] [rbp+58h] BYREF
  va_list va; // [rsp+B8h] [rbp+58h]
  va_list va1; // [rsp+C0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v28 = va_arg(va1, _QWORD);
  v27 = 0;
  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  p_P = &P;
  P = &P;
  v21 = CurrentThread;
  v26 = 1;
  if ( a3 >= 0 )
  {
    v7 = (_QWORD *)v28;
    v4 = 0;
  }
  else
  {
    v7 = 0LL;
    v28 = 0LL;
  }
  if ( v4 >= 0 )
  {
    ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
    while ( 1 )
    {
      if ( *(_QWORD *)(Object + 1056) )
      {
        v4 = -1073741752;
        v27 = 1;
        goto LABEL_11;
      }
      *(_QWORD *)(Object + 1056) = Event;
      ObfReferenceObjectWithTag(v7, 0x4F676244u);
      v27 = 1;
      NextProcessThread = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Object, v7);
      if ( !NextProcessThread )
        goto LABEL_11;
      *(_QWORD *)(Object + 1056) = 0LL;
      KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
      v27 = 0;
      ObfDereferenceObjectWithTag(v7, 0x4F676244u);
      v4 = DbgkpPostFakeThreadMessages(
             Object,
             Event,
             NextProcessThread,
             (struct _EX_RUNDOWN_REF **)&Objecta,
             (struct _EX_RUNDOWN_REF **)va);
      if ( v4 < 0 )
        break;
      ObfDereferenceObjectWithTag(Objecta, 0x4F676244u);
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      v7 = (_QWORD *)v28;
    }
    v7 = 0LL;
    v28 = 0LL;
  }
LABEL_11:
  Mutex = (PKGUARDED_MUTEX)&Event[1];
  ExAcquireFastMutex((PFAST_MUTEX)&Event[1]);
  if ( v4 >= 0 )
  {
    if ( (Event[4].Header.LockNV & 1) != 0 )
    {
      *(_QWORD *)(Object + 1056) = 0LL;
      v4 = -1073740972;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(Object + 780), 3u);
      ObfReferenceObject(Event);
      v7 = (_QWORD *)v28;
    }
  }
  Flink = (struct _KEVENT *)Event[3].Header.WaitListHead.Flink;
  if ( Flink == (struct _KEVENT *)&Event[3].Header.WaitListHead )
    goto LABEL_37;
  do
  {
    v10 = Flink;
    Flink = *(struct _KEVENT **)&Flink->Header.Lock;
    SignalState = v10[3].Header.SignalState;
    if ( (SignalState & 4) == 0 || (struct _KTHREAD *)v10[3].Header.WaitListHead.Flink != CurrentThread )
      continue;
    Blink = v10[2].Header.WaitListHead.Blink;
    if ( v4 < 0 )
    {
      if ( (struct _KEVENT *)Flink->Header.WaitListHead.Flink != v10
        || (v15 = (struct _KEVENT **)v10->Header.WaitListHead.Flink, *v15 != v10) )
      {
LABEL_45:
        __fastfail(3u);
      }
      *v15 = Flink;
      Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v15;
      goto LABEL_30;
    }
    if ( (SignalState & 0x10) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&Blink[110], 0x80u);
      v13 = *(struct _LIST_ENTRY **)&v10->Header.Lock;
      if ( *(struct _KEVENT **)(*(_QWORD *)&v10->Header.Lock + 8LL) != v10 )
        goto LABEL_45;
      v14 = v10->Header.WaitListHead.Flink;
      if ( (struct _KEVENT *)v14->Flink != v10 )
        goto LABEL_45;
      v14->Flink = v13;
      v13->Blink = v14;
LABEL_30:
      v16 = p_P;
      if ( *p_P != &P )
        goto LABEL_45;
      *(_QWORD *)&v10->Header.Lock = &P;
      v10->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v16;
      *v16 = v10;
      p_P = (PVOID *)v10;
      goto LABEL_32;
    }
    if ( v26 )
    {
      v10[3].Header.SignalState = SignalState & 0xFFFFFFFB;
      KeSetEvent(Event, 0, 0);
      v26 = 0;
    }
    v10[3].Header.WaitListHead.Flink = 0LL;
    _InterlockedOr((volatile signed __int32 *)&Blink[110], 0x40u);
LABEL_32:
    v17 = v10[3].Header.SignalState;
    if ( (v17 & 8) != 0 )
    {
      v10[3].Header.SignalState = v17 & 0xFFFFFFF7;
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Blink[108].Blink);
    }
    CurrentThread = v21;
  }
  while ( Flink != (struct _KEVENT *)&Event[3].Header.WaitListHead );
  v7 = (_QWORD *)v28;
LABEL_37:
  KeReleaseGuardedMutex(Mutex);
  if ( v27 )
    KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x4F676244u);
  while ( 1 )
  {
    v18 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_45;
    v19 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_45;
    P = *(PVOID *)P;
    *(_QWORD *)(v19 + 8) = &P;
    DbgkpWakeTarget(v18);
  }
  if ( v4 >= 0 )
    DbgkpMarkProcessPeb(Object);
  return (unsigned int)v4;
}
