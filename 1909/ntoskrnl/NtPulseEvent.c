/*
 * XREFs of NtPulseEvent @ 0x140673EE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KePulseEvent @ 0x1400DB590 (KePulseEvent.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtPulseEvent(HANDLE EventHandle, PLONG PulseCount)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int v5; // edi
  LONG v6; // esi
  __int64 v8; // rcx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PulseCount && PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PulseCount < 0x7FFFFFFF0000LL )
      v8 = (__int64)PulseCount;
    *(_DWORD *)v8 = *(_DWORD *)v8;
  }
  v5 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v6 = KePulseEvent((PRKEVENT)Object, 1, 0);
    if ( PulseCount )
      *PulseCount = v6;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v5;
}
