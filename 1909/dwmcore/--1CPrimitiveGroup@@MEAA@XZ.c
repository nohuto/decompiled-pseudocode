/*
 * XREFs of ??1CPrimitiveGroup@@MEAA@XZ @ 0x1800C6A70
 * Callers:
 *     ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x1800C6A30 (--_ECPrimitiveGroup@@MEAAPEAXI@Z.c)
 *     ??_ECPrimitiveGroupLayerClip@@UEAAPEAXI@Z @ 0x18019DF30 (--_ECPrimitiveGroupLayerClip@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x18007BE6C (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18007CF94 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x1800C6C48 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1800C6C7C (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveGroup::~CPrimitiveGroup(CPrimitiveGroup *this)
{
  CGdiSpriteBitmap *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CPrimitiveGroup::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CPrimitiveGroup::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 8) = &CPrimitiveGroup::`vftable'{for `IDirtyRectSource'};
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 0);
  CPrimitiveGroup::ReleaseSurfaceResources(this);
  CPrimitiveGroup::ReleaseColorResources(this);
  v2 = (CGdiSpriteBitmap *)*((_QWORD *)this + 53);
  if ( v2 )
    CGdiSpriteBitmap::Release(v2);
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  CPrimitiveGroup::ReleaseHeatMap(this);
  FastRegion::CRegion::FreeMemory((void **)this + 73);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 360);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 296);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 232);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 168);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 112);
  CResource::~CResource(this);
}
