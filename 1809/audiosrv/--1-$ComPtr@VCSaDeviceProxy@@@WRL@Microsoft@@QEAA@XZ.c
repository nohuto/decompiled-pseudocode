/*
 * XREFs of ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E1FEC
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x18003F3E0 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x18000E0F0 (-Release@CSaDeviceProxy@@UEAAKXZ.c)
 */

CSaDeviceProxy *__fastcall Microsoft::WRL::ComPtr<CSaDeviceProxy>::~ComPtr<CSaDeviceProxy>(CSaDeviceProxy **a1)
{
  CSaDeviceProxy *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CSaDeviceProxy *)CSaDeviceProxy::Release(result);
  }
  return result;
}
