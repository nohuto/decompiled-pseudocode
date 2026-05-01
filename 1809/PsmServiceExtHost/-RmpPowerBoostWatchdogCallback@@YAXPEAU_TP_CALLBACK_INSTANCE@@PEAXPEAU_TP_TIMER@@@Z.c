/*
 * XREFs of ?RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800658D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemApplyInswapPowerBoost@@YAJK@Z @ 0x18000417C (-RmpSystemApplyInswapPowerBoost@@YAJK@Z.c)
 *     ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x1800041D4 (-RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18000B8A0 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18000B8C8 (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall RmpPowerBoostWatchdogCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  char v4; // di
  struct _RM_POWERBOOST_CONTEXT *v5; // rbx
  int v6; // esi
  int v7; // edx
  int v8; // edi
  DWORD v9; // ebx
  char v10; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  char *v14; // [rsp+F0h] [rbp-10h]
  int v15; // [rsp+F8h] [rbp-8h]
  int v16; // [rsp+FCh] [rbp-4h]
  unsigned __int64 *v17; // [rsp+100h] [rbp+0h]
  int v18; // [rsp+108h] [rbp+8h]
  int v19; // [rsp+10Ch] [rbp+Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
  v4 = 0;
  v5 = (struct _RM_POWERBOOST_CONTEXT *)(a2 + 104);
  v6 = 0;
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800889C3, 0LL, 0LL, 2u, &pData);
  RmpPowerBoostAcquireLockExclusive((struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
  v7 = *((_DWORD *)a2 + 42);
  if ( (a2[2684] & 2) == 0 && (v7 & 2) != 0 )
  {
    RmpPowerBoostArmWatchdog(v5);
    v8 = *((_DWORD *)a2 + 42);
    if ( (v8 & 1) == 0 )
    {
      *((_DWORD *)a2 + 42) = v8 & 0xFFFFFFFD;
      RmpSystemApplyInswapPowerBoost(0);
      v8 = *((_DWORD *)a2 + 42);
    }
    v4 = v8 & 1;
    RtlQueryUnbiasedInterruptTime(&v11);
    v6 = v11 / 0x2710 - *(_DWORD *)v5;
  }
  else
  {
    *((_DWORD *)a2 + 42) = v7 & 0xFFFFFFFE;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v16 = 0;
    v14 = &v10;
    v19 = 0;
    v17 = &v11;
    v10 = v4 ^ 1;
    v15 = 1;
    LODWORD(v11) = v6;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180088911, 0LL, 0LL, 4u, &pData);
  }
  RmpPowerBoostReleaseLockExclusive(v5);
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v9, 0LL);
  }
}
