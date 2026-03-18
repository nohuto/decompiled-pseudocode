/*
 * XREFs of PopCreatePowerThread @ 0x140180498
 * Callers:
 *     PopCreateDynamicIrpWorker @ 0x140180430 (PopCreateDynamicIrpWorker.c)
 *     PopInitializeIrpWorkers @ 0x140A1F9F0 (PopInitializeIrpWorkers.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F13C0 (ObReferenceObjectByHandleWithTag.c)
 *     PsCreateSystemThread @ 0x140672580 (PsCreateSystemThread.c)
 */

NTSTATUS __fastcall PopCreatePowerThread(KSTART_ROUTINE *a1, void *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+20h] BYREF
  PVOID Object; // [rsp+98h] [rbp+28h] BYREF

  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  result = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, &ObjectAttributes, 0LL, 0LL, a1, a2);
  if ( result >= 0 )
  {
    v3 = ObReferenceObjectByHandleWithTag(
           ThreadHandle,
           0x1FFFFFu,
           (POBJECT_TYPE)PsThreadType,
           0,
           0x72496F50u,
           &Object,
           0LL);
    ZwClose(ThreadHandle);
    if ( v3 >= 0 )
    {
      KeSetActualBasePriorityThread((__int64)Object, 13LL);
      ObfDereferenceObjectWithTag(Object, 0x72496F50u);
    }
    return 0;
  }
  return result;
}
