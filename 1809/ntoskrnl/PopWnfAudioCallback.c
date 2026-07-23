/*
 * XREFs of PopWnfAudioCallback @ 0x1406DC870
 * Callers:
 *     <none>
 * Callees:
 *     PopGetDozeTimerSource @ 0x14013FA14 (PopGetDozeTimerSource.c)
 *     PopPowerRequestNotifyAudioStateChanged @ 0x140141FA0 (PopPowerRequestNotifyAudioStateChanged.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     ExQueryWnfStateData @ 0x1406C9520 (ExQueryWnfStateData.c)
 *     PopAudioAccountingCallback @ 0x1406DCAC8 (PopAudioAccountingCallback.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x140878A2C (PopUpdateSmartUserPresencePredictions.c)
 */

__int64 __fastcall PopWnfAudioCallback(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  unsigned int v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v6[8]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 8;
  v1 = ExQueryWnfStateData(a1, &v5, v6, &v4);
  if ( v1 >= 0 )
  {
    if ( v4 < 8 )
    {
      return 0;
    }
    else
    {
      PopAcquirePolicyLock();
      if ( (v6[0] & 2) != 0 )
      {
        byte_1404191CD = 1;
        qword_14043D498 = MEMORY[0xFFFFF78000000008];
        if ( (unsigned int)PopGetDozeTimerSource() == 2 )
          PopUpdateSmartUserPresencePredictions(0LL, 5LL);
      }
      else
      {
        byte_1404191CD = 0;
        PopAudioAccountingCallback(0LL);
      }
      LOBYTE(v2) = byte_1404191CD;
      PopPowerRequestNotifyAudioStateChanged(v2);
      PopReleasePolicyLock();
    }
  }
  return (unsigned int)v1;
}
