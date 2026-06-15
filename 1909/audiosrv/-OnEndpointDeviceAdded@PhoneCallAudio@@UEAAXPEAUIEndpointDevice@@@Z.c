/*
 * XREFs of ?OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x1801281D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x180058B40 (-InitPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?RefreshPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x1801286A8 (-RefreshPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 */

void __fastcall PhoneCallAudio::OnEndpointDeviceAdded(PhoneCallAudio *this, struct IEndpointDevice *a2)
{
  if ( (int)PhoneCallAudio::InitPhoneTopology(this) >= 0 )
    PhoneCallAudio::RefreshPhoneTopology(this);
}
