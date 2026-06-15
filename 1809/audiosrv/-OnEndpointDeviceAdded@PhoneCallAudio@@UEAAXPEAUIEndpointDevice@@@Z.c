/*
 * XREFs of ?OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x18011BBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x180058C18 (-InitPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?RefreshPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x18011C094 (-RefreshPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 */

void __fastcall PhoneCallAudio::OnEndpointDeviceAdded(PhoneCallAudio *this, struct IEndpointDevice *a2)
{
  if ( (int)PhoneCallAudio::InitPhoneTopology(this) >= 0 )
    PhoneCallAudio::RefreshPhoneTopology(this);
}
