/*
 * XREFs of ViZwCheckObjectAttributes @ 0x14094A69C
 * Callers:
 *     VfZwAlpcAcceptConnectPort @ 0x140946280 (VfZwAlpcAcceptConnectPort.c)
 *     VfZwAlpcConnectPort @ 0x140946370 (VfZwAlpcConnectPort.c)
 *     VfZwAlpcCreatePort @ 0x1409464C0 (VfZwAlpcCreatePort.c)
 *     VfZwCreateDirectoryObject @ 0x140946B70 (VfZwCreateDirectoryObject.c)
 *     VfZwCreateEnlistment @ 0x140946BE0 (VfZwCreateEnlistment.c)
 *     VfZwCreateEvent @ 0x140946C90 (VfZwCreateEvent.c)
 *     VfZwCreateFile @ 0x140946D20 (VfZwCreateFile.c)
 *     VfZwCreateJobObject @ 0x140946E20 (VfZwCreateJobObject.c)
 *     VfZwCreateKey @ 0x140946E90 (VfZwCreateKey.c)
 *     VfZwCreateSection @ 0x140946F60 (VfZwCreateSection.c)
 *     VfZwCreateSymbolicLinkObject @ 0x140947020 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTimer @ 0x1409470B0 (VfZwCreateTimer.c)
 *     VfZwCreateTransaction @ 0x140947140 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x140947240 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteFile @ 0x140947300 (VfZwDeleteFile.c)
 *     VfZwDuplicateToken @ 0x140947560 (VfZwDuplicateToken.c)
 *     VfZwLoadKey @ 0x140947AE0 (VfZwLoadKey.c)
 *     VfZwOpenDirectoryObject @ 0x140947DD0 (VfZwOpenDirectoryObject.c)
 *     VfZwOpenEnlistment @ 0x140947E40 (VfZwOpenEnlistment.c)
 *     VfZwOpenEvent @ 0x140947ED0 (VfZwOpenEvent.c)
 *     VfZwOpenFile @ 0x140947F40 (VfZwOpenFile.c)
 *     VfZwOpenJobObject @ 0x140947FE0 (VfZwOpenJobObject.c)
 *     VfZwOpenKey @ 0x140948050 (VfZwOpenKey.c)
 *     VfZwOpenProcess @ 0x1409480C0 (VfZwOpenProcess.c)
 *     VfZwOpenSection @ 0x140948220 (VfZwOpenSection.c)
 *     VfZwOpenSymbolicLinkObject @ 0x140948290 (VfZwOpenSymbolicLinkObject.c)
 *     VfZwOpenThread @ 0x140948300 (VfZwOpenThread.c)
 *     VfZwOpenTimer @ 0x140948480 (VfZwOpenTimer.c)
 *     VfZwOpenTransaction @ 0x1409484F0 (VfZwOpenTransaction.c)
 *     VfZwOpenTransactionManager @ 0x140948590 (VfZwOpenTransactionManager.c)
 *     VfZwQueryFullAttributesFile @ 0x140948D30 (VfZwQueryFullAttributesFile.c)
 *     VfZwReplaceKey @ 0x140949950 (VfZwReplaceKey.c)
 *     VfZwUnloadKey @ 0x14094A400 (VfZwUnloadKey.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x14094A6EC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x14094A784 (ViZwCheckVirtualAddress.c)
 */

__int64 __fastcall ViZwCheckObjectAttributes(ULONG_PTR *a1, ULONG_PTR a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    ViZwCheckVirtualAddress((ULONG_PTR)a1, a2);
    ViZwCheckUnicodeString(a1[2], a2);
    ViZwCheckVirtualAddress(a1[4], a2);
    return ViZwCheckVirtualAddress(a1[5], a2);
  }
  return result;
}
