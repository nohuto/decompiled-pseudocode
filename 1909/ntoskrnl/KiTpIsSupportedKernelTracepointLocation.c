/*
 * XREFs of KiTpIsSupportedKernelTracepointLocation @ 0x1405B0A5C
 * Callers:
 *     KeSetTracepoint @ 0x14087F280 (KeSetTracepoint.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1400E8BC0 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall KiTpIsSupportedKernelTracepointLocation(PVOID BaseOfImage, int a2)
{
  _IMAGE_NT_HEADERS64 *v4; // rax
  PIMAGE_SECTION_HEADER v5; // rax
  int v6; // ecx
  unsigned __int8 v7; // cl

  v4 = RtlImageNtHeader(BaseOfImage);
  if ( !v4 )
    return 0LL;
  v5 = RtlSectionTableFromVirtualAddress(v4, BaseOfImage, a2 - (int)BaseOfImage);
  if ( !v5 )
    return 0LL;
  if ( (v5->Characteristics & 0x2000020) != 0x20 )
    return 0LL;
  v6 = *(_DWORD *)v5->Name;
  if ( *(_DWORD *)v5->Name == 1414090313 || v6 == 1396790859 )
    return 0LL;
  if ( v6 == 1162297680 && *(_DWORD *)&v5->Name[4] )
  {
    v7 = v5->Name[4];
    if ( v7 == 119 )
    {
      if ( v5->Name[5] == 120 )
        return 0LL;
    }
    else if ( v7 == 86 && v5->Name[5] == 82 && v5->Name[6] == 70 )
    {
      return 0LL;
    }
  }
  return 1LL;
}
