/*
 * XREFs of PspCreateObjectHandle @ 0x1405E95CC
 * Callers:
 *     PspInsertThread @ 0x1405E8D54 (PspInsertThread.c)
 *     NtCreateUserProcess @ 0x140615E10 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x140769434 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407853D0 (PspCreateProcess.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x1405D0390 (ObOpenObjectByPointer.c)
 *     SePrivilegeObjectAuditAlarm @ 0x1406F8F80 (SePrivilegeObjectAuditAlarm.c)
 */

__int64 __fastcall PspCreateObjectHandle(void *a1, __int64 a2, struct _OBJECT_TYPE *a3)
{
  _QWORD *v3; // rsi
  NTSTATUS v5; // edi
  _DWORD *v6; // r9

  v3 = (_QWORD *)(a2 + 392);
  v5 = ObOpenObjectByPointer(
         a1,
         *(_DWORD *)(a2 + 384),
         (PACCESS_STATE)a2,
         0,
         a3,
         *(_BYTE *)(a2 + 388),
         (PHANDLE)(a2 + 392));
  if ( v5 >= 0 )
  {
    v6 = **(_DWORD ***)(a2 + 72);
    if ( v6 )
    {
      if ( *v6 )
        SePrivilegeObjectAuditAlarm(*v3, a2 + 32, *(_DWORD *)(a2 + 20), (_DWORD)v6, 1, *(_BYTE *)(a2 + 388));
    }
  }
  return (unsigned int)v5;
}
