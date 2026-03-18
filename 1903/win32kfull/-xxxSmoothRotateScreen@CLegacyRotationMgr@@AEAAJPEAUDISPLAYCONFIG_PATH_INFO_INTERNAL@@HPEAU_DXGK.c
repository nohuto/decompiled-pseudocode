/*
 * XREFs of ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D5C04
 * Callers:
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01D5550 (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C002AA9C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002AAD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     IsCurrentDesktopComposed @ 0x1C008F610 (IsCurrentDesktopComposed.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     ?ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C0131D50 (-ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?IsExtendTopology@@YAHXZ @ 0x1C01D4BB4 (-IsExtendTopology@@YAHXZ.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x1C02725E8 (DwmAsyncNotifyRotationModeChange.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxSmoothRotateScreen(
        CLegacyRotationMgr *this,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  int v4; // ecx
  unsigned int v7; // esi
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  void *v24; // rax
  unsigned int v26; // [rsp+50h] [rbp-59h] BYREF
  int v27; // [rsp+58h] [rbp-51h] BYREF
  unsigned int v28; // [rsp+5Ch] [rbp-4Dh] BYREF
  _DWORD v29[4]; // [rsp+60h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-39h] BYREF
  _DWORD *v31; // [rsp+90h] [rbp-19h]
  int v32; // [rsp+98h] [rbp-11h]
  int v33; // [rsp+9Ch] [rbp-Dh]
  unsigned int *v34; // [rsp+A0h] [rbp-9h]
  int v35; // [rsp+A8h] [rbp-1h]
  int v36; // [rsp+ACh] [rbp+3h]
  int *v37; // [rsp+B0h] [rbp+7h]
  int v38; // [rsp+B8h] [rbp+Fh]
  int v39; // [rsp+BCh] [rbp+13h]
  unsigned int *v40; // [rsp+C0h] [rbp+17h]
  int v41; // [rsp+C8h] [rbp+1Fh]
  int v42; // [rsp+CCh] [rbp+23h]

  v4 = *((_DWORD *)a2 + 26);
  v26 = a3;
  v7 = ConvertDisplayConfigRotationToDMDO(v4);
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v29, gRotationProcessLock);
  if ( grpdeskRitInput && (v8 = *(_QWORD *)(grpdeskRitInput + 256LL)) != 0 )
    v9 = *(_DWORD *)(v8 + 56);
  else
    v9 = 0;
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v29);
  EtwTraceSmoothRotationStart(v7, v26, v9);
  DrvLogDiagDisplayChange(0LL, 8LL);
  v10 = IsExtendTopology();
  v11 = IsCurrentDesktopComposed();
  v27 = v11;
  if ( v11 && !v10 )
  {
    v15 = (void *)ReferenceDwmApiPort(v13, v12, v14);
    DwmAsyncNotifyRotationModeChange(v15);
    if ( gdwInAtomicOperation )
    {
      v16 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    v19 = UserReferenceDwmApiPort(v16, gdwInAtomicOperation, v17, v18);
    UserSessionSwitchLeaveCrit(v20);
    DwmSyncFlushAndWaitForBatch(v19);
    EnterCrit(0LL, 1LL);
    v11 = v27;
  }
  v28 = xxxUserSetDisplayConfig(1LL, a2, 672LL, v11 != 0 ? 24 : 8, 0LL, 0, 0LL, 0LL, 0LL, a4);
  if ( v27 && !v10 )
  {
    v24 = (void *)ReferenceDwmApiPort(v22, v21, v23);
    DwmAsyncNotifyRotationModeChange(v24);
  }
  EtwTraceSmoothRotationStop(v7, v26);
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
  {
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v31 = v29;
    v34 = &v26;
    v37 = &v27;
    v40 = &v28;
    v29[0] = v7;
    v32 = 4;
    v35 = 4;
    v38 = 4;
    v41 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E6B15, 0LL, 0LL, 6u, &pData);
  }
  return v28;
}
