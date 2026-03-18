/*
 * XREFs of ??_EDMMVIDPNTARGET@@UEAAPEAXI@Z @ 0x1C0008ED0
 * Callers:
 *     ??_EDMMVIDPNTARGET@@WCA@EAAPEAXI@Z @ 0x1C0025800 (--_EDMMVIDPNTARGET@@WCA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGET@@WDA@EAAPEAXI@Z @ 0x1C0025810 (--_EDMMVIDPNTARGET@@WDA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGET@@WFA@EAAPEAXI@Z @ 0x1C0025820 (--_EDMMVIDPNTARGET@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall DMMVIDPNTARGET::`vector deleting destructor'(_QWORD *P, __int64 a2, __int64 a3)
{
  char v3; // di
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = a2;
  *P = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  P[4] = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  P[6] = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  P[8] = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  P[10] = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  v5 = P[13];
  if ( v5 )
  {
    if ( (unsigned __int64)*(int *)(v5 + 96) > 1 )
    {
      v10 = WdLogNewEntry5_WdError(P, a2, a3);
      *(_QWORD *)(v10 + 24) = P[13];
      *(_QWORD *)(v10 + 32) = P;
      WdLogEvent5_WdError(v10);
    }
    *(_QWORD *)(P[13] + 112LL) = 0LL;
  }
  if ( P[14] )
  {
    v11 = WdLogNewEntry5_WdError(P, a2, a3);
    *(_QWORD *)(v11 + 24) = *((unsigned int *)P + 6);
    WdLogEvent5_WdError(v11);
  }
  ReferenceCounted::Release((ReferenceCounted *)(P[12] + 64LL));
  v6 = P[15];
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 16LL))(v6, 1LL);
  v7 = P[14];
  if ( v7 )
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 88));
  P[14] = 0LL;
  v8 = P[13];
  if ( v8 )
    ReferenceCounted::Release((ReferenceCounted *)(v8 + 88));
  P[13] = 0LL;
  P[10] = &SetElement::`vftable';
  *((_DWORD *)P + 14) |= 0x6D640000u;
  P[6] = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  P[5] = 0LL;
  P[4] = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *P = &SetElement::`vftable';
  if ( (v3 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
