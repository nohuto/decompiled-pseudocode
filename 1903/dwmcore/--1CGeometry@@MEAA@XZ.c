/*
 * XREFs of ??1CGeometry@@MEAA@XZ @ 0x180089748
 * Callers:
 *     ??_GCRegionGeometry@@UEAAPEAXI@Z @ 0x1800895F0 (--_GCRegionGeometry@@UEAAPEAXI@Z.c)
 *     ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x1800D1230 (--_ECRectangleGeometry@@UEAAPEAXI@Z.c)
 *     ??_ECLineGeometry@@UEAAPEAXI@Z @ 0x18019EF60 (--_ECLineGeometry@@UEAAPEAXI@Z.c)
 *     ??_GCPathGeometry@@MEAAPEAXI@Z @ 0x18019F730 (--_GCPathGeometry@@MEAAPEAXI@Z.c)
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x1801CF4F0 (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x1801D6268 (--1CGeometryGroup@@MEAA@XZ.c)
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x1801F4914 (--1CProxyGeometry@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
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
