/*
 * XREFs of LdrpCorFixupImage @ 0x1800CEEB8
 * Callers:
 *     LdrpCompleteMapModule @ 0x18002A370 (LdrpCompleteMapModule.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18001C4DC (RtlpImageDirectoryEntryToDataEx.c)
 *     ZwProtectVirtualMemory @ 0x18009D890 (ZwProtectVirtualMemory.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

NTSTATUS __fastcall LdrpCorFixupImage(void *a1)
{
  PIMAGE_NT_HEADERS v1; // rbx
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  unsigned __int64 *p_SizeOfHeapCommit; // r14
  __int64 v5; // rsi
  NTSTATUS result; // eax
  NTSTATUS v7; // edi
  unsigned __int16 Machine; // ax
  __int64 v9; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+40h] BYREF
  ULONG NewProtect; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v12; // [rsp+90h] [rbp+50h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+58h] BYREF

  BaseAddress = a1;
  v1 = RtlImageNtHeader(a1);
  v2 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseAddress, 1, 0xEu, &v12, &v9);
  v3 = v9;
  if ( v2 < 0 )
    v3 = 0LL;
  if ( v1->OptionalHeader.Magic != 267 || v1->FileHeader.Machine != 332 || (*(_BYTE *)(v3 + 16) & 2) != 0 )
  {
    Machine = v1->FileHeader.Machine;
    if ( Machine < MEMORY[0x7FFE002C] )
      return -1073741701;
    v7 = 0;
    if ( Machine > MEMORY[0x7FFE002E] )
      return -1073741701;
    return v7;
  }
  p_SizeOfHeapCommit = &v1->OptionalHeader.SizeOfHeapCommit;
  v5 = (__int64)&v1->OptionalHeader
     + 32 * v1->FileHeader.NumberOfSections
     + 8 * v1->FileHeader.NumberOfSections
     + v1->FileHeader.SizeOfOptionalHeader;
  RegionSize = 4096LL;
  if ( (unsigned __int64)(v5 - (_QWORD)BaseAddress + 16) > 0x1000 )
    return -1073741701;
  result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect);
  v7 = result;
  if ( result >= 0 )
  {
    memmove(v1->OptionalHeader.DataDirectory, &v1->OptionalHeader.SizeOfHeapCommit, v5 - (_QWORD)p_SizeOfHeapCommit);
    v1->OptionalHeader.NumberOfRvaAndSizes = HIDWORD(v1->OptionalHeader.SizeOfHeapReserve);
    v1->OptionalHeader.LoaderFlags = v1->OptionalHeader.SizeOfHeapReserve;
    *p_SizeOfHeapCommit = HIDWORD(v1->OptionalHeader.SizeOfStackCommit);
    v1->OptionalHeader.SizeOfHeapReserve = LODWORD(v1->OptionalHeader.SizeOfStackCommit);
    v1->OptionalHeader.SizeOfStackCommit = HIDWORD(v1->OptionalHeader.SizeOfStackReserve);
    v1->OptionalHeader.SizeOfStackReserve = LODWORD(v1->OptionalHeader.SizeOfStackReserve);
    v1->OptionalHeader.ImageBase = HIDWORD(v1->OptionalHeader.ImageBase);
    v1->FileHeader.SizeOfOptionalHeader += 16;
    v1->OptionalHeader.Magic = 523;
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
    return v7;
  }
  return result;
}
