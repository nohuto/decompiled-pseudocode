/*
 * XREFs of VfPoolInitPhase1 @ 0x14097D548
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140964AD4 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x140A1E060 (VerifierInitSystem.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x1400E5520 (InitializeSListHead.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x1406B3FB0 (PsCreateSystemThread.c)
 */

unsigned int *VfPoolInitPhase1()
{
  unsigned int *result; // rax
  unsigned int *v1; // rbx
  HANDLE v2; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+18h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  result = (unsigned int *)(unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 1) != 0 )
  {
    v1 = (unsigned int *)&unk_140505368;
    do
    {
      KeInitializeEvent((PRKEVENT)v1 - 1, SynchronizationEvent, 0);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 512;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( PsCreateSystemThread(
             &ThreadHandle,
             0,
             &ObjectAttributes,
             0LL,
             0LL,
             ViPoolDelayFreeTrimThreadRoutine,
             v1 - 10) >= 0 )
      {
        ObReferenceObjectByHandle(ThreadHandle, 0, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
        v2 = ThreadHandle;
        *(_QWORD *)v1 = Object;
        ZwClose(v2);
        InitializeSListHead((PSLIST_HEADER)(v1 - 10));
        _InterlockedExchange((volatile __int32 *)v1 + 2, 1);
      }
      v1 += 16;
      result = &ViAvlNodeLookaside.L.Tag;
    }
    while ( (__int64)v1 < (__int64)&ViAvlNodeLookaside.L.Tag );
  }
  return result;
}
