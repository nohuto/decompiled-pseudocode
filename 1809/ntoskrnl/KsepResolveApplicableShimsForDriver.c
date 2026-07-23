/*
 * XREFs of KsepResolveApplicableShimsForDriver @ 0x1408497C4
 * Callers:
 *     KsepGetShimsForDriver @ 0x14067ED6C (KsepGetShimsForDriver.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KsepPoolFreePaged @ 0x1400F4D34 (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x1400F4DB8 (KsepLogInfo.c)
 *     KsepLoadShimProvider @ 0x14029FC4C (KsepLoadShimProvider.c)
 *     KsepDebugPrint @ 0x14029FE34 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1402A00D4 (KsepLogError.c)
 *     KsepIsShimRegistered @ 0x1407297BC (KsepIsShimRegistered.c)
 *     KsepGetLoadedModulesList @ 0x14072995C (KsepGetLoadedModulesList.c)
 *     KsepResolveShimHooks @ 0x1408492B4 (KsepResolveShimHooks.c)
 */

__int64 __fastcall KsepResolveApplicableShimsForDriver(_QWORD *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int LoadedModulesList; // esi
  int v4; // r14d
  int v5; // r13d
  __int64 v8; // r8
  _QWORD *v9; // r14
  _QWORD *v10; // r15
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // r15
  _QWORD *v14; // r12
  struct _KTHREAD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r15
  __int64 *v18; // r12
  __int64 v19; // rax
  struct _KTHREAD *v20; // rax
  __int64 v21; // r15
  _QWORD *v22; // r14
  __int64 v23; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // [rsp+68h] [rbp+10h]
  int *v29; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  LoadedModulesList = 0;
  v29 = 0LL;
  v4 = 0;
  v5 = 0;
  v28 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043D9A0, 0LL);
  if ( a2 )
  {
    v9 = a1 + 9;
    v10 = a1;
    v11 = a2;
    do
    {
      if ( (unsigned int)KsepIsShimRegistered((__int64)&KseEngine, v10, v8, v10 + 9) == 1 )
      {
        v12 = *(_DWORD *)(*v9 + 24LL);
        if ( !v12 )
          v5 = 1;
        *(_DWORD *)(*v9 + 24LL) = v12 + 1;
      }
      else
      {
        *v9 = 0LL;
        v5 = 1;
        v28 = 1;
      }
      v10 += 10;
      v9 += 10;
      --v11;
    }
    while ( v11 );
    v4 = v28;
    LoadedModulesList = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043D9A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043D9A0);
  KeAbPostRelease((ULONG_PTR)&qword_14043D9A0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( !v4 )
  {
LABEL_25:
    if ( v5 )
    {
      LoadedModulesList = KsepGetLoadedModulesList(&v29);
      if ( LoadedModulesList < 0 )
        goto LABEL_38;
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043D9A0, 0LL);
      v21 = 0LL;
      if ( a2 )
      {
        v22 = a1 + 9;
        while ( 1 )
        {
          LoadedModulesList = KsepResolveShimHooks((__int64)v29, *(int **)(*(_QWORD *)(*v22 + 16LL) + 48LL));
          if ( LoadedModulesList < 0 )
            break;
          v21 = (unsigned int)(v21 + 1);
          v22 += 10;
          if ( (unsigned int)v21 >= a2 )
            goto LABEL_31;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043D9A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043D9A0);
        KeAbPostRelease((ULONG_PTR)&qword_14043D9A0);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v27 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        dword_14041BCA4[2 * v27] = LoadedModulesList;
        KsepHistoryErrors[2 * v27] = 459288;
        if ( (KsepDebugFlag & 2) != 0 )
          KsepDebugPrint(
            6LL,
            "KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
            LODWORD(a1[10 * v21]),
            LoadedModulesList);
        KsepLogError(
          6,
          "KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
          LODWORD(a1[10 * v21]),
          LoadedModulesList);
      }
      else
      {
LABEL_31:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043D9A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043D9A0);
        KeAbPostRelease((ULONG_PTR)&qword_14043D9A0);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
    goto LABEL_34;
  }
  v13 = 0LL;
  if ( a2 )
  {
    v14 = a1 + 9;
    while ( 1 )
    {
      if ( !*v14 )
      {
        LoadedModulesList = KsepLoadShimProvider((__int64)&a1[10 * v13]);
        if ( LoadedModulesList < 0 )
          break;
      }
      v13 = (unsigned int)(v13 + 1);
      v14 += 10;
      if ( (unsigned int)v13 >= a2 )
        goto LABEL_18;
    }
    v25 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_14041BCA4[2 * v25] = LoadedModulesList;
    KsepHistoryErrors[2 * v25] = 459211;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(
        6LL,
        "KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
        LODWORD(a1[10 * v13]),
        LoadedModulesList);
    KsepLogError(
      6,
      "KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
      LODWORD(a1[10 * v13]),
      LoadedModulesList);
LABEL_34:
    if ( LoadedModulesList >= 0 )
    {
      v23 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
      HIDWORD(KsepHistoryMessages[v23]) = 0;
      LODWORD(KsepHistoryMessages[v23]) = 459302;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(6LL, "KSE: Successfully resolved %d shim(s).\n", a2);
      KsepLogInfo(6LL, (__int64)"KSE: Successfully resolved %d shim(s).\n", a2);
    }
    goto LABEL_38;
  }
LABEL_18:
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043D9A0, 0LL);
  v17 = 0LL;
  if ( !a2 )
  {
LABEL_22:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043D9A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043D9A0);
    KeAbPostRelease((ULONG_PTR)&qword_14043D9A0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_25;
  }
  v18 = a1 + 9;
  while ( (unsigned int)KsepIsShimRegistered((__int64)&KseEngine, &a1[10 * v17], v16, &a1[10 * v17 + 9]) )
  {
    v19 = *v18;
    v17 = (unsigned int)(v17 + 1);
    v18 += 10;
    ++*(_DWORD *)(v19 + 24);
    if ( (unsigned int)v17 >= a2 )
      goto LABEL_22;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043D9A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043D9A0);
  KeAbPostRelease((ULONG_PTR)&qword_14043D9A0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  LoadedModulesList = -1073740782;
  v26 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  dword_14041BCA4[2 * v26] = -1073740782;
  KsepHistoryErrors[2 * v26] = 459240;
  if ( (KsepDebugFlag & 2) != 0 )
    KsepDebugPrint(6LL, "KSE: The provider did not register shim [0x%08X] in time\n", LODWORD(a1[10 * v17]));
  KsepLogError(6, "KSE: The provider did not register shim [0x%08X] in time\n", LODWORD(a1[10 * v17]));
LABEL_38:
  KsepPoolFreePaged(v29);
  return (unsigned int)LoadedModulesList;
}
