/*
 * XREFs of ?RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800729C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemApplyInswapPowerBoost@@YAJK@Z @ 0x180001838 (-RmpSystemApplyInswapPowerBoost@@YAJK@Z.c)
 *     ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180001890 (-RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18001885C (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180039A8C (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall RmpPowerBoostWatchdogCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  char v4; // di
  int v5; // esi
  int v6; // edx
  int v7; // edi
  DWORD v8; // ebx
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v11[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  char *v13; // [rsp+F0h] [rbp-10h]
  int v14; // [rsp+F8h] [rbp-8h]
  int v15; // [rsp+FCh] [rbp-4h]
  unsigned __int64 *v16; // [rsp+100h] [rbp+0h]
  int v17; // [rsp+108h] [rbp+8h]
  int v18; // [rsp+10Ch] [rbp+Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  v4 = 0;
  v5 = 0;
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800966CB, 0LL, 0LL, 2u, &pData);
  RmpPowerBoostAcquireLockExclusive((struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
  v6 = *((_DWORD *)a2 + 42);
  if ( (a2[2616] & 1) == 0 && (v6 & 2) != 0 )
  {
    RmpPowerBoostArmWatchdog((struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
    v7 = *((_DWORD *)a2 + 42);
    if ( (v7 & 1) == 0 )
    {
      *((_DWORD *)a2 + 42) = v7 & 0xFFFFFFFD;
      RmpSystemApplyInswapPowerBoost(0);
      v7 = *((_DWORD *)a2 + 42);
    }
    v4 = v7 & 1;
    RtlQueryUnbiasedInterruptTime(&v10);
    v5 = v10 / 0x2710 - *((_DWORD *)a2 + 26);
  }
  else
  {
    *((_DWORD *)a2 + 42) = v6 & 0xFFFFFFFE;
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v15 = 0;
    v13 = &v9;
    v18 = 0;
    v16 = &v10;
    v9 = v4 ^ 1;
    v14 = 1;
    LODWORD(v10) = v5;
    v17 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180096619, 0LL, 0LL, 4u, &pData);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v8, 0LL);
  }
}
