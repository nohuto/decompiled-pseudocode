/*
 * XREFs of LdrpPrepareImportAddressTableForSnap @ 0x18002769C
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18002385C (LdrpMapAndSnapDependency.c)
 *     AVrfpSnapDllImports @ 0x1800DC7E8 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180007188 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1800273C4 (LdrImageDirectoryEntryToLoadConfig.c)
 *     ZwProtectVirtualMemory @ 0x1800A0D00 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpPrepareImportAddressTableForSnap(__int64 a1)
{
  __int64 v1; // rsi
  ULONG_PTR *v2; // rdi
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  bool v6; // zf
  _DWORD *Config; // rax
  PIMAGE_NT_HEADERS v8; // rdx
  _QWORD *v9; // rax
  void *v10; // rcx
  NTSTATUS v11; // edx
  NTSTATUS result; // eax
  char *v13; // rcx
  char *v14; // r8
  unsigned int VirtualAddress; // r10d
  unsigned int *v16; // r8
  unsigned int NumberOfSections; // r11d
  unsigned int v18; // r9d
  unsigned int v19; // edx
  ULONG_PTR v20; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp+30h] BYREF
  __int64 v22; // [rsp+68h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp+48h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = (ULONG_PTR *)(a1 + 112);
  v4 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v1 + 48), 1, 0xCu, (unsigned int *)(a1 + 112), &v22);
  v5 = v22;
  if ( v4 < 0 )
    v5 = 0LL;
  v6 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  v22 = v5;
  *(_QWORD *)(a1 + 104) = v5;
  if ( !v6 )
    return 0;
  RtlImageNtHeaderEx(3u, *(PVOID *)(v1 + 48), 0LL, &OutHeaders);
  Config = LdrImageDirectoryEntryToLoadConfig(*(void **)(v1 + 48));
  if ( !Config || *Config < 0x94u )
    goto LABEL_10;
  v8 = OutHeaders;
  if ( (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) != 0 && (Config[36] & 0x100) != 0 )
  {
    v9 = (_QWORD *)*((_QWORD *)Config + 14);
    *(_QWORD *)(a1 + 152) = v9;
    if ( v9 )
    {
      *(_QWORD *)(a1 + 144) = *v9;
LABEL_10:
      v8 = OutHeaders;
    }
  }
  v10 = *(void **)(a1 + 104);
  if ( !v10 )
  {
    VirtualAddress = v8->OptionalHeader.DataDirectory[1].VirtualAddress;
    v16 = (unsigned int *)((char *)&v8->OptionalHeader.Magic + v8->FileHeader.SizeOfOptionalHeader);
    v10 = 0LL;
    if ( VirtualAddress )
    {
      NumberOfSections = v8->FileHeader.NumberOfSections;
      v18 = 0;
      if ( v8->FileHeader.NumberOfSections )
      {
        while ( 1 )
        {
          v19 = v16[3];
          if ( VirtualAddress >= v19 && VirtualAddress < v19 + v16[4] )
            break;
          ++v18;
          v16 += 10;
          if ( v18 >= NumberOfSections )
          {
            v10 = 0LL;
            goto LABEL_12;
          }
        }
        v10 = (void *)(*(_QWORD *)(v1 + 48) + v19);
        *(_QWORD *)(a1 + 104) = v10;
        v20 = v16[2];
        *v2 = v20;
        if ( !v20 )
          *v2 = v16[4];
      }
    }
  }
LABEL_12:
  v11 = 0;
  if ( v10 && *v2 )
  {
    RegionSize = *v2;
    BaseAddress = v10;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, (PULONG)(a1 + 136));
    v11 = result;
    if ( result < 0 )
      return result;
    v13 = (char *)BaseAddress;
    v14 = (char *)BaseAddress + RegionSize;
    do
    {
      *(_QWORD *)v13 = *(_QWORD *)v13;
      v13 += 4096;
    }
    while ( v13 < v14 );
  }
  return v11;
}
