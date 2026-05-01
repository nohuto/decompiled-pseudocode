/*
 * XREFs of ?SelectObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@Z$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@1@PEAUHDC__@@PEAX@Z @ 0x180401BEC
 * Callers:
 *     ?GrabScreenShot@ScreenClippingBrokerImpl@@CAJAEBUtagRECT@@AEAV?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@_N@Z @ 0x180401444 (-GrabScreenShot@ScreenClippingBrokerImpl@@CAJAEBUtagRECT@@AEAV-$ComPtr@UIWICBitmapSource@@@WRL@M.c)
 *     _lambda_c95b2e5eab2cd436d4d0117f4debe67d_::operator() @ 0x180413600 (_lambda_c95b2e5eab2cd436d4d0117f4debe67d_--operator().c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall wil::SelectObject(_OWORD *a1, HDC a2, void *a3)
{
  _OWORD *result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h]

  *(_QWORD *)&v6 = SelectObject(a2, a3);
  result = a1;
  *((_QWORD *)&v6 + 1) = a2;
  *a1 = v6;
  return result;
}
