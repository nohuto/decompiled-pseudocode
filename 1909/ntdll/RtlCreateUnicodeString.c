/*
 * XREFs of RtlCreateUnicodeString @ 0x18002BE80
 * Callers:
 *     EtwpGenerateFileName @ 0x180002740 (EtwpGenerateFileName.c)
 *     EtwpInitLoggerContext @ 0x18000471C (EtwpInitLoggerContext.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x180004B28 (EtwpAddInstanceIdToLogFileName.c)
 *     RtlConvertSidToUnicodeString @ 0x180014670 (RtlConvertSidToUnicodeString.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180016CBC (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlCanonicalizeDomainName @ 0x18002AE90 (RtlCanonicalizeDomainName.c)
 *     LdrpLogDllStateEx2 @ 0x180032198 (LdrpLogDllStateEx2.c)
 *     LdrSetDllDirectory @ 0x18007F5E0 (LdrSetDllDirectory.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1800D098C (LdrpMakeUnicodeStringFromPathElement.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18006D908 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

char __fastcall RtlCreateUnicodeString(__int64 a1, _WORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  void *StringRoutine; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  StringRoutine = (void *)NtdllpAllocateStringRoutine(v5, a2);
  *(_QWORD *)(a1 + 8) = StringRoutine;
  if ( !StringRoutine )
    return 0;
  *(_WORD *)(a1 + 2) = v5;
  memmove(StringRoutine, a2, v5);
  *(_WORD *)a1 = v5 - 2;
  return 1;
}
