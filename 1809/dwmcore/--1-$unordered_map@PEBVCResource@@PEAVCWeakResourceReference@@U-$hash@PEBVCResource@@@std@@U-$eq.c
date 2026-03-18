/*
 * XREFs of ??1?$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@4@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@@std@@QEAA@XZ @ 0x1800EB730
 * Callers:
 *     _dynamic_atexit_destructor_for__CWeakResourceReference::s_weakReferenceMap__ @ 0x1800F1670 (_dynamic_atexit_destructor_for__CWeakResourceReference--s_weakReferenceMap__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?clear@?$list@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@2@@std@@QEAAXXZ @ 0x1800EA4A4 (-clear@-$list@U-$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V-$allocator@U-$pair@QEBV.c)
 */

void std::unordered_map<CResource const *,CWeakResourceReference *>::~unordered_map<CResource const *,CWeakResourceReference *>()
{
  if ( qword_18030BDC8 )
  {
    std::_Deallocate<16,0>(
      (void *)qword_18030BDC8,
      (*((_QWORD *)&xmmword_18030BDD0 + 1) - qword_18030BDC8) & 0xFFFFFFFFFFFFFFF8uLL);
    qword_18030BDC8 = 0LL;
    xmmword_18030BDD0 = 0LL;
  }
  std::list<std::pair<CResource const * const,CWeakResourceReference *>>::clear((__int64)&qword_18030BDB8);
  std::_Deallocate<16,0>((void *)qword_18030BDB8, 0x20uLL);
}
