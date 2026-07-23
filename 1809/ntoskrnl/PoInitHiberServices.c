/*
 * XREFs of PoInitHiberServices @ 0x140746E80
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407467A4 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1401B89B0 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     EmClientQueryRuleState @ 0x1405663B0 (EmClientQueryRuleState.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopBcdClearPendingResume @ 0x140712248 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x140712B28 (PopBcdEstablishResumeObject.c)
 *     BcdCloseStore @ 0x140712CA8 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140713508 (BcdOpenStore.c)
 *     PopAcquireTransitionLock @ 0x14071F948 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14071F9A4 (PopReleaseTransitionLock.c)
 *     PopEnableHiberFile @ 0x14074716C (PopEnableHiberFile.c)
 *     PoDisableSleepStates @ 0x140869C20 (PoDisableSleepStates.c)
 *     PoShutdownBugCheck @ 0x14086D120 (PoShutdownBugCheck.c)
 */

void __fastcall PoInitHiberServices(char a1)
{
  _DWORD *v1; // rdi
  bool v2; // bp
  UNICODE_STRING *v3; // rcx
  HANDLE v4; // rbx
  _DWORD *PoolWithTag; // rax
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  ULONG ReturnLength; // [rsp+50h] [rbp+8h] BYREF
  HANDLE BcdStoreHandle; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(ReturnLength) = a1;
  v1 = 0LL;
  v2 = PopHiberEnabledReg == 0;
  EmClientQueryRuleState(&GUID_EM_REMOVE_BAD_S3_PAGE_RULE, &BcdStoreHandle);
  if ( BcdOpenStore(v3, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &BcdStoreHandle) >= 0 )
  {
    v4 = BcdStoreHandle;
    PopBcdEstablishResumeObject(BcdStoreHandle, 0LL);
    PopBcdClearPendingResume(v4);
    BcdCloseStore(v4);
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
  if ( qword_140441038 )
    qword_140441038();
  if ( v1 )
    ExFreePoolWithTag(v1, 0x72626968u);
}
