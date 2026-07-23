/*
 * XREFs of sub_1800CD600 @ 0x1800CD600
 * Callers:
 *     sub_180072FEC @ 0x180072FEC (sub_180072FEC.c)
 * Callees:
 *     sub_18001B2F8 @ 0x18001B2F8 (sub_18001B2F8.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 *     sub_1800CDB44 @ 0x1800CDB44 (sub_1800CDB44.c)
 */

char __fastcall sub_1800CD600(PVOID BaseAddress)
{
  __int64 *v2; // rax
  bool v3; // bl
  __int64 *v4; // rdi
  __int64 v5; // rax
  _BYTE MemoryInformation[56]; // [rsp+30h] [rbp-38h] BYREF

  v2 = sub_18001B2F8((unsigned __int64)BaseAddress, 0);
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    if ( *((_DWORD *)v2 + 14) == 16 )
    {
      v5 = v2[14];
      if ( v5 )
      {
        if ( BaseAddress == *(PVOID *)(v5 + 184)
          && ZwQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               BaseAddress,
               MemoryRegionInformationEx,
               MemoryInformation,
               0x28uLL,
               0LL) >= 0 )
        {
          v3 = (MemoryInformation[12] & 0x40) != 0;
        }
      }
    }
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v4 + 2));
    sub_1800CDB44(v4);
    LOBYTE(v2) = v3;
  }
  return (char)v2;
}
