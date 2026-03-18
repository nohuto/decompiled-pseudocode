/*
 * XREFs of rimConvertUserToKernelTimerHandle @ 0x1C00F24D8
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C00E4800 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimConvertUserToKernelTimerHandle(void *a1, void **a2)
{
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  PVOID v6; // rdi
  NTSTATUS v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = ObReferenceObjectByHandle(a1, 2u, ExTimerObjectType, 1, &Object, 0LL);
  v6 = Object;
  v7 = v3;
  if ( v3 >= 0 )
  {
    v7 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 2u, ExTimerObjectType, 0, a2);
    if ( v7 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
    ObfDereferenceObject(v6);
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  }
  return (unsigned int)v7;
}
