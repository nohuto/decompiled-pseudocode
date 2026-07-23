/*
 * XREFs of LdrpGetProcedureAddress @ 0x18001C2B0
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x18001B784 (LdrpResolveProcedureAddress.c)
 *     LdrpResolveForwarder @ 0x18001B990 (LdrpResolveForwarder.c)
 *     LdrpCorInitialize @ 0x180081710 (LdrpCorInitialize.c)
 *     LdrpBuildImportRedirection @ 0x1800D544C (LdrpBuildImportRedirection.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x18001EF44 (RtlpImageDirectoryEntryToData32.c)
 *     RtlAddressInSectionTable @ 0x180075F00 (RtlAddressInSectionTable.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpGetProcedureAddress(unsigned __int64 a1, const char *a2, int a3, char **a4)
{
  char *v4; // r15
  bool v9; // bl
  char *v10; // rdi
  NTSTATUS v11; // eax
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rax
  unsigned int Size; // r13d
  char v15; // si
  int v16; // r10d
  int v17; // r11d
  int v18; // r9d
  const char *v19; // rcx
  signed __int64 v20; // rdx
  unsigned __int8 v21; // al
  int v22; // ecx
  int v23; // eax
  unsigned int v25; // esi
  char *v26; // rcx
  __int64 v27; // [rsp+40h] [rbp-38h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0LL;
  OutHeaders = 0LL;
  v27 = 0LL;
  v9 = 1;
  v10 = (char *)a1;
  if ( (a1 & 3) != 0 )
  {
    v10 = (char *)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
    v9 = (a1 & 1) == 0;
  }
  v11 = RtlImageNtHeaderEx(1u, v10, 0LL, &OutHeaders);
  if ( !OutHeaders )
  {
LABEL_46:
    if ( v11 >= 0 )
    {
      Size = (unsigned int)OutHeaders;
      goto LABEL_10;
    }
LABEL_43:
    Size = (unsigned int)OutHeaders;
LABEL_44:
    v4 = 0LL;
    goto LABEL_10;
  }
  Magic = OutHeaders->OptionalHeader.Magic;
  if ( Magic == 267 )
  {
    v11 = RtlpImageDirectoryEntryToData32((int)v10, v9, 0, (int)&OutHeaders, OutHeaders, (__int64)&v27);
    v4 = (char *)v27;
    goto LABEL_46;
  }
  if ( Magic != 523 )
    goto LABEL_43;
  if ( !OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
    goto LABEL_43;
  VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
  if ( !(_DWORD)VirtualAddress )
    goto LABEL_43;
  Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
  if ( v9 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
  {
    v4 = &v10[VirtualAddress];
    goto LABEL_10;
  }
  v4 = (char *)RtlAddressInSectionTable(OutHeaders, v10, VirtualAddress);
  if ( !v4 )
    goto LABEL_44;
LABEL_10:
  if ( !v4 )
    return 3221225594LL;
  if ( a2 )
  {
    v15 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 5) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        812,
        (unsigned int)"LdrpGetProcedureAddress",
        2,
        (__int64)"Locating procedure \"%s\" by name\n",
        a2);
      v15 = LdrpDebugFlags;
    }
    v16 = 0;
    v17 = *((_DWORD *)v4 + 6) - 1;
    v18 = v17 / 2;
    if ( v17 >= 0 )
    {
      while ( 1 )
      {
        v19 = a2;
        v20 = a1 + *(unsigned int *)(a1 + *((unsigned int *)v4 + 8) + 4LL * v18) - (_QWORD)a2;
        while ( 1 )
        {
          v21 = *v19;
          if ( *v19 != v19[v20] )
            break;
          ++v19;
          if ( !v21 )
          {
            v22 = 0;
            goto LABEL_19;
          }
        }
        v22 = v21 < (unsigned int)v19[v20] ? -1 : 1;
LABEL_19:
        if ( !v22 )
          break;
        v23 = v18 - 1;
        if ( v22 >= 0 )
          v23 = v17;
        v17 = v23;
        if ( v22 >= 0 )
          v16 = v18 + 1;
        v18 = (v16 + v23) / 2;
        if ( v23 < v16 )
          goto LABEL_25;
      }
      v25 = *(unsigned __int16 *)(a1 + *((unsigned int *)v4 + 9) + 2LL * v18);
      goto LABEL_31;
    }
LABEL_25:
    if ( (v15 & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        1559,
        (unsigned int)"LdrpNameToOrdinal",
        1,
        (__int64)"Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        a2,
        (const void *)a1);
      v15 = LdrpDebugFlags;
    }
    if ( (v15 & 0x40) != 0 )
      __debugbreak();
    return 3221225594LL;
  }
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
      830,
      (unsigned int)"LdrpGetProcedureAddress",
      2,
      (__int64)"Loading procedure 0x%lx by ordinal\n",
      a3);
  if ( !a3 )
    return 3221225485LL;
  v25 = a3 - *((_DWORD *)v4 + 4);
LABEL_31:
  if ( v25 >= *((_DWORD *)v4 + 5) )
  {
    if ( a2 )
      return 3221225785LL;
    else
      return 3221225784LL;
  }
  else
  {
    v26 = (char *)(a1 + *(unsigned int *)(a1 + *((unsigned int *)v4 + 7) + 4LL * (int)v25));
    *a4 = v26;
    if ( v26 < v4 || v26 >= &v4[Size] )
      return 0LL;
    else
      return 3221226029LL;
  }
}
