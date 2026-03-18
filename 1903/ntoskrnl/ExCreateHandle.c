/*
 * XREFs of ExCreateHandle @ 0x14090B1E4
 * Callers:
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x140696550 (NtCreateJobObject.c)
 * Callees:
 *     ExCreateHandleEx @ 0x1405E6A10 (ExCreateHandleEx.c)
 */

__int64 __fastcall ExCreateHandle(__int64 a1, __int64 a2)
{
  return ExCreateHandleEx(a1, a2, 0, 0, 0LL);
}
