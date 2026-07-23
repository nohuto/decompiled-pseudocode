/*
 * XREFs of ViZwCheckUnicodeString @ 0x14094B6EC
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm @ 0x140946F30 (VfZwAccessCheckAndAuditAlarm.c)
 *     VfZwAlpcConnectPort @ 0x140947370 (VfZwAlpcConnectPort.c)
 *     VfZwCloseObjectAuditAlarm @ 0x1409479B0 (VfZwCloseObjectAuditAlarm.c)
 *     VfZwConnectPort @ 0x140947A60 (VfZwConnectPort.c)
 *     VfZwCreateKey @ 0x140947E90 (VfZwCreateKey.c)
 *     VfZwCreateSymbolicLinkObject @ 0x140948020 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTransaction @ 0x140948140 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x140948240 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteValueKey @ 0x140948340 (VfZwDeleteValueKey.c)
 *     VfZwDisplayString @ 0x140948490 (VfZwDisplayString.c)
 *     VfZwLoadDriver @ 0x140948AA0 (VfZwLoadDriver.c)
 *     VfZwOpenTransactionManager @ 0x140949590 (VfZwOpenTransactionManager.c)
 *     VfZwQueryDirectoryFile @ 0x140949A20 (VfZwQueryDirectoryFile.c)
 *     VfZwQueryLicenseValue @ 0x14094A2F0 (VfZwQueryLicenseValue.c)
 *     VfZwQuerySymbolicLinkObject @ 0x14094A540 (VfZwQuerySymbolicLinkObject.c)
 *     VfZwQueryValueKey @ 0x14094A650 (VfZwQueryValueKey.c)
 *     VfZwSetValueKey @ 0x14094B200 (VfZwSetValueKey.c)
 *     VfZwUnloadDriver @ 0x14094B3C0 (VfZwUnloadDriver.c)
 *     ViZwCheckObjectAttributes @ 0x14094B69C (ViZwCheckObjectAttributes.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x14094B784 (ViZwCheckVirtualAddress.c)
 */

void __fastcall ViZwCheckUnicodeString(__int16 *BugCheckParameter3, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v4; // rdi
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // ax

  if ( BugCheckParameter3 )
  {
    ViZwCheckVirtualAddress((ULONG_PTR)BugCheckParameter3, BugCheckParameter2);
    v4 = *((_QWORD *)BugCheckParameter3 + 1);
    ViZwCheckVirtualAddress(v4, BugCheckParameter2);
    v5 = *BugCheckParameter3;
    if ( (MmVerifierData & 0x100) != 0 )
    {
      if ( v4 + v5 < v4 || (v6 = BugCheckParameter3[1], v6 < v5) || ((v5 | v6) & 1) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0xE4uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
    }
  }
}
