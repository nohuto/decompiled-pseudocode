/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x180009C40
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180007CB0 (LdrpHandleProtectedDelayload.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x180009BAC (RtlpImageDirectoryEntryToData32.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18000A08C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x180027304 (LdrpFetchAddressOfSecurityCookie.c)
 *     RtlAddressInSectionTable @ 0x18007AC30 (RtlAddressInSectionTable.c)
 *     RtlImageRvaToVa @ 0x180081570 (RtlImageRvaToVa.c)
 *     LdrpLocateMrdata @ 0x1800D7BB0 (LdrpLocateMrdata.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSectionTableFromVirtualAddress(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  int v5; // edx
  unsigned int v6; // ecx

  v3 = *(unsigned __int16 *)(a1 + 6);
  v4 = *(unsigned __int16 *)(a1 + 20) + a1 + 24;
  v5 = 0;
  if ( !*(_WORD *)(a1 + 6) )
    return 0LL;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v4 + 12);
    if ( a3 >= v6 && a3 < *(_DWORD *)(v4 + 16) + v6 )
      break;
    v4 += 40LL;
    if ( ++v5 >= v3 )
      return 0LL;
  }
  return v4;
}
