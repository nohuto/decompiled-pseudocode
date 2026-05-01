/*
 * XREFs of ??1?$queue@UpositioningOperationInfo@@V?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@@std@@QEAA@XZ @ 0x180140120
 * Callers:
 *     _FullScreenPositioner::FullScreenPositioner_::_1_::dtor$10 @ 0x18014009B (_FullScreenPositioner--FullScreenPositioner_--_1_--dtor$10.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@IEAAXXZ @ 0x180143618 (-_Tidy@-$deque@UpositioningOperationInfo@@V-$allocator@UpositioningOperationInfo@@@std@@@std@@IE.c)
 */

void __fastcall std::queue<positioningOperationInfo>::~queue<positioningOperationInfo,std::deque<positioningOperationInfo>>(
        void **a1)
{
  std::deque<positioningOperationInfo>::_Tidy();
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x10);
  *a1 = 0LL;
}
