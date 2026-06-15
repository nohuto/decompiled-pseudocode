/*
 * XREFs of ?OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x180128610
 * Callers:
 *     <none>
 * Callees:
 *     ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x1800521E4 (-InitPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?RefreshPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x180128AE8 (-RefreshPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 */

void __fastcall PhoneCallAudio::OnEndpointDeviceAdded(PhoneCallAudio *this, struct IEndpointDevice *a2)
{
  if ( (int)PhoneCallAudio::InitPhoneTopology(this) >= 0 )
    PhoneCallAudio::RefreshPhoneTopology(this);
}
