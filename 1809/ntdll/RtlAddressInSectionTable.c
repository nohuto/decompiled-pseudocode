/*
 * XREFs of RtlAddressInSectionTable @ 0x18007AC30
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180007188 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 *     LdrpHandleProtectedDelayload @ 0x180007CB0 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetProcedureAddress @ 0x180009090 (LdrpGetProcedureAddress.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18000A08C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800E170C (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800E17CC (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     RtlComputeImportTableHash @ 0x1800E1A00 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x180009C40 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall RtlAddressInSectionTable(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // r8d
  __int64 v5; // r11

  result = RtlSectionTableFromVirtualAddress(a1, a2, a3);
  if ( result )
    return v5 + *(unsigned int *)(result + 20) - (unsigned __int64)*(unsigned int *)(result + 12) + v4;
  return result;
}
