/*
 * XREFs of NtOpenSession @ 0x1406ED8F0
 * Callers:
 *     PfpSourceGetPrefetchSupport @ 0x1406F9094 (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     ObOpenObjectByName @ 0x1405FF9C0 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenSession(PHANDLE SessionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // cl
  __int64 v6; // r8
  NTSTATUS result; // eax
  void *v8; // [rsp+48h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SessionHandle < 0x7FFFFFFF0000LL )
      v6 = (__int64)SessionHandle;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  result = ObOpenObjectByName(
             (__int64)ObjectAttributes,
             (__int64)MmSessionObjectType,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             &v8);
  *SessionHandle = v8;
  return result;
}
