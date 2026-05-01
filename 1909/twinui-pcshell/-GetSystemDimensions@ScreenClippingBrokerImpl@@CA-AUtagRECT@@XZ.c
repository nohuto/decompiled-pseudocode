/*
 * XREFs of ?GetSystemDimensions@ScreenClippingBrokerImpl@@CA?AUtagRECT@@XZ @ 0x18040131C
 * Callers:
 *     ?GetPrimaryMonitorRect@ScreenClippingBrokerImpl@@EEAAJPEAUtagRECT@@@Z @ 0x180401030 (-GetPrimaryMonitorRect@ScreenClippingBrokerImpl@@EEAAJPEAUtagRECT@@@Z.c)
 *     ?TakeScreenShot@ScreenClippingBrokerImpl@@EEAAJPEAU_GUID@@E@Z @ 0x1804024F0 (-TakeScreenShot@ScreenClippingBrokerImpl@@EEAAJPEAU_GUID@@E@Z.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall ScreenClippingBrokerImpl::GetSystemDimensions(struct tagRECT *__return_ptr retstr)
{
  retstr->left = GetSystemMetrics(76);
  retstr->top = GetSystemMetrics(77);
  retstr->right = retstr->left + GetSystemMetrics(78);
  retstr->bottom = retstr->top + GetSystemMetrics(79);
  return retstr;
}
