/*
 * XREFs of sub_1800CEDF8 @ 0x1800CEDF8
 * Callers:
 *     sub_18002A370 @ 0x18002A370 (sub_18002A370.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     ZwProtectVirtualMemory @ 0x18009D0E0 (ZwProtectVirtualMemory.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

NTSTATUS __fastcall sub_1800CEDF8(void *a1)
{
  PIMAGE_NT_HEADERS v1; // rbx
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  ULONGLONG *p_SizeOfHeapCommit; // r14
  __int64 v5; // rsi
  NTSTATUS result; // eax
  NTSTATUS v7; // edi
  WORD Machine; // ax
  __int64 v9; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+40h] BYREF
  ULONG NewProtect; // [rsp+88h] [rbp+48h] BYREF
  DWORD v12; // [rsp+90h] [rbp+50h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+58h] BYREF

  BaseAddress = a1;
  v1 = RtlImageNtHeader(a1);
  v2 = sub_18001C4DC((unsigned __int64)BaseAddress, 1, 0xEu, &v12, &v9);
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
