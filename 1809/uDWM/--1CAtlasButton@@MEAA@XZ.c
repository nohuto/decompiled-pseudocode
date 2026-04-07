/*
 * XREFs of ??1CAtlasButton@@MEAA@XZ @ 0x180023A4C
 * Callers:
 *     ??_GCAtlasButton@@MEAAPEAXI@Z @ 0x180023AF0 (--_GCAtlasButton@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAtlasButton::~CAtlasButton(CAtlasButton *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CAtlasButton::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 17) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 18);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 18) = 0LL;
  }
  CAtlasedImage::~CAtlasedImage(this);
}
