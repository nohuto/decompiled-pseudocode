/*
 * XREFs of ??_EDMMVIDPNTARGETMODESET@@UEAAPEAXI@Z @ 0x1C0009040
 * Callers:
 *     ??_EDMMVIDPNTARGETMODESET@@WBI@EAAPEAXI@Z @ 0x1C0025740 (--_EDMMVIDPNTARGETMODESET@@WBI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODESET@@WFI@EAAPEAXI@Z @ 0x1C0025750 (--_EDMMVIDPNTARGETMODESET@@WFI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODESET@@WGI@EAAPEAXI@Z @ 0x1C0025760 (--_EDMMVIDPNTARGETMODESET@@WGI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODESET@@WHI@EAAPEAXI@Z @ 0x1C0025770 (--_EDMMVIDPNTARGETMODESET@@WHI@EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

int *__fastcall DMMVIDPNTARGETMODESET::`vector deleting destructor'(int *P, __int64 a2, __int64 a3)
{
  char v3; // si
  int *v4; // rbx
  int **v5; // rdi
  int *v6; // rax
  int *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  v3 = a2;
  *(_QWORD *)P = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
  v4 = P;
  *((_QWORD *)P + 3) = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
  *((_QWORD *)P + 11) = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)P + 13) = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
  P[32] |= 0x6D640000u;
  *((_QWORD *)P + 15) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)P + 14) = 0LL;
  *((_QWORD *)P + 13) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)P + 11) = &ReferenceCounted::`vftable';
  if ( P[24] )
  {
    v9 = WdLogNewEntry5_WdError(P, a2, a3);
    *(_QWORD *)(v9 + 24) = v4[24];
    WdLogEvent5_WdError(v9);
  }
  *((_QWORD *)v4 + 3) = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
  v5 = (int **)(v4 + 12);
  *((_QWORD *)v4 + 4) = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::`vftable';
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (int *)v5 )
      break;
    if ( *((int ***)v6 + 1) != v5 || (v8 = *(int **)v6, *(int **)(*(_QWORD *)v6 + 8LL) != v6) )
      __fastfail(3u);
    *v5 = v8;
    *((_QWORD *)v8 + 1) = v5;
    --*((_QWORD *)v4 + 8);
    *((_QWORD *)v6 + 1) = 0LL;
    *(_QWORD *)v6 = 0LL;
    P = v6 + 14;
    if ( v6 != (int *)-56LL )
      (**(void (__fastcall ***)(int *, __int64))P)(P, 1LL);
  }
  if ( *((_QWORD *)v4 + 8) )
  {
    v10 = WdLogNewEntry5_WdAssertion(P, a2);
    *(_QWORD *)(v10 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *(_QWORD *)v4 = &SetElement::`vftable';
  if ( (v3 & 1) != 0 )
    ExFreePoolWithTag(v4, 0);
  return v4;
}
