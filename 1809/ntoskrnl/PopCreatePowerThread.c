/*
 * XREFs of PopCreatePowerThread @ 0x140176528
 * Callers:
 *     PopCreateDynamicIrpWorker @ 0x1401764C0 (PopCreateDynamicIrpWorker.c)
 *     PopInitializeIrpWorkers @ 0x1409DD56C (PopInitializeIrpWorkers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     PsCreateSystemThread @ 0x14066BC30 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406726C0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall PopCreatePowerThread(KSTART_ROUTINE *a1, void *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  __int64 v4; // r8
  OBJECT_ATTRIBUTES v5; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+18h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v5.RootDirectory = 0LL;
  v5.ObjectName = 0LL;
  v5.Length = 48;
  v5.Attributes = 512;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  result = PsCreateSystemThread(&Handle, 0x1FFFFFu, &v5, 0LL, 0LL, a1, a2);
  if ( result >= 0 )
  {
    v3 = ObReferenceObjectByHandleWithTag(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, 0x72496F50u, &Object, 0LL);
    ZwClose(Handle);
    if ( v3 >= 0 )
    {
      KeSetActualBasePriorityThread((__int64)Object, 13LL, v4);
      ObfDereferenceObjectWithTag(Object, 0x72496F50u);
    }
    return 0;
  }
  return result;
}
