/*
 * XREFs of ?Initialize@EdgeGestureMetrics@@SAXXZ @ 0x180102CA4
 * Callers:
 *     ?Create@EdgyProcessor@@SAJPEAPEAV1@@Z @ 0x180100A14 (-Create@EdgyProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?GetHitTestSpanHimetric@EdgeGestureMetrics@@SA?AUD2D_VECTOR_2F@@XZ @ 0x180102C78 (-GetHitTestSpanHimetric@EdgeGestureMetrics@@SA-AUD2D_VECTOR_2F@@XZ.c)
 *     ?ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ @ 0x18010306C (-ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x180103E38 (-OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 * Callees:
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18001616C (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@VEdgeGestureMetrics@@$$V@std@@YA?AV?$shared_ptr@VEdgeGestureMetrics@@@0@XZ @ 0x180102AD4 (--$make_shared@VEdgeGestureMetrics@@$$V@std@@YA-AV-$shared_ptr@VEdgeGestureMetrics@@@0@XZ.c)
 *     ??4?$shared_ptr@VEdgeGestureMetrics@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180102B2C (--4-$shared_ptr@VEdgeGestureMetrics@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void EdgeGestureMetrics::Initialize(void)
{
  _QWORD *v0; // rax
  __int64 v1; // rcx
  struct RegistryWatcher **v2; // rbx
  HKEY v3; // rcx
  struct RegistryWatcher **v4; // rax
  __int64 v5; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+38h] [rbp-10h]

  if ( !EdgeGestureMetrics::s_edgeGestureMetrics )
  {
    v0 = std::make_shared<EdgeGestureMetrics,>(&v5);
    std::shared_ptr<EdgeGestureMetrics>::operator=(v1, (__int64)v0);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    v2 = EdgeGestureMetrics::s_edgeGestureMetrics;
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)EdgeGestureMetrics::s_edgeGestureMetrics);
    if ( (int)RegistryWatcher::Create(
                v3,
                L"Software\\Microsoft\\Input\\Settings\\EdgeGestureMetrics",
                EdgeGestureMetrics::s_edgeGestureMetrics,
                (void (*)(void *, HKEY))lambda_f70b1d3ca5d586fe2915dfa0db6ded94_::_lambda_invoker_cdecl_,
                v2) < 0 )
    {
      v4 = EdgeGestureMetrics::s_edgeGestureMetrics;
      *((_DWORD *)EdgeGestureMetrics::s_edgeGestureMetrics + 2) = 1141473280;
      *((_DWORD *)v4 + 3) = 1141473280;
      *((_WORD *)EdgeGestureMetrics::s_edgeGestureMetrics + 8) = 35;
      *((_WORD *)EdgeGestureMetrics::s_edgeGestureMetrics + 9) = 250;
    }
  }
}
