/*
 * XREFs of ??1CButton@@MEAA@XZ @ 0x180025D44
 * Callers:
 *     ??_GCButton@@MEAAPEAXI@Z @ 0x180025F40 (--_GCButton@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x180025314 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x180025384 (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x180025EA8 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 */

void __fastcall CButton::~CButton(CButton *this)
{
  struct CAtlasedImage *v2; // rdx
  CAtlasedRectsVisual *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx

  *(_QWORD *)this = &CButton::`vftable';
  CButton::DeactivateTimeline(this, (__int64 *)this + 49);
  v2 = (struct CAtlasedImage *)*((_QWORD *)this + 36);
  if ( v2 )
  {
    v3 = (CAtlasedRectsVisual *)*((_QWORD *)v2 + 10);
    if ( v3 )
      CAtlasedRectsVisual::RemoveAtlasImage(v3, v2);
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 46);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 46) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 36) = 0LL;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 37) = 0LL;
  }
  CBitmapSourceArray::ReleaseContents((CButton *)((char *)this + 304), 1);
  CBitmapSourceArray::ReleaseContents((CButton *)((char *)this + 336), 1);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 336);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 304);
  CAtlasedRectsVisual::~CAtlasedRectsVisual(this);
}
