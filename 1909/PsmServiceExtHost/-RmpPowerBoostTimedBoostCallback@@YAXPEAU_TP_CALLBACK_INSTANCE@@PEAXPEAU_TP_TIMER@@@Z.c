/*
 * XREFs of ?RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18002F4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18001885C (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180039A8C (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180039AFC (-RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z @ 0x180039B50 (-RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall RmpPowerBoostTimedBoostCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  int v4; // eax
  bool v5; // al
  DWORD v6; // ebx
  char v7; // [rsp+30h] [rbp-D0h] BYREF
  bool v8; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-C8h] BYREF
  char v10[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v11; // [rsp+D0h] [rbp-30h] BYREF
  char *v12; // [rsp+F0h] [rbp-10h]
  int v13; // [rsp+F8h] [rbp-8h]
  int v14; // [rsp+FCh] [rbp-4h]
  bool *v15; // [rsp+100h] [rbp+0h]
  int v16; // [rsp+108h] [rbp+8h]
  int v17; // [rsp+10Ch] [rbp+Ch]
  char *v18; // [rsp+110h] [rbp+10h]
  int v19; // [rsp+118h] [rbp+18h]
  int v20; // [rsp+11Ch] [rbp+1Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v10);
  v7 = 0;
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180096663, 0LL, 0LL, 2u, &pData);
  RmpPowerBoostAcquireLockExclusive((struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
  if ( (a2[2616] & 1) == 0 && (a2[168] & 4) != 0 )
  {
    RtlQueryUnbiasedInterruptTime(&v9);
    RmpPowerBoostArmTimedBoostTimer(v9 / 0x2710, (struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
    v4 = *((_DWORD *)a2 + 42);
    if ( (v4 & 8) == 0 )
    {
      v7 = 1;
      *((_DWORD *)a2 + 42) = v4 & 0xFFFFFFFB;
      RmpSystemApplyAppLaunchPowerBoost(0);
    }
  }
  if ( dword_1800AB2C0 > 4u )
  {
    v14 = 0;
    v17 = 0;
    v12 = &v7;
    v5 = (*((_DWORD *)a2 + 42) & 4) != 0;
    v13 = 1;
    v20 = 0;
    v8 = v5;
    v15 = &v8;
    v18 = a2 + 152;
    v16 = 1;
    v19 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800966F5, 0LL, 0LL, 5u, &v11);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v6, 0LL);
  }
}
