/*
 * XREFs of EtwpSetQpcDeltaTracking @ 0x1403303D0
 * Callers:
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpSetQpcDeltaTracking(__int64 a1)
{
  if ( (unsigned int)(*(_DWORD *)(a1 + 216) - 3) <= 1 )
    return 3221225659LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x8000000u);
  return 0LL;
}
