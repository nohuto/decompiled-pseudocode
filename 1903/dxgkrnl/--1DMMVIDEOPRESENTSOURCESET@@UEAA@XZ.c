/*
 * XREFs of ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x1C00535DC
 * Callers:
 *     ??_GDMMVIDEOPRESENTSOURCESET@@UEAAPEAXI@Z @ 0x1C0054220 (--_GDMMVIDEOPRESENTSOURCESET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C00051E8 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??1?$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAA@XZ @ 0x1C0053584 (--1-$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAA@XZ.c)
 */

void __fastcall DMMVIDEOPRESENTSOURCESET::~DMMVIDEOPRESENTSOURCESET(
        DMMVIDEOPRESENTSOURCESET *this,
        __int64 a2,
        __int64 a3)
{
  ReferenceCounted *v4; // rcx

  *(_QWORD *)this = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `IndexedSet<DMMVIDEOPRESENTSOURCE>'};
  v4 = (DMMVIDEOPRESENTSOURCESET *)((char *)this + 64);
  *(_QWORD *)v4 = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 10) = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_DWORD *)this + 26) |= 0x6D640000u;
  *((_QWORD *)this + 12) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ReferenceCounted::~ReferenceCounted(v4, a2, a3);
  *(_QWORD *)this = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  Set<DMMVIDEOPRESENTSOURCE>::~Set<DMMVIDEOPRESENTSOURCE>(this);
}
