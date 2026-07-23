/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x1400E8980
 * Callers:
 *     RtlImageDirectoryEntryToData @ 0x1400E8950 (RtlImageDirectoryEntryToData.c)
 *     RtlpLookupUserFunctionTable @ 0x1401353C4 (RtlpLookupUserFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x14015552C (RtlInsertInvertedFunctionTable.c)
 *     RtlCaptureRetpolineImportRvas @ 0x140158738 (RtlCaptureRetpolineImportRvas.c)
 *     KiLockServiceTable @ 0x14017B090 (KiLockServiceTable.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x14018814C (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x140197B28 (RtlpGetRetpolineStubsFunctionTable.c)
 *     RtlCaptureImageExceptionValues @ 0x14019C89C (RtlCaptureImageExceptionValues.c)
 *     MmReplaceImportEntry @ 0x1402C3B3C (MmReplaceImportEntry.c)
 *     ViThunkFindExportAddress @ 0x1409EF208 (ViThunkFindExportAddress.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x1409EFC90 (MiDoesDriverProvideImportsForDriver.c)
 *     MiApplyDynamicRelocations @ 0x1409EFFD8 (MiApplyDynamicRelocations.c)
 *     MiBuildImportsForBootDrivers @ 0x140A1465C (MiBuildImportsForBootDrivers.c)
 *     KiFatalExceptionFilter @ 0x140A203D4 (KiFatalExceptionFilter.c)
 *     MiUpdateThunks @ 0x140A3D0CC (MiUpdateThunks.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14005F3C0 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData64 @ 0x1400E8A5C (RtlpImageDirectoryEntryToData64.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1400E8ADC (RtlpImageDirectoryEntryToData32.c)
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
