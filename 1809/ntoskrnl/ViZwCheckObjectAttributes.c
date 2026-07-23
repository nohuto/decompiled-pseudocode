/*
 * XREFs of ViZwCheckObjectAttributes @ 0x14094B69C
 * Callers:
 *     VfZwAlpcAcceptConnectPort @ 0x140947280 (VfZwAlpcAcceptConnectPort.c)
 *     VfZwAlpcConnectPort @ 0x140947370 (VfZwAlpcConnectPort.c)
 *     VfZwAlpcCreatePort @ 0x1409474C0 (VfZwAlpcCreatePort.c)
 *     VfZwCreateDirectoryObject @ 0x140947B70 (VfZwCreateDirectoryObject.c)
 *     VfZwCreateEnlistment @ 0x140947BE0 (VfZwCreateEnlistment.c)
 *     VfZwCreateEvent @ 0x140947C90 (VfZwCreateEvent.c)
 *     VfZwCreateFile @ 0x140947D20 (VfZwCreateFile.c)
 *     VfZwCreateJobObject @ 0x140947E20 (VfZwCreateJobObject.c)
 *     VfZwCreateKey @ 0x140947E90 (VfZwCreateKey.c)
 *     VfZwCreateSection @ 0x140947F60 (VfZwCreateSection.c)
 *     VfZwCreateSymbolicLinkObject @ 0x140948020 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTimer @ 0x1409480B0 (VfZwCreateTimer.c)
 *     VfZwCreateTransaction @ 0x140948140 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x140948240 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteFile @ 0x140948300 (VfZwDeleteFile.c)
 *     VfZwDuplicateToken @ 0x140948560 (VfZwDuplicateToken.c)
 *     VfZwLoadKey @ 0x140948AE0 (VfZwLoadKey.c)
 *     VfZwOpenDirectoryObject @ 0x140948DD0 (VfZwOpenDirectoryObject.c)
 *     VfZwOpenEnlistment @ 0x140948E40 (VfZwOpenEnlistment.c)
 *     VfZwOpenEvent @ 0x140948ED0 (VfZwOpenEvent.c)
 *     VfZwOpenFile @ 0x140948F40 (VfZwOpenFile.c)
 *     VfZwOpenJobObject @ 0x140948FE0 (VfZwOpenJobObject.c)
 *     VfZwOpenKey @ 0x140949050 (VfZwOpenKey.c)
 *     VfZwOpenProcess @ 0x1409490C0 (VfZwOpenProcess.c)
 *     VfZwOpenSection @ 0x140949220 (VfZwOpenSection.c)
 *     VfZwOpenSymbolicLinkObject @ 0x140949290 (VfZwOpenSymbolicLinkObject.c)
 *     VfZwOpenThread @ 0x140949300 (VfZwOpenThread.c)
 *     VfZwOpenTimer @ 0x140949480 (VfZwOpenTimer.c)
 *     VfZwOpenTransaction @ 0x1409494F0 (VfZwOpenTransaction.c)
 *     VfZwOpenTransactionManager @ 0x140949590 (VfZwOpenTransactionManager.c)
 *     VfZwQueryFullAttributesFile @ 0x140949D30 (VfZwQueryFullAttributesFile.c)
 *     VfZwReplaceKey @ 0x14094A950 (VfZwReplaceKey.c)
 *     VfZwUnloadKey @ 0x14094B400 (VfZwUnloadKey.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x14094B6EC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x14094B784 (ViZwCheckVirtualAddress.c)
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
