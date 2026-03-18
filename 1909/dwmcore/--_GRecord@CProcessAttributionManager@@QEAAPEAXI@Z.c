/*
 * XREFs of ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1800D719C
 * Callers:
 *     ??_GCProcessAttribution@@UEAAPEAXI@Z @ 0x1800C9490 (--_GCProcessAttribution@@UEAAPEAXI@Z.c)
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1800EB7B0 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     ??1CProcessAttributionManager@@AEAA@XZ @ 0x180177158 (--1CProcessAttributionManager@@AEAA@XZ.c)
 *     _lambda_73f2a4da0cca98f221385d01cc2cbc64_::operator() @ 0x1801772E0 (_lambda_73f2a4da0cca98f221385d01cc2cbc64_--operator().c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004CB8C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 */

CProcessAttributionManager::Record *__fastcall CProcessAttributionManager::Record::`scalar deleting destructor'(
        CProcessAttributionManager::Record *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 16);
  operator delete(this);
  return this;
}
