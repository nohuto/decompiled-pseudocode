/*
 * XREFs of ??1CContactStationaryVisual@@MEAA@XZ @ 0x18009A4C8
 * Callers:
 *     ??_ECContactStationaryVisual@@MEAAPEAXI@Z @ 0x18009A560 (--_ECContactStationaryVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180010DBC (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019F10 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x18009AB70 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 */

void __fastcall CContactStationaryVisual::~CContactStationaryVisual(CBaseObject **this)
{
  __int64 i; // rdi
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = (CBaseObject *)&CContactStationaryVisual::`vftable';
  CContactStationaryVisual::StopTimer((CContactStationaryVisual *)this);
  CVisual::SetOpacity((CVisual *)this, 0.0);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 102); i = (unsigned int)(i + 1) )
  {
    v3 = (CBaseObject *)*((_QWORD *)this[48] + i);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  v4 = this[46];
  if ( v4 )
    CBaseObject::Release(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 48);
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual(this);
}
