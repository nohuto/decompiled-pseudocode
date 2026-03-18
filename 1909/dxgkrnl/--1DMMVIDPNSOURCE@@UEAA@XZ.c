/*
 * XREFs of ??1DMMVIDPNSOURCE@@UEAA@XZ @ 0x1C0004D44
 * Callers:
 *     ??_GDMMVIDPNSOURCE@@UEAAPEAXI@Z @ 0x1C0004D00 (--_GDMMVIDPNSOURCE@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1?$AutoBuffer@I@DMM@@UEAA@XZ @ 0x1C001F5B0 (--1-$AutoBuffer@I@DMM@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DMMVIDPNSOURCE::~DMMVIDPNSOURCE(DMMVIDPNSOURCE *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    if ( (unsigned __int64)*(int *)(v4 + 96) > 1 )
    {
      v8 = WdLogNewEntry5_WdError(this, a2, a3);
      *(_QWORD *)(v8 + 24) = *((_QWORD *)this + 13);
      *(_QWORD *)(v8 + 32) = this;
      WdLogEvent5_WdError(v8);
    }
    *(_QWORD *)(*((_QWORD *)this + 13) + 112LL) = 0LL;
  }
  if ( *((_QWORD *)this + 15) )
  {
    v9 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v9 + 24) = *((unsigned int *)this + 6);
    WdLogEvent5_WdError(v9);
  }
  DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>((char *)this + 128);
  v5 = *((_QWORD *)this + 15);
  if ( v5 )
    ReferenceCounted::Release((ReferenceCounted *)(v5 + 88));
  *((_QWORD *)this + 15) = 0LL;
  v6 = *((_QWORD *)this + 14);
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 16LL))(v6, 1LL);
  v7 = *((_QWORD *)this + 13);
  if ( v7 )
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 88));
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 10) = &SetElement::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
