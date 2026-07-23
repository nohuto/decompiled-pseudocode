/*
 * XREFs of NtWaitForKeyedEvent @ 0x1406C4A50
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeReleaseSemaphore @ 0x1400C5E00 (KeReleaseSemaphore.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
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
  struct _LIST_ENTRY *Flink; // rcx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY **p_Blink; // r13
  char v17; // al
  NTSTATUS result; // eax
  struct _LIST_ENTRY *v19; // rdx
  struct _LIST_ENTRY *v20; // rdx
  struct _LIST_ENTRY *Blink; // rax
  _RTL_BALANCED_NODE *v22; // rax
  _RTL_BALANCED_NODE *v23; // r15
  LIST_ENTRY *v24; // rax
  struct _KTHREAD *v25; // rcx
  struct _LIST_ENTRY *v26; // rdx
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  NTSTATUS v28; // [rsp+34h] [rbp-74h]
  void *InitialStack; // [rsp+38h] [rbp-70h]
  PVOID v30; // [rsp+40h] [rbp-68h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-60h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  LARGE_INTEGER *p_QuadPart; // [rsp+C8h] [rbp+20h]

  p_QuadPart = Timeout;
  v28 = 0;
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
    v28 = result;
    v8 = (char *)Object;
    v30 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v8 = (char *)ExpCritSecOutOfMemoryEvent;
    v30 = (PVOID)ExpCritSecOutOfMemoryEvent;
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
  Flink = v10->Flink;
  if ( v10->Flink == v10 )
  {
LABEL_10:
    InitialStack = CurrentThread[1].InitialStack;
    CurrentThread[1].InitialStack = Key;
    p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
    v15 = (struct _LIST_ENTRY *)v9[2];
    if ( v15->Flink != v10 )
      goto LABEL_27;
    p_WaitListHead->Flink = v10;
    CurrentThread[1].Header.WaitListHead.Blink = v15;
    v15->Flink = p_WaitListHead;
    v9[2] = (unsigned __int64)p_WaitListHead;
    p_Blink = 0LL;
  }
  else
  {
    while ( 1 )
    {
      p_Blink = &Flink[-96].Blink;
      v19 = Flink[2].Flink;
      if ( ((unsigned __int8)v19 & 1) == 0 )
        goto LABEL_10;
      if ( v19 == (struct _LIST_ENTRY *)((unsigned __int64)Key | 1) && p_Blink[68] == (struct _LIST_ENTRY *)Process )
        break;
      Flink = Flink->Flink;
      if ( Flink == v10 )
        goto LABEL_10;
    }
    v20 = Flink->Flink;
    Blink = Flink->Blink;
    if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
      goto LABEL_27;
    Blink->Flink = v20;
    v20->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
  }
  v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v9);
  KeAbPostRelease((ULONG_PTR)v9);
  if ( p_Blink )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)(p_Blink + 201), 1, 1, 0);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    goto LABEL_16;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  v28 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, WaitMode, Alertable, p_QuadPart);
  if ( v28 )
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
    if ( v25 == (struct _KTHREAD *)&CurrentThread[1].Header.WaitListHead )
      goto LABEL_48;
    v26 = CurrentThread[1].Header.WaitListHead.Blink;
    if ( v25->Header.WaitListHead.Flink == v24 && v26->Flink == v24 )
    {
      v26->Flink = (struct _LIST_ENTRY *)v25;
      v25->Header.WaitListHead.Flink = v26;
      CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
      v24->Flink = v24;
      v5 = 0;
LABEL_48:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v9);
      KeAbPostRelease((ULONG_PTR)v9);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      if ( v5 )
        v28 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, 0, 0, 0LL);
      goto LABEL_15;
    }
LABEL_27:
    __fastfail(3u);
  }
LABEL_15:
  CurrentThread[1].InitialStack = InitialStack;
LABEL_16:
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( EventHandle )
    ObfDereferenceObject(v30);
  return v28;
}
