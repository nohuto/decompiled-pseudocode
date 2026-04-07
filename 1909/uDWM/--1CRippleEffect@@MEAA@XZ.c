/*
 * XREFs of ??1CRippleEffect@@MEAA@XZ @ 0x1800947EC
 * Callers:
 *     ??_ECRippleEffect@@MEAAPEAXI@Z @ 0x180094860 (--_ECRippleEffect@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x180094D44 (-Stop@CRippleEffect@@QEAAJXZ.c)
 */

void __fastcall CRippleEffect::~CRippleEffect(CBaseObject **this)
{
  CBaseObject **v2; // rdi
  __int64 v3; // rsi
  CBaseObject *v4; // rcx

  *this = (CBaseObject *)&CRippleEffect::`vftable';
  CRippleEffect::Stop((CRippleEffect *)this);
  v2 = this + 36;
  v3 = 12LL;
  do
  {
    if ( *v2 )
      CBaseObject::Release(*v2);
    ++v2;
    --v3;
  }
  while ( v3 );
  v4 = this[35];
  if ( v4 )
    CBaseObject::Release(v4);
  CVisual::~CVisual((CVisual *)this);
}
