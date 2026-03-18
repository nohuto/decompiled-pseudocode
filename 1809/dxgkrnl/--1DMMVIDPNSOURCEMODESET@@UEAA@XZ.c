/*
 * XREFs of ??1DMMVIDPNSOURCEMODESET@@UEAA@XZ @ 0x1C000AB60
 * Callers:
 *     ??_GDMMVIDPNSOURCEMODESET@@UEAAPEAXI@Z @ 0x1C000AAF0 (--_GDMMVIDPNSOURCEMODESET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ @ 0x1C000AB34 (--1-$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C000B194 (--1ReferenceCounted@@UEAA@XZ.c)
 */

void __fastcall DMMVIDPNSOURCEMODESET::~DMMVIDPNSOURCEMODESET(DMMVIDPNSOURCEMODESET *this)
{
  _QWORD *v2; // rbx
  ReferenceCounted *v3; // rcx

  v2 = (_QWORD *)((char *)this + 24);
  *(_QWORD *)this = &DMMVIDPNSOURCEMODESET::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNSOURCEMODESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCEMODE>'};
  v3 = (DMMVIDPNSOURCEMODESET *)((char *)this + 88);
  *(_QWORD *)v3 = &DMMVIDPNSOURCEMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNSOURCEMODESET::`vftable'{for `AggregatedBy<DMMVIDPNSOURCE>'};
  *((_DWORD *)this + 32) |= 0x6D640000u;
  *((_QWORD *)this + 15) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 13) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ReferenceCounted::~ReferenceCounted(v3);
  *v2 = &IndexedSet<DMMVIDPNSOURCEMODE>::`vftable';
  Set<DMMVIDPNSOURCEMODE>::~Set<DMMVIDPNSOURCEMODE>(v2);
  *(_QWORD *)this = &SetElement::`vftable';
}
