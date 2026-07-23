/*
 * XREFs of LdrpResGetMappingSize @ 0x140676720
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400E00CC (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x1406764C0 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x140745208 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14005F3C0 (RtlImageNtHeaderEx.c)
 *     LdrpKrnGetDataTableEntry @ 0x1400DF574 (LdrpKrnGetDataTableEntry.c)
 *     ZwQueryVirtualMemory @ 0x1401C10B0 (ZwQueryVirtualMemory.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall LdrpResGetMappingSize(unsigned __int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbx
  NTSTATUS result; // eax
  unsigned __int16 Magic; // dx
  unsigned __int64 SizeOfImage; // rdi
  PVOID *DataTableEntry; // rax
  _QWORD MemoryInformation[6]; // [rsp+40h] [rbp-58h] BYREF
  PIMAGE_NT_HEADERS NtHeader; // [rsp+A0h] [rbp+8h] BYREF

  memset(MemoryInformation, 0, 0x28uLL);
  if ( !a1 || !a2 )
    return -1073741811;
  v6 = 0LL;
  if ( (a3 & 0x20000) != 0 )
    v6 = *a2;
  *a2 = 0LL;
  v7 = 0LL;
  result = RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &NtHeader);
  if ( result >= 0 )
  {
    Magic = NtHeader->OptionalHeader.Magic;
    if ( Magic == 267 || Magic == 523 )
    {
      SizeOfImage = NtHeader->OptionalHeader.SizeOfImage;
    }
    else
    {
      SizeOfImage = 0LL;
      result = -1073741701;
    }
    if ( result >= 0 )
    {
      if ( (a3 & 0x100) == 0 || (a1 & 1) != 0 || !SizeOfImage )
      {
        DataTableEntry = LdrpKrnGetDataTableEntry(a1);
        if ( DataTableEntry )
          v7 = *((unsigned int *)DataTableEntry + 16);
        if ( v7 )
        {
          result = 0;
        }
        else
        {
          result = ZwQueryVirtualMemory(
                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                     (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL),
                     MemoryRegionInformation,
                     MemoryInformation,
                     0x28uLL,
                     0LL);
          if ( result >= 0 )
            v7 = MemoryInformation[2];
        }
        if ( v7 || !SizeOfImage )
          goto LABEL_14;
        result = 0;
      }
      v7 = SizeOfImage;
LABEL_14:
      if ( result >= 0 )
      {
        if ( v6 && v6 < v7 )
          return -1073741793;
        else
          *a2 = v7;
      }
    }
  }
  return result;
}
