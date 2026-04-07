/*
 * XREFs of ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800A6510
 * Callers:
 *     ??_GCIndirectTouchVisual@@MEAAPEAXI@Z @ 0x1800A65A0 (--_GCIndirectTouchVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180010DBC (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x1800A6D10 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 */

void __fastcall CIndirectTouchVisual::~CIndirectTouchVisual(CBaseObject **this)
{
  __int64 i; // rdi
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = (CBaseObject *)&CIndirectTouchVisual::`vftable';
  CIndirectTouchVisual::Stop((CIndirectTouchVisual *)this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 102); i = (unsigned int)(i + 1) )
  {
    v3 = (CBaseObject *)*((_QWORD *)this[48] + i);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  v4 = this[47];
  if ( v4 )
    CBaseObject::Release(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 48);
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual(this);
}
