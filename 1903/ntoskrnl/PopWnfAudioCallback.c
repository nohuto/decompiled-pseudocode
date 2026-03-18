/*
 * XREFs of PopWnfAudioCallback @ 0x14071E1F0
 * Callers:
 *     <none>
 * Callees:
 *     PopGetDozeTimerSource @ 0x140144444 (PopGetDozeTimerSource.c)
 *     PopPowerRequestNotifyAudioStateChanged @ 0x14015C974 (PopPowerRequestNotifyAudioStateChanged.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     ExQueryWnfStateData @ 0x1406E8D40 (ExQueryWnfStateData.c)
 *     PopAudioAccountingCallback @ 0x14071E454 (PopAudioAccountingCallback.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1408B66AC (PopUpdateSmartUserPresencePredictions.c)
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
        byte_140443B0D = 1;
        qword_140467E98 = MEMORY[0xFFFFF78000000008];
        if ( (unsigned int)PopGetDozeTimerSource() == 2 )
          PopUpdateSmartUserPresencePredictions(0LL, 5LL);
      }
      else
      {
        byte_140443B0D = 0;
        PopAudioAccountingCallback(0LL);
      }
      LOBYTE(v2) = byte_140443B0D;
      PopPowerRequestNotifyAudioStateChanged(v2);
      PopReleasePolicyLock();
    }
  }
  return (unsigned int)v1;
}
