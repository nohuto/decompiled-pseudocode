/*
 * XREFs of KseInitialize @ 0x140A02BAC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KsepLogInfo @ 0x14015411C (KsepLogInfo.c)
 *     KsepLogError @ 0x140182C30 (KsepLogError.c)
 *     KsepDebugPrint @ 0x1402B7054 (KsepDebugPrint.c)
 *     KseShimDatabaseClose @ 0x14070AA14 (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x14070CD24 (KseShimDatabaseOpen.c)
 *     EtwRegister @ 0x140718540 (EtwRegister.c)
 *     KseRegisterShim @ 0x140759380 (KseRegisterShim.c)
 *     KsepCacheUninitialize @ 0x1408843EC (KsepCacheUninitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x140A02380 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineInitialize @ 0x140A02480 (KsepEngineInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140A02540 (KsepMatchInitMachineInfo.c)
 *     KseDriverScopeInitialize @ 0x140A02AC8 (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x140A02B38 (KseVersionLieInitialize.c)
 */

__int64 __fastcall KseInitialize(__int64 a1, int a2)
{
  int matched; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  signed __int32 v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rdx
  char v23; // al
  PVOID v24; // [rsp+50h] [rbp+18h] BYREF

  matched = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v24 = 0LL;
      EtwRegister(&KernelShimEngineProvider, 0LL, 0LL, &KseEtwHandle);
      matched = KseShimDatabaseOpen(&v24);
      if ( matched >= 0 && v24 )
      {
        KseShimDatabaseClose(v24);
      }
      else
      {
        dword_140468428 |= 0x80u;
        matched = -1073741637;
      }
      if ( matched >= 0 )
      {
        KseVersionLieInitialize();
        v5 = KseRegisterShim((__int64)&KseSkipDriverUnloadShim, 0LL, 0LL);
        if ( v5 < 0 )
        {
          v16 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140446844[2 * v16] = v5;
          v17 = KsepDebugFlag;
          KsepHistoryErrors[2 * v16] = 852115;
          if ( (v17 & 2) != 0 )
            KsepDebugPrint(12LL, "Built-in SkipDriverUnload shims: failed to register.\n");
          KsepLogError(12, "Built-in SkipDriverUnload shims: failed to register.\n");
        }
        v6 = KseRegisterShim((__int64)&KseZeroPoolShim, 0LL, 0LL);
        if ( v6 < 0 )
        {
          v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140446844[2 * v18] = v6;
          v19 = KsepDebugFlag;
          KsepHistoryErrors[2 * v18] = 1048692;
          if ( (v19 & 2) != 0 )
            KsepDebugPrint(12LL, "ZeroPool shim: failed to register.\n");
          KsepLogError(12, "ZeroPool shim: failed to register.\n");
        }
        v7 = KseRegisterShim((__int64)&KseClearPCIDBitsShim, 0LL, 0LL);
        if ( v7 < 0 )
        {
          v20 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140446844[2 * v20] = v7;
          v21 = KsepDebugFlag;
          KsepHistoryErrors[2 * v20] = 917629;
          if ( (v21 & 2) != 0 )
            KsepDebugPrint(12LL, "ClearPCIDBits shim: failed to register.\n");
          KsepLogError(12, "ClearPCIDBits shim: failed to register.\n");
        }
        v8 = KseRegisterShim((__int64)&KseKasperskyShim, 0LL, 0LL);
        if ( v8 < 0 )
        {
          v22 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140446844[2 * v22] = v8;
          v23 = KsepDebugFlag;
          KsepHistoryErrors[2 * v22] = 983165;
          if ( (v23 & 2) != 0 )
            KsepDebugPrint(12LL, "Kaspersky shim: failed to register.\n");
          KsepLogError(12, "Kaspersky shim: failed to register.\n");
        }
      }
    }
LABEL_11:
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v9]) = 0;
    LODWORD(KsepHistoryMessages[v9]) = 327921;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(1LL, "KSE: Initialized phase 0x%x\n", a2);
    KsepLogInfo(1LL, (__int64)"KSE: Initialized phase 0x%x\n", a2);
    if ( InitIsWinPEMode )
      KseEngine |= 1u;
    if ( matched >= 0 )
      return (unsigned int)matched;
    goto LABEL_37;
  }
  v11 = _InterlockedCompareExchange(&dword_140468424, 1, 0);
  if ( v11 == 2 )
    return 0LL;
  if ( v11 == 1 )
    return 259LL;
  if ( (int)KseShimDatabaseBootInitialize(
              *(void **)(*(_QWORD *)(a1 + 240) + 64LL),
              *(unsigned int *)(*(_QWORD *)(a1 + 240) + 72LL)) >= 0 )
  {
    if ( !InitSafeBootMode && (v12 = *(_QWORD *)(a1 + 240), *(_QWORD *)(v12 + 64)) && *(_DWORD *)(v12 + 72) )
    {
      matched = KsepEngineInitialize(&KseEngine);
      if ( matched >= 0 )
      {
        matched = KsepMatchInitMachineInfo();
        if ( matched >= 0 )
        {
          dword_140468424 = 2;
          KseDriverScopeInitialize();
          goto LABEL_11;
        }
      }
    }
    else
    {
      if ( ViVerifierEnabled )
        dword_140468428 |= 0x40u;
      if ( InitSafeBootMode )
        dword_140468428 |= 0x100u;
      v13 = *(_QWORD *)(a1 + 240);
      if ( !*(_QWORD *)(v13 + 64) || !*(_DWORD *)(v13 + 72) )
        dword_140468428 |= 0x80u;
      matched = -1073741637;
    }
LABEL_37:
    dword_140468424 = 0;
    if ( qword_140468468 )
    {
      KsepCacheUninitialize(qword_140468468);
      qword_140468468 = 0LL;
    }
    KseEngine |= 3u;
    dword_140468428 |= 0x400u;
    v14 = KsepDebugFlag;
    v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    if ( matched == -1073741637 )
    {
      dword_140446844[2 * v15] = -1073741637;
      KsepHistoryErrors[2 * v15] = 327949;
      if ( (v14 & 2) != 0 )
        KsepDebugPrint(
          1LL,
          "KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
      KsepLogError(
        1,
        "KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
    }
    else
    {
      dword_140446844[2 * v15] = matched;
      KsepHistoryErrors[2 * v15] = 327953;
      if ( (v14 & 2) != 0 )
        KsepDebugPrint(1LL, "KSE: Initialization failed: 0x%x\n", matched);
      KsepLogError(1, "KSE: Initialization failed: 0x%x\n", matched);
    }
    return (unsigned int)matched;
  }
  return 3221225473LL;
}
