/*
 * XREFs of ?SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180128DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180127CE8 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 */

__int64 __fastcall PhoneCallAudio::SetRoutingPolicy(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  v3 = PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint(a1 - 8, a2);
  if ( v3 < 0 )
    return (unsigned int)v3;
  return v2;
}
