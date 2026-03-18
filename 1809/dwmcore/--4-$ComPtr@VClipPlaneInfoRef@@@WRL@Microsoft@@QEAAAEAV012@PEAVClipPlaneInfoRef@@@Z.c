/*
 * XREFs of ??4?$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@QEAAAEAV012@PEAVClipPlaneInfoRef@@@Z @ 0x18006BDCC
 * Callers:
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180024BE0 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x18017ADBC (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<ClipPlaneInfoRef>::operator=(_QWORD *a1, void (__fastcall ***a2)(_QWORD))
{
  void (__fastcall ***v4)(_QWORD); // rcx

  v4 = (void (__fastcall ***)(_QWORD))*a1;
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (**a2)(a2);
      v4 = (void (__fastcall ***)(_QWORD))*a1;
    }
    *a1 = a2;
    if ( v4 )
      (*v4)[1](v4);
  }
  return a1;
}
