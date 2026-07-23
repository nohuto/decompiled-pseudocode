/*
 * XREFs of NtQueryInformationWorkerFactory @ 0x14033E410
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ExSystemExceptionFilter @ 0x140749ED0 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQueryInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  char *v12; // rdi
  __m128i v13; // xmm6
  __int64 v14; // rdx
  int v15; // ecx
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  PVOID Object; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v19; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v20; // [rsp+50h] [rbp-A8h]
  __int128 v21; // [rsp+60h] [rbp-98h]
  __int128 v22; // [rsp+70h] [rbp-88h]
  __int128 v23; // [rsp+80h] [rbp-78h]
  __int128 v24; // [rsp+90h] [rbp-68h]
  __int128 v25; // [rsp+A0h] [rbp-58h]
  __int64 v26; // [rsp+B0h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( WorkerFactoryInformationClass != WorkerFactoryBasicInformation )
    return -1073741821;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = 0x7FFFFFFF0000LL;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)WorkerFactoryInformation < 0x7FFFFFFF0000LL )
      v11 = (__int64)WorkerFactoryInformation;
    *(_BYTE *)v11 = *(_BYTE *)v11;
    *(_BYTE *)(v11 + 119) = *(_BYTE *)(v11 + 119);
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v10 = (__int64)ReturnLength;
      *(_DWORD *)v10 = 120;
    }
  }
  else if ( ReturnLength )
  {
    *ReturnLength = 120;
  }
  if ( WorkerFactoryInformationLength != 120 )
    return -1073741820;
  result = ObReferenceObjectByHandle(WorkerFactoryHandle, 8u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    HIBYTE(v20) = 0;
    HIDWORD(v22) = 0;
    HIDWORD(v26) = 0;
    v12 = (char *)Object;
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
    v13 = 0LL;
    v19 = 0LL;
    *(_QWORD *)&v20 = *((_QWORD *)v12 + 14);
    WORD4(v20) = 0;
    BYTE10(v20) = (v12[312] & 8) != 0;
    v14 = *((_QWORD *)v12 + 2);
    v15 = *(_DWORD *)(v14 + 28);
    BYTE11(v20) = v15 == 0;
    BYTE12(v20) = *((_DWORD *)v12 + 76) != 0;
    *(_WORD *)((char *)&v20 + 13) = *(_WORD *)(v14 + 32);
    LODWORD(v21) = *((_DWORD *)v12 + 77);
    *(_QWORD *)((char *)&v21 + 4) = *((_QWORD *)v12 + 35);
    HIDWORD(v21) = *((_DWORD *)v12 + 74);
    LODWORD(v22) = v15;
    DWORD1(v22) = *((_DWORD *)v12 + 73);
    DWORD2(v22) = *(_DWORD *)(v14 + 24);
    *(_QWORD *)&v23 = 0LL;
    *((_QWORD *)&v23 + 1) = *((_QWORD *)v12 + 3);
    *(_QWORD *)&v24 = *((_QWORD *)v12 + 4);
    *((_QWORD *)&v24 + 1) = *(_QWORD *)(*((_QWORD *)v12 + 6) + 744LL);
    v25 = *(_OWORD *)(v12 + 56);
    LODWORD(v26) = *((_DWORD *)v12 + 80);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      v13 = _mm_load_si128(&v19);
      v12 = (char *)Object;
    }
    __writecr8(OldIrql);
    ObfDereferenceObjectWithTag(v12, 0x746C6644u);
    *(__m128i *)WorkerFactoryInformation = v13;
    *((_OWORD *)WorkerFactoryInformation + 1) = v20;
    *((_OWORD *)WorkerFactoryInformation + 2) = v21;
    *((_OWORD *)WorkerFactoryInformation + 3) = v22;
    *((_OWORD *)WorkerFactoryInformation + 4) = v23;
    *((_OWORD *)WorkerFactoryInformation + 5) = v24;
    *((_OWORD *)WorkerFactoryInformation + 6) = v25;
    *((_QWORD *)WorkerFactoryInformation + 14) = v26;
    return 0;
  }
  return result;
}
