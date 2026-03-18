/*
 * XREFs of SmStoreSetProcessVaRanges @ 0x140673668
 * Callers:
 *     MmInSwapWorkingSet @ 0x1400D8F10 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1400D91C0 (MmOutSwapWorkingSet.c)
 * Callees:
 *     SmAlloc @ 0x1400D8890 (SmAlloc.c)
 *     SmpKeyedStoreSetVaRanges @ 0x1400D8CDC (SmpKeyedStoreSetVaRanges.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmStoreSetProcessVaRanges(void *Src, __int64 a2)
{
  void *v2; // rbx
  _KPROCESS *Process; // rbp
  size_t v5; // rdi
  PVOID v6; // rax
  int v7; // edi

  v2 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    v5 = 16 * a2;
    v6 = SmAlloc(16 * a2, 0x52566D73u);
    v2 = v6;
    if ( !v6 )
      return (unsigned int)-1073741670;
    memmove(v6, Src, v5);
  }
  v7 = SmpKeyedStoreSetVaRanges((ULONG_PTR)&qword_14058C188, Process);
  if ( v7 >= 0 )
  {
    v2 = 0LL;
    v7 = 0;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v7;
}
