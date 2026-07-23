/*
 * XREFs of sub_1800D16A0 @ 0x1800D16A0
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     sub_180020D8C @ 0x180020D8C (sub_180020D8C.c)
 */

__int64 __fastcall sub_1800D16A0(PVOID BaseAddress)
{
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp+10h] BYREF

  RtlImageNtHeaderEx(3u, BaseAddress, 0LL, &OutHeaders);
  sub_180020D8C((unsigned __int64)BaseAddress, OutHeaders->OptionalHeader.SizeOfImage);
  return sub_1800DFBC4(BaseAddress);
}
