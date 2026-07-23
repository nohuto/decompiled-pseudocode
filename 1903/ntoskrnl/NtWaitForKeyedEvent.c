/*
 * XREFs of NtWaitForKeyedEvent @ 0x1406BA540
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphore @ 0x1401091E0 (KeReleaseSemaphore.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtWaitForKeyedEvent(HANDLE EventHandle, PVOID Key, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  char v5; // r14
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  char *v8; // rcx
  unsigned __int64 *v9; // rsi
  struct _LIST_ENTRY *v10; // r15
  _RTL_BALANCED_NODE *v11; // rax
  _RTL_BALANCED_NODE *v12; // r12
  struct _LIST_ENTRY *i; // rcx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY **p_Blink; // r13
  signed __int64 v17; // rax
  NTSTATUS result; // eax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v20; // rdx
  struct _LIST_ENTRY *Blink; // rax
  _RTL_BALANCED_NODE *v22; // rax
  _RTL_BALANCED_NODE *v23; // r15
  LIST_ENTRY *v24; // rax
  struct _KTHREAD *v25; // rcx
  struct _LIST_ENTRY *v26; // rdx
  char v27; // bl
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  NTSTATUS v29; // [rsp+34h] [rbp-74h]
  LONGLONG QuadPart; // [rsp+38h] [rbp-70h] BYREF
  void *InitialStack; // [rsp+40h] [rbp-68h]
  PVOID v32; // [rsp+48h] [rbp-60h]
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  signed __int64 v35; // [rsp+68h] [rbp-40h]
  LARGE_INTEGER *p_QuadPart; // [rsp+C8h] [rbp+20h]

  p_QuadPart = Timeout;
  v29 = 0;
  QuadPart = 0LL;
  InitialStack = 0LL;
  v5 = 1;
  if ( ((unsigned __int8)Key & 1) != 0 )
    return -1073741585;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  WaitMode = PreviousMode;
  if ( Timeout )
  {
    if ( PreviousMode && ((unsigned __int64)&Timeout[1] > 0x7FFFFFFF0000LL || &Timeout[1] < Timeout) )
      MEMORY[0x7FFFFFFF0000] = 0;
    QuadPart = Timeout->QuadPart;
    p_QuadPart = (LARGE_INTEGER *)&QuadPart;
  }
  if ( EventHandle )
  {
    result = ObReferenceObjectByHandle(EventHandle, 1u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
    v29 = result;
    v8 = (char *)Object;
    v32 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v8 = (char *)ExpCritSecOutOfMemoryEvent;
    v32 = (PVOID)ExpCritSecOutOfMemoryEvent;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x20u;
  Process = CurrentThread->ApcState.Process;
  v9 = (unsigned __int64 *)&v8[24 * (((unsigned __int64)Key >> 5) & 0x3F)];
  v10 = (struct _LIST_ENTRY *)(v9 + 1);
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v11, (ULONG_PTR)v9);
  if ( v12 )
    BYTE2(v12[1].Left) |= 1u;
  for ( i = v10->Flink; i != v10; i = i->Flink )
  {
    p_Blink = &i[-97].Blink;
    Flink = i[2].Flink;
    if ( ((unsigned __int8)Flink & 1) == 0 )
      break;
    if ( Flink == (struct _LIST_ENTRY *)((unsigned __int64)Key | 1) && p_Blink[68] == (struct _LIST_ENTRY *)Process )
    {
      v20 = i->Flink;
      Blink = i->Blink;
      if ( i->Flink->Blink != i || Blink->Flink != i )
        __fastfail(3u);
      Blink->Flink = v20;
      v20->Blink = Blink;
      i->Blink = i;
      i->Flink = i;
      goto LABEL_12;
    }
  }
  InitialStack = CurrentThread[1].InitialStack;
  CurrentThread[1].InitialStack = Key;
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  v15 = (struct _LIST_ENTRY *)v9[2];
  if ( v15->Flink != v10 )
    __fastfail(3u);
  p_WaitListHead->Flink = v10;
  CurrentThread[1].Header.WaitListHead.Blink = v15;
  v15->Flink = p_WaitListHead;
  v9[2] = (unsigned __int64)p_WaitListHead;
  p_Blink = 0LL;
LABEL_12:
  v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL);
  v35 = v17;
  if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v9);
  KeAbPostRelease((ULONG_PTR)v9);
  if ( p_Blink )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)(p_Blink + 203), 1, 1, 0);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v29 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, WaitMode, Alertable, p_QuadPart);
    if ( v29 )
    {
      --CurrentThread->KernelApcDisable;
      v22 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0);
      v23 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
        ExfAcquirePushLockExclusiveEx(v9, v22, (ULONG_PTR)v9);
      if ( v23 )
        BYTE2(v23[1].Left) |= 1u;
      v24 = &CurrentThread[1].Header.WaitListHead;
      v25 = (struct _KTHREAD *)CurrentThread[1].Header.WaitListHead.Flink;
      if ( v25 != (struct _KTHREAD *)&CurrentThread[1].Header.WaitListHead )
      {
        v26 = CurrentThread[1].Header.WaitListHead.Blink;
        if ( v25->Header.WaitListHead.Flink != v24 || v26->Flink != v24 )
          __fastfail(3u);
        v26->Flink = (struct _LIST_ENTRY *)v25;
        v25->Header.WaitListHead.Flink = v26;
        CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
        v24->Flink = v24;
        v5 = 0;
      }
      v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v27 & 2) != 0 && (v27 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v9);
      KeAbPostRelease((ULONG_PTR)v9);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( v5 )
        v29 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, 0, 0, 0LL);
    }
    CurrentThread[1].InitialStack = InitialStack;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( EventHandle )
    ObfDereferenceObject(v32);
  return v29;
}
