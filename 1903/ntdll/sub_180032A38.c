/*
 * XREFs of sub_180032A38 @ 0x180032A38
 * Callers:
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x18009D0E0 (ZwProtectVirtualMemory.c)
 *     sub_1800D5DF0 @ 0x1800D5DF0 (sub_1800D5DF0.c)
 */

NTSTATUS __fastcall sub_180032A38(ULONG a1)
{
  NTSTATUS result; // eax
  ULONG NewProtect; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+18h] BYREF

  NewProtect = a1;
  if ( !qword_18017A290 )
    sub_1800D5DF0();
  BaseAddress = (PVOID)qword_18017A290;
  RegionSize = qword_18017A280;
  result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
  if ( result < 0 )
    __fastfail(5u);
  return result;
}
