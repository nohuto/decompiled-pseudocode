/*
 * XREFs of ?RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18000B710
 * Callers:
 *     ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18000B764 (-RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000EA30 (-RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpPowerBoostArmTimedBoostTimer(unsigned __int64 a1, struct _RM_POWERBOOST_CONTEXT *a2)
{
  unsigned __int64 v2; // rax
  int v3; // r8d
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a2 + 6);
  v3 = *((_DWORD *)a2 + 16);
  if ( a1 >= v2 )
  {
    *((_DWORD *)a2 + 16) = v3 & 0xFFFFFFF7;
  }
  else
  {
    *((_DWORD *)a2 + 16) = v3 | 8;
    v4 = -10000LL * (unsigned int)(v2 - a1);
    TpSetTimer(*((_QWORD *)a2 + 7), &v4, 0LL, 0LL);
  }
}
