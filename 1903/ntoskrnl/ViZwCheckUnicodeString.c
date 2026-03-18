/*
 * XREFs of ViZwCheckUnicodeString @ 0x14098A0CC
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm @ 0x140985910 (VfZwAccessCheckAndAuditAlarm.c)
 *     VfZwAlpcConnectPort @ 0x140985D50 (VfZwAlpcConnectPort.c)
 *     VfZwCloseObjectAuditAlarm @ 0x140986390 (VfZwCloseObjectAuditAlarm.c)
 *     VfZwConnectPort @ 0x140986440 (VfZwConnectPort.c)
 *     VfZwCreateKey @ 0x140986870 (VfZwCreateKey.c)
 *     VfZwCreateSymbolicLinkObject @ 0x140986A00 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTransaction @ 0x140986B20 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x140986C20 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteValueKey @ 0x140986D20 (VfZwDeleteValueKey.c)
 *     VfZwDisplayString @ 0x140986E70 (VfZwDisplayString.c)
 *     VfZwLoadDriver @ 0x140987480 (VfZwLoadDriver.c)
 *     VfZwOpenTransactionManager @ 0x140987F70 (VfZwOpenTransactionManager.c)
 *     VfZwQueryDirectoryFile @ 0x140988400 (VfZwQueryDirectoryFile.c)
 *     VfZwQueryLicenseValue @ 0x140988CD0 (VfZwQueryLicenseValue.c)
 *     VfZwQuerySymbolicLinkObject @ 0x140988F20 (VfZwQuerySymbolicLinkObject.c)
 *     VfZwQueryValueKey @ 0x140989030 (VfZwQueryValueKey.c)
 *     VfZwSetValueKey @ 0x140989BE0 (VfZwSetValueKey.c)
 *     VfZwUnloadDriver @ 0x140989DA0 (VfZwUnloadDriver.c)
 *     ViZwCheckObjectAttributes @ 0x14098A07C (ViZwCheckObjectAttributes.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x14098A164 (ViZwCheckVirtualAddress.c)
 */

void __fastcall ViZwCheckUnicodeString(unsigned __int16 *BugCheckParameter3, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v4; // rsi
  __int64 v5; // rcx
  unsigned __int16 v6; // ax

  if ( BugCheckParameter3 )
  {
    ViZwCheckVirtualAddress((ULONG_PTR)BugCheckParameter3, BugCheckParameter2);
    v4 = *((_QWORD *)BugCheckParameter3 + 1);
    ViZwCheckVirtualAddress(v4, BugCheckParameter2);
    v5 = *BugCheckParameter3;
    if ( (MmVerifierData & 0x100) != 0 )
    {
      if ( v4 + v5 < v4
        || (v6 = BugCheckParameter3[1], v6 < (unsigned __int16)v5)
        || (((unsigned __int16)v5 | v6) & 1) != 0 )
      {
        VerifierBugCheckIfAppropriate(0xC4u, 0xE4uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
      }
    }
  }
}
