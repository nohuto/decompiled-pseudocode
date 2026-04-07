/*
 * XREFs of ??1CButton@@MEAA@XZ @ 0x180010CE8
 * Callers:
 *     ??_GCButton@@MEAAPEAXI@Z @ 0x18000F060 (--_GCButton@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180010DBC (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x180010DF4 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x18002407C (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x18003AC38 (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 */

void __fastcall CButton::~CButton(CBaseObject **this)
{
  struct CAtlasedImage *v2; // rdx
  CAtlasedRectsVisual *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx

  *this = (CBaseObject *)&CButton::`vftable';
  CButton::DeactivateTimeline((struct CVisual *)this);
  v2 = this[36];
  if ( v2 )
  {
    v3 = (CAtlasedRectsVisual *)*((_QWORD *)v2 + 10);
    if ( v3 )
      CAtlasedRectsVisual::RemoveAtlasImage(v3, v2);
  }
  v4 = this[46];
  if ( v4 )
  {
    CBaseObject::Release(v4);
    this[46] = 0LL;
  }
  v5 = this[36];
  if ( v5 )
  {
    CBaseObject::Release(v5);
    this[36] = 0LL;
  }
  v6 = this[37];
  if ( v6 )
  {
    CBaseObject::Release(v6);
    this[37] = 0LL;
  }
  CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(this + 38), 1);
  CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(this + 42), 1);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 42);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 38);
  CAtlasedRectsVisual::~CAtlasedRectsVisual((CAtlasedRectsVisual *)this);
}
