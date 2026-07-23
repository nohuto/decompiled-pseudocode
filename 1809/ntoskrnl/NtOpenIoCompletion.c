/*
 * XREFs of NtOpenIoCompletion @ 0x14081E2E0
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1405BA290 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall NtOpenIoCompletion(
        PHANDLE CompetionPort,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  __int64 v6; // r8
  NTSTATUS v7; // edx
  void *v9; // [rsp+48h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)CompetionPort < 0x7FFFFFFF0000LL )
      v6 = (__int64)CompetionPort;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  v7 = ObOpenObjectByName(
         (__int64)ObjectAttributes,
         (__int64)IoCompletionObjectType,
         PreviousMode,
         0LL,
         DesiredAccess,
         0LL,
         (__int64)&v9);
  if ( v7 >= 0 )
    *CompetionPort = v9;
  return v7;
}
