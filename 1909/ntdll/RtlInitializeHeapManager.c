/*
 * XREFs of RtlInitializeHeapManager @ 0x1800EEF74
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlQueryResourcePolicy @ 0x180009B00 (RtlQueryResourcePolicy.c)
 *     SbSelectProcedure @ 0x18002CE20 (SbSelectProcedure.c)
 *     RtlGetSuiteMask @ 0x18002DCA0 (RtlGetSuiteMask.c)
 *     RtlGetNtProductType @ 0x18002DCD0 (RtlGetNtProductType.c)
 *     RtlInitializeCriticalSectionEx @ 0x180035C80 (RtlInitializeCriticalSectionEx.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x180049F80 (RtlpHeapGenerateRandomValue64.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800F0BD4 (RtlpHpOptIntoSegmentHeap.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F0DB8 (RtlpHpOverrideGCInterval.c)
 *     RtlpGetModifiedProcessCookie @ 0x180101468 (RtlpGetModifiedProcessCookie.c)
 *     RtlpInitializeLowFragHeapManager @ 0x180107870 (RtlpInitializeLowFragHeapManager.c)
 */

__int64 __fastcall RtlInitializeHeapManager(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _PEB *v8; // rdi
  void (*v9)(void); // rax
  int v10; // eax
  BOOLEAN v11; // bl
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _NT_PRODUCT_TYPE NtProductType; // [rsp+38h] [rbp+10h] BYREF
  int v21; // [rsp+40h] [rbp+18h] BYREF

  memset(&RtlpHpHeapGlobals, 0, 0x38uLL);
  RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64(v3, v2, v4);
  qword_180163548 = RtlpHeapGenerateRandomValue64(v6, v5, v7);
  qword_180163550 = (__int64)&RtlpHeapFailureInfo;
  v8 = NtCurrentPeb();
  if ( (RtlpLowFragHeapGlobalFlags & 0x10) != 0 || (unsigned int)RtlpHpOptIntoSegmentHeap(a1) )
  {
    RtlpHpHeapFeatures |= 1u;
    v9 = (void (*)(void))qword_180166970;
    if ( qword_180166970
      || (v9 = (void (*)(void))SbSelectProcedure(2880154539LL, 0, (__int64)"kLsE", 1u),
          (qword_180166970 = (__int64)v9) != 0) )
    {
      v9();
    }
  }
  v10 = RtlpHpLfhPerfFlags;
  if ( (RtlpHpLfhPerfFlags & 0x40) != 0 )
  {
    RtlpHpGCInterval.QuadPart = -10000000LL;
    RtlpHpOverrideGCInterval(a1);
    v10 = RtlpHpLfhPerfFlags;
  }
  RtlpHpLfhPerfFlags = v10 | 0x9C;
  v11 = RtlGetNtProductType(&NtProductType);
  v12 = RtlQueryResourcePolicy(0, 0, &v21, 4LL);
  if ( v11 && NtProductType != NtProductWinNt || v12 >= 0 && v21 > 10 )
  {
    RtlpHpLfhPerfFlags |= 0x63u;
    RtlpHpGCInterval.QuadPart = -10000000LL;
  }
  if ( (RtlpLowFragHeapGlobalFlags & 8) != 0 )
    RtlpHpHeapFeatures &= ~1u;
  RtlpDisableBreakOnFailureCookie = RtlpGetModifiedProcessCookie();
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100000) != 0 )
  {
    v13 = RtlpHeapErrorHandlerThreshold;
    if ( RtlpHeapErrorHandlerThreshold <= 1 )
      v13 = 2;
    v14 = 0;
    RtlpHeapErrorHandlerThreshold = v13;
  }
  else
  {
    v14 = RtlpDisableBreakOnFailureCookie;
  }
  v15 = RtlpDisableHeapLookaside & 1;
  v8->MaximumNumberOfHeaps = 16;
  v8->NumberOfHeaps = 0;
  RtlpDisableBreakOnFailureCookie = v15 != 0 ? v14 : 0;
  v8->ProcessHeaps = (void **)&RtlpProcessHeapsListBuffer;
  RtlInitializeCriticalSectionEx(&RtlpProcessHeapsListLock, 0, 0x10000000u);
  RtlpHeapKey = RtlpHeapGenerateRandomValue64(v17, v16, v18);
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 4u;
    RtlpLargestLfhBlock = 1024LL;
  }
  RtlpInitializeLowFragHeapManager();
  return RtlHpInitializeHeapManager();
}
