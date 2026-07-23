/*
 * XREFs of sub_18010ACB4 @ 0x18010ACB4
 * Callers:
 *     sub_18010A7B4 @ 0x18010A7B4 (sub_18010A7B4.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18009D0E0 (ZwProtectVirtualMemory.c)
 */

int __fastcall sub_18010ACB4(__int64 a1, ULONG a2)
{
  int result; // eax
  _QWORD v4[7]; // [rsp+30h] [rbp-38h] BYREF
  ULONG OldProtect; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+20h] BYREF

  BaseAddress = (PVOID)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL);
  result = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MemoryBasicInformation, v4, 0x30uLL, 0LL);
  if ( result >= 0 )
  {
    RegionSize = v4[3];
    return ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, a2, &OldProtect);
  }
  return result;
}
