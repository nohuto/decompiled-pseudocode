/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x1400F34D0
 * Callers:
 *     RtlAddressInSectionTable @ 0x1400F347C (RtlAddressInSectionTable.c)
 *     KeQueryKvaShadowRegion @ 0x14012B21C (KeQueryKvaShadowRegion.c)
 *     KiShadowProcessorAllocation @ 0x140573D84 (KiShadowProcessorAllocation.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x14067BE58 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     KeSetTracepoint @ 0x140846060 (KeSetTracepoint.c)
 *     KiVerifyXcpt15 @ 0x14098F2F0 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x14098F324 (CcInitializeBcbProfiler.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     <none>
 */

PIMAGE_SECTION_HEADER __cdecl RtlSectionTableFromVirtualAddress(
        PIMAGE_NT_HEADERS NtHeaders,
        PVOID BaseOfImage,
        ULONG VirtualAddress)
{
  _IMAGE_SECTION_HEADER *v3; // r9
  unsigned int NumberOfSections; // r10d
  int v5; // edx
  ULONG v6; // ecx
  unsigned __int64 Name; // rax

  v3 = (_IMAGE_SECTION_HEADER *)((char *)&NtHeaders->OptionalHeader + NtHeaders->FileHeader.SizeOfOptionalHeader);
  NumberOfSections = NtHeaders->FileHeader.NumberOfSections;
  if ( (unsigned __int64)NtHeaders <= 0x7FFFFFFEFFFFLL )
  {
    if ( (unsigned __int64)v3 > 0x7FFFFFFEFFFFLL )
      return 0LL;
    Name = (unsigned __int64)v3[NtHeaders->FileHeader.NumberOfSections].Name;
    if ( Name < (unsigned __int64)v3 || Name >= 0x7FFFFFFEFFFFLL )
      return 0LL;
  }
  v5 = 0;
  if ( !NtHeaders->FileHeader.NumberOfSections )
    return 0LL;
  while ( 1 )
  {
    v6 = v3->VirtualAddress;
    if ( VirtualAddress >= v6 && VirtualAddress < v3->SizeOfRawData + v6 )
      break;
    ++v3;
    if ( ++v5 >= NumberOfSections )
      return 0LL;
  }
  return v3;
}
