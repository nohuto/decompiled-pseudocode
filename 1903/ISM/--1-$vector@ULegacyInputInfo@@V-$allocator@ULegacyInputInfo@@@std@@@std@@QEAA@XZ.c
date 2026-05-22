/*
 * XREFs of ??1?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAA@XZ @ 0x180093CCC
 * Callers:
 *     _MPCRawInputProvider::OnInputReceived_::_1_::dtor$0 @ 0x180094AD1 (_MPCRawInputProvider--OnInputReceived_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<LegacyInputInfo>::~vector<LegacyInputInfo>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(2032 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v2) / 2032LL)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
