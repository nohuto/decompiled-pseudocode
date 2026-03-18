/*
 * XREFs of ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C0019F84
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00FC77C (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?SetContainer@?$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C0005A40 (-SetContainer@-$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCESET *__fastcall DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(DMMVIDPNSOURCESET *this, struct DMMVIDPN *const a2)
{
  char *v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0LL;
  v3 = (char *)this + 8;
  *(_QWORD *)v3 = &DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::`vftable';
  *((_QWORD *)v3 + 3) = v3 + 16;
  *((_QWORD *)v3 + 2) = v3 + 16;
  *((_DWORD *)v3 + 10) = 2;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 22) = 1833172998;
  *(_QWORD *)this = &DMMVIDPNTARGETSET::`vftable'{for `IndexedSet<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNTARGETSET::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGETSET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETSET>'};
  if ( (**(unsigned __int8 (__fastcall ***)(char *))v3)(v3) )
    ContainedBy<DMMVIDPN>::SetContainer((__int64)this + 64, (__int64)a2, v7);
  else
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5) + 24) = *((int *)this + 4);
  return this;
}
