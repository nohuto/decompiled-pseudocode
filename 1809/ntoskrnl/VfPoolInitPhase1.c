/*
 * XREFs of VfPoolInitPhase1 @ 0x140939034
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409275A0 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x1409DBED4 (VerifierInitSystem.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x1400F3200 (InitializeSListHead.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x14066BC30 (PsCreateSystemThread.c)
 */

struct _KTHREAD **VfPoolInitPhase1()
{
  struct _KTHREAD **result; // rax
  struct _KTHREAD **v1; // rbx
  HANDLE v2; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp+8h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  result = (struct _KTHREAD **)(unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 1) != 0 )
  {
    v1 = (struct _KTHREAD **)&unk_1404DB778;
    do
    {
      KeInitializeEvent((PRKEVENT)v1 - 1, SynchronizationEvent, 0);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 512;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( PsCreateSystemThread(&ThreadHandle, 0, &ObjectAttributes, 0LL, 0LL, ViPoolDelayFreeTrimThreadRoutine, v1 - 5) >= 0 )
      {
        ObReferenceObjectByHandle(ThreadHandle, 0, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
        v2 = ThreadHandle;
        *v1 = (struct _KTHREAD *)Object;
        ZwClose(v2);
        InitializeSListHead((PSLIST_HEADER)(v1 - 5));
        _InterlockedExchange((volatile __int32 *)v1 + 2, 1);
      }
      v1 += 8;
      result = &qword_1404DB7F8;
    }
    while ( (__int64)v1 < (__int64)&qword_1404DB7F8 );
  }
  return result;
}
