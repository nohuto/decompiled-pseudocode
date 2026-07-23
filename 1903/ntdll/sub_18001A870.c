/*
 * XREFs of sub_18001A870 @ 0x18001A870
 * Callers:
 *     sub_18001F014 @ 0x18001F014 (sub_18001F014.c)
 *     LdrAccessResource_0 @ 0x18001F250 (LdrAccessResource_0.c)
 * Callees:
 *     sub_18001A7F0 @ 0x18001A7F0 (sub_18001A7F0.c)
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall sub_18001A870(__int64 a1, __int64 *a2)
{
  void *v3; // rbp
  NTSTATUS VirtualMemory; // ebx
  __int64 SizeOfImage; // rdi
  PIMAGE_NT_HEADERS v7; // rax
  _BYTE MemoryInformation[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]

  v3 = (void *)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  VirtualMemory = 0;
  SizeOfImage = 0LL;
  v7 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( !v7 )
    goto LABEL_11;
  if ( (a1 & 1) == 0 )
  {
    if ( v7->OptionalHeader.Magic == 267 || v7->OptionalHeader.Magic == 523 )
    {
      SizeOfImage = v7->OptionalHeader.SizeOfImage;
      goto LABEL_6;
    }
LABEL_11:
    VirtualMemory = -1073741701;
    goto LABEL_6;
  }
  SizeOfImage = sub_18001A7F0(a1);
  if ( !SizeOfImage )
  {
    VirtualMemory = ZwQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      v3,
                      MemoryRegionInformation,
                      MemoryInformation,
                      0x28uLL,
                      0LL);
    if ( VirtualMemory < 0 )
      VirtualMemory = -1073741793;
    else
      SizeOfImage = v10;
  }
LABEL_6:
  *a2 = SizeOfImage;
  return (unsigned int)VirtualMemory;
}
