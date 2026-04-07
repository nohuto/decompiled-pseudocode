/*
 * XREFs of ?InitializeFromExistingResource@CVisual@@MEAAJI@Z @ 0x18000F7D0
 * Callers:
 *     ?WrapExistingResource@CVisual@@SAJIPEAPEAV1@@Z @ 0x18000D184 (-WrapExistingResource@CVisual@@SAJIPEAPEAV1@@Z.c)
 *     ?WrapExistingResource@UdwmTopVisual@@SAJIPEAPEAV1@@Z @ 0x18000F65C (-WrapExistingResource@UdwmTopVisual@@SAJIPEAPEAV1@@Z.c)
 *     ?WrapExistingResource@UdwmBottomVisual@@SAJIPEAPEAV1@@Z @ 0x18000F714 (-WrapExistingResource@UdwmBottomVisual@@SAJIPEAPEAV1@@Z.c)
 * Callees:
 *     ??$CreateProxyFromHandle@VCVisualProxy@@@CCompositor@@IEAAJIPEAPEAVCVisualProxy@@@Z @ 0x18002454C (--$CreateProxyFromHandle@VCVisualProxy@@@CCompositor@@IEAAJIPEAPEAVCVisualProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisual::InitializeFromExistingResource(CVisual *this, __int64 a2)
{
  int ProxyFrom; // eax
  unsigned int v3; // ebx
  void *v5; // [rsp+28h] [rbp-10h]

  ProxyFrom = CCompositor::CreateProxyFromHandle<CVisualProxy>(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                a2,
                (char *)this + 16);
  v3 = ProxyFrom;
  if ( ProxyFrom < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ProxyFrom, 0x57u, v5);
  return v3;
}
