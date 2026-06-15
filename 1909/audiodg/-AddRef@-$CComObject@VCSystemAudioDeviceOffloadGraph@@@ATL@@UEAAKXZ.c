/*
 * XREFs of ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ @ 0x140033640
 * Callers:
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ @ 0x1400188F0 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ @ 0x140018900 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBCI@EAAKXZ @ 0x140018910 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBCI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBDA@EAAKXZ @ 0x140018920 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBDA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHA@EAAKXZ @ 0x140018930 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHI@EAAKXZ @ 0x140018940 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAKXZ @ 0x140018950 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBIA@EAAKXZ @ 0x140018960 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBIA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceOffloadGraph>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 392), a2);
}
