/*
 * XREFs of ??1CGeometry@@MEAA@XZ @ 0x18004EBEC
 * Callers:
 *     ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x18004EE10 (--_GCRgnGeometry@@MEAAPEAXI@Z.c)
 *     ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x180072EB0 (--_ECRectangleGeometry@@UEAAPEAXI@Z.c)
 *     ??_ECLineGeometry@@UEAAPEAXI@Z @ 0x180174530 (--_ECLineGeometry@@UEAAPEAXI@Z.c)
 *     ??_GCPathGeometry@@MEAAPEAXI@Z @ 0x180174940 (--_GCPathGeometry@@MEAAPEAXI@Z.c)
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x1801B1A68 (--1CProxyGeometry@@MEAA@XZ.c)
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x1801C1B90 (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x1801C2740 (--1CGeometryGroup@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CGeometry::~CGeometry(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  this[9] = 0LL;
  CShapePtr::Release((CShapePtr *)(this + 14));
  CShapePtr::Release((CShapePtr *)(this + 12));
  *this = (struct CResource *)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
