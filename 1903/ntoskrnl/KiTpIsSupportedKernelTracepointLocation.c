/*
 * XREFs of KiTpIsSupportedKernelTracepointLocation @ 0x1405B0A5C
 * Callers:
 *     KeSetTracepoint @ 0x14087FB80 (KeSetTracepoint.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1400AFDA0 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall KiTpIsSupportedKernelTracepointLocation(void *a1, int a2)
{
  PIMAGE_NT_HEADERS v4; // rax
  unsigned __int64 v5; // rax
  int v6; // ecx
  char v7; // cl

  v4 = RtlImageNtHeader(a1);
  if ( !v4 )
    return 0LL;
  v5 = RtlSectionTableFromVirtualAddress((unsigned __int64)v4, (__int64)a1, a2 - (int)a1);
  if ( !v5 )
    return 0LL;
  if ( (*(_DWORD *)(v5 + 36) & 0x2000020) != 0x20 )
    return 0LL;
  v6 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 == 1414090313 || v6 == 1396790859 )
    return 0LL;
  if ( v6 == 1162297680 && *(_DWORD *)(v5 + 4) )
  {
    v7 = *(_BYTE *)(v5 + 4);
    if ( v7 == 119 )
    {
      if ( *(_BYTE *)(v5 + 5) == 120 )
        return 0LL;
    }
    else if ( v7 == 86 && *(_BYTE *)(v5 + 5) == 82 && *(_BYTE *)(v5 + 6) == 70 )
    {
      return 0LL;
    }
  }
  return 1LL;
}
