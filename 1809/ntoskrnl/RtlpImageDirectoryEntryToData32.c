/*
 * XREFs of RtlpImageDirectoryEntryToData32 @ 0x1400F2EF8
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2CF0 (RtlpImageDirectoryEntryToDataEx.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x1400F347C (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData32(
        char *BaseOfImage,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        PIMAGE_NT_HEADERS NtHeaders,
        _QWORD *a6)
{
  __int64 v6; // r11
  __int64 v7; // r8
  PVOID v8; // rax

  if ( (unsigned int)a3 < HIDWORD(NtHeaders->OptionalHeader.SizeOfHeapReserve) )
  {
    v6 = a3;
    v7 = *((unsigned int *)&NtHeaders->OptionalHeader.SizeOfHeapCommit + 2 * a3);
    if ( !(_DWORD)v7 )
      return 3221225474LL;
    if ( (unsigned __int64)BaseOfImage >= 0x7FFFFFFEFFFFLL || (unsigned __int64)&BaseOfImage[v7] < 0x7FFFFFFEFFFFLL )
    {
      *a4 = *((_DWORD *)&NtHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v6 + 1);
      if ( a2 || (unsigned int)v7 < NtHeaders->OptionalHeader.SizeOfHeaders )
      {
        *a6 = &BaseOfImage[v7];
      }
      else
      {
        v8 = RtlAddressInSectionTable(NtHeaders, BaseOfImage, v7);
        *a6 = v8;
        if ( !v8 )
          return 3221225485LL;
      }
      return 0LL;
    }
  }
  return 3221225485LL;
}
