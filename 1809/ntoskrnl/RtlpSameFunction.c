/*
 * XREFs of RtlpSameFunction @ 0x1401850C4
 * Callers:
 *     RtlUnwindEx @ 0x14009DE70 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x14009EAD0 (RtlpWalkFrameChain.c)
 *     RtlpVirtualUnwind @ 0x1400A05B0 (RtlpVirtualUnwind.c)
 *     RtlDispatchException @ 0x1400A0E80 (RtlDispatchException.c)
 *     RtlVirtualUnwind @ 0x1401377A0 (RtlVirtualUnwind.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x14009DB60 (RtlLookupFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1400A0350 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x140185130 (RtlpLookupPrimaryFunctionEntry.c)
 */

_DWORD *__fastcall RtlpSameFunction(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  _DWORD *v4; // rdi
  PRUNTIME_FUNCTION v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  unsigned __int64 ImageBase; // [rsp+60h] [rbp+18h] BYREF

  v4 = (_DWORD *)((__int64 (*)(void))RtlpLookupPrimaryFunctionEntry)();
  if ( a3 <= 0x7FFFFFFEFFFFLL )
  {
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v5 = (PRUNTIME_FUNCTION)RtlpLookupFunctionEntryForStackWalks(a3, (__int64)&v8);
    if ( !v5 )
      return 0LL;
    v6 = v9;
  }
  else
  {
    v5 = RtlLookupFunctionEntry(a3, &ImageBase, 0LL);
    v6 = ImageBase;
  }
  if ( !v5 || *v4 != *(_DWORD *)RtlpLookupPrimaryFunctionEntry(v5, v6, a3) )
    return 0LL;
  return v4;
}
