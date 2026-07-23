/*
 * XREFs of NtQueryInformationWorkerFactory @ 0x14031F150
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ExSystemExceptionFilter @ 0x1406E3A10 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
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
  __m128i si128; // xmm6
  __int64 v14; // rdx
  __int32 v15; // ecx
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  PVOID Object; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v19[8]; // [rsp+40h] [rbp-B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-38h] BYREF

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
    memset(v19, 0, 0x78uLL);
    v12 = (char *)Object;
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
    si128 = 0LL;
    v19[0] = 0LL;
    v19[1].m128i_i64[0] = *((_QWORD *)v12 + 14);
    v19[1].m128i_i16[4] = 0;
    v19[1].m128i_i8[10] = (v12[152] & 8) != 0;
    v14 = *((_QWORD *)v12 + 2);
    v15 = *(_DWORD *)(v14 + 28);
    v19[1].m128i_i8[11] = v15 == 0;
    v19[1].m128i_i8[12] = *((_DWORD *)v12 + 36) != 0;
    *(__int16 *)((char *)&v19[1].m128i_i16[6] + 1) = *(_WORD *)(v14 + 32);
    v19[2].m128i_i32[0] = *((_DWORD *)v12 + 37);
    *(__int64 *)((char *)v19[2].m128i_i64 + 4) = *((_QWORD *)v12 + 15);
    v19[2].m128i_i32[3] = *((_DWORD *)v12 + 34);
    v19[3].m128i_i32[0] = v15;
    v19[3].m128i_i32[1] = *((_DWORD *)v12 + 33);
    v19[3].m128i_i32[2] = *(_DWORD *)(v14 + 24);
    v19[4].m128i_i64[0] = 0LL;
    v19[4].m128i_i64[1] = *((_QWORD *)v12 + 3);
    v19[5].m128i_i64[0] = *((_QWORD *)v12 + 4);
    v19[5].m128i_i64[1] = *(_QWORD *)(*((_QWORD *)v12 + 6) + 736LL);
    v19[6] = *(__m128i *)(v12 + 56);
    v19[7].m128i_i32[0] = *((_DWORD *)v12 + 40);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      si128 = _mm_load_si128(v19);
      v12 = (char *)Object;
    }
    __writecr8(OldIrql);
    ObfDereferenceObjectWithTag(v12, 0x746C6644u);
    *(__m128i *)WorkerFactoryInformation = si128;
    *((__m128i *)WorkerFactoryInformation + 1) = v19[1];
    *((__m128i *)WorkerFactoryInformation + 2) = v19[2];
    *((__m128i *)WorkerFactoryInformation + 3) = v19[3];
    *((__m128i *)WorkerFactoryInformation + 4) = v19[4];
    *((__m128i *)WorkerFactoryInformation + 5) = v19[5];
    *((__m128i *)WorkerFactoryInformation + 6) = v19[6];
    *((_QWORD *)WorkerFactoryInformation + 14) = v19[7].m128i_i64[0];
    return 0;
  }
  return result;
}
