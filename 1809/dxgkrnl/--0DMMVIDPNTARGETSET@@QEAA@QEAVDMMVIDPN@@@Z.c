/*
 * XREFs of ??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C0004B68
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00DA040 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?SetContainer@?$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C0018148 (-SetContainer@-$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNTARGETSET *__fastcall DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(DMMVIDPNTARGETSET *this, struct DMMVIDPN *const a2)
{
  char *v3; // rcx

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0LL;
  v3 = (char *)this + 8;
  *(_QWORD *)v3 = &DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::`vftable';
  *((_QWORD *)v3 + 3) = v3 + 16;
  *((_QWORD *)v3 + 2) = v3 + 16;
  *((_DWORD *)v3 + 10) = 2;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 22) = 1833172999;
  *(_QWORD *)this = &DMMVIDPNTARGETSET::`vftable'{for `IndexedSet<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNTARGETSET::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGETSET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETSET>'};
  if ( (**(unsigned __int8 (__fastcall ***)(char *))v3)(v3) )
    ContainedBy<DMMVIDPN>::SetContainer((char *)this + 64, a2);
  else
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 4);
  return this;
}
