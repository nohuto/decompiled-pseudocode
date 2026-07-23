/*
 * XREFs of SePrivilegeObjectAuditAlarm @ 0x140704B20
 * Callers:
 *     PspCreateObjectHandle @ 0x140622C88 (PspCreateObjectHandle.c)
 *     SeCheckPrivilegedObject @ 0x14071F504 (SeCheckPrivilegedObject.c)
 * Callees:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405BC8D8 (SepAdtPrivilegeObjectAuditAlarm.c)
 */

char __fastcall SePrivilegeObjectAuditAlarm(
        unsigned __int64 a1,
        __int64 *a2,
        unsigned int a3,
        int *a4,
        char a5,
        char a6)
{
  char result; // al

  if ( a6 )
    return SepAdtPrivilegeObjectAuditAlarm(&SeSubsystemName, 0LL, 0LL, a1, *a2, a2[2], a2[3], a3, a4, a5);
  return result;
}
