/*
 * XREFs of ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1800A21D0
 * Callers:
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXP6AX1K_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@Z @ 0x1800A1EC0 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     ??_GCProcessAttribution@@UEAAPEAXI@Z @ 0x1800C9500 (--_GCProcessAttribution@@UEAAPEAXI@Z.c)
 *     ??1CProcessAttributionManager@@AEAA@XZ @ 0x1801788C8 (--1CProcessAttributionManager@@AEAA@XZ.c)
 *     _lambda_73f2a4da0cca98f221385d01cc2cbc64_::operator() @ 0x180178A50 (_lambda_73f2a4da0cca98f221385d01cc2cbc64_--operator().c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800459EC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CProcessAttributionManager::Record *__fastcall CProcessAttributionManager::Record::`scalar deleting destructor'(
        CProcessAttributionManager::Record *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 16);
  operator delete(this, 0xA8uLL);
  return this;
}
