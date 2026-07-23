/*
 * XREFs of EtwpSetQpcDeltaTracking @ 0x140312910
 * Callers:
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
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
