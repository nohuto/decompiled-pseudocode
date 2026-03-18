/*
 * XREFs of ??1DMMVIDPNSOURCESET@@UEAA@XZ @ 0x1C0005034
 * Callers:
 *     ??_GDMMVIDPNTARGETSET@@UEAAPEAXI@Z @ 0x1C0004FF0 (--_GDMMVIDPNTARGETSET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ @ 0x1C0005504 (--1-$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ.c)
 */

void __fastcall DMMVIDPNSOURCESET::~DMMVIDPNSOURCESET(DMMVIDPNSOURCESET *this)
{
  *(_QWORD *)this = &DMMVIDPNTARGETSET::`vftable'{for `IndexedSet<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNTARGETSET::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_DWORD *)this + 22) |= 0x6D640000u;
  *((_QWORD *)this + 10) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &IndexedSet<DMMVIDPNTARGET>::`vftable';
  Set<DMMVIDPNSOURCE>::~Set<DMMVIDPNSOURCE>();
}
