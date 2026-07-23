/*
 * XREFs of KiInitializeForceIdle @ 0x14072AEF8
 * Callers:
 *     KeInitializeTimerTable @ 0x14072ADB8 (KeInitializeTimerTable.c)
 * Callees:
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 */

__int64 __fastcall KiInitializeForceIdle(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a1 + 36) )
  {
    KiForceIdleLock = 0LL;
    KeInitializeDpc((PRKDPC)&KiForceIdleStartDpc, (PKDEFERRED_ROUTINE)KiForceIdleStartDpcRoutine, 0LL);
    KeInitializeDpc(&KiForceIdleStopDpc, (PKDEFERRED_ROUTINE)KiForceIdleStopDpcRoutine, 0LL);
    BYTE1(KiForceIdleStartDpc) = 3;
    KiForceIdleStopDpc.Importance = 3;
    if ( !KiSerializeTimerExpiration )
      KiForceIdleDisabled = 1;
  }
  KeInitializeDpc((PRKDPC)(a1 + 24344), (PKDEFERRED_ROUTINE)KiForceIdleParkUnparkDpcRoutine, 0LL);
  *(_BYTE *)(a1 + 24345) = 3;
  result = *(_QWORD *)(a1 + 24400);
  if ( !result )
  {
    result = 1280LL;
    *(_WORD *)(a1 + 24346) = *(_DWORD *)(a1 + 36) + 1280;
  }
  return result;
}
