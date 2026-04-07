/*
 * XREFs of ?SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z @ 0x1800B672C
 * Callers:
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800839E4 (-Initialize@CMagnifier@@AEAAJXZ.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x180084128 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMagnifierRenderTargetProxy::SetTransform(
        CMagnifierRenderTargetProxy *this,
        const struct CMatrixTransformProxy *a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    v2 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 728LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           v2);
}
