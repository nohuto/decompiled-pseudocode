/*
 * XREFs of ?UnRegisterNotifierNoNULL@CResource@@QEAAXPEAV1@@Z @ 0x1801590E4
 * Callers:
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x1801B1A68 (--1CProxyGeometry@@MEAA@XZ.c)
 *     ?ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROXYGEOMETRY_SETVIEWBOX@@@Z @ 0x1801B1CF8 (-ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROXYGEOMETRY_SETVIEWBOX@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CResource::UnRegisterNotifierNoNULL(CResource *this, struct CResource *a2)
{
  CResource::UnRegisterNotifierInternal(this, a2);
}
