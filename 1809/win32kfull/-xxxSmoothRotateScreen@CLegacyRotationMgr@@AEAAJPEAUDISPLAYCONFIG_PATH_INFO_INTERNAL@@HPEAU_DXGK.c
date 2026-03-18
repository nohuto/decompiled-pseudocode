/*
 * XREFs of ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C1C84
 * Callers:
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01C15C4 (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C000246C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00024A0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     IsCurrentDesktopComposed @ 0x1C000D5F0 (IsCurrentDesktopComposed.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     ?ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C0126BA0 (-ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?IsExtendTopology@@YAHXZ @ 0x1C01C0E58 (-IsExtendTopology@@YAHXZ.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x1C0258C60 (DwmAsyncNotifyRotationModeChange.c)
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
  void *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  void *v23; // rax
  unsigned int v25; // [rsp+50h] [rbp-59h] BYREF
  int v26; // [rsp+58h] [rbp-51h] BYREF
  unsigned int v27; // [rsp+5Ch] [rbp-4Dh] BYREF
  _DWORD v28[4]; // [rsp+60h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-39h] BYREF
  _DWORD *v30; // [rsp+90h] [rbp-19h]
  int v31; // [rsp+98h] [rbp-11h]
  int v32; // [rsp+9Ch] [rbp-Dh]
  unsigned int *v33; // [rsp+A0h] [rbp-9h]
  int v34; // [rsp+A8h] [rbp-1h]
  int v35; // [rsp+ACh] [rbp+3h]
  int *v36; // [rsp+B0h] [rbp+7h]
  int v37; // [rsp+B8h] [rbp+Fh]
  int v38; // [rsp+BCh] [rbp+13h]
  unsigned int *v39; // [rsp+C0h] [rbp+17h]
  int v40; // [rsp+C8h] [rbp+1Fh]
  int v41; // [rsp+CCh] [rbp+23h]

  v4 = *((_DWORD *)a2 + 26);
  v25 = a3;
  v7 = ConvertDisplayConfigRotationToDMDO(v4);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v28, gRotationProcessLock);
  if ( grpdeskRitInput && (v8 = *(_QWORD *)(grpdeskRitInput + 256LL)) != 0 )
    v9 = *(_DWORD *)(v8 + 56);
  else
    v9 = 0;
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v28);
  EtwTraceSmoothRotationStart(v7, v25, v9);
  DrvLogDiagDisplayChange(0LL, 8LL);
  v10 = IsExtendTopology();
  v11 = IsCurrentDesktopComposed();
  v26 = v11;
  if ( v11 && !v10 )
  {
    v14 = (void *)ReferenceDwmApiPort(v13, v12);
    DwmAsyncNotifyRotationModeChange(v14);
    if ( gdwInAtomicOperation )
    {
      v15 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    v16 = UserReferenceDwmApiPort(v15);
    UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
    DwmSyncFlushAndWaitForBatch(v16);
    EnterCrit(0LL, 1LL);
    v11 = v26;
  }
  v27 = xxxUserSetDisplayConfig(1LL, a2, 672LL, v11 != 0 ? 24 : 8, 0LL, 0, 0LL, 0LL, 0LL, a4);
  if ( v26 && !v10 )
  {
    v23 = (void *)ReferenceDwmApiPort(v22, v21);
    DwmAsyncNotifyRotationModeChange(v23);
  }
  EtwTraceSmoothRotationStop(v7, v25);
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
  {
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v30 = v28;
    v33 = &v25;
    v36 = &v26;
    v39 = &v27;
    v28[0] = v7;
    v31 = 4;
    v34 = 4;
    v37 = 4;
    v40 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D460E, 0LL, 0LL, 6u, &pData);
  }
  return v27;
}
