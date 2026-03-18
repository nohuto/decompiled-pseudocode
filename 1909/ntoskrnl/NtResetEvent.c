/*
 * XREFs of NtResetEvent @ 0x14062A340
 * Callers:
 *     PfSnPrefetchFileMetadata @ 0x14062A3EC (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtResetEvent(HANDLE EventHandle, PLONG NumberOfWaitingThreads)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int v5; // edi
  LONG v6; // esi
  __int64 v8; // rcx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( NumberOfWaitingThreads && PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NumberOfWaitingThreads < 0x7FFFFFFF0000LL )
      v8 = (__int64)NumberOfWaitingThreads;
    *(_DWORD *)v8 = *(_DWORD *)v8;
  }
  v5 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v6 = KeResetEvent((PRKEVENT)Object);
    if ( NumberOfWaitingThreads )
      *NumberOfWaitingThreads = v6;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v5;
}
