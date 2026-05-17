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
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r11
  __int64 v11; // rdx

  if ( (unsigned int)a3 < *(_DWORD *)(a5 + 116) )
  {
    v6 = a3;
    v7 = *(unsigned int *)(a5 + 8LL * a3 + 120);
    if ( !(_DWORD)v7 )
      return 3221225474LL;
    *a4 = *(_DWORD *)(a5 + 8 * v6 + 124);
    if ( a2 || (unsigned int)v7 < *(_DWORD *)(a5 + 84) )
    {
      *a6 = a1 + v7;
      return 0LL;
    }
    v8 = RtlSectionTableFromVirtualAddress();
    if ( v8 )
      v11 = v9 + v10 + *(unsigned int *)(v8 + 20) - (unsigned __int64)*(unsigned int *)(v8 + 12);
    else
      v11 = 0LL;
    *a6 = v11;
    if ( v11 )
      return 0LL;
  }
  return 3221225485LL;
}
