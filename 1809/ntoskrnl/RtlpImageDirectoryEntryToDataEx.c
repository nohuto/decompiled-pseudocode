/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x1400F2C70
 * Callers:
 *     RtlImageDirectoryEntryToData @ 0x1400F2C40 (RtlImageDirectoryEntryToData.c)
 *     RtlInsertInvertedFunctionTable @ 0x1400F5A34 (RtlInsertInvertedFunctionTable.c)
 *     RtlpLookupUserFunctionTable @ 0x140133C98 (RtlpLookupUserFunctionTable.c)
 *     KiLockServiceTable @ 0x1401738E4 (KiLockServiceTable.c)
 *     RtlCaptureImageExceptionValues @ 0x140192FD0 (RtlCaptureImageExceptionValues.c)
 *     MmReplaceImportEntry @ 0x1402AB1CC (MmReplaceImportEntry.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x1402F6A00 (RtlpGetRetpolineStubsFunctionTable.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1402F7670 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     ViThunkFindExportAddress @ 0x1409B788C (ViThunkFindExportAddress.c)
 *     MiUpdateThunks @ 0x1409B853C (MiUpdateThunks.c)
 *     MiBuildImportsForBootDrivers @ 0x1409CF458 (MiBuildImportsForBootDrivers.c)
 *     MiApplyDynamicRelocations @ 0x1409D2650 (MiApplyDynamicRelocations.c)
 *     KiFatalExceptionFilter @ 0x1409DB23C (KiFatalExceptionFilter.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x1409F7100 (MiDoesDriverProvideImportsForDriver.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14009D860 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData64 @ 0x1400F2D4C (RtlpImageDirectoryEntryToData64.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1400F2E78 (RtlpImageDirectoryEntryToData32.c)
 */

NTSTATUS __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 BaseAddress,
        char a2,
        unsigned __int16 a3,
        int a4,
        _QWORD *a5)
{
  __int64 v5; // rsi
  char v8; // di
  PVOID v9; // rbx
  NTSTATUS result; // eax
  unsigned __int16 Magic; // ax
  int v12; // edx
  int v13; // edx
  PIMAGE_NT_HEADERS NtHeader; // [rsp+50h] [rbp+8h] BYREF

  v5 = (__int64)a5;
  NtHeader = 0LL;
  v8 = a2;
  v9 = (PVOID)BaseAddress;
  *a5 = 0LL;
  if ( (BaseAddress & 3) != 0 )
  {
    v8 = 0;
    v9 = (PVOID)(BaseAddress & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (BaseAddress & 1) == 0 )
      v8 = a2;
  }
  result = RtlImageNtHeaderEx(1u, v9, 0LL, &NtHeader);
  if ( NtHeader )
  {
    Magic = NtHeader->OptionalHeader.Magic;
    v12 = 267;
    if ( Magic == 267 )
    {
      LOBYTE(v12) = v8;
      return RtlpImageDirectoryEntryToData32((_DWORD)v9, v12, a3, a4, (__int64)NtHeader, v5);
    }
    else
    {
      v13 = 523;
      if ( Magic == 523 )
      {
        LOBYTE(v13) = v8;
        return RtlpImageDirectoryEntryToData64((_DWORD)v9, v13, a3, a4, (__int64)NtHeader, v5);
      }
      else
      {
        return -1073741811;
      }
    }
  }
  return result;
}
