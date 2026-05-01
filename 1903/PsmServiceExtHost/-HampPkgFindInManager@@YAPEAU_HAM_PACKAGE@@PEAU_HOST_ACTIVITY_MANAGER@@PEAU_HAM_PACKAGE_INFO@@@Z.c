/*
 * XREFs of ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180011880
 * Callers:
 *     ?HamSrvPackageGetDebugMode@@YAEPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXK@Z @ 0x180011460 (-HamSrvPackageGetDebugMode@@YAEPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXK@Z.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x18003B680 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180073F8C (-HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x1800741DC (-HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x18007606C (-HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@W4BACKGROUND_ACCESS_STATE@@@Z @ 0x1800797E0 (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 * Callees:
 *     ?HampPkgWaitForInitializationComplete@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180011B50 (-HampPkgWaitForInitializationComplete@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180039100 (-HampPkgCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x18003A880 (-HampUserCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampSessionCompareById@@YAJPEAX0@Z @ 0x18003C720 (-HampSessionCompareById@@YAJPEAX0@Z.c)
 */

struct _HAM_PACKAGE *__fastcall HampPkgFindInManager(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_PACKAGE_INFO *a2)
{
  void *v2; // rbp
  unsigned __int64 v3; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  int v7; // esi
  int v8; // eax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  struct _HAM_PACKAGE *v13; // r14
  int v14; // esi
  unsigned __int64 v16; // rbx
  struct _HAM_PACKAGE *v17; // rsi
  int v18; // esi
  int v19; // eax
  unsigned __int64 v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // rax

  v2 = (void *)*((unsigned int *)a2 + 50);
  v3 = (unsigned __int64)a1 + 168;
  RtlAcquireSRWLockShared((char *)a1 + 184);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_QWORD *)v3;
  if ( (v5 & 1) != 0 )
  {
    if ( v6 )
      v6 ^= v3;
    else
      v6 = 0LL;
  }
  v7 = v5 & 1;
  while ( v6 )
  {
    v8 = HampSessionCompareById(v2, (void *)v6);
    if ( v8 >= 0 )
    {
      if ( v8 <= 0 )
        break;
      v9 = *(_QWORD *)(v6 + 8);
      if ( v7 && v9 )
      {
LABEL_22:
        v6 ^= v9;
        continue;
      }
    }
    else
    {
      v9 = *(_QWORD *)v6;
      if ( v7 && v9 )
        goto LABEL_22;
    }
    v6 = v9;
  }
  v10 = v6;
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v10 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v3 + 16);
  if ( !v10 )
    return 0LL;
  RtlAcquireSRWLockShared(v10 + 56);
  v11 = *(_QWORD *)(v10 + 48);
  v12 = *(_QWORD *)(v10 + 40);
  if ( (v11 & 1) == 0 )
    goto LABEL_24;
  if ( v12 )
  {
    v12 ^= v10 + 40;
LABEL_24:
    v13 = 0LL;
    goto LABEL_25;
  }
  v13 = 0LL;
  v12 = 0LL;
LABEL_25:
  v14 = v11 & 1;
  if ( !v12 )
  {
LABEL_26:
    v12 = 0LL;
    goto LABEL_60;
  }
  while ( 1 )
  {
    v21 = HampUserCompareByIdentity((char *)a2 + 132, (void *)v12);
    if ( v21 < 0 )
    {
      v22 = *(_QWORD *)v12;
      if ( v14 && v22 )
        goto LABEL_57;
      goto LABEL_49;
    }
    if ( v21 <= 0 )
      break;
    v22 = *(_QWORD *)(v12 + 8);
    if ( v14 && v22 )
    {
LABEL_57:
      v12 ^= v22;
      goto LABEL_50;
    }
LABEL_49:
    v12 = v22;
LABEL_50:
    if ( !v12 )
    {
      v12 = 0LL;
      goto LABEL_60;
    }
  }
  if ( !*(_QWORD *)(v12 + 24) )
    goto LABEL_26;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24)) <= 1 )
    __fastfail(0xEu);
LABEL_60:
  RtlReleaseSRWLockShared(v10 + 56);
  if ( v12 )
  {
    RtlAcquireSRWLockShared(v12 + 56);
    v23 = *(_QWORD *)(v12 + 48);
    v16 = *(_QWORD *)(v12 + 40);
    if ( (v23 & 1) != 0 )
    {
      if ( v16 )
        v16 ^= v12 + 40;
      else
        v16 = 0LL;
    }
    v18 = v23 & 1;
    while ( v16 )
    {
      v19 = HampPkgCompareByIdentity(a2, (void *)v16);
      if ( v19 >= 0 )
      {
        if ( v19 <= 0 )
          break;
        v20 = *(_QWORD *)(v16 + 8);
        if ( v18 && v20 )
        {
LABEL_42:
          v16 ^= v20;
          continue;
        }
      }
      else
      {
        v20 = *(_QWORD *)v16;
        if ( v18 && v20 )
          goto LABEL_42;
      }
      v16 = v20;
    }
    v17 = (struct _HAM_PACKAGE *)v16;
    if ( v16 )
    {
      if ( *(_QWORD *)(v16 + 24) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24)) <= 1 )
          __fastfail(0xEu);
      }
      else
      {
        v17 = 0LL;
      }
    }
    RtlReleaseSRWLockShared(v12 + 56);
    if ( v17 )
    {
      HampPkgWaitForInitializationComplete(v17);
      v13 = v17;
      HampPkgWaitForInitializationComplete(v17);
    }
  }
  else
  {
    v12 = 0LL;
  }
  CemRcObjectDereference(v10);
  if ( v12 )
    CemRcObjectDereference(v12);
  return v13;
}
