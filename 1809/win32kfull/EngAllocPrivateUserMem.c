/*
 * XREFs of EngAllocPrivateUserMem @ 0x1C025BA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall EngAllocPrivateUserMem(PDD_SURFACE_LOCAL psl, SIZE_T cjMemSize, ULONG ulTag)
{
  __int64 v3; // rax

  v3 = WdLogNewEntry5_WdWarning(psl, cjMemSize, ulTag);
  WdLogEvent5_WdWarning(v3);
  return 0LL;
}
