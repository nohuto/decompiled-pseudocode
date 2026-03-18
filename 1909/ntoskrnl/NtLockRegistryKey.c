/*
 * XREFs of NtLockRegistryKey @ 0x14073C240
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     CmpReleaseShutdownRundown @ 0x1405FF930 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FFA40 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x1405FFB10 (CmObReferenceObjectByHandle.c)
 *     CmLockKeyForWrite @ 0x14073C2DC (CmLockKeyForWrite.c)
 */

NTSTATUS __stdcall NtLockRegistryKey(HANDLE KeyHandle)
{
  __int64 v2; // r8
  NTSTATUS v3; // ebx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  Object = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
    return -1073741727;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
    return -1073741431;
  v3 = CmObReferenceObjectByHandle(KeyHandle, 0x20006u, v2, 0, &Object, 0LL);
  if ( v3 >= 0 )
  {
    v3 = CmLockKeyForWrite(Object);
    if ( v3 >= 0 )
      v3 = 0;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  CmpReleaseShutdownRundown();
  return v3;
}
