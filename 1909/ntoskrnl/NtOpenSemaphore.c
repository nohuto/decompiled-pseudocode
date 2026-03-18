/*
 * XREFs of NtOpenSemaphore @ 0x1406D22A0
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1405FF9C0 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall NtOpenSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAcces,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  __int64 v6; // r8
  NTSTATUS v7; // edx
  void *v9; // [rsp+40h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SemaphoreHandle < 0x7FFFFFFF0000LL )
      v6 = (__int64)SemaphoreHandle;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  v7 = ObOpenObjectByName(
         (__int64)ObjectAttributes,
         (__int64)ExSemaphoreObjectType,
         PreviousMode,
         0LL,
         DesiredAcces,
         0LL,
         &v9);
  if ( v7 >= 0 )
    *SemaphoreHandle = v9;
  return v7;
}
