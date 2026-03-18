/*
 * XREFs of ??1CScrollAnimation@@UEAA@XZ @ 0x1801D5B00
 * Callers:
 *     ??_ECScrollAnimation@@UEAAPEAXI@Z @ 0x1801D5B50 (--_ECScrollAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z @ 0x1801D7A70 (--_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x1801D81C0 (--_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x1801D66DC (-Stop@CScrollAnimation@@QEAAJXZ.c)
 */

void __fastcall CScrollAnimation::~CScrollAnimation(CScrollAnimation *this)
{
  *(_QWORD *)this = &CScrollAnimation::`vftable';
  CScrollAnimation::Stop(this);
  ReleaseInterface<CD3DSurface>((__int64 *)this + 38);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 44);
  CBaseExpression::~CBaseExpression(this);
}
