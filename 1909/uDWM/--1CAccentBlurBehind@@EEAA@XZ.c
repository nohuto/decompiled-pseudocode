/*
 * XREFs of ??1CAccentBlurBehind@@EEAA@XZ @ 0x18008B22C
 * Callers:
 *     ??_ECAccentBlurBehind@@EEAAPEAXI@Z @ 0x18008B270 (--_ECAccentBlurBehind@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800253B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseResource@CAccentBlurBehind@@AEAAXXZ @ 0x18008BC14 (-ReleaseResource@CAccentBlurBehind@@AEAAXXZ.c)
 */

void __fastcall CAccentBlurBehind::~CAccentBlurBehind(CAccentBlurBehind *this)
{
  *(_QWORD *)this = &CAccentBlurBehind::`vftable';
  CAccentBlurBehind::ReleaseResource(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 36);
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
