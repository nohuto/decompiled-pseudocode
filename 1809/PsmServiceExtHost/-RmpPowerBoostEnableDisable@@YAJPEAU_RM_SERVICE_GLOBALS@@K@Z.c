/*
 * XREFs of ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180003F6C
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001041C (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmpSystemApplyInswapPowerBoost@@YAJK@Z @ 0x18000417C (-RmpSystemApplyInswapPowerBoost@@YAJK@Z.c)
 *     ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x1800041D4 (-RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18000B8A0 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18000B8C8 (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPowerBoostEnableDisable(struct _RM_SERVICE_GLOBALS *a1, unsigned int a2)
{
  char *v2; // rbx
  __int64 v5; // rax
  int v6; // eax
  struct _TP_TIMER *v7; // rcx
  int v8; // ecx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  bool v12; // [rsp+30h] [rbp-69h] BYREF
  char v13; // [rsp+31h] [rbp-68h] BYREF
  char v14; // [rsp+32h] [rbp-67h] BYREF
  int v15; // [rsp+34h] [rbp-65h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  int *v18; // [rsp+60h] [rbp-39h]
  int v19; // [rsp+68h] [rbp-31h]
  int v20; // [rsp+6Ch] [rbp-2Dh]
  bool *v21; // [rsp+70h] [rbp-29h]
  int v22; // [rsp+78h] [rbp-21h]
  int v23; // [rsp+7Ch] [rbp-1Dh]
  char *v24; // [rsp+80h] [rbp-19h]
  int v25; // [rsp+88h] [rbp-11h]
  int v26; // [rsp+8Ch] [rbp-Dh]
  char *v27; // [rsp+90h] [rbp-9h]
  int v28; // [rsp+98h] [rbp-1h]
  int v29; // [rsp+9Ch] [rbp+3h]
  char *v30; // [rsp+A0h] [rbp+7h]
  int v31; // [rsp+A8h] [rbp+Fh]
  int v32; // [rsp+ACh] [rbp+13h]
  char *v33; // [rsp+B0h] [rbp+17h]
  int v34; // [rsp+B8h] [rbp+1Fh]
  int v35; // [rsp+BCh] [rbp+23h]
  char *v36; // [rsp+C0h] [rbp+27h]
  int v37; // [rsp+C8h] [rbp+2Fh]
  int v38; // [rsp+CCh] [rbp+33h]

  v2 = (char *)a1 + 104;
  RmpPowerBoostAcquireLockExclusive((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 104));
  if ( !a2 )
  {
    v5 = *((_QWORD *)v2 + 2);
    if ( v5 == 1 && (v2[64] & 2) != 0 )
    {
      v6 = RmpSystemApplyInswapPowerBoost(0);
      v7 = (struct _TP_TIMER *)*((_QWORD *)v2 + 3);
      *((_DWORD *)v2 + 16) &= ~2u;
      *((_QWORD *)v2 + 2) = 0LL;
      v15 = v6;
      SetThreadpoolTimer(v7, 0LL, 0, 0);
      *((_DWORD *)v2 + 16) &= ~1u;
    }
    else
    {
      *((_QWORD *)v2 + 2) = v5 - 1;
    }
    goto LABEL_5;
  }
  if ( (*((_BYTE *)a1 + 2684) & 2) != 0 )
  {
    v15 = -1073741585;
  }
  else
  {
    if ( (v2[64] & 1) != 0 )
    {
      RtlQueryUnbiasedInterruptTime(&v16);
      v11 = v16 / 0x2710;
      ++*((_QWORD *)v2 + 2);
      *((_QWORD *)v2 + 1) = v11;
      goto LABEL_5;
    }
    RtlQueryUnbiasedInterruptTime(&v16);
    v10 = v16 / 0x2710;
    *(_QWORD *)v2 = v16 / 0x2710;
    *((_QWORD *)v2 + 1) = v10;
    v15 = RmpSystemApplyInswapPowerBoost(a2);
    if ( v15 >= 0 )
    {
      *((_DWORD *)v2 + 16) |= 2u;
      *((_QWORD *)v2 + 2) = 1LL;
      RmpPowerBoostArmWatchdog((struct _RM_POWERBOOST_CONTEXT *)v2);
LABEL_5:
      v15 = 0;
    }
  }
  if ( hProvider > 4u )
  {
    v20 = 0;
    v18 = &v15;
    v25 = 8;
    v21 = &v12;
    v28 = 8;
    v12 = a2 != 0;
    v27 = v2 + 8;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v30 = v2 + 16;
    v31 = 8;
    v8 = *((_DWORD *)v2 + 16) >> 1;
    v13 = *((_DWORD *)v2 + 16) & 1;
    v38 = 0;
    v33 = &v13;
    v36 = &v14;
    v19 = 4;
    v22 = 1;
    v24 = v2;
    v34 = 1;
    v14 = v8 & 1;
    v37 = 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180088880, 0LL, 0LL, 9u, &pData);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)v2);
  return (unsigned int)v15;
}
