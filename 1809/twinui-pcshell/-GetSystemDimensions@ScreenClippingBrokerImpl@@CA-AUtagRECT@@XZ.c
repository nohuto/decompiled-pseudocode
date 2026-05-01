/*
 * XREFs of ?GetSystemDimensions@ScreenClippingBrokerImpl@@CA?AUtagRECT@@XZ @ 0x18037BE9C
 * Callers:
 *     ?GetPrimaryMonitorRect@ScreenClippingBrokerImpl@@EEAAJPEAUtagRECT@@@Z @ 0x18037BBA0 (-GetPrimaryMonitorRect@ScreenClippingBrokerImpl@@EEAAJPEAUtagRECT@@@Z.c)
 *     ?TakeScreenShot@ScreenClippingBrokerImpl@@EEAAJPEAU_GUID@@E@Z @ 0x18037CF10 (-TakeScreenShot@ScreenClippingBrokerImpl@@EEAAJPEAU_GUID@@E@Z.c)
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
