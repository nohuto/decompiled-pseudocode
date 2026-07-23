/*
 * XREFs of NtReleaseKeyedEvent @ 0x1406BA7B0
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

NTSTATUS __stdcall NtReleaseKeyedEvent(HANDLE EventHandle, PVOID Key, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  unsigned __int64 v4; // r13
  char v5; // r15
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  char *v8; // rcx
  unsigned __int64 *v9; // rsi
  struct _LIST_ENTRY *v10; // r14
  _RTL_BALANCED_NODE *v11; // rax
  _RTL_BALANCED_NODE *v12; // r12
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY **p_Blink; // r13
  struct _LIST_ENTRY *v15; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  signed __int64 v17; // rax
  NTSTATUS result; // eax
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v20; // rcx
  _RTL_BALANCED_NODE *v21; // rax
  _RTL_BALANCED_NODE *v22; // r14
  LIST_ENTRY *v23; // rax
  struct _KTHREAD *v24; // rcx
  struct _LIST_ENTRY *v25; // rdx
  char v26; // bl
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  NTSTATUS v28; // [rsp+34h] [rbp-74h]
  LONGLONG QuadPart; // [rsp+38h] [rbp-70h] BYREF
  void *InitialStack; // [rsp+40h] [rbp-68h]
  PVOID v31; // [rsp+48h] [rbp-60h]
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  signed __int64 v34; // [rsp+68h] [rbp-40h]
  LARGE_INTEGER *p_QuadPart; // [rsp+C8h] [rbp+20h]

  p_QuadPart = Timeout;
  v4 = (unsigned __int64)Key;
  v28 = 0;
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
    result = ObReferenceObjectByHandle(EventHandle, 2u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
    v28 = result;
    v8 = (char *)Object;
    v31 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v8 = (char *)ExpCritSecOutOfMemoryEvent;
    v31 = (PVOID)ExpCritSecOutOfMemoryEvent;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x20u;
  Process = CurrentThread->ApcState.Process;
  v9 = (unsigned __int64 *)&v8[24 * ((v4 >> 5) & 0x3F)];
  v10 = (struct _LIST_ENTRY *)(v9 + 1);
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v11, (ULONG_PTR)v9);
  if ( v12 )
    BYTE2(v12[1].Left) |= 1u;
  Flink = v10->Flink;
  if ( v10->Flink == v10 )
  {
LABEL_24:
    InitialStack = CurrentThread[1].InitialStack;
    CurrentThread[1].InitialStack = (void *)(v4 | 1);
    p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
    v20 = v10->Flink;
    if ( v10->Flink->Blink != v10 )
      __fastfail(3u);
    p_WaitListHead->Flink = v20;
    CurrentThread[1].Header.WaitListHead.Blink = v10;
    v20->Blink = p_WaitListHead;
    v10->Flink = p_WaitListHead;
    p_Blink = 0LL;
  }
  else
  {
    while ( 1 )
    {
      p_Blink = &Flink[-97].Blink;
      if ( Flink[2].Flink == Key && p_Blink[68] == (struct _LIST_ENTRY *)Process )
        break;
      Flink = Flink->Flink;
      if ( Flink == v10 )
      {
        v4 = (unsigned __int64)Key;
        goto LABEL_24;
      }
    }
    v15 = Flink->Flink;
    Blink = Flink->Blink;
    if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
      __fastfail(3u);
    Blink->Flink = v15;
    v15->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
  }
  v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL);
  v34 = v17;
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
    v28 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, WaitMode, Alertable, p_QuadPart);
    if ( v28 )
    {
      --CurrentThread->KernelApcDisable;
      v21 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0);
      v22 = v21;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
        ExfAcquirePushLockExclusiveEx(v9, v21, (ULONG_PTR)v9);
      if ( v22 )
        BYTE2(v22[1].Left) |= 1u;
      v23 = &CurrentThread[1].Header.WaitListHead;
      v24 = (struct _KTHREAD *)CurrentThread[1].Header.WaitListHead.Flink;
      if ( v24 != (struct _KTHREAD *)&CurrentThread[1].Header.WaitListHead )
      {
        v25 = CurrentThread[1].Header.WaitListHead.Blink;
        if ( v24->Header.WaitListHead.Flink != v23 || v25->Flink != v23 )
          __fastfail(3u);
        v25->Flink = (struct _LIST_ENTRY *)v24;
        v24->Header.WaitListHead.Flink = v25;
        CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
        v23->Flink = v23;
        v5 = 0;
      }
      v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v26 & 2) != 0 && (v26 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v9);
      KeAbPostRelease((ULONG_PTR)v9);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( v5 )
        v28 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, 0, 0, 0LL);
    }
    CurrentThread[1].InitialStack = InitialStack;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( EventHandle )
    ObfDereferenceObject(v31);
  return v28;
}
