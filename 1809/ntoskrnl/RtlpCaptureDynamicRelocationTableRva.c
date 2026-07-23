/*
 * XREFs of RtlpCaptureDynamicRelocationTableRva @ 0x1402F7794
 * Callers:
 *     RtlUpdateImportRelocationsInImage @ 0x1401B6174 (RtlUpdateImportRelocationsInImage.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x1402F7294 (RtlPerformRetpolineRelocationsOnImageEx.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14009D7A0 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1406831B4 (LdrImageDirectoryEntryToLoadConfig.c)
 */

NTSTATUS __fastcall RtlpCaptureDynamicRelocationTableRva(PVOID BaseAddress, ULONGLONG Size, _DWORD *a3)
{
  ULONGLONG v4; // rbp
  __int64 Config; // rax
  NTSTATUS result; // eax
  unsigned __int16 v8; // bx
  int v9; // esi
  int v10; // eax
  __int64 v11; // rax
  PIMAGE_NT_HEADERS NtHeader; // [rsp+58h] [rbp+20h] BYREF

  v4 = (unsigned int)Size;
  Config = LdrImageDirectoryEntryToLoadConfig(BaseAddress);
  if ( !Config || *(_DWORD *)Config < 0xC8u )
    return -1073741637;
  if ( *(_DWORD *)Config < 0xE6u )
  {
    v11 = *(_QWORD *)(Config + 192);
    if ( v11 )
    {
      v10 = v11 - (_DWORD)BaseAddress;
      goto LABEL_12;
    }
    return -1073741637;
  }
  v8 = *(_WORD *)(Config + 228);
  v9 = *(_DWORD *)(Config + 224);
  if ( !v8 )
    return -1073741637;
  result = RtlImageNtHeaderEx(0, BaseAddress, v4, &NtHeader);
  if ( result < 0 )
    return result;
  if ( v8 > NtHeader->FileHeader.NumberOfSections )
    return -1073741701;
  v10 = v9 + *(_DWORD *)((char *)NtHeader + 40 * v8 + NtHeader->FileHeader.SizeOfOptionalHeader - 4);
LABEL_12:
  *a3 = v10;
  return 0;
}
