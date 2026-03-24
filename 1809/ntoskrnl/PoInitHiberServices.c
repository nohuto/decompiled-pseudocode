/*
 * XREFs of PoInitHiberServices @ 0x140745C90
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407455B4 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1401B8850 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     EmClientQueryRuleState @ 0x1405653B0 (EmClientQueryRuleState.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopBcdClearPendingResume @ 0x140710FA8 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x140711888 (PopBcdEstablishResumeObject.c)
 *     BcdCloseStore @ 0x140711A08 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140712268 (BcdOpenStore.c)
 *     PopAcquireTransitionLock @ 0x14071E6A8 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14071E704 (PopReleaseTransitionLock.c)
 *     PopEnableHiberFile @ 0x140745F7C (PopEnableHiberFile.c)
 *     PoDisableSleepStates @ 0x1408689C0 (PoDisableSleepStates.c)
 *     PoShutdownBugCheck @ 0x14086BEC0 (PoShutdownBugCheck.c)
 */

void __fastcall PoInitHiberServices(char a1)
{
  _DWORD *v1; // rdi
  bool v2; // bp
  __int64 v3; // rcx
  __int64 v4; // rbx
  _DWORD *PoolWithTag; // rax
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  ULONG ReturnLength; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(ReturnLength) = a1;
  v1 = 0LL;
  v2 = PopHiberEnabledReg == 0;
  EmClientQueryRuleState(&GUID_EM_REMOVE_BAD_S3_PAGE_RULE, &v11);
  if ( (int)BcdOpenStore(v3, 2u, (__int64)&v11) >= 0 )
  {
    v4 = v11;
    PopBcdEstablishResumeObject(v11, 0LL);
    PopBcdClearPendingResume(v4);
    BcdCloseStore(v4);
  }
  if ( ZwQuerySystemInformation(SystemPrefetchPathInformation|SystemHandleInformation, 0LL, 0, &ReturnLength) == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ReturnLength, 0x72626968u);
    v1 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( ZwQuerySystemInformation(
             SystemPrefetchPathInformation|SystemHandleInformation,
             PoolWithTag,
             ReturnLength,
             &ReturnLength) >= 0 )
      {
        ReturnLength -= 2;
        if ( *(_BYTE *)v1 )
        {
          if ( v1[1] <= ReturnLength )
          {
            v2 = 1;
            PoDisableSleepStates(2LL, 8LL, &v11);
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
      if ( (int)PoDisableSleepStates(*(unsigned int *)((char *)PopHiberForceDisabledReasonMap + v7), 8LL, &v11) < 0 )
      {
        LOBYTE(v9) = 1;
        PoShutdownBugCheck(v9, 160LL, 272LL, 0LL, 0LL, 0LL);
      }
    }
    ++v6;
    v7 += 4LL;
  }
  while ( v6 < 2 );
  PopAcquireTransitionLock(2);
  PopAcquirePolicyLock();
  LOBYTE(v8) = !v2;
  PopEnableHiberFile(v8, 0LL);
  PopReleasePolicyLock();
  PopReleaseTransitionLock(2);
  if ( qword_14043FF78 )
    qword_14043FF78();
  if ( v1 )
    ExFreePoolWithTag(v1, 0x72626968u);
}
