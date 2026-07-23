/*
 * XREFs of EtwpQueryProcessCommandLine @ 0x14066DA18
 * Callers:
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x14030024C (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140583AF0 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTraceAppStateChange @ 0x1405B3C80 (EtwTraceAppStateChange.c)
 *     EtwpBuildProcessEvent @ 0x14066DBEC (EtwpBuildProcessEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A5F20 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpTimLogMitigationForProcess @ 0x1406C043C (EtwpTimLogMitigationForProcess.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1406D6E5C (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1408BDF40 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1408BE27C (EtwTimLogProhibitNonMicrosoftBinaries.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpQueryProcessCommandLine(__int64 a1, __int64 a2)
{
  _WORD *v3; // r14
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int16 v6; // bx
  unsigned __int64 v7; // rdx
  unsigned __int16 v8; // ax
  _WORD *PoolWithTag; // rax
  __int64 v10; // rcx
  const void *Src_8; // [rsp+28h] [rbp-30h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]

  Src_8 = 0LL;
  *(_WORD *)a2 = 0;
  v3 = *(_WORD **)(a2 + 8);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 32LL);
  if ( v4 )
  {
    v5 = v4 + 112;
    if ( v5 >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    v14 = *(_QWORD *)(v5 + 8);
    Src_8 = (const void *)v14;
    v6 = *(_DWORD *)v5 & 0xFFFE;
    if ( v6 )
    {
      if ( v14 )
      {
        if ( (v14 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v7 = v14 + v6;
        if ( v7 > 0x7FFFFFFF0000LL || v7 < v14 )
          MEMORY[0x7FFFFFFF0000] = 0;
        if ( v6 > 0x400u )
          v6 = 1024;
      }
      else
      {
        v6 = 0;
      }
    }
  }
  else
  {
    v6 = 0;
  }
  if ( v6 )
  {
    v8 = *(_WORD *)(a2 + 2);
    if ( v8 )
    {
      if ( v6 >= v8 )
        v6 = *(_WORD *)(a2 + 2);
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x50777445u);
      v3 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      *(_QWORD *)(a2 + 8) = PoolWithTag;
      *(_WORD *)(a2 + 2) = v6;
    }
    memmove(v3, Src_8, v6);
    if ( v6 >> 1 )
    {
      v10 = v6 >> 1;
      do
      {
        if ( !*v3 )
          *v3 = 32;
        ++v3;
        --v10;
      }
      while ( v10 );
    }
    *(_WORD *)a2 = v6;
  }
  return 0;
}
