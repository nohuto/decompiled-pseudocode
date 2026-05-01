/*
 * XREFs of ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180007D50
 * Callers:
 *     ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x180004504 (-HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180007850 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HamSrvPackageGetDebugMode@@YAEPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXK@Z @ 0x180007920 (-HamSrvPackageGetDebugMode@@YAEPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXK@Z.c)
 *     ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180066D48 (-HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180066F94 (-HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@W4BACKGROUND_ACCESS_STATE@@@Z @ 0x18006BA6C (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 * Callees:
 *     ?HampPkgWaitForInitializationComplete@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180007FD0 (-HampPkgWaitForInitializationComplete@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180038240 (-HampPkgCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x180039020 (-HampUserCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampSessionCompareById@@YAJPEAX0@Z @ 0x18003B2B0 (-HampSessionCompareById@@YAJPEAX0@Z.c)
 */

struct _HAM_PACKAGE *__fastcall HampPkgFindInManager(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_PACKAGE_INFO *a2)
{
  void *v2; // rsi
  unsigned __int64 v3; // rdi
  char *v4; // rbp
  __int64 v6; // rax
  struct _HAM_PACKAGE *v7; // r14
  unsigned __int64 v8; // rbx
  int v9; // edi
  int v10; // eax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  int v15; // edi
  int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  int v21; // edi
  int v22; // eax
  unsigned __int64 v23; // rax
  struct _HAM_PACKAGE *v24; // rdi

  v2 = (void *)*((unsigned int *)a2 + 50);
  v3 = (unsigned __int64)a1 + 168;
  v4 = (char *)a1 + 184;
  RtlAcquireSRWLockShared((char *)a1 + 184);
  v6 = *(_QWORD *)(v3 + 8);
  v7 = 0LL;
  v8 = *(_QWORD *)v3;
  if ( (v6 & 1) != 0 )
  {
    if ( v8 )
      v8 ^= v3;
    else
      v8 = 0LL;
  }
  v9 = v6 & 1;
  while ( v8 )
  {
    v10 = HampSessionCompareById(v2, (void *)v8);
    if ( v10 >= 0 )
    {
      if ( v10 <= 0 )
        break;
      v11 = *(_QWORD *)(v8 + 8);
    }
    else
    {
      v11 = *(_QWORD *)v8;
    }
    if ( v9 && v11 )
      v8 ^= v11;
    else
      v8 = v11;
  }
  v12 = v8;
  if ( v8 )
  {
    if ( *(_QWORD *)(v8 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v12 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v4);
  if ( v12 )
  {
    RtlAcquireSRWLockShared(v12 + 56);
    v13 = *(_QWORD *)(v12 + 48);
    v14 = *(_QWORD *)(v12 + 40);
    if ( (v13 & 1) != 0 )
    {
      if ( v14 )
        v14 ^= v12 + 40;
      else
        v14 = 0LL;
    }
    v15 = v13 & 1;
    while ( v14 )
    {
      v16 = HampUserCompareByIdentity((char *)a2 + 132, (void *)v14);
      if ( v16 >= 0 )
      {
        if ( v16 <= 0 )
          break;
        v17 = *(_QWORD *)(v14 + 8);
      }
      else
      {
        v17 = *(_QWORD *)v14;
      }
      if ( v15 && v17 )
        v14 ^= v17;
      else
        v14 = v17;
    }
    v18 = v14;
    if ( v14 )
    {
      if ( *(_QWORD *)(v14 + 24) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24)) <= 1 )
          __fastfail(0xEu);
      }
      else
      {
        v18 = 0LL;
      }
    }
    RtlReleaseSRWLockShared(v12 + 56);
    if ( v18 )
    {
      RtlAcquireSRWLockShared(v18 + 56);
      v19 = *(_QWORD *)(v18 + 48);
      v20 = *(_QWORD *)(v18 + 40);
      if ( (v19 & 1) != 0 )
      {
        if ( v20 )
          v20 ^= v18 + 40;
        else
          v20 = 0LL;
      }
      v21 = v19 & 1;
      while ( v20 )
      {
        v22 = HampPkgCompareByIdentity(a2, (void *)v20);
        if ( v22 >= 0 )
        {
          if ( v22 <= 0 )
            break;
          v23 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v23 = *(_QWORD *)v20;
        }
        if ( v21 && v23 )
          v20 ^= v23;
        else
          v20 = v23;
      }
      v24 = (struct _HAM_PACKAGE *)v20;
      if ( v20 )
      {
        if ( *(_QWORD *)(v20 + 24) )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v20 + 24)) <= 1 )
            __fastfail(0xEu);
        }
        else
        {
          v24 = 0LL;
        }
      }
      RtlReleaseSRWLockShared(v18 + 56);
      if ( v24 )
      {
        HampPkgWaitForInitializationComplete(v24);
        v7 = v24;
        HampPkgWaitForInitializationComplete(v24);
      }
    }
    CemRcObjectDereference(v12);
    if ( v18 )
      CemRcObjectDereference(v18);
  }
  return v7;
}
