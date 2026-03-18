/*
 * XREFs of ??1CProxyGeometry@@MEAA@XZ @ 0x1801F4914
 * Callers:
 *     ??_GCProxyGeometry@@MEAAPEAXI@Z @ 0x18019F840 (--_GCProxyGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CProxyGeometry::~CProxyGeometry(CProxyGeometry *this)
{
  struct CResource *v1; // rdx

  v1 = (struct CResource *)*((_QWORD *)this + 17);
  *(_QWORD *)this = &CProxyGeometry::`vftable';
  CResource::UnRegisterNotifierInternal(this, v1);
  CGeometry::~CGeometry((struct CResource **)this);
}
