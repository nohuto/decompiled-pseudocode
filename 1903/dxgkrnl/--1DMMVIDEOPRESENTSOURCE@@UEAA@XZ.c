/*
 * XREFs of ??1DMMVIDEOPRESENTSOURCE@@UEAA@XZ @ 0x1C0055CBC
 * Callers:
 *     ??_EDMMVIDEOPRESENTSOURCE@@UEAAPEAXI@Z @ 0x1C0055E00 (--_EDMMVIDEOPRESENTSOURCE@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAA@XZ @ 0x1C0055C90 (--1-$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAA@XZ.c)
 */

void __fastcall DMMVIDEOPRESENTSOURCE::~DMMVIDEOPRESENTSOURCE(DMMVIDEOPRESENTSOURCE *this, __int64 a2, __int64 a3)
{
  ReferenceCounted *v4; // rcx

  *(_QWORD *)this = &DMMVIDEOPRESENTSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTSOURCE::`vftable'{for `ContainedBy<DMMVIDEOPRESENTSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTSOURCE::`vftable'{for `NonReferenceCounted'};
  v4 = (ReferenceCounted *)*((_QWORD *)this + 16);
  if ( v4 )
  {
    ReferenceCounted::Release(v4, a2, a3);
    *((_QWORD *)this + 16) = 0LL;
  }
  Set<ContextDataAssignee::CONTEXT_DATA>::~Set<ContextDataAssignee::CONTEXT_DATA>((_QWORD *)this + 9);
  *((_QWORD *)this + 8) = &SetElement::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
