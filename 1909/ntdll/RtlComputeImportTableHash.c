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

NTSTATUS __cdecl RtlComputeImportTableHash(HANDLE FileHandle, PCHAR Hash, ULONG ImportTableHashRevision)
{
  NTSTATUS v4; // ebx
  NTSTATUS v5; // eax
  NTSTATUS v6; // ebx
  PVOID v7; // rax
  NTSTATUS v8; // eax
  ULONG *v9; // rdi
  PIMAGE_NT_HEADERS k; // rsi
  ULONG v12; // r8d
  PVOID v13; // r14
  _QWORD *Heap; // rax
  __int64 v15; // rbx
  int inserted; // eax
  _QWORD *v17; // rdi
  _QWORD *i; // rsi
  _QWORD *v19; // r8
  _QWORD *j; // r14
  HANDLE SectionHandle; // [rsp+50h] [rbp-30h] BYREF
  PVOID v22; // [rsp+58h] [rbp-28h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+60h] [rbp-20h] BYREF
  __int64 v24; // [rsp+68h] [rbp-18h] BYREF
  ULONG_PTR ViewSize[2]; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+C0h] [rbp+40h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp+48h] BYREF

  v22 = 0LL;
  BaseAddress = 0LL;
  v24 = 0LL;
  SectionHandle = (HANDLE)-1LL;
  if ( ImportTableHashRevision != 1 )
    return -1073741736;
  v5 = NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, FileHandle);
  if ( SectionHandle == (HANDLE)-1LL || v5 < 0 )
  {
    v4 = -1073741816;
LABEL_33:
    v17 = v22;
    if ( v22 )
    {
      for ( i = *(_QWORD **)v22; ; i = (_QWORD *)*i )
      {
        v19 = (_QWORD *)v17[2];
        if ( v19 )
        {
          for ( j = (_QWORD *)*v19; ; j = (_QWORD *)*j )
          {
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
            v19 = j;
            if ( !j )
              break;
          }
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
        v17 = i;
        if ( !i )
          break;
      }
    }
    goto LABEL_11;
  }
  SectionOffset.QuadPart = 0LL;
  ViewSize[0] = 0LL;
  v6 = ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         &SectionOffset,
         ViewSize,
         ViewShare,
         0,
         2u);
  NtClose(SectionHandle);
  v7 = BaseAddress;
  if ( !BaseAddress || v6 < 0 )
  {
    v4 = -1073741799;
    goto LABEL_12;
  }
  v8 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseAddress, 0, 1u, &v26, &v24);
  if ( v8 >= 0 )
  {
    v9 = (ULONG *)v24;
    goto LABEL_18;
  }
  if ( v8 == -1073741822 )
  {
    v9 = 0LL;
LABEL_18:
    for ( k = RtlImageNtHeader(BaseAddress); v9; v9 += 5 )
    {
      v12 = v9[3];
      if ( !v12 || !v9[4] )
        break;
      v13 = RtlAddressInSectionTable(k, BaseAddress, v12);
      if ( !v13 )
      {
        v4 = -1073741685;
        goto LABEL_33;
      }
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
      v15 = (__int64)Heap;
      if ( !Heap )
      {
        v4 = -1073741801;
        goto LABEL_33;
      }
      Heap[2] = 0LL;
      *Heap = 0LL;
      Heap[1] = v13;
      ImportTablepInsertFunctionSorted((__int64)Heap, (__int64 ***)&v22);
      if ( k->OptionalHeader.Magic == 267 )
        inserted = InsertModuleFunctions<_IMAGE_THUNK_DATA32,unsigned long,2147483648>(v15, BaseAddress, k, v9);
      else
        inserted = InsertModuleFunctions<_IMAGE_THUNK_DATA64,unsigned __int64,-9223372036854775808>(
                     v15,
                     BaseAddress,
                     k,
                     v9);
      v4 = inserted;
      if ( inserted < 0 )
        goto LABEL_33;
    }
    v4 = ImportTablepHashCanonicalLists(v22, Hash);
    goto LABEL_33;
  }
  v4 = -1073741687;
LABEL_11:
  v7 = BaseAddress;
LABEL_12:
  if ( v7
    && NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7) == -1073741755
    && RtlFlushSecureMemoryCache(BaseAddress, 0LL) )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  }
  return v4;
}
