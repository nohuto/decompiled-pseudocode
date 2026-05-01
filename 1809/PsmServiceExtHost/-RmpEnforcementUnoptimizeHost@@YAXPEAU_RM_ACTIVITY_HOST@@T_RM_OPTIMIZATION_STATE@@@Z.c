/*
 * XREFs of ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001041C
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024E90 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180003F6C (-RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?RmpSystemPriorityBoostThreadBegin@@YAJXZ @ 0x180006B38 (-RmpSystemPriorityBoostThreadBegin@@YAJXZ.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@@Z @ 0x18000CC30 (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostChangeApplicationExternalState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180013DA4 (-HampHostChangeApplicationExternalState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_EXTERNAL_APPLICATI.c)
 *     ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001447C (-RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002C2AC (-HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18002C430 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003A674 (-HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003B690 (-HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilIsImportanceUserImpactful@@YAKT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18003CDFC (-HampUtilIsImportanceUserImpactful@@YAKT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18005BC74 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180066418 (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

void __fastcall RmpEnforcementUnoptimizeHost(__int64 a1, char a2)
{
  __int64 v2; // rsi
  int v5; // ecx
  unsigned int IsForegroundBoostedOrPending; // r15d
  BOOL v7; // ebp
  BOOL v8; // r14d
  int v9; // ebp
  int ThreadInformation; // [rsp+68h] [rbp+10h] BYREF

  v2 = a1 + 64;
  if ( (a2 & 0x10) != 0 )
  {
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64));
    RmpActivityHostSetCommitSavings((struct _RM_ACTIVITY_HOST *)a1, 0);
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, 0);
  }
  if ( (a2 & 0x27) != 0 )
    *(_DWORD *)(a1 + 1188) &= ~(a2 & 0x27);
  if ( (a2 & 8) != 0 )
  {
    HampHostWaitForInSwapTurn((struct _RM_HAM_ACTIVITY_HOST *)v2);
    if ( (*(_QWORD *)(v2 + 632) & 0x200000000000LL) == 0 )
    {
      *(_DWORD *)(a1 + 1192) |= 8u;
      IsForegroundBoostedOrPending = HampHostIsForegroundBoostedOrPending((struct _RM_HAM_ACTIVITY_HOST *)v2);
      v7 = IsForegroundBoostedOrPending || (unsigned int)HampUtilIsImportanceUserImpactful(*(unsigned int *)(v2 + 640));
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2);
      RmpReleaseGlobalLock();
      v8 = 0;
      if ( v7 )
        v8 = (int)RmpPowerBoostEnableDisable(*(struct _RM_SERVICE_GLOBALS **)(a1 + 48), 1u) >= 0;
      if ( IsForegroundBoostedOrPending )
        v9 = RmpSystemPriorityBoostThreadBegin();
      else
        v9 = 0;
      RmpEnforcementUpdateSwapState((struct _RM_ACTIVITY_HOST *)a1, 0);
      if ( IsForegroundBoostedOrPending )
      {
        ThreadInformation = v9;
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &ThreadInformation, 4u);
      }
      if ( v8 )
        RmpPowerBoostEnableDisable(*(struct _RM_SERVICE_GLOBALS **)(a1 + 48), 0);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, 0);
      *(_DWORD *)(a1 + 1192) &= ~8u;
    }
    *(_DWORD *)(a1 + 1188) &= ~8u;
    *(_QWORD *)(v2 + 632) &= ~0x200000000000uLL;
    HampHostEndInSwapTurn((struct _RM_HAM_ACTIVITY_HOST *)v2);
  }
  if ( a2 < 0 )
  {
    v5 = *(_DWORD *)(a1 + 1192) | 0x80;
    *(_DWORD *)(a1 + 1192) = v5;
    *(_DWORD *)(a1 + 1192) = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)*(_DWORD *)(a1 + 1188)) & 0x100;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2);
    RmpReleaseGlobalLock();
    if ( (int)RmpSystemChangePsmApplicationState(a1, 0) < 0 )
      HampHostQueueTerminateEx(v2, 3LL, 4866LL);
    HampHostChangeApplicationExternalState(v2, 0LL);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, 0);
    *(_DWORD *)(a1 + 1192) &= 0xFFFFFE7F;
    *(_DWORD *)(a1 + 1188) &= 0xFFFFFE7F;
    *(_QWORD *)(v2 + 632) &= 0xFFFFFFFF1FFFFFFFuLL;
  }
  if ( (a2 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 1192) |= 0x40u;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2);
    RmpReleaseGlobalLock();
    RmpSystemFreezeHostJob((struct _RM_ACTIVITY_HOST *)a1, 0);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, 0);
    *(_DWORD *)(a1 + 1192) &= ~0x40u;
    *(_DWORD *)(a1 + 1188) &= ~0x40u;
  }
}
