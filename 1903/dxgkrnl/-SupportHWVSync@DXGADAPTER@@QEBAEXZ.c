/*
 * XREFs of ?SupportHWVSync@DXGADAPTER@@QEBAEXZ @ 0x1C0006778
 * Callers:
 *     ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C0006684 (-QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z.c)
 *     ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0055EF8 (-GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00C85D0 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::SupportHWVSync(DXGADAPTER *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 319) )
    return *((_QWORD *)this + 70) != 0LL;
  return result;
}
