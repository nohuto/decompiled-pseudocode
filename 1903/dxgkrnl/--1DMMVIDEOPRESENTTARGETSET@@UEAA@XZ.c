/*
 * XREFs of ??1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ @ 0x1C0053650
 * Callers:
 *     ??_GDMMVIDEOPRESENTTARGETSET@@UEAAPEAXI@Z @ 0x1C0054270 (--_GDMMVIDEOPRESENTTARGETSET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C00051E8 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??1?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ @ 0x1C00535B0 (--1-$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ.c)
 */

void __fastcall DMMVIDEOPRESENTTARGETSET::~DMMVIDEOPRESENTTARGETSET(
        DMMVIDEOPRESENTTARGETSET *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax

  *(_QWORD *)this = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `IndexedSet<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 10) = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 12) = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGETSET>'};
  if ( *((DMMVIDEOPRESENTTARGETSET **)this + 14) != (DMMVIDEOPRESENTTARGETSET *)((char *)this + 112) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v4);
  }
  *((_DWORD *)this + 26) |= 0x6D640000u;
  *((_QWORD *)this + 12) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ReferenceCounted::~ReferenceCounted((DMMVIDEOPRESENTTARGETSET *)((char *)this + 64), a2, a3);
  *(_QWORD *)this = &IndexedSet<DMMVIDEOPRESENTTARGET>::`vftable';
  Set<DMMVIDEOPRESENTTARGET>::~Set<DMMVIDEOPRESENTTARGET>(this);
}
