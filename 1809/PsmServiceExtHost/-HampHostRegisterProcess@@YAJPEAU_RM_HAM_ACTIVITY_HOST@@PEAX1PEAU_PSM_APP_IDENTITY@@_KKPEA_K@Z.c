/*
 * XREFs of ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z @ 0x18000CE6C
 * Callers:
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18000EE8C (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18000CB60 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18000CC00 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostCanRegisterProcess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000D0B4 (-HampHostCanRegisterProcess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D104 (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180015E08 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023DD0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800277F0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18002C430 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     CempLockSleepConditionVariableExclusive @ 0x18002FB60 (CempLockSleepConditionVariableExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
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
  if ( (*((_QWORD *)a1 + 79) & 0x400000000000000LL) != 0 )
  {
    RtlQueryUnbiasedInterruptTime(&v26);
    v22 = v26 / 0x2710;
    for ( i = 0; i <= 0xEA60; i = v26 / 0x2710 - v22 )
    {
      if ( *((struct _RM_HAM_ACTIVITY_HOST **)a1 + 73) == (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 584) )
        break;
      if ( (*((_QWORD *)a1 + 79) & 0x2000000000LL) != 0 )
        break;
      v25 = -10000LL * (60000 - i);
      CempLockSleepConditionVariableExclusive(a1, (char *)a1 + 16, &v25);
      RtlQueryUnbiasedInterruptTime(&v26);
    }
  }
  HampHostStartProcessPresenceChange(a1);
  v12 = a6;
  v13 = a6;
  *a7 = *((_QWORD *)a1 + 97);
  if ( HampHostCanRegisterProcess(a1, v13) )
  {
    if ( *((_DWORD *)a1 + 202) == -1
      || *((_QWORD *)a1 + 100)
      || (v15 = TpAllocTimer((char *)a1 + 800, HampHostCacheTimeoutCallback, a1, 0LL), v15 >= 0) )
    {
      v16 = ~(*((_QWORD *)a1 + 79) >> 49);
      HampHostReleaseLockExclusiveEx(a1, v14);
      v17 = v16 & 1;
      if ( v17 )
      {
        RmpAcquireGlobalLock();
        RmHamHostReference(a1);
        RmpReleaseGlobalLock();
      }
      v18 = v12 & 0xFFFFFFFE;
      v15 = (*(__int64 (__fastcall **)(void *, void *, struct _PSM_APP_IDENTITY *, unsigned __int64, unsigned int, char, _QWORD))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 168LL))(
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
          if ( (*((_QWORD *)a1 + 72))-- == 1LL )
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
          v19 = *((_QWORD *)a1 + 94);
          HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v19);
          *(_DWORD *)(v19 + 608) &= 0xFFF8D007;
          *(_DWORD *)(v19 + 608) |= 0xD000u;
          HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v19);
        }
        if ( !HampHostCanRegisterProcess(a1, v18) )
          v11 = HampHostQueueTerminateEx(a1, 3LL, 2304LL);
        *((_QWORD *)a1 + 79) |= 0x100000000000000uLL;
        HampHostCheckQueueStateWorker(a1, 0);
        *((_QWORD *)a1 + 79) |= 0x2000000000000uLL;
        v15 = 0;
      }
    }
  }
  else
  {
    v15 = -1058275325;
  }
  *((_QWORD *)a1 + 79) &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable((char *)a1 + 656);
  HampHostReleaseLockExclusiveEx(a1, v20);
  if ( v11 )
    HampDepGroupRunStateChangeWorker(*((struct _HAM_DEPENDENCY_GROUP **)a1 + 83));
  return (unsigned int)v15;
}
