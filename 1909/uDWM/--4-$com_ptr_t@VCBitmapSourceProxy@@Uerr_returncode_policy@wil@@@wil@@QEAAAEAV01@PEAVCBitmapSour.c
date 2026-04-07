/*
 * XREFs of ??4?$com_ptr_t@VCBitmapSourceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSourceProxy@@@Z @ 0x180024090
 * Callers:
 *     ??$CreateProxyFromHandle@VCVisualProxy@@@CCompositor@@IEAAJIPEAPEAVCVisualProxy@@@Z @ 0x180023F0C (--$CreateProxyFromHandle@VCVisualProxy@@@CCompositor@@IEAAJIPEAPEAVCVisualProxy@@@Z.c)
 *     ??$CreateProxyFromHandle@VCWindowNodeProxy@@@CCompositor@@IEAAJIPEAPEAVCWindowNodeProxy@@@Z @ 0x180024F58 (--$CreateProxyFromHandle@VCWindowNodeProxy@@@CCompositor@@IEAAJIPEAPEAVCWindowNodeProxy@@@Z.c)
 *     ??$CreateProxy@VCBitmapSourceProxy@@@CCompositor@@IEAAJPEAPEAVCBitmapSourceProxy@@@Z @ 0x180037304 (--$CreateProxy@VCBitmapSourceProxy@@@CCompositor@@IEAAJPEAPEAVCBitmapSourceProxy@@@Z.c)
 *     ??$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z @ 0x180037428 (--$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ??$CreateProxy@VCWindowNodeProxy@@@CCompositor@@IEAAJPEAPEAVCWindowNodeProxy@@@Z @ 0x18003A8DC (--$CreateProxy@VCWindowNodeProxy@@@CCompositor@@IEAAJPEAPEAVCWindowNodeProxy@@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180047654 (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x18004CF1C (--$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject **__fastcall wil::com_ptr_t<CBitmapSourceProxy,wil::err_returncode_policy>::operator=(
        CBaseObject **a1,
        volatile signed __int32 *a2)
{
  CBaseObject *v3; // rcx

  v3 = *a1;
  *a1 = (CBaseObject *)a2;
  if ( a2 )
    _InterlockedIncrement(a2 + 2);
  if ( v3 )
    CBaseObject::Release(v3);
  return a1;
}
