/*
 * XREFs of NtOpenSymbolicLinkObject @ 0x140692D70
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x140738924 (AdtpInitializeDriveLetters.c)
 *     IopReassignSystemRoot @ 0x1409DC7D0 (IopReassignSystemRoot.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14004D350 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __stdcall NtOpenSymbolicLinkObject(
        PHANDLE SymbolicLinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  PHANDLE v5; // rbx
  char PreviousMode; // si
  POBJECT_TYPE v7; // rdi
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS result; // eax
  void *v10; // [rsp+40h] [rbp-28h] BYREF

  v5 = SymbolicLinkHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)SymbolicLinkHandle >= 0x7FFFFFFF0000LL )
      SymbolicLinkHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *SymbolicLinkHandle = *SymbolicLinkHandle;
  }
  v7 = ObpSymbolicLinkObjectType;
  CurrentSilo = PsGetCurrentSilo();
  result = ObOpenObjectByNameEx(
             (__int64)ObjectAttributes,
             (__int64)v7,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             (__int64)CurrentSilo,
             &v10);
  *v5 = v10;
  return result;
}
