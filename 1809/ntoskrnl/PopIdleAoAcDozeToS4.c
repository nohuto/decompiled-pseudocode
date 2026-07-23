/*
 * XREFs of PopIdleAoAcDozeToS4 @ 0x140878870
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x140004E80 (PopDeepSleepClearDisengageReason.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopExecutePowerAction @ 0x1406DF390 (PopExecutePowerAction.c)
 *     PopTraceSystemIdleS0LowPowerDoze @ 0x1408767A0 (PopTraceSystemIdleS0LowPowerDoze.c)
 */

__int64 PopIdleAoAcDozeToS4()
{
  __int64 v1; // [rsp+30h] [rbp-30h] BYREF
  int v2; // [rsp+38h] [rbp-28h]
  _QWORD v3[4]; // [rsp+40h] [rbp-20h] BYREF

  PopAcquirePolicyLock();
  PopTraceSystemIdleS0LowPowerDoze();
  dword_1404186F0 = 0;
  memset(v3, 0, 24);
  if ( dword_140418708 == 1 )
    goto LABEL_10;
  if ( dword_140418708 != 2 )
  {
    if ( dword_140418708 == 3 )
    {
      LODWORD(v3[0]) = 13;
      goto LABEL_11;
    }
    if ( dword_140418708 == 4 )
    {
      LODWORD(v3[0]) = 14;
      goto LABEL_11;
    }
LABEL_10:
    LODWORD(v3[0]) = 6;
    goto LABEL_11;
  }
  LODWORD(v3[0]) = 11;
  if ( qword_1404187F8
    && MEMORY[0xFFFFF78000000008] - qword_1404187F8 > 10000000
                                                    * (unsigned __int64)(unsigned int)PopSmartUserPresenceCheckTimeout )
  {
    LODWORD(v3[0]) = 12;
  }
LABEL_11:
  HIDWORD(v3[0]) = 128;
  v2 = 0;
  v1 = 0x8000002400000003uLL;
  PopExecutePowerAction((__int64)v3, 0, &v1, 5, 1u);
  PopReleasePolicyLock();
  _InterlockedAnd(&dword_14041870C, 0);
  return PopDeepSleepClearDisengageReason(4u);
}
