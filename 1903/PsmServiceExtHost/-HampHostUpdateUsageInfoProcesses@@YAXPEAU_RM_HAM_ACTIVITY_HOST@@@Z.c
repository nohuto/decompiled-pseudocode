/*
 * XREFs of ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800130CC
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18000E2C0 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z @ 0x180012D8C (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z.c)
 * Callees:
 *     CempGetSystemTime @ 0x180013070 (CempGetSystemTime.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800130A0 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall HampHostUpdateUsageInfoProcesses(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned int v2; // edx
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  CempGetSystemTime((DWORD *)&v6);
  RmpAcquireGlobalLock();
  RmHamHostReference(a1);
  RmpReleaseGlobalLock();
  HampHostAcquireLockExclusiveEx(a1, 0);
  v3 = *((_QWORD *)a1 + 81);
  if ( (v3 & 0x2000000000000LL) != 0 )
    *((_QWORD *)a1 + 127) = v6;
  else
    *((_QWORD *)a1 + 126) = v6;
  v4 = v3 | 0x2000000000000000LL;
  *((_QWORD *)a1 + 81) = v4 | 0x1000000000000000LL;
  HampHostReleaseLockExclusiveEx(a1, v2);
  if ( (v4 & 0x1000000000000000LL) != 0 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)a1 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64));
    RmpReleaseGlobalLock();
  }
  HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 97) + 88LL));
}
