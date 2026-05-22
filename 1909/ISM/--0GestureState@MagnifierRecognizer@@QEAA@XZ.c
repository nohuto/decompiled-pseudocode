/*
 * XREFs of ??0GestureState@MagnifierRecognizer@@QEAA@XZ @ 0x180104EA4
 * Callers:
 *     ??0DeviceState@MagnifierProcessor@@QEAA@XZ @ 0x180104DF8 (--0DeviceState@MagnifierProcessor@@QEAA@XZ.c)
 *     ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x1801065E0 (-Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@XZ @ 0x1800D8DF0 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UG.c)
 */

MagnifierRecognizer::GestureState *__fastcall MagnifierRecognizer::GestureState::GestureState(
        MagnifierRecognizer::GestureState *this)
{
  *(_DWORD *)this = 0;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 2) = std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>,0>>::_Buyheadnode();
  return this;
}
