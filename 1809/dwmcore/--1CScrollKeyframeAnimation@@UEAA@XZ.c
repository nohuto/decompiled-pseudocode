/*
 * XREFs of ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x1801E0158
 * Callers:
 *     ??_ECScrollPositionKeyframeAnimation@@UEAAPEAXI@Z @ 0x1801D6EF0 (--_ECScrollPositionKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECScrollScaleKeyframeAnimation@@UEAAPEAXI@Z @ 0x1801D7480 (--_ECScrollScaleKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECScrollKeyframeAnimation@@UEAAPEAXI@Z @ 0x1801E01D0 (--_ECScrollKeyframeAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScrollKeyframeAnimation::~CScrollKeyframeAnimation(CScrollKeyframeAnimation *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *((_QWORD *)this + 66) = 0LL;
  *(_QWORD *)this = &CScrollKeyframeAnimation::`vftable';
  v2 = *((_QWORD *)this + 85);
  if ( v2 )
  {
    *((_QWORD *)this + 85) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 75);
  if ( v3 )
  {
    *((_QWORD *)this + 75) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  CKeyframeAnimation::~CKeyframeAnimation(this);
}
