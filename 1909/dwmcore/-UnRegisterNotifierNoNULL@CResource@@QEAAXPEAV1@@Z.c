/*
 * XREFs of ?UnRegisterNotifierNoNULL@CResource@@QEAAXPEAV1@@Z @ 0x1801937A4
 * Callers:
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x1801F31F4 (--1CProxyGeometry@@MEAA@XZ.c)
 *     ?ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWBOX@@@Z @ 0x1801F34A4 (-ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWB.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CResource::UnRegisterNotifierNoNULL(CResource *this, struct CResource *a2)
{
  CResource::UnRegisterNotifierInternal(this, a2);
}
