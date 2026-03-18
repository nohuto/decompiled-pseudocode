/*
 * XREFs of ??1CCombinedGeometry@@MEAA@XZ @ 0x1801CDD50
 * Callers:
 *     ??_ECCombinedGeometry@@MEAAPEAXI@Z @ 0x18019D600 (--_ECCombinedGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x180211200 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 */

void __fastcall CCombinedGeometry::~CCombinedGeometry(CCombinedGeometry *this)
{
  CCombinedGeometry **v2; // rdx
  CCombinedGeometry **v3; // rax

  *(_QWORD *)this = &CCombinedGeometry::`vftable'{for `CGeometry'};
  *((_QWORD *)this + 17) = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  CCombinedGeometry::UnRegisterNotifiers(this);
  *((_QWORD *)this + 17) = &CCyclicResourceListEntry::`vftable';
  v2 = (CCombinedGeometry **)*((_QWORD *)this + 18);
  if ( v2[1] != (CCombinedGeometry *)((char *)this + 144)
    || (v3 = (CCombinedGeometry **)*((_QWORD *)this + 19), *v3 != (CCombinedGeometry *)((char *)this + 144)) )
  {
    __fastfail(3u);
  }
  *v3 = (CCombinedGeometry *)v2;
  v2[1] = (CCombinedGeometry *)v3;
  CGeometry::~CGeometry((struct CResource **)this);
}
