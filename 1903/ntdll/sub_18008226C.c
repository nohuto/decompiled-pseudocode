/*
 * XREFs of sub_18008226C @ 0x18008226C
 * Callers:
 *     sub_180082190 @ 0x180082190 (sub_180082190.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     ZwProtectVirtualMemory @ 0x18009D0E0 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall sub_18008226C(char *BaseOfImage, char a2)
{
  PIMAGE_NT_HEADERS v4; // rsi
  int v5; // edi
  unsigned int *i; // rbx
  int v7; // edx
  int v8; // ecx
  ULONG v9; // r9d
  NTSTATUS result; // eax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-30h] BYREF
  ULONG OldProtect; // [rsp+80h] [rbp+18h] BYREF
  PIMAGE_NT_HEADERS v14; // [rsp+88h] [rbp+20h] BYREF

  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v14);
  v4 = v14;
  v5 = 0;
  if ( !v14->FileHeader.NumberOfSections )
    return 0;
  for ( i = (DWORD *)((char *)&v14->OptionalHeader.AddressOfEntryPoint + v14->FileHeader.SizeOfOptionalHeader); ; i += 10 )
  {
    v7 = i[5];
    if ( v7 >= 0 && *i )
    {
      if ( a2 )
      {
        v8 = (v7 & 0x20000000) != 0 ? ((v7 & 0x40000000) != 0 ? 32 : 16) : 2;
        v9 = v8 | 0x200;
        if ( (v7 & 0x4000000) == 0 )
          v9 = v8;
      }
      else
      {
        v9 = 4;
      }
      BaseAddress = &BaseOfImage[*(i - 1)];
      RegionSize = *i;
      if ( RegionSize )
      {
        result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, v9, &OldProtect);
        if ( result < 0 )
          break;
      }
    }
    if ( ++v5 >= (unsigned int)v4->FileHeader.NumberOfSections )
      return 0;
  }
  return result;
}
