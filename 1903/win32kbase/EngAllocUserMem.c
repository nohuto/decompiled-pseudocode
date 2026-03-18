/*
 * XREFs of EngAllocUserMem @ 0x1C00A1890
 * Callers:
 *     <none>
 * Callees:
 *     EngAllocUserMemEx @ 0x1C0038CA8 (EngAllocUserMemEx.c)
 */

PVOID __stdcall EngAllocUserMem(SIZE_T cjMemSize, ULONG ulTag)
{
  PVOID v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  EngAllocUserMemEx(cjMemSize, ulTag, &v3);
  return v3;
}
