/*
 * XREFs of RtlpSameFunction @ 0x180002E70
 * Callers:
 *     RtlpWalkFrameChain @ 0x1800038B0 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x1800048E0 (RtlDispatchException.c)
 *     RtlVirtualUnwind @ 0x1800053B0 (RtlVirtualUnwind.c)
 *     RtlUnwindEx @ 0x180005BF0 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 * Callees:
 *     RtlpLookupPrimaryFunctionEntry @ 0x180002ED4 (RtlpLookupPrimaryFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180004720 (RtlpLookupFunctionEntryForStackWalks.c)
 */

_DWORD *__fastcall RtlpSameFunction(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v4 = (_DWORD *)((__int64 (*)(void))RtlpLookupPrimaryFunctionEntry)();
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v5 = RtlpLookupFunctionEntryForStackWalks(a3, &v7);
  if ( v5 && *v4 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(v5, v8) )
    return v4;
  else
    return 0LL;
}
