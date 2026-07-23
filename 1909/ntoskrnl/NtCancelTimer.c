/*
 * XREFs of NtCancelTimer @ 0x140007B10
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140008320 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObDereferenceObjectEx @ 0x140008694 (ObDereferenceObjectEx.c)
 *     ExpCancelTimer @ 0x140008730 (ExpCancelTimer.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExpSetTimerObject2 @ 0x14009AAB4 (ExpSetTimerObject2.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PoDestroyReasonContext @ 0x1400D64DC (PoDestroyReasonContext.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  _QWORD *v7; // rdi
  struct _OBJECT_TYPE *v8; // rax
  KSPIN_LOCK *v9; // r12
  KIRQL v10; // al
  void *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r12d
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  _QWORD *v18; // rax
  signed __int64 v19; // rax
  ULONG_PTR v20; // r10
  unsigned int v21; // edx
  ULONG_PTR v22; // r9
  unsigned int v23; // r11d
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rcx
  ULONG_PTR v27; // r11
  int v28; // ecx
  unsigned __int8 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  struct _KTHREAD *v33; // rax
  struct _KTHREAD *v34; // r15
  __int64 AbEntrySummary; // r8
  __int64 v36; // rcx
  _KLOCK_ENTRY *v37; // rcx
  int SessionId; // edx
  __int64 v40; // rcx
  int v41; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v43; // [rsp+30h] [rbp-88h] BYREF
  int v44; // [rsp+34h] [rbp-84h]
  NTSTATUS v45; // [rsp+38h] [rbp-80h]
  struct _KTHREAD *v46; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  ULONG_PTR v48; // [rsp+50h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-60h]
  void *v50; // [rsp+60h] [rbp-58h]
  int v51; // [rsp+68h] [rbp-50h]
  unsigned __int64 v52; // [rsp+70h] [rbp-48h]
  signed __int64 v53; // [rsp+78h] [rbp-40h]
  KIRQL v54; // [rsp+C8h] [rbp+10h]
  char v55; // [rsp+C8h] [rbp+10h]
  _KLOCK_ENTRY *v56; // [rsp+C8h] [rbp+10h]
  char v57; // [rsp+D0h] [rbp+18h]
  unsigned int v58; // [rsp+D0h] [rbp+18h]
  int v59; // [rsp+D8h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( CurrentState && PreviousMode )
  {
    v40 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)CurrentState < 0x7FFFFFFF0000LL )
      v40 = (__int64)CurrentState;
    *(_BYTE *)v40 = *(_BYTE *)v40;
  }
  result = ObReferenceObjectByHandle(TimerHandle, 2u, 0LL, PreviousMode, &Object, 0LL);
  v6 = result;
  v45 = result;
  if ( result < 0 )
    return result;
  v7 = Object;
  v8 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
  if ( v8 == ExpIRTimerObjectType )
  {
    if ( !CurrentState )
      return ExpSetTimerObject2(Object);
    ObfDereferenceObject(Object);
    return -1073741811;
  }
  if ( v8 != ExTimerObjectType )
  {
    ObfDereferenceObject(Object);
    return -1073741788;
  }
  CurrentThread = 0LL;
  v57 = 0;
  v9 = (KSPIN_LOCK *)((char *)Object + 64);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 8);
  v54 = v10;
  v11 = (void *)v7[32];
  v50 = v11;
  if ( v11 )
  {
    KeReleaseSpinLock(v7 + 8, v10);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v43 = 0;
    v34 = KeGetCurrentThread();
    --v34->SpecialApcDisable;
    if ( ++v34->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v34, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
    AbEntrySummary = v34->AbEntrySummary;
    if ( (_BYTE)AbEntrySummary
      || ((v41 = 0, v34->AbOrphanedEntrySummary)
        ? (AbOrphanedEntrySummary = v34->AbOrphanedEntrySummary,
           v34->AbOrphanedEntrySummary = 0,
           v34->AbEntrySummary |= AbOrphanedEntrySummary,
           AbEntrySummary = v34->AbEntrySummary,
           v41 = 1)
        : (LOBYTE(AbEntrySummary) = 0),
          v41) )
    {
      _BitScanForward((unsigned int *)&v36, (unsigned __int8)AbEntrySummary);
      v51 = v36;
      v34->AbEntrySummary = AbEntrySummary & ~(1 << v36);
      v37 = &v34->LockEntries[v36];
      v56 = v37;
    }
    else
    {
      v37 = 0LL;
      v56 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        EtwTraceAutoBoostEntryExhaustion(v34, &ExpWakeTimerLock, AbEntrySummary);
        v37 = 0LL;
      }
    }
    if ( !v37 )
    {
      _interlockedbittestandset((volatile signed __int32 *)&v34->116 + 1, 0x10u);
LABEL_45:
      --v34->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v34, &ExpWakeTimerLock, &v43);
      v24 = v34->SpecialApcDisable++ == -1;
      if ( v24 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
        KiCheckForKernelApcDelivery();
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v56, &ExpWakeTimerLock);
      if ( v56 )
        v56->AcquiredByte |= 1u;
      v57 = 1;
      v54 = KeAcquireSpinLockRaiseToDpc(v7 + 8);
      v11 = (void *)v7[32];
      v50 = v11;
      v7[32] = 0LL;
      v7 = Object;
      goto LABEL_6;
    }
    if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL )
    {
      if ( byte_140467140[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
      {
        SessionId = MmGetSessionIdEx(v34->ApcState.Process);
        v37 = v56;
        goto LABEL_44;
      }
      v37 = v56;
    }
    SessionId = -1;
LABEL_44:
    v37->LockState.SessionId = SessionId;
    v37->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)((unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL);
    goto LABEL_45;
  }
LABEL_6:
  ExpCancelTimer((PKTIMER)v7);
  KeReleaseSpinLock(v9, v54);
  if ( v57 )
  {
    if ( v11 )
    {
      v16 = v7 + 33;
      v17 = *v16;
      v18 = (_QWORD *)v16[1];
      if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v18 != v16 )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      *v16 = 0LL;
    }
    v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
    v53 = v19;
    if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
      ExfTryToWakePushLock(&ExpWakeTimerLock);
    v59 = 0;
    v46 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(&ExpWakeTimerLock, v12, v13, v14) == 1 )
    {
      v21 = MmGetSessionIdEx(*(_QWORD *)(v20 + 184));
      v20 = (ULONG_PTR)v46;
    }
    else
    {
      v21 = -1;
    }
    --*(_WORD *)(v20 + 486);
    v55 = ++*(_BYTE *)(v20 + 794);
    v22 = 0LL;
    v48 = 0LL;
    v52 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
    v23 = (*(char *)(v20 + 792) | *(char *)(v20 + 1422)) ^ 0x3F;
    v24 = !_BitScanReverse((unsigned int *)&v25, v23);
    v44 = v25;
    if ( !v24 )
    {
      while ( 1 )
      {
        v58 = ~(1 << v25) & v23;
        v26 = 96 * v25;
        v27 = v26 + v20 + 800;
        if ( (*(_BYTE *)(v27 + 26) & 1) != 0
          && (*(_DWORD *)(v27 + 32) & 1) == 0
          && (*(_QWORD *)(v27 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v52
          && *(_DWORD *)(v27 + 40) == v21 )
        {
          *(_BYTE *)(v27 + 26) &= ~1u;
          if ( *(_QWORD *)(v27 + 32) )
            break;
        }
        v23 = v58;
        v24 = !_BitScanReverse((unsigned int *)&v25, v58);
        v44 = v25;
        if ( v24 )
          goto LABEL_27;
      }
      v22 = v26 + v20 + 800;
      v48 = v22;
    }
LABEL_27:
    if ( v22 )
    {
      *(_BYTE *)(v22 + 32) |= 2u;
      if ( *(__int64 *)(v22 + 32) < 0 )
      {
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22);
        v20 = (ULONG_PTR)v46;
        v22 = v48;
      }
      v28 = *(_DWORD *)(v22 + 88);
      v59 = v28 & 0x1FFFF;
      *(_DWORD *)(v22 + 88) = v28 & 0xFFFE0000;
      *(_BYTE *)(v22 + 25) &= ~1u;
      *(_QWORD *)(v22 + 32) = 0LL;
      v29 = 1 << ((__int64)(v22 - v20 - 800) / 96);
      if ( v55 == 1 )
        *(_BYTE *)(v20 + 792) |= v29;
      else
        _InterlockedOr8((volatile signed __int8 *)(v20 + 1422), v29);
    }
    else if ( (*(_DWORD *)(v20 + 120) & 0x10000) == 0 )
    {
      KeBugCheckEx(0x162u, v20, (ULONG_PTR)&ExpWakeTimerLock, v21, 0LL);
    }
    --*(_BYTE *)(v20 + 794);
    KiAbThreadRemoveBoosts(v20, &ExpWakeTimerLock, &v59);
    v33 = v46;
    v24 = v46->SpecialApcDisable++ == -1;
    if ( v24 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
      KiCheckForKernelApcDelivery();
    KeLeaveCriticalRegionThread(CurrentThread, v30, v31, v32);
    v7 = Object;
  }
  v15 = *((_DWORD *)v7 + 1);
  ObDereferenceObjectEx((ULONG_PTR)v7);
  if ( CurrentState )
    *CurrentState = v15;
  if ( v11 )
    PoDestroyReasonContext(v11);
  return v6;
}
