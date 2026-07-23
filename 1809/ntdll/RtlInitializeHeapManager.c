/*
 * XREFs of RtlInitializeHeapManager @ 0x1800F1FC4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x18000E97C (RtlpHeapGenerateRandomValue64.c)
 *     SbSelectProcedure @ 0x180027CD0 (SbSelectProcedure.c)
 *     RtlInitializeCriticalSectionEx @ 0x180061C40 (RtlInitializeCriticalSectionEx.c)
 *     RtlQueryResourcePolicy @ 0x180062630 (RtlQueryResourcePolicy.c)
 *     RtlGetSuiteMask @ 0x180062DA0 (RtlGetSuiteMask.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F3A14 (RtlpHpOverrideGCInterval.c)
 *     RtlpGetModifiedProcessCookie @ 0x180103CA4 (RtlpGetModifiedProcessCookie.c)
 *     RtlpInitializeLowFragHeapManager @ 0x18010A3CC (RtlpInitializeLowFragHeapManager.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x18010C8E4 (RtlpHpOptIntoSegmentHeap.c)
 */

__int64 __fastcall RtlInitializeHeapManager(__int64 a1)
{
  struct _PEB *v2; // rdi
  void (*v3)(void); // rax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  char v7; // al
  int v9; // [rsp+38h] [rbp+10h] BYREF

  memset(&RtlpHpHeapGlobals, 0, 0x38uLL);
  RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64();
  qword_1801634A8 = RtlpHeapGenerateRandomValue64();
  qword_1801634B0 = (__int64)&RtlpHeapFailureInfo;
  v2 = NtCurrentPeb();
  if ( (RtlpLowFragHeapGlobalFlags & 0x10) != 0 || (unsigned int)RtlpHpOptIntoSegmentHeap(a1) )
  {
    RtlpHpHeapFeatures |= 1u;
    v3 = (void (*)(void))qword_180166818;
    if ( qword_180166818
      || (v3 = (void (*)(void))SbSelectProcedure(2880154539LL, 0, (__int64)"kLsE", 1u),
          (qword_180166818 = (__int64)v3) != 0) )
    {
      v3();
    }
  }
  v4 = RtlpHpLfhPerfFlags;
  if ( (RtlpHpLfhPerfFlags & 0x40) != 0 )
  {
    RtlpHpGCInterval.QuadPart = -10000000LL;
    RtlpHpOverrideGCInterval(a1);
    v4 = RtlpHpLfhPerfFlags;
  }
  RtlpHpLfhPerfFlags = v4 | 0x98;
  if ( (int)RtlQueryResourcePolicy(0, 0, (__int64)&v9, 4LL) >= 0 && v9 > 10 )
  {
    RtlpHpLfhPerfFlags |= 0x60u;
    RtlpHpGCInterval.QuadPart = -10000000LL;
  }
  if ( (RtlpLowFragHeapGlobalFlags & 8) != 0 )
    RtlpHpHeapFeatures &= ~1u;
  RtlpDisableBreakOnFailureCookie = RtlpGetModifiedProcessCookie();
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100000) != 0 )
  {
    v5 = RtlpHeapErrorHandlerThreshold;
    if ( RtlpHeapErrorHandlerThreshold <= 1 )
      v5 = 2;
    v6 = 0;
    RtlpHeapErrorHandlerThreshold = v5;
  }
  else
  {
    v6 = RtlpDisableBreakOnFailureCookie;
  }
  v7 = RtlpDisableHeapLookaside & 1;
  v2->MaximumNumberOfHeaps = 16;
  v2->NumberOfHeaps = 0;
  RtlpDisableBreakOnFailureCookie = v7 != 0 ? v6 : 0;
  v2->ProcessHeaps = (void **)&RtlpProcessHeapsListBuffer;
  RtlInitializeCriticalSectionEx(&RtlpProcessHeapsListLock, 0, 0x10000000u);
  RtlpHeapKey = RtlpHeapGenerateRandomValue64();
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 4u;
    RtlpLargestLfhBlock = 1024LL;
  }
  RtlpInitializeLowFragHeapManager();
  return RtlHpInitializeHeapManager();
}
