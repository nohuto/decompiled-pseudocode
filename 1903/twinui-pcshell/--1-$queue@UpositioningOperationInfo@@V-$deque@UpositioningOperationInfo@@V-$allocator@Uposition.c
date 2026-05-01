/*
 * XREFs of ??1?$queue@UpositioningOperationInfo@@V?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@@std@@QEAA@XZ @ 0x18016B870
 * Callers:
 *     _FullScreenPositioner::FullScreenPositioner_::_1_::dtor$10 @ 0x18016B7EA (_FullScreenPositioner--FullScreenPositioner_--_1_--dtor$10.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@IEAAXXZ @ 0x18016F128 (-_Tidy@-$deque@UpositioningOperationInfo@@V-$allocator@UpositioningOperationInfo@@@std@@@std@@IE.c)
 */

void __fastcall std::queue<positioningOperationInfo>::~queue<positioningOperationInfo,std::deque<positioningOperationInfo>>(
        void **a1)
{
  std::deque<positioningOperationInfo>::_Tidy();
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x10);
  *a1 = 0LL;
}
