/*
 * XREFs of ??0CWeakResourceReference@@AEAA@PEAVCResource@@@Z @ 0x1800BDA90
 * Callers:
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x1800BD9C0 (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBQEBVCResource@@$$V@?$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@4@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@_N@1@AEBQEBVCResource@@@Z @ 0x1800C4970 (--$_Try_emplace@AEBQEBVCResource@@$$V@-$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@.c)
 */

CWeakResourceReference *__fastcall CWeakResourceReference::CWeakResourceReference(
        CWeakResourceReference *this,
        struct CResource *a2)
{
  char *v3; // rbx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_DWORD *)this + 2) = 0;
  v3 = (char *)this + 16;
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CWeakResourceReference::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  std::unordered_map<CResource const *,CWeakResourceReference *>::_Try_emplace<CResource const * const &,>(
    0LL,
    v5,
    (char *)this + 16);
  *(_QWORD *)(v5[0] + 24LL) = this;
  *(_DWORD *)(*(_QWORD *)v3 + 32LL) |= 8u;
  return this;
}
