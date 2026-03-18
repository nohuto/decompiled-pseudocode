/*
 * XREFs of ??1CAnimationTrigger@@UEAA@XZ @ 0x18001FB3C
 * Callers:
 *     ??_ECAnimationTrigger@@UEAAPEAXI@Z @ 0x18001FAC0 (--_ECAnimationTrigger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CAnimationTrigger::~CAnimationTrigger(CAnimationTrigger *this)
{
  *(_QWORD *)this = &CAnimationTrigger::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 56);
  CResource::~CResource(this);
}
