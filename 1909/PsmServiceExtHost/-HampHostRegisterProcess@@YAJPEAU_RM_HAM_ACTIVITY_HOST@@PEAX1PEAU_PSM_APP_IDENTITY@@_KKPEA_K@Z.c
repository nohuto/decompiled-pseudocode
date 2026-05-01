/*
 * XREFs of ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z @ 0x180012D8C
 * Callers:
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18002EF9C (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18000D29C (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     CempLockSleepConditionVariableExclusive @ 0x18000D9A8 (CempLockSleepConditionVariableExclusive.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012D40 (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCanRegisterProcess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180012FD4 (-HampHostCanRegisterProcess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800130A0 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800130CC (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180013534 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180013580 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002A920 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampHostRegisterProcess(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        void *a2,
        void *a3,
        struct _PSM_APP_IDENTITY *a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int64 *a7)
{
  int v11; // r14d
  unsigned int v12; // ebp
  unsigned int v13; // edx
  unsigned int v14; // edx
  int v15; // esi
  char v16; // bl
  int v17; // ebx
  unsigned int v18; // ebp
  __int64 v19; // rbx
  unsigned int v20; // edx
  unsigned __int64 v22; // rsi
  unsigned int i; // edx
  __int64 v25; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+80h] [rbp+8h] BYREF

  v11 = 0;
  HampHostAcquireLockExclusiveEx(a1, 0);
  if ( (*((_QWORD *)a1 + 81) & 0x400000000000000LL) != 0 )
  {
    RtlQueryUnbiasedInterruptTime(&v26);
    v22 = v26 / 0x2710;
    for ( i = 0; i <= 0xEA60; i = v26 / 0x2710 - v22 )
    {
      if ( *((struct _RM_HAM_ACTIVITY_HOST **)a1 + 75) == (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 600) )
        break;
      if ( (*((_QWORD *)a1 + 81) & 0x2000000000LL) != 0 )
        break;
      v25 = -10000LL * (60000 - i);
      CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 16, (__int64)&v25);
      RtlQueryUnbiasedInterruptTime(&v26);
    }
  }
  HampHostStartProcessPresenceChange(a1);
  v12 = a6;
  v13 = a6;
  *a7 = *((_QWORD *)a1 + 100);
  if ( HampHostCanRegisterProcess(a1, v13) )
  {
    if ( *((_DWORD *)a1 + 208) == -1
      || *((_QWORD *)a1 + 103)
      || (v15 = TpAllocTimer((char *)a1 + 824, HampHostCacheTimeoutCallback, a1, 0LL), v15 >= 0) )
    {
      v16 = ~(*((_QWORD *)a1 + 81) >> 49);
      HampHostReleaseLockExclusiveEx(a1, v14);
      v17 = v16 & 1;
      if ( v17 )
      {
        RmpAcquireGlobalLock();
        RmHamHostReference(a1);
        RmpReleaseGlobalLock();
        HampHostUpdateUsageInfoProcesses(a1);
      }
      v18 = v12 & 0xFFFFFFFE;
      v15 = (*(__int64 (__fastcall **)(void *, void *, struct _PSM_APP_IDENTITY *, unsigned __int64, unsigned int, char, _QWORD))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 160LL))(
              a2,
              a3,
              a4,
              a5,
              v18,
              1,
              0LL);
      if ( v15 < 0 )
      {
        if ( v17 )
        {
          RmpAcquireGlobalLock();
          if ( (*((_QWORD *)a1 + 74))-- == 1LL )
            RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64));
          RmpReleaseGlobalLock();
        }
        HampHostAcquireLockExclusiveEx(a1, 0);
      }
      else
      {
        HampHostAcquireLockExclusiveEx(a1, 0);
        if ( *((_DWORD *)a1 + 140) == 2 )
        {
          v19 = *((_QWORD *)a1 + 97);
          HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v19);
          *(_WORD *)(v19 + 608) = 6912;
          HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v19);
        }
        if ( !HampHostCanRegisterProcess(a1, v18) )
          v11 = HampHostQueueTerminateEx((__int64)a1, 3u, 2304, 0LL, 1, 0);
        *((_QWORD *)a1 + 81) |= 0x100000000000000uLL;
        HampHostCheckQueueStateWorker(a1, 0);
        *((_QWORD *)a1 + 81) |= 0x2000000000000uLL;
        v15 = 0;
      }
    }
  }
  else
  {
    v15 = -1058275325;
  }
  *((_QWORD *)a1 + 81) &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable((char *)a1 + 680);
  HampHostReleaseLockExclusiveEx(a1, v20);
  if ( v11 )
    HampDepGroupRunStateChangeWorker(*((struct _HAM_DEPENDENCY_GROUP **)a1 + 86));
  return (unsigned int)v15;
}
