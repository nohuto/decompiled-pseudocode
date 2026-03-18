/*
 * XREFs of PopIdleAoAcDozeToS4 @ 0x1408B64F0
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1400ED890 (PopDeepSleepClearDisengageReason.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopExecutePowerAction @ 0x140725658 (PopExecutePowerAction.c)
 *     PopTraceSystemIdleS0LowPowerDoze @ 0x1408B22D0 (PopTraceSystemIdleS0LowPowerDoze.c)
 */

__int64 PopIdleAoAcDozeToS4()
{
  __int64 v1; // [rsp+30h] [rbp-30h] BYREF
  int v2; // [rsp+38h] [rbp-28h]
  _DWORD v3[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v4; // [rsp+48h] [rbp-18h]

  PopAcquirePolicyLock();
  PopTraceSystemIdleS0LowPowerDoze();
  dword_140442F90 = 0;
  v4 = 0LL;
  if ( dword_140442FA8 == 1 )
    goto LABEL_10;
  if ( dword_140442FA8 != 2 )
  {
    if ( dword_140442FA8 == 3 )
    {
      v3[0] = 13;
      goto LABEL_11;
    }
    if ( dword_140442FA8 == 4 )
    {
      v3[0] = 14;
      goto LABEL_11;
    }
LABEL_10:
    v3[0] = 6;
    goto LABEL_11;
  }
  v3[0] = 11;
  if ( qword_140443098
    && MEMORY[0xFFFFF78000000008] - qword_140443098 > 10000000
                                                    * (unsigned __int64)(unsigned int)PopSmartUserPresenceCheckTimeout )
  {
    v3[0] = 12;
  }
LABEL_11:
  v2 = 0;
  v3[1] = 128;
  v1 = 0x8000002400000003uLL;
  PopExecutePowerAction((__int64)v3, 0, &v1, 5, 1u);
  PopReleasePolicyLock();
  _InterlockedAnd(&dword_140442FAC, 0);
  return PopDeepSleepClearDisengageReason(4u);
}
