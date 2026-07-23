/*
 * XREFs of RtlImageRvaToSection @ 0x18001EFD0
 * Callers:
 *     sub_18001BB70 @ 0x18001BB70 (sub_18001BB70.c)
 *     sub_18001EF44 @ 0x18001EF44 (sub_18001EF44.c)
 *     sub_18001F014 @ 0x18001F014 (sub_18001F014.c)
 *     sub_180020454 @ 0x180020454 (sub_180020454.c)
 *     RtlAddressInSectionTable @ 0x180075A80 (RtlAddressInSectionTable.c)
 *     RtlImageRvaToVa @ 0x180085120 (RtlImageRvaToVa.c)
 *     sub_1800D5DF0 @ 0x1800D5DF0 (sub_1800D5DF0.c)
 * Callees:
 *     <none>
 */

PIMAGE_SECTION_HEADER __cdecl RtlImageRvaToSection(PIMAGE_NT_HEADERS NtHeaders, PVOID BaseOfImage, ULONG Rva)
{
  unsigned int NumberOfSections; // r10d
  _IMAGE_SECTION_HEADER *v4; // r9
  int v5; // edx
  ULONG VirtualAddress; // ecx

  NumberOfSections = NtHeaders->FileHeader.NumberOfSections;
  v4 = (_IMAGE_SECTION_HEADER *)((char *)&NtHeaders->OptionalHeader + NtHeaders->FileHeader.SizeOfOptionalHeader);
  v5 = 0;
  if ( !NtHeaders->FileHeader.NumberOfSections )
    return 0LL;
  while ( 1 )
  {
    VirtualAddress = v4->VirtualAddress;
    if ( Rva >= VirtualAddress && Rva < v4->SizeOfRawData + VirtualAddress )
      break;
    ++v4;
    if ( ++v5 >= NumberOfSections )
      return 0LL;
  }
  return v4;
}
