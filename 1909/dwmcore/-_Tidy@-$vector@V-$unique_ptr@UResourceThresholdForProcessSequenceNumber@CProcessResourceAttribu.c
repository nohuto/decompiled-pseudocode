/*
 * XREFs of ?_Tidy@?$vector@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180177B80
 * Callers:
 *     ??1CProcessResourceAttributionReporter@@AEAA@XZ @ 0x180177A28 (--1CProcessResourceAttributionReporter@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>::_Tidy(
        __int64 a1)
{
  void **v1; // rbx
  void **v3; // rsi

  v1 = *(void ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(void ***)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        if ( *v1 )
          operator delete(*v1);
        ++v1;
      }
      while ( v1 != v3 );
      v1 = *(void ***)a1;
    }
    std::_Deallocate<16,0>(v1, (*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
