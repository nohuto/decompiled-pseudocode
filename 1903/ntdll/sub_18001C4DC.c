/*
 * XREFs of sub_18001C4DC @ 0x18001C4DC
 * Callers:
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 *     sub_18001F014 @ 0x18001F014 (sub_18001F014.c)
 *     LdrAccessResource_0 @ 0x18001F250 (LdrAccessResource_0.c)
 *     sub_18001F450 @ 0x18001F450 (sub_18001F450.c)
 *     sub_18002088C @ 0x18002088C (sub_18002088C.c)
 *     sub_180020D8C @ 0x180020D8C (sub_180020D8C.c)
 *     sub_180020F00 @ 0x180020F00 (sub_180020F00.c)
 *     sub_180021B60 @ 0x180021B60 (sub_180021B60.c)
 *     sub_18002A370 @ 0x18002A370 (sub_18002A370.c)
 *     sub_1800550B8 @ 0x1800550B8 (sub_1800550B8.c)
 *     sub_1800558E4 @ 0x1800558E4 (sub_1800558E4.c)
 *     sub_1800723A8 @ 0x1800723A8 (sub_1800723A8.c)
 *     RtlFindExportedRoutineByName @ 0x180078E00 (RtlFindExportedRoutineByName.c)
 *     RtlImageDirectoryEntryToData @ 0x18007EBE0 (RtlImageDirectoryEntryToData.c)
 *     sub_1800820B0 @ 0x1800820B0 (sub_1800820B0.c)
 *     sub_180083108 @ 0x180083108 (sub_180083108.c)
 *     sub_180083AF0 @ 0x180083AF0 (sub_180083AF0.c)
 *     sub_180085F24 @ 0x180085F24 (sub_180085F24.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089690 (LdrVerifyImageMatchesChecksumEx.c)
 *     sub_1800CDB90 @ 0x1800CDB90 (sub_1800CDB90.c)
 *     sub_1800CDD84 @ 0x1800CDD84 (sub_1800CDD84.c)
 *     sub_1800CEDF8 @ 0x1800CEDF8 (sub_1800CEDF8.c)
 *     sub_1800CF094 @ 0x1800CF094 (sub_1800CF094.c)
 *     sub_1800CF1D4 @ 0x1800CF1D4 (sub_1800CF1D4.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 *     RtlComputeImportTableHash @ 0x1800DF5C0 (RtlComputeImportTableHash.c)
 *     LdrEnumResources @ 0x1800DFDA0 (LdrEnumResources.c)
 *     sub_1800F7544 @ 0x1800F7544 (sub_1800F7544.c)
 *     sub_18010DF30 @ 0x18010DF30 (sub_18010DF30.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     sub_18001EF44 @ 0x18001EF44 (sub_18001EF44.c)
 *     RtlAddressInSectionTable @ 0x180075A80 (RtlAddressInSectionTable.c)
 */

NTSTATUS __fastcall sub_18001C4DC(unsigned __int64 a1, char a2, unsigned __int16 a3, DWORD *a4, _QWORD *a5)
{
  _QWORD *v5; // r14
  int v6; // ebx
  char v9; // si
  char *v10; // rdi
  NTSTATUS result; // eax
  int v12; // edx
  PIMAGE_NT_HEADERS v13; // rcx
  __int64 VirtualAddress; // rdx
  PVOID v15; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0;
  OutHeaders = 0LL;
  v9 = a2;
  v10 = (char *)a1;
  *a5 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v10 = (char *)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
    v9 = 0;
    if ( (a1 & 1) == 0 )
      v9 = a2;
  }
  result = RtlImageNtHeaderEx(1u, v10, 0LL, &OutHeaders);
  v13 = OutHeaders;
  if ( OutHeaders )
  {
    if ( OutHeaders->OptionalHeader.Magic == 267 )
    {
      LOBYTE(v12) = v9;
      return sub_18001EF44((int)v10, v12, a3, (int)a4, OutHeaders, (__int64)v5);
    }
    else if ( OutHeaders->OptionalHeader.Magic == 523 && a3 < OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[a3].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        *a4 = OutHeaders->OptionalHeader.DataDirectory[a3].Size;
        if ( v9 || (unsigned int)VirtualAddress < v13->OptionalHeader.SizeOfHeaders )
        {
          *v5 = &v10[VirtualAddress];
        }
        else
        {
          v15 = RtlAddressInSectionTable(v13, v10, VirtualAddress);
          *v5 = v15;
          return v15 == 0LL ? 0xC000000D : 0;
        }
      }
      else
      {
        return -1073741822;
      }
    }
    else
    {
      return -1073741811;
    }
    return v6;
  }
  return result;
}
