/*
 * XREFs of PoInitHiberServices @ 0x14074B26C
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140769A5C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ExIsSoftBoot @ 0x140182500 (ExIsSoftBoot.c)
 *     ZwQuerySystemInformation @ 0x1401C0790 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     EmClientQueryRuleState @ 0x1405957C0 (EmClientQueryRuleState.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopBcdClearPendingResume @ 0x14073B4A0 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x14073B9C0 (PopBcdEstablishResumeObject.c)
 *     PopAcquireTransitionLock @ 0x1407472E0 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14074733C (PopReleaseTransitionLock.c)
 *     PopEnableHiberFile @ 0x14074AAD0 (PopEnableHiberFile.c)
 *     PoDisableSleepStates @ 0x1408A4F00 (PoDisableSleepStates.c)
 *     PoShutdownBugCheck @ 0x1408A87D0 (PoShutdownBugCheck.c)
 *     PopBcdClose @ 0x1408B67EC (PopBcdClose.c)
 *     PopBcdOpen @ 0x1408B6800 (PopBcdOpen.c)
 */

void __fastcall PoInitHiberServices(char a1)
{
  _DWORD *v1; // rsi
  bool v2; // di
  int v3; // eax
  HANDLE v4; // rbx
  _DWORD *PoolWithTag; // rax
  unsigned int v6; // ebp
  __int64 v7; // rbx
  __int64 v8; // rcx
  ULONG ReturnLength; // [rsp+60h] [rbp+8h] BYREF
  HANDLE BcdStoreHandle; // [rsp+68h] [rbp+10h] BYREF

  LOBYTE(ReturnLength) = a1;
  v1 = 0LL;
  if ( PopHiberEnabledReg == -1 )
    v2 = (unsigned int)(PopHiberEnabledDefaultReg - 1) > 0xFFFFFFFD;
  else
    v2 = PopHiberEnabledReg == 0;
  v3 = PopHiberFileTypeReg;
  if ( PopHiberFileTypeReg != -1 || (v3 = PopHiberFileTypeDefaultReg, PopHiberFileTypeDefaultReg != -1) )
    PopHiberFileType = v3;
  EmClientQueryRuleState(&GUID_EM_REMOVE_BAD_S3_PAGE_RULE, &BcdStoreHandle);
  if ( !ExIsSoftBoot() && (int)PopBcdOpen(&BcdStoreHandle) >= 0 )
  {
    v4 = BcdStoreHandle;
    PopBcdEstablishResumeObject(BcdStoreHandle, 0LL);
    PopBcdClearPendingResume(v4);
    PopBcdClose(v4);
  }
  if ( ZwQuerySystemInformation(SystemVhdBootInformation, 0LL, 0, &ReturnLength) == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ReturnLength, 0x72626968u);
    v1 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( ZwQuerySystemInformation(SystemVhdBootInformation, PoolWithTag, ReturnLength, &ReturnLength) >= 0 )
      {
        ReturnLength -= 2;
        if ( *(_BYTE *)v1 )
        {
          if ( v1[1] <= ReturnLength )
          {
            v2 = 1;
            PoDisableSleepStates(2LL, 8LL, &BcdStoreHandle);
          }
        }
      }
    }
  }
  v6 = 0;
  v7 = 0LL;
  do
  {
    if ( *(_DWORD *)((char *)&PopHiberForceDisabledReg + v7) )
    {
      v2 = 1;
      if ( (int)PoDisableSleepStates(
                  *(unsigned int *)((char *)PopHiberForceDisabledReasonMap + v7),
                  8LL,
                  &BcdStoreHandle) < 0 )
      {
        LOBYTE(v8) = 1;
        PoShutdownBugCheck(v8, 160LL, 272LL, 0LL, 0LL, 0LL);
      }
    }
    ++v6;
    v7 += 4LL;
  }
  while ( v6 < 2 );
  PopAcquireTransitionLock(2);
  PopAcquirePolicyLock();
  PopEnableHiberFile(!v2, 0);
  PopReleasePolicyLock();
  PopReleaseTransitionLock(2);
  if ( qword_14046BD88 )
    qword_14046BD88();
  if ( v1 )
    ExFreePoolWithTag(v1, 0x72626968u);
}
