/*
 * XREFs of DrvFunctionalizeDisplayConfig @ 0x1C00D4D70
 * Callers:
 *     NtUserFunctionalizeDisplayConfig @ 0x1C00B5D30 (NtUserFunctionalizeDisplayConfig.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C004810C (--0AUTO_TGO@@IEAA@XZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C0079FAC (DrvSetDisplayConfigValidateParams.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00CB948 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00CBB68 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C00CC218 (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?FunctionalizeDisplayConfigRemoveUnownedPaths@@YAXPEAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00D18A8 (-FunctionalizeDisplayConfigRemoveUnownedPaths@@YAXPEAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C00D260C (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 */

__int64 __fastcall DrvFunctionalizeDisplayConfig(
        unsigned int *a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // r14
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v8; // rsi
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rax
  int PathModalityForDisplayConfig; // ebx
  int v18; // r13d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // r12d
  unsigned int v24; // ebx
  struct D3DKMT_GETPATHSMODALITY *v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  _BYTE v28[16]; // [rsp+40h] [rbp-39h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v29[6]; // [rsp+50h] [rbp-29h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v30[2]; // [rsp+80h] [rbp+7h] BYREF
  bool v32; // [rsp+E0h] [rbp+67h] BYREF

  v6 = (unsigned int)a3;
  v8 = a2;
  if ( (a3 & 0xFFFFFFF8) != 0 )
  {
    v10 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v10 + 24) = v6;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v29);
  v15 = *a1;
  v29[0] = (struct D3DKMT_GETPATHSMODALITY *)&off_1C0172E68;
  *(_OWORD *)v30 = 0LL;
  a6 = v6 & 1;
  if ( (v6 & 1) != 0 )
  {
    if ( (unsigned int)v15 < 2 )
    {
LABEL_5:
      v16 = WdLogNewEntry5_WdError(v13, v12, v14);
      *(_QWORD *)(v16 + 24) = v15;
LABEL_21:
      WdLogEvent5_WdError(v16);
      PathModalityForDisplayConfig = -1073741811;
      goto LABEL_35;
    }
    v8 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v8 + 200);
    LODWORD(v15) = v15 - 1;
  }
  else
  {
    if ( !(_DWORD)v15 )
      goto LABEL_5;
    if ( (v6 & 2) != 0 )
    {
      v16 = WdLogNewEntry5_WdError(v13, v12, v14);
      *(_QWORD *)(v16 + 24) = v6;
      goto LABEL_21;
    }
  }
  PathModalityForDisplayConfig = DrvSetDisplayConfigValidateParams(
                                   (unsigned int)v15,
                                   v8,
                                   a4 != 0 ? 98400 : 32864,
                                   0LL,
                                   1);
  if ( PathModalityForDisplayConfig >= 0 )
  {
    if ( a4 )
    {
      PathModalityForDisplayConfig = ((__int64 (__fastcall *)(__int64, __int64, struct D3DKMT_GETPATHSMODALITY **))qword_1C01A2028)(
                                       a4,
                                       0x20000LL,
                                       &v30[1]);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      v18 = v6 & 4;
      PathModalityForDisplayConfig = SetDisplayConfigHandleBrokerProvidedPaths(
                                       v30[1],
                                       v18 != 0,
                                       v15,
                                       v8,
                                       v30,
                                       &v32,
                                       (enum _DXGK_DIAG_SDC_STAGE *)v28);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
    }
    else
    {
      PathModalityForDisplayConfig = AllocatePathModalityForDisplayConfig((unsigned int)v15, v8, v30);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      PathModalityForDisplayConfig = ConvertDisplayConfigToPathModality((unsigned int)v15, v8, v30[0], 0LL);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      v18 = v6 & 4;
    }
    v23 = a4 != 0 ? 0x1000000 : 0;
    if ( a6 )
    {
      v24 = *((_DWORD *)v8 - 46);
      if ( v24 >= (unsigned int)v15 )
      {
        v16 = WdLogNewEntry5_WdError(v20, v19, v21);
        *(_QWORD *)(v16 + 24) = *((unsigned int *)v8 - 46);
        goto LABEL_21;
      }
      v25 = v30[0];
      if ( a4 )
      {
        if ( *((unsigned __int16 *)v30[0] + 10) < (unsigned int)v15 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v20, v30[0], v21, v22);
          WdLogEvent5_WdAssertion(v26);
          v25 = v30[0];
        }
        v24 += *((unsigned __int16 *)v25 + 10) - (_DWORD)v15;
      }
      if ( (v6 & 2) != 0 )
      {
        *((_QWORD *)v25 + 34 * v24 + 6) |= 0x4000000000uLL;
        v25 = v30[0];
      }
      v27 = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD, char *, char *))qword_1C01A2010)(
              v23,
              v25,
              v24,
              (char *)v8 - 176,
              (char *)v8 - 180);
    }
    else
    {
      PathModalityForDisplayConfig = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *))qword_1C01A1A10)(
                                       v23 | 0x8000,
                                       v30[0]);
      if ( PathModalityForDisplayConfig < 0 )
        goto LABEL_35;
      if ( a4 && !v18 )
        FunctionalizeDisplayConfigRemoveUnownedPaths(v30[1], v30[0]);
      v27 = ((__int64 (__fastcall *)(struct D3DKMT_GETPATHSMODALITY *, unsigned int *, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *, __int64))qword_1C01A1F80)(
              v30[0],
              a1,
              v8,
              a5);
    }
    PathModalityForDisplayConfig = v27;
  }
LABEL_35:
  DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(v29);
  return (unsigned int)PathModalityForDisplayConfig;
}
