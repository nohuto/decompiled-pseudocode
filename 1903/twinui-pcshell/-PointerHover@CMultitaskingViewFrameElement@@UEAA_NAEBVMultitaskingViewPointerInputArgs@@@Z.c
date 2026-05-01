/*
 * XREFs of ?PointerHover@CMultitaskingViewFrameElement@@UEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18036CAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?PointerHover@CMultitaskingViewElementBase@@UEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1803651A0 (-PointerHover@CMultitaskingViewElementBase@@UEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 */

char __fastcall CMultitaskingViewFrameElement::PointerHover(
        CMultitaskingViewFrameElement *this,
        const struct MultitaskingViewPointerInputArgs *a2)
{
  __int64 v2; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 70);
  if ( !v2 )
    return CMultitaskingViewElementBase::PointerHover(this, a2);
  v5 = *((_QWORD *)this + 70);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
  (*(void (__fastcall **)(__int64, const struct MultitaskingViewPointerInputArgs *))(*(_QWORD *)v2 + 64LL))(v2, a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  return 0;
}
