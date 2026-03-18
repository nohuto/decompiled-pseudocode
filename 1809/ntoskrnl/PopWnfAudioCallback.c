/*
 * XREFs of PopWnfAudioCallback @ 0x1406DB5F0
 * Callers:
 *     <none>
 * Callees:
 *     PopGetDozeTimerSource @ 0x14013F8F4 (PopGetDozeTimerSource.c)
 *     PopPowerRequestNotifyAudioStateChanged @ 0x140141E80 (PopPowerRequestNotifyAudioStateChanged.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     ExQueryWnfStateData @ 0x1406C82A0 (ExQueryWnfStateData.c)
 *     PopAudioAccountingCallback @ 0x1406DB848 (PopAudioAccountingCallback.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1408777EC (PopUpdateSmartUserPresencePredictions.c)
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
        byte_14041814D = 1;
        qword_14043C3D8 = MEMORY[0xFFFFF78000000008];
        if ( (unsigned int)PopGetDozeTimerSource() == 2 )
          PopUpdateSmartUserPresencePredictions(0LL, 5LL);
      }
      else
      {
        byte_14041814D = 0;
        PopAudioAccountingCallback(0LL);
      }
      LOBYTE(v2) = byte_14041814D;
      PopPowerRequestNotifyAudioStateChanged(v2);
      PopReleasePolicyLock();
    }
  }
  return (unsigned int)v1;
}
