/*
 * XREFs of VfZwCloseObjectAuditAlarm @ 0x1409479B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViZwCheckUnicodeString @ 0x14094B6EC (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x14094B7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCloseObjectAuditAlarm(ULONG_PTR BugCheckParameter3, __int64 a2, char a3)
{
  __int64 v6; // r8
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckUnicodeString(BugCheckParameter3, retaddr);
  LOBYTE(v6) = a3;
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64, __int64))pXdvZwCloseObjectAuditAlarm)(BugCheckParameter3, a2, v6);
}
