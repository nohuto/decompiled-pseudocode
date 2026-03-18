/*
 * XREFs of ??1?$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@4@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@@std@@QEAA@XZ @ 0x1800D863C
 * Callers:
 *     _dynamic_atexit_destructor_for__CWeakResourceReference::s_weakReferenceMap__ @ 0x1800EDC40 (_dynamic_atexit_destructor_for__CWeakResourceReference--s_weakReferenceMap__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?clear@?$list@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@2@@std@@QEAAXXZ @ 0x1800D9148 (-clear@-$list@U-$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V-$allocator@U-$pair@QEBV.c)
 */

void std::unordered_map<CResource const *,CWeakResourceReference *>::~unordered_map<CResource const *,CWeakResourceReference *>()
{
  if ( qword_18033FFA8 )
  {
    std::_Deallocate<16,0>(
      (void *)qword_18033FFA8,
      (*((_QWORD *)&xmmword_18033FFB0 + 1) - qword_18033FFA8) & 0xFFFFFFFFFFFFFFF8uLL);
    qword_18033FFA8 = 0LL;
    xmmword_18033FFB0 = 0LL;
  }
  std::list<std::pair<CResource const * const,CWeakResourceReference *>>::clear(&qword_18033FF98);
  std::_Deallocate<16,0>((void *)qword_18033FF98, 0x20uLL);
}
