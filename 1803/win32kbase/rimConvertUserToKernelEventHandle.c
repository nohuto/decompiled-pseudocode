/*
 * XREFs of rimConvertUserToKernelEventHandle @ 0x1C00F2434
 * Callers:
 *     RIMReadInput @ 0x1C00E42E0 (RIMReadInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C00E4800 (RIMRegisterForInputWithCallbacks.c)
 *     rimObsAddInputObserver @ 0x1C0104A1C (rimObsAddInputObserver.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimConvertUserToKernelEventHandle(void *a1, void **a2)
{
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  PVOID v6; // rdi
  unsigned int v7; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = ObReferenceObjectByHandle(a1, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  v6 = Object;
  v7 = v3;
  if ( v3 >= 0 )
  {
    v7 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, a2);
    ObfDereferenceObject(v6);
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  }
  return v7;
}
