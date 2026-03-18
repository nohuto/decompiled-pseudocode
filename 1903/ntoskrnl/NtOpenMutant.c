/*
 * XREFs of NtOpenMutant @ 0x1406D1B40
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1405FDF90 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall NtOpenMutant(PHANDLE MutantHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  __int64 v6; // r8
  NTSTATUS v7; // edx
  void *v9; // [rsp+40h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MutantHandle < 0x7FFFFFFF0000LL )
      v6 = (__int64)MutantHandle;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  v7 = ObOpenObjectByName(
         (__int64)ObjectAttributes,
         (__int64)ExMutantObjectType,
         PreviousMode,
         0LL,
         DesiredAccess,
         0LL,
         &v9);
  if ( v7 >= 0 )
    *MutantHandle = v9;
  return v7;
}
