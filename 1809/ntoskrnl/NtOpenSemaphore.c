/*
 * XREFs of NtOpenSemaphore @ 0x1405B9FF0
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1405BA290 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall NtOpenSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAcces,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  char PreviousMode; // di
  NTSTATUS v6; // edx
  void *v8; // [rsp+40h] [rbp-18h] BYREF

  v3 = (int)ObjectAttributes;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ObjectAttributes = (POBJECT_ATTRIBUTES)0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SemaphoreHandle < 0x7FFFFFFF0000LL )
      ObjectAttributes = (POBJECT_ATTRIBUTES)SemaphoreHandle;
    *(_QWORD *)&ObjectAttributes->Length = *(_QWORD *)&ObjectAttributes->Length;
  }
  LOBYTE(ObjectAttributes) = PreviousMode;
  v6 = ObOpenObjectByName(
         v3,
         (_DWORD)ExSemaphoreObjectType,
         (_DWORD)ObjectAttributes,
         0,
         DesiredAcces,
         0LL,
         (__int64)&v8);
  if ( v6 >= 0 )
    *SemaphoreHandle = v8;
  return v6;
}
