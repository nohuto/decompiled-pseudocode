/*
 * XREFs of NtSetEvent @ 0x140646270
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x1409C6290 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  PLONG v2; // rsi
  KPROCESSOR_MODE PreviousMode; // r14
  int v4; // ebx
  LONG v5; // r15d
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
  if ( v4 >= 0 )
  {
    v5 = KeSetEvent((PRKEVENT)Object, 1, 0);
    ObfDereferenceObject(Object);
    if ( v2 )
      *v2 = v5;
  }
  return v4;
}
