/*
 * XREFs of ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18000B764
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x1800248E0 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z @ 0x18000B5F4 (-RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z.c)
 *     ?RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18000B710 (-RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18000B8A0 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18000B8C8 (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPowerBoostStartTimedBoost(struct _RM_SERVICE_GLOBALS *a1, unsigned int a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rbx
  __int64 v3; // rsi
  char *v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  bool v7; // zf
  int v9; // [rsp+38h] [rbp-9h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  int *v12; // [rsp+68h] [rbp+27h]
  int v13; // [rsp+70h] [rbp+2Fh]
  int v14; // [rsp+74h] [rbp+33h]
  char *v15; // [rsp+78h] [rbp+37h]
  int v16; // [rsp+80h] [rbp+3Fh]
  int v17; // [rsp+84h] [rbp+43h]

  v2 = RmSvcGlobals;
  v3 = a2;
  v4 = (char *)RmSvcGlobals + 104;
  RmpPowerBoostAcquireLockExclusive((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 104));
  if ( (*((_BYTE *)v2 + 2684) & 2) != 0 )
  {
    v9 = -1073741585;
  }
  else
  {
    if ( (v4[64] & 4) == 0 )
    {
      v9 = RmpSystemApplyAppLaunchPowerBoost(1);
      if ( v9 < 0 )
        goto LABEL_10;
      *((_DWORD *)v4 + 16) |= 4u;
    }
    RtlQueryUnbiasedInterruptTime(&v10);
    v5 = *((_QWORD *)v4 + 6);
    v6 = v10 / 0x2710;
    if ( v5 <= v10 / 0x2710 + v3 )
      v5 = v10 / 0x2710 + v3;
    v7 = (v4[64] & 8) == 0;
    *((_QWORD *)v4 + 6) = v5;
    if ( v7 )
      RmpPowerBoostArmTimedBoostTimer(v6, (struct _RM_POWERBOOST_CONTEXT *)v4);
    v9 = 0;
  }
LABEL_10:
  if ( hProvider > 4u )
  {
    v14 = 0;
    v17 = 0;
    v12 = &v9;
    v15 = v4 + 48;
    v13 = 4;
    v16 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180088983, 0LL, 0LL, 4u, &pData);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)v4);
  return (unsigned int)v9;
}
