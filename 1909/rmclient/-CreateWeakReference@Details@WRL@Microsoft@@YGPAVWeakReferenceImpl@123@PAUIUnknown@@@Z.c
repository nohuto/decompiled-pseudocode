/*
 * XREFs of ?CreateWeakReference@Details@WRL@Microsoft@@YGPAVWeakReferenceImpl@123@PAUIUnknown@@@Z @ 0x1001078D
 * Callers:
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@UAGJPAPAUIWeakReference@@@Z @ 0x100109E0 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemo.c)
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UAGJPAPAUIWeakReference@@@Z @ 0x10010AA0 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$_ea_10010AA0.c)
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProcessMemoryReport@System@Windows@@UIInspectable@@@Details@WRL@Microsoft@@UAGJPAPAUIWeakReference@@@Z @ 0x10010B60 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProcess.c)
 * Callees:
 *     ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AAPAUIUnknown@@@Details@WRL@Microsoft@@YG?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AAPAUIUnknown@@@Z @ 0x100101F8 (--$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AAPAUIUnknown@@@Details@WRL@Microsoft@@YG-AV-$.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UAGKXZ @ 0x10010DD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

struct Microsoft::WRL::Details::WeakReferenceImpl *__thiscall Microsoft::WRL::Details::CreateWeakReference(void *ecx0)
{
  int *v1; // eax
  int v2; // esi
  int v3; // ecx
  void *v5; // [esp+4h] [ebp-8h] BYREF
  int v6; // [esp+8h] [ebp-4h] BYREF

  v5 = ecx0;
  v1 = Microsoft::WRL::Details::Make<Microsoft::WRL::Details::WeakReferenceImpl,IUnknown * &>(&v6, (int *)&v5);
  v2 = *v1;
  *v1 = 0;
  v3 = v6;
  if ( v6 )
  {
    v6 = 0;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v3);
  }
  return (struct Microsoft::WRL::Details::WeakReferenceImpl *)v2;
}
