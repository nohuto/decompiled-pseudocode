/*
 * XREFs of ?AddRef@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140019090
 * Callers:
 *     ?AddRef@?$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ @ 0x14001DA10 (-AddRef@-$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ @ 0x14001DA20 (-AddRef@-$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CAudioDeviceGraph>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 24), a2);
}
