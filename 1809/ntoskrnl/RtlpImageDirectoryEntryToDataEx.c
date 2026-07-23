/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x1400F2CF0
 * Callers:
 *     RtlImageDirectoryEntryToData @ 0x1400F2CC0 (RtlImageDirectoryEntryToData.c)
 *     RtlInsertInvertedFunctionTable @ 0x1400F5AB4 (RtlInsertInvertedFunctionTable.c)
 *     RtlpLookupUserFunctionTable @ 0x140133D68 (RtlpLookupUserFunctionTable.c)
 *     KiLockServiceTable @ 0x1401739E4 (KiLockServiceTable.c)
 *     RtlCaptureImageExceptionValues @ 0x140193110 (RtlCaptureImageExceptionValues.c)
 *     MmReplaceImportEntry @ 0x1402AB3BC (MmReplaceImportEntry.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x1402F6BF0 (RtlpGetRetpolineStubsFunctionTable.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1402F7860 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     ViThunkFindExportAddress @ 0x1409B888C (ViThunkFindExportAddress.c)
 *     MiUpdateThunks @ 0x1409B953C (MiUpdateThunks.c)
 *     MiBuildImportsForBootDrivers @ 0x1409D0458 (MiBuildImportsForBootDrivers.c)
 *     MiApplyDynamicRelocations @ 0x1409D3650 (MiApplyDynamicRelocations.c)
 *     KiFatalExceptionFilter @ 0x1409DC23C (KiFatalExceptionFilter.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x1409F8100 (MiDoesDriverProvideImportsForDriver.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14009D7A0 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData64 @ 0x1400F2DCC (RtlpImageDirectoryEntryToData64.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1400F2EF8 (RtlpImageDirectoryEntryToData32.c)
 */

NTSTATUS __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 BaseOfImage,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // rsi
  PVOID v6; // rbx
  NTSTATUS result; // eax
  unsigned __int16 Magic; // ax
  PIMAGE_NT_HEADERS NtHeader; // [rsp+50h] [rbp+8h] BYREF

  v5 = (__int64)a5;
  NtHeader = 0LL;
  v6 = (PVOID)BaseOfImage;
  *a5 = 0LL;
  if ( (BaseOfImage & 3) != 0 )
    v6 = (PVOID)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
  result = RtlImageNtHeaderEx(1u, v6, 0LL, &NtHeader);
  if ( NtHeader )
  {
    Magic = NtHeader->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      return RtlpImageDirectoryEntryToData32(v6, NtHeader, v5);
    }
    else if ( Magic == 523 )
    {
      return RtlpImageDirectoryEntryToData64(v6, NtHeader, v5);
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
