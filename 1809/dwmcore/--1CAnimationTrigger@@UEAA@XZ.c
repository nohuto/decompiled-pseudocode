/*
 * XREFs of ??1CAnimationTrigger@@UEAA@XZ @ 0x18018C1F0
 * Callers:
 *     ??_ECAnimationTrigger@@UEAAPEAXI@Z @ 0x180174270 (--_ECAnimationTrigger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CAnimationTrigger::~CAnimationTrigger(void **this)
{
  *this = &CAnimationTrigger::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 7);
  CResource::~CResource((CResource *)this);
}
