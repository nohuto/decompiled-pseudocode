/*
 * XREFs of ??1CBaseAnimation@@UEAA@XZ @ 0x180068BD0
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x180068AA0 (--1CAnimation@@UEAA@XZ.c)
 *     ??_GCBaseAnimation@@UEAAPEAXI@Z @ 0x180174310 (--_GCBaseAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScalar@@MEAA@XZ @ 0x1801B2284 (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CBaseAnimation::~CBaseAnimation(CBaseAnimation *this)
{
  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CBaseAnimation::`vftable'{for `IAnimationResource'};
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 64);
  CResource::~CResource(this);
}
