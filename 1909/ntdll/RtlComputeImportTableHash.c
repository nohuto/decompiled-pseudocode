/*
 * XREFs of RtlComputeImportTableHash @ 0x1800DF680
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18001C4DC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlAddressInSectionTable @ 0x180075F00 (RtlAddressInSectionTable.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009D390 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D3D0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009D7D0 (NtCreateSection.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800DF390 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800DF450 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     ImportTablepHashCanonicalLists @ 0x1800DF514 (ImportTablepHashCanonicalLists.c)
 *     ImportTablepInsertFunctionSorted @ 0x1800DF5FC (ImportTablepInsertFunctionSorted.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F4190 (RtlFlushSecureMemoryCache.c)
 */

__int64 __fastcall RtlComputeImportTableHash(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+58h] [rbp-28h]
  __int64 v6; // [rsp+68h] [rbp-18h]
  __int64 v7; // [rsp+C8h] [rbp+48h]

  v5 = 0LL;
  v7 = 0LL;
  v6 = 0LL;
  if ( a3 == 1 )
  {
    NtCreateSection();
    v3 = -1073741816;
    if ( v7
      && (unsigned int)NtUnmapViewOfSection() == -1073741755
      && (unsigned __int8)RtlFlushSecureMemoryCache(v7, 0LL) )
    {
      NtUnmapViewOfSection();
    }
  }
  else
  {
    return (unsigned int)-1073741736;
  }
  return v3;
}
