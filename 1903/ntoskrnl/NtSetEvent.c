/*
 * XREFs of NtSetEvent @ 0x1406B2B60
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140A17C20 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  PLONG v2; // rsi
  KPROCESSOR_MODE PreviousMode; // r15
  int v4; // ebx
  PVOID v5; // rdi
  LONG v6; // r14d
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v2 = PreviousState;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousState && PreviousMode )
  {
    if ( (unsigned __int64)PreviousState >= 0x7FFFFFFF0000LL )
      PreviousState = (PLONG)0x7FFFFFFF0000LL;
    *PreviousState = *PreviousState;
  }
  v4 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v5 = Object;
  if ( v4 >= 0 )
  {
    v6 = KeSetEvent((PRKEVENT)Object, 1, 0);
    if ( v2 )
      *v2 = v6;
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  return v4;
}
