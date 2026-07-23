/*
 * XREFs of RtlpImageDirectoryEntryToData32 @ 0x18001EF44
 * Callers:
 *     LdrpGetProcedureAddress @ 0x18001C2B0 (LdrpGetProcedureAddress.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18001C4DC (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpSnapModule @ 0x18001C610 (LdrpSnapModule.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x18001EFD0 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData32(
        __int64 a1,
        void *a2,
        unsigned __int16 a3,
        _DWORD *a4,
        PIMAGE_NT_HEADERS NtHeaders,
        _QWORD *a6)
{
  __int64 v6; // rax
  __int64 v7; // r8
  PIMAGE_SECTION_HEADER v8; // rax
  __int64 v9; // r8
  __int64 v10; // r11
  __int64 v11; // rdx

  if ( (unsigned int)a3 < HIDWORD(NtHeaders->OptionalHeader.SizeOfHeapReserve) )
  {
    v6 = a3;
    v7 = *((unsigned int *)&NtHeaders->OptionalHeader.SizeOfHeapCommit + 2 * a3);
    if ( !(_DWORD)v7 )
      return 3221225474LL;
    *a4 = *((_DWORD *)&NtHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v6 + 1);
    if ( (_BYTE)a2 || (unsigned int)v7 < NtHeaders->OptionalHeader.SizeOfHeaders )
    {
      *a6 = a1 + v7;
      return 0LL;
    }
    v8 = RtlSectionTableFromVirtualAddress(NtHeaders, a2, v7);
    if ( v8 )
      v11 = v9 + v10 + v8->PointerToRawData - (unsigned __int64)v8->VirtualAddress;
    else
      v11 = 0LL;
    *a6 = v11;
    if ( v11 )
      return 0LL;
  }
  return 3221225485LL;
}
