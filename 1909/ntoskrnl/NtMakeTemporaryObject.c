/*
 * XREFs of NtMakeTemporaryObject @ 0x1406A1240
 * Callers:
 *     IopReassignSystemRoot @ 0x140A1E568 (IopReassignSystemRoot.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ObMakeTemporaryObject @ 0x1406A12C0 (ObMakeTemporaryObject.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1408DE7F0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

NTSTATUS __stdcall NtMakeTemporaryObject(HANDLE Handle)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  result = ObReferenceObjectByHandle(Handle, 0x10000u, 0LL, KeGetCurrentThread()->PreviousMode, &Object, &v5);
  v3 = result;
  if ( result >= 0 )
  {
    ObMakeTemporaryObject(Object);
    if ( (v5.HandleAttributes & 4) != 0 )
      SeDeleteObjectAuditAlarmWithTransaction(Object, Handle, 0LL);
    ObfDereferenceObject(Object);
    return v3;
  }
  return result;
}
