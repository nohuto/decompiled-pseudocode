/*
 * XREFs of ??1CScrollAnimation@@UEAA@XZ @ 0x180205584
 * Callers:
 *     ??_ECScrollAnimation@@UEAAPEAXI@Z @ 0x1802055D0 (--_ECScrollAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z @ 0x1802074D0 (--_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x180207C10 (--_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x1802061A8 (-Stop@CScrollAnimation@@QEAAJXZ.c)
 */

void __fastcall CScrollAnimation::~CScrollAnimation(CScrollAnimation *this)
{
  *(_QWORD *)this = &CScrollAnimation::`vftable';
  CScrollAnimation::Stop(this);
  ReleaseInterface<CD3DSurface>((__int64 *)this + 41);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 376);
  CBaseExpression::~CBaseExpression(this);
}
