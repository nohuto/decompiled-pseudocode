/*
 * XREFs of ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180001654
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800182C0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmpSystemApplyInswapPowerBoost@@YAJK@Z @ 0x180001838 (-RmpSystemApplyInswapPowerBoost@@YAJK@Z.c)
 *     ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180001890 (-RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18001885C (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180039A8C (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPowerBoostEnableDisable(struct _RM_SERVICE_GLOBALS *a1, unsigned int a2)
{
  char *v2; // rbx
  __int64 v5; // rax
  struct _TP_TIMER *v6; // rcx
  int v7; // ecx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  bool v11; // [rsp+30h] [rbp-69h] BYREF
  char v12; // [rsp+31h] [rbp-68h] BYREF
  char v13; // [rsp+32h] [rbp-67h] BYREF
  int v14; // [rsp+34h] [rbp-65h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  int *v17; // [rsp+60h] [rbp-39h]
  int v18; // [rsp+68h] [rbp-31h]
  int v19; // [rsp+6Ch] [rbp-2Dh]
  bool *v20; // [rsp+70h] [rbp-29h]
  int v21; // [rsp+78h] [rbp-21h]
  int v22; // [rsp+7Ch] [rbp-1Dh]
  char *v23; // [rsp+80h] [rbp-19h]
  int v24; // [rsp+88h] [rbp-11h]
  int v25; // [rsp+8Ch] [rbp-Dh]
  char *v26; // [rsp+90h] [rbp-9h]
  int v27; // [rsp+98h] [rbp-1h]
  int v28; // [rsp+9Ch] [rbp+3h]
  char *v29; // [rsp+A0h] [rbp+7h]
  int v30; // [rsp+A8h] [rbp+Fh]
  int v31; // [rsp+ACh] [rbp+13h]
  char *v32; // [rsp+B0h] [rbp+17h]
  int v33; // [rsp+B8h] [rbp+1Fh]
  int v34; // [rsp+BCh] [rbp+23h]
  char *v35; // [rsp+C0h] [rbp+27h]
  int v36; // [rsp+C8h] [rbp+2Fh]
  int v37; // [rsp+CCh] [rbp+33h]

  v2 = (char *)a1 + 104;
  RmpPowerBoostAcquireLockExclusive((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 104));
  if ( !a2 )
  {
    v5 = *((_QWORD *)v2 + 2);
    if ( v5 == 1 && (v2[64] & 2) != 0 )
    {
      RmpSystemApplyInswapPowerBoost(0);
      v6 = (struct _TP_TIMER *)*((_QWORD *)v2 + 3);
      *((_DWORD *)v2 + 16) &= ~2u;
      *((_QWORD *)v2 + 2) = 0LL;
      SetThreadpoolTimer(v6, 0LL, 0, 0);
      *((_DWORD *)v2 + 16) &= ~1u;
    }
    else
    {
      *((_QWORD *)v2 + 2) = v5 - 1;
    }
    goto LABEL_5;
  }
  if ( (*((_BYTE *)a1 + 2616) & 1) != 0 )
  {
    v14 = -1073741585;
  }
  else
  {
    if ( (v2[64] & 1) != 0 )
    {
      RtlQueryUnbiasedInterruptTime(&v15);
      v10 = v15 / 0x2710;
      ++*((_QWORD *)v2 + 2);
      *((_QWORD *)v2 + 1) = v10;
      goto LABEL_5;
    }
    RtlQueryUnbiasedInterruptTime(&v15);
    v9 = v15 / 0x2710;
    *(_QWORD *)v2 = v15 / 0x2710;
    *((_QWORD *)v2 + 1) = v9;
    v14 = RmpSystemApplyInswapPowerBoost(a2);
    if ( v14 >= 0 )
    {
      *((_DWORD *)v2 + 16) |= 2u;
      *((_QWORD *)v2 + 2) = 1LL;
      RmpPowerBoostArmWatchdog((struct _RM_POWERBOOST_CONTEXT *)v2);
LABEL_5:
      v14 = 0;
    }
  }
  if ( dword_1800AB2C0 > 4u )
  {
    v19 = 0;
    v17 = &v14;
    v24 = 8;
    v20 = &v11;
    v27 = 8;
    v11 = a2 != 0;
    v26 = v2 + 8;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v29 = v2 + 16;
    v30 = 8;
    v7 = *((_DWORD *)v2 + 16) >> 1;
    v12 = *((_DWORD *)v2 + 16) & 1;
    v37 = 0;
    v32 = &v12;
    v35 = &v13;
    v18 = 4;
    v21 = 1;
    v23 = v2;
    v33 = 1;
    v13 = v7 & 1;
    v36 = 1;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180096588, 0LL, 0LL, 9u, &pData);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)v2);
  return (unsigned int)v14;
}
