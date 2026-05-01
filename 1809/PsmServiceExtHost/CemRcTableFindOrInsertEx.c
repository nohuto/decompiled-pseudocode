/*
 * XREFs of CemRcTableFindOrInsertEx @ 0x180035C60
 * Callers:
 *     ?HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180001520 (-HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x1800148B4 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x1800149B0 (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 *     ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180014A90 (-HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180019BD0 (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x180038824 (-HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@.c)
 *     ?HampPkgFindOrInsertApplication@@YAXPEAU_HAM_PACKAGE@@PEAU_HAM_APPLICATION@@PEAPEAU2@@Z @ 0x18003AE0C (-HampPkgFindOrInsertApplication@@YAXPEAU_HAM_PACKAGE@@PEAU_HAM_APPLICATION@@PEAPEAU2@@Z.c)
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x18006D2F0 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 *     ?ArActCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY@@@Z @ 0x18006FD3C (-ArActCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CemRcTableFindOrInsertEx(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, unsigned __int64),
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 *a6)
{
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // edi
  int v14; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  int v18; // edi
  unsigned __int64 v19; // rax

  RtlAcquireSRWLockExclusive(a1 + 16);
  while ( 1 )
  {
    if ( *(_QWORD *)(a4 + 16) != -1LL )
      __int2c();
    if ( !*(_QWORD *)(a4 + 24) )
      __int2c();
    v11 = *(_QWORD *)(a1 + 8);
    v12 = *(_QWORD *)a1;
    if ( (v11 & 1) != 0 && v12 )
      v12 ^= a1;
    v13 = v11 & 1;
    if ( !v12 )
      break;
    do
    {
      v14 = a3(a2, v12);
      if ( v14 >= 0 )
      {
        if ( v14 <= 0 )
          break;
        v15 = *(_QWORD *)(v12 + 8);
      }
      else
      {
        v15 = *(_QWORD *)v12;
      }
      if ( v13 && v15 )
        v12 ^= v15;
      else
        v12 = v15;
    }
    while ( v12 );
    if ( !v12 )
      break;
    if ( *(_QWORD *)(v12 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24)) <= 1 )
        __fastfail(0xEu);
      *a6 = v12;
      RtlReleaseSRWLockExclusive(a1 + 16);
      return 0LL;
    }
    RtlSleepConditionVariableSRW(a1 + 32, a1 + 16, 0LL, 0LL);
  }
  v16 = *(_QWORD *)(a1 + 8);
  v17 = *(_QWORD *)a1;
  if ( (v16 & 1) != 0 && v17 )
    v17 ^= a1;
  LOBYTE(v10) = 0;
  v18 = v16 & 1;
  if ( v17 )
  {
    while ( 1 )
    {
      if ( ((int (__fastcall *)(__int64, unsigned __int64, __int64))a3)(a2, v17, v10) < 0 )
      {
        v19 = *(_QWORD *)v17;
        if ( v18 )
        {
          if ( !v19 )
            goto LABEL_40;
          v19 ^= v17;
        }
        if ( !v19 )
        {
LABEL_40:
          LOBYTE(v10) = 0;
          break;
        }
      }
      else
      {
        v19 = *(_QWORD *)(v17 + 8);
        if ( v18 )
        {
          if ( !v19 )
            goto LABEL_34;
          v19 ^= v17;
        }
        if ( !v19 )
        {
LABEL_34:
          LOBYTE(v10) = 1;
          break;
        }
      }
      v17 = v19;
    }
  }
  RtlRbInsertNodeEx(a1, v17, v10, a4);
  ++*(_DWORD *)(a1 + 40);
  RtlReleaseSRWLockExclusive(a1 + 16);
  RtlWakeAllConditionVariable(a1 + 32);
  *a6 = a4;
  return 0LL;
}
