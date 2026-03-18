/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x1400AFB60
 * Callers:
 *     RtlImageDirectoryEntryToData @ 0x1400AFB30 (RtlImageDirectoryEntryToData.c)
 *     RtlpLookupUserFunctionTable @ 0x140134AC4 (RtlpLookupUserFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x140154E8C (RtlInsertInvertedFunctionTable.c)
 *     RtlCaptureRetpolineImportRvas @ 0x140158098 (RtlCaptureRetpolineImportRvas.c)
 *     KiLockServiceTable @ 0x14017A9A0 (KiLockServiceTable.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x140187B9C (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x1401974C0 (RtlpGetRetpolineStubsFunctionTable.c)
 *     RtlCaptureImageExceptionValues @ 0x14019C11C (RtlCaptureImageExceptionValues.c)
 *     MmReplaceImportEntry @ 0x1402C3DDC (MmReplaceImportEntry.c)
 *     ViThunkFindExportAddress @ 0x1409EF2F0 (ViThunkFindExportAddress.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x1409EFD78 (MiDoesDriverProvideImportsForDriver.c)
 *     MiApplyDynamicRelocations @ 0x1409F00C0 (MiApplyDynamicRelocations.c)
 *     MiBuildImportsForBootDrivers @ 0x140A13EC4 (MiBuildImportsForBootDrivers.c)
 *     KiFatalExceptionFilter @ 0x140A201F4 (KiFatalExceptionFilter.c)
 *     MiUpdateThunks @ 0x140A3D2FC (MiUpdateThunks.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14005F320 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData64 @ 0x1400AFC3C (RtlpImageDirectoryEntryToData64.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1400AFCBC (RtlpImageDirectoryEntryToData32.c)
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
