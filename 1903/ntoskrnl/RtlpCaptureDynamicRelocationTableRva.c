/*
 * XREFs of RtlpCaptureDynamicRelocationTableRva @ 0x140187CD4
 * Callers:
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x140187478 (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     RtlUpdateImportRelocationsInImage @ 0x14018782C (RtlUpdateImportRelocationsInImage.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14005F320 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14070ED5C (LdrImageDirectoryEntryToLoadConfig.c)
 */

NTSTATUS __fastcall RtlpCaptureDynamicRelocationTableRva(PVOID BaseAddress, ULONGLONG Size, int *a3)
{
  unsigned int v4; // ebp
  __int64 Config; // rax
  unsigned __int16 v7; // bx
  int v8; // esi
  NTSTATUS result; // eax
  int v10; // eax
  PIMAGE_NT_HEADERS NtHeader; // [rsp+58h] [rbp+20h] BYREF

  v4 = Size;
  Config = LdrImageDirectoryEntryToLoadConfig(BaseAddress);
  if ( !Config || *(_DWORD *)Config < 0xC8u )
    return -1073741637;
  if ( *(_DWORD *)Config < 0xE6u )
  {
    if ( *(_QWORD *)(Config + 192) )
    {
      v10 = *(_DWORD *)(Config + 192) - (_DWORD)BaseAddress;
      goto LABEL_8;
    }
    return -1073741637;
  }
  v7 = *(_WORD *)(Config + 228);
  v8 = *(_DWORD *)(Config + 224);
  if ( !v7 )
    return -1073741637;
  result = RtlImageNtHeaderEx(0, BaseAddress, v4, &NtHeader);
  if ( result < 0 )
    return result;
  if ( v7 > NtHeader->FileHeader.NumberOfSections )
    return -1073741701;
  v10 = v8 + *(_DWORD *)((char *)NtHeader + 40 * v7 + NtHeader->FileHeader.SizeOfOptionalHeader - 4);
LABEL_8:
  *a3 = v10;
  return 0;
}
