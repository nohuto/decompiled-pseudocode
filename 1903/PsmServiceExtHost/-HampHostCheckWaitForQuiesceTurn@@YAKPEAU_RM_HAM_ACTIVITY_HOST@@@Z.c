/*
 * XREFs of ?HampHostCheckWaitForQuiesceTurn@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BB80
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800121A8 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x18000D9A8 (CempLockSleepConditionVariableExclusive.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180012CCC (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180013024 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BC50 (-HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostCheckWaitForQuiesceTurn(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+60h] [rbp-18h]

  v2 = 0;
  if ( HampHostIsQuiesceSerialized(a1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)a1 + 97) + 88LL);
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v3);
    v4 = *(_DWORD *)(v3 + 340);
    if ( (v4 & 8) != 0 )
    {
      HampHostReleaseLockExclusiveEx(a1);
      RmpReleaseGlobalLock();
      if ( dword_1800AB2C0 > 5u )
      {
        v6 = *((_QWORD *)a1 - 4);
        v8 = &v6;
        v9 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098986, 0LL, 0LL, 3u, &pData);
      }
      CempLockSleepConditionVariableExclusive(v3 + 304, v3 + 320, 0LL);
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v3);
      v2 = 1;
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(a1, 0);
    }
    else
    {
      *(_DWORD *)(v3 + 340) = v4 | 8;
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v3);
    }
  }
  return v2;
}
