/*
 * XREFs of ?Alloc@WPF@@YAPEAXPEAVHeapBase@1@_J_K@Z @ 0x180072B80
 * Callers:
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1800B4210 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphic.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPF::Alloc(WPF *this, struct WPF::HeapBase *a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           a3);
}
