/*
 * XREFs of RtlpSameFunction @ 0x18000108C
 * Callers:
 *     RtlVirtualUnwind @ 0x18001CC50 (RtlVirtualUnwind.c)
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x18001F4F0 (RtlpWalkFrameChain.c)
 * Callees:
 *     RtlpLookupPrimaryFunctionEntry @ 0x1800010F0 (RtlpLookupPrimaryFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1800202C0 (RtlpLookupFunctionEntryForStackWalks.c)
 */

_DWORD *__fastcall RtlpSameFunction(__int64 a1, __int64 a2, void *a3)
{
  _DWORD *v4; // rdi
  __int64 v5; // rax

  v4 = (_DWORD *)((__int64 (*)(void))RtlpLookupPrimaryFunctionEntry)();
  v5 = RtlpLookupFunctionEntryForStackWalks(a3);
  if ( v5 && *v4 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(v5, 0LL) )
    return v4;
  else
    return 0LL;
}
