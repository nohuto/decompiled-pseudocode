/*
 * XREFs of ??1CGeometryGroup@@MEAA@XZ @ 0x1801C2740
 * Callers:
 *     ??_ECGeometryGroup@@MEAAPEAXI@Z @ 0x1801746C0 (--_ECGeometryGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x1801BC1E0 (-UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ.c)
 */

void __fastcall CGeometryGroup::~CGeometryGroup(CGeometryGroup *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  CGeometryGroup **v3; // rdx
  CGeometryGroup **v4; // rcx

  *(_QWORD *)this = &CGeometryGroup::`vftable'{for `CGeometry'};
  *((_QWORD *)this + 17) = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  CGeometryGroup::UnRegisterNotifiers(this);
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 22);
  if ( v2 )
    (**v2)(v2, 1LL);
  *((_QWORD *)this + 17) = &CCyclicResourceListEntry::`vftable';
  v3 = (CGeometryGroup **)*((_QWORD *)this + 18);
  if ( v3[1] != (CGeometryGroup *)((char *)this + 144)
    || (v4 = (CGeometryGroup **)*((_QWORD *)this + 19), *v4 != (CGeometryGroup *)((char *)this + 144)) )
  {
    __fastfail(3u);
  }
  *v4 = (CGeometryGroup *)v3;
  v3[1] = (CGeometryGroup *)v4;
  CGeometry::~CGeometry((struct CResource **)this);
}
