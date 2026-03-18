/*
 * XREFs of ExCreateHandle @ 0x14090AC44
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x140689AC0 (NtCreateJobObject.c)
 * Callees:
 *     ExCreateHandleEx @ 0x1405E71E0 (ExCreateHandleEx.c)
 */

__int64 __fastcall ExCreateHandle(__int64 a1, __int64 a2)
{
  return ExCreateHandleEx(a1, a2, 0, 0, 0LL);
}
