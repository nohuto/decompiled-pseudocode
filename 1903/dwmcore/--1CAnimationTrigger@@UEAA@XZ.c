/*
 * XREFs of ??1CAnimationTrigger@@UEAA@XZ @ 0x18002179C
 * Callers:
 *     ??_ECAnimationTrigger@@UEAAPEAXI@Z @ 0x180021720 (--_ECAnimationTrigger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CAnimationTrigger::~CAnimationTrigger(CAnimationTrigger *this)
{
  *(_QWORD *)this = &CAnimationTrigger::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 56);
  CResource::~CResource(this);
}
