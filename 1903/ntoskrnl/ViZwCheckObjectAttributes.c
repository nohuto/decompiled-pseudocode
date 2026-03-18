/*
 * XREFs of ViZwCheckObjectAttributes @ 0x14098A07C
 * Callers:
 *     VfZwAlpcAcceptConnectPort @ 0x140985C60 (VfZwAlpcAcceptConnectPort.c)
 *     VfZwAlpcConnectPort @ 0x140985D50 (VfZwAlpcConnectPort.c)
 *     VfZwAlpcCreatePort @ 0x140985EA0 (VfZwAlpcCreatePort.c)
 *     VfZwCreateDirectoryObject @ 0x140986550 (VfZwCreateDirectoryObject.c)
 *     VfZwCreateEnlistment @ 0x1409865C0 (VfZwCreateEnlistment.c)
 *     VfZwCreateEvent @ 0x140986670 (VfZwCreateEvent.c)
 *     VfZwCreateFile @ 0x140986700 (VfZwCreateFile.c)
 *     VfZwCreateJobObject @ 0x140986800 (VfZwCreateJobObject.c)
 *     VfZwCreateKey @ 0x140986870 (VfZwCreateKey.c)
 *     VfZwCreateSection @ 0x140986940 (VfZwCreateSection.c)
 *     VfZwCreateSymbolicLinkObject @ 0x140986A00 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTimer @ 0x140986A90 (VfZwCreateTimer.c)
 *     VfZwCreateTransaction @ 0x140986B20 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x140986C20 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteFile @ 0x140986CE0 (VfZwDeleteFile.c)
 *     VfZwDuplicateToken @ 0x140986F40 (VfZwDuplicateToken.c)
 *     VfZwLoadKey @ 0x1409874C0 (VfZwLoadKey.c)
 *     VfZwOpenDirectoryObject @ 0x1409877B0 (VfZwOpenDirectoryObject.c)
 *     VfZwOpenEnlistment @ 0x140987820 (VfZwOpenEnlistment.c)
 *     VfZwOpenEvent @ 0x1409878B0 (VfZwOpenEvent.c)
 *     VfZwOpenFile @ 0x140987920 (VfZwOpenFile.c)
 *     VfZwOpenJobObject @ 0x1409879C0 (VfZwOpenJobObject.c)
 *     VfZwOpenKey @ 0x140987A30 (VfZwOpenKey.c)
 *     VfZwOpenProcess @ 0x140987AA0 (VfZwOpenProcess.c)
 *     VfZwOpenSection @ 0x140987C00 (VfZwOpenSection.c)
 *     VfZwOpenSymbolicLinkObject @ 0x140987C70 (VfZwOpenSymbolicLinkObject.c)
 *     VfZwOpenThread @ 0x140987CE0 (VfZwOpenThread.c)
 *     VfZwOpenTimer @ 0x140987E60 (VfZwOpenTimer.c)
 *     VfZwOpenTransaction @ 0x140987ED0 (VfZwOpenTransaction.c)
 *     VfZwOpenTransactionManager @ 0x140987F70 (VfZwOpenTransactionManager.c)
 *     VfZwQueryFullAttributesFile @ 0x140988710 (VfZwQueryFullAttributesFile.c)
 *     VfZwReplaceKey @ 0x140989330 (VfZwReplaceKey.c)
 *     VfZwUnloadKey @ 0x140989DE0 (VfZwUnloadKey.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x14098A0CC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x14098A164 (ViZwCheckVirtualAddress.c)
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
