/*
 * XREFs of ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A09AC
 * Callers:
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01A032C (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0004B8C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C00BC848 (-ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     IsCurrentDesktopComposed @ 0x1C00C2030 (IsCurrentDesktopComposed.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?IsExtendTopology@@YAHXZ @ 0x1C019FBF0 (-IsExtendTopology@@YAHXZ.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x1C02412BC (DwmAsyncNotifyRotationModeChange.c)
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
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  void *v27; // rax
  const GUID *v28; // r8
  const GUID *v29; // r9
  unsigned int v31; // [rsp+50h] [rbp-59h] BYREF
  int v32; // [rsp+58h] [rbp-51h] BYREF
  unsigned int v33; // [rsp+5Ch] [rbp-4Dh] BYREF
  _DWORD v34[4]; // [rsp+60h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-39h] BYREF
  _DWORD *v36; // [rsp+90h] [rbp-19h]
  int v37; // [rsp+98h] [rbp-11h]
  int v38; // [rsp+9Ch] [rbp-Dh]
  unsigned int *v39; // [rsp+A0h] [rbp-9h]
  int v40; // [rsp+A8h] [rbp-1h]
  int v41; // [rsp+ACh] [rbp+3h]
  int *v42; // [rsp+B0h] [rbp+7h]
  int v43; // [rsp+B8h] [rbp+Fh]
  int v44; // [rsp+BCh] [rbp+13h]
  unsigned int *v45; // [rsp+C0h] [rbp+17h]
  int v46; // [rsp+C8h] [rbp+1Fh]
  int v47; // [rsp+CCh] [rbp+23h]

  v4 = *((_DWORD *)a2 + 26);
  v31 = a3;
  v7 = ConvertDisplayConfigRotationToDMDO(v4);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v34, gRotationProcessLock);
  if ( grpdeskRitInput && (v8 = *(_QWORD *)(grpdeskRitInput + 256LL)) != 0 )
    v9 = *(_DWORD *)(v8 + 56);
  else
    v9 = 0;
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v34);
  EtwTraceSmoothRotationStart(v7, v31, v9);
  DrvLogDiagDisplayChange(0LL, 8LL);
  v10 = IsExtendTopology();
  v11 = IsCurrentDesktopComposed();
  v32 = v11;
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
    UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
    DwmSyncFlushAndWaitForBatch(v19);
    EnterCrit(0LL, 1LL);
    v11 = v32;
  }
  v33 = xxxUserSetDisplayConfig(1LL, a2, 672LL, v11 != 0 ? 24 : 8, 0LL, 0, 0LL, 0LL, 0LL, a4);
  if ( v32 && !v10 )
  {
    v27 = (void *)ReferenceDwmApiPort(v25, v24, v26);
    DwmAsyncNotifyRotationModeChange(v27);
  }
  EtwTraceSmoothRotationStop(v7, v31);
  if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
  {
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v47 = 0;
    v36 = v34;
    v39 = &v31;
    v42 = &v32;
    v45 = &v33;
    v34[0] = v7;
    v37 = 4;
    v40 = 4;
    v43 = 4;
    v46 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E2F14, v28, v29, 6u, &pData);
  }
  return v33;
}
