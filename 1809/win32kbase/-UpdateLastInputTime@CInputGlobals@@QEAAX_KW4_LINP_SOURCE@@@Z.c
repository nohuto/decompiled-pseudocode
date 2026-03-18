/*
 * XREFs of ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0037220
 * Callers:
 *     PowerConnectionEvent @ 0x1C0049038 (PowerConnectionEvent.c)
 *     UserPowerInfoCallout @ 0x1C0095E9C (UserPowerInfoCallout.c)
 *     SetProtocolType @ 0x1C0098390 (SetProtocolType.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A3044 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C003628C (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 */

void __fastcall CInputGlobals::UpdateLastInputTime(__int64 a1, __int64 a2, int a3)
{
  RIMLockExclusive(a1);
  CInputGlobals::_UpdateLastInputTime(a1, a2, a3);
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
