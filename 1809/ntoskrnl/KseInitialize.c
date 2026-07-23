/*
 * XREFs of KseInitialize @ 0x1409B0930
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KsepLogInfo @ 0x1400F4DB8 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14029FE34 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1402A00D4 (KsepLogError.c)
 *     KseShimDatabaseClose @ 0x14067EB4C (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x14067EC78 (KseShimDatabaseOpen.c)
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
 *     KseRegisterShim @ 0x1407295F0 (KseRegisterShim.c)
 *     KsepCacheUninitialize @ 0x14084A15C (KsepCacheUninitialize.c)
 *     KseZeroPoolInitialize @ 0x1409ABE2C (KseZeroPoolInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x1409AFFF4 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineInitialize @ 0x1409B00F4 (KsepEngineInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x1409B01B4 (KsepMatchInitMachineInfo.c)
 *     KseDriverScopeInitialize @ 0x1409B073C (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x1409B07AC (KseVersionLieInitialize.c)
 */

__int64 __fastcall KseInitialize(__int64 a1, int a2)
{
  int matched; // edi
  signed __int32 v5; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  char v11; // al
  int v12; // eax
  __int64 v13; // rcx
  char v14; // al
  int v15; // eax
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rax
  char v19; // al
  __int64 v20; // rcx
  PVOID v21; // [rsp+50h] [rbp+18h] BYREF

  matched = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v21 = 0LL;
      EtwRegister(&KernelShimEngineProvider, 0LL, 0LL, &KseEtwHandle);
      matched = KseShimDatabaseOpen(&v21);
      if ( matched >= 0 && v21 )
      {
        KseShimDatabaseClose(v21);
      }
      else
      {
        dword_14043D978 |= 0x80u;
        matched = -1073741637;
      }
      if ( matched >= 0 )
      {
        KseVersionLieInitialize();
        v9 = KseRegisterShim((__int64)&KseSkipDriverUnloadShim, 0LL, 0LL);
        if ( v9 < 0 )
        {
          v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_14041BCA4[2 * v10] = v9;
          v11 = KsepDebugFlag;
          KsepHistoryErrors[2 * v10] = 852115;
          if ( (v11 & 2) != 0 )
            KsepDebugPrint(12LL, "Built-in SkipDriverUnload shims: failed to register.\n");
          KsepLogError(12, "Built-in SkipDriverUnload shims: failed to register.\n");
        }
        KseZeroPoolInitialize();
        v12 = KseRegisterShim((__int64)&KseClearPCIDBitsShim, 0LL, 0LL);
        if ( v12 < 0 )
        {
          v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_14041BCA4[2 * v13] = v12;
          v14 = KsepDebugFlag;
          KsepHistoryErrors[2 * v13] = 917629;
          if ( (v14 & 2) != 0 )
            KsepDebugPrint(12LL, "ClearPCIDBits shim: failed to register.\n");
          KsepLogError(12, "ClearPCIDBits shim: failed to register.\n");
        }
        v15 = KseRegisterShim((__int64)&KseKasperskyShim, 0LL, 0LL);
        if ( v15 < 0 )
        {
          v16 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_14041BCA4[2 * v16] = v15;
          v17 = KsepDebugFlag;
          KsepHistoryErrors[2 * v16] = 983165;
          if ( (v17 & 2) != 0 )
            KsepDebugPrint(12LL, "Kaspersky shim: failed to register.\n");
          KsepLogError(12, "Kaspersky shim: failed to register.\n");
        }
      }
    }
LABEL_40:
    v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v18]) = 0;
    LODWORD(KsepHistoryMessages[v18]) = 327921;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(1LL, "KSE: Initialized phase 0x%x\n", a2);
    KsepLogInfo(1LL, (__int64)"KSE: Initialized phase 0x%x\n", a2);
    if ( InitIsWinPEMode )
      KseEngine |= 1u;
    if ( matched >= 0 )
      return (unsigned int)matched;
    goto LABEL_45;
  }
  v5 = _InterlockedCompareExchange(&dword_14043D974, 1, 0);
  if ( v5 == 2 )
    return 0LL;
  if ( v5 == 1 )
    return 259LL;
  if ( (int)KseShimDatabaseBootInitialize(
              *(void **)(*(_QWORD *)(a1 + 240) + 64LL),
              *(unsigned int *)(*(_QWORD *)(a1 + 240) + 72LL)) < 0 )
    return 3221225473LL;
  if ( !InitSafeBootMode && (v7 = *(_QWORD *)(a1 + 240), *(_QWORD *)(v7 + 64)) && *(_DWORD *)(v7 + 72) )
  {
    matched = KsepEngineInitialize(&KseEngine);
    if ( matched >= 0 )
    {
      matched = KsepMatchInitMachineInfo();
      if ( matched >= 0 )
      {
        dword_14043D974 = 2;
        KseDriverScopeInitialize();
        goto LABEL_40;
      }
    }
  }
  else
  {
    if ( ViVerifierEnabled )
      dword_14043D978 |= 0x40u;
    if ( InitSafeBootMode )
      dword_14043D978 |= 0x100u;
    v8 = *(_QWORD *)(a1 + 240);
    if ( !*(_QWORD *)(v8 + 64) || !*(_DWORD *)(v8 + 72) )
      dword_14043D978 |= 0x80u;
    matched = -1073741637;
  }
LABEL_45:
  dword_14043D974 = 0;
  if ( qword_14043D9B8 )
  {
    KsepCacheUninitialize(qword_14043D9B8);
    qword_14043D9B8 = 0LL;
  }
  KseEngine |= 3u;
  dword_14043D978 |= 0x400u;
  v19 = KsepDebugFlag;
  v20 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  if ( matched == -1073741637 )
  {
    dword_14041BCA4[2 * v20] = -1073741637;
    KsepHistoryErrors[2 * v20] = 327949;
    if ( (v19 & 2) != 0 )
      KsepDebugPrint(
        1LL,
        "KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
    KsepLogError(
      1,
      "KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
  }
  else
  {
    dword_14041BCA4[2 * v20] = matched;
    KsepHistoryErrors[2 * v20] = 327953;
    if ( (v19 & 2) != 0 )
      KsepDebugPrint(1LL, "KSE: Initialization failed: 0x%x\n", matched);
    KsepLogError(1, "KSE: Initialization failed: 0x%x\n", matched);
  }
  return (unsigned int)matched;
}
