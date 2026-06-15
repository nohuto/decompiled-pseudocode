/*
 * XREFs of ?FreeNode@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14002A888
 * Callers:
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x14002B3EC (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     ?RemoveAt@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14002F36C (-RemoveAt@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@.c)
 *     ?RemoveHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAVCStreamInstance@@XZ @ 0x14002F3BC (-RemoveHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@Q.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x140034848 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?AdviseVpoDeletion@CProtectedOutputController@@QEAAXPEAVCVirtualProtectedOutput@@@Z @ 0x140036634 (-AdviseVpoDeletion@CProtectedOutputController@@QEAAXPEAVCVirtualProtectedOutput@@@Z.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x1400374B0 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14003DAB8 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?RemoveAt@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14003EBB4 (-RemoveAt@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXPEAU__.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x14002B3EC (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 */

__int64 __fastcall ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::FreeNode(
        __int64 a1,
        __int64 *a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v3 )
    return ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(a1);
  return result;
}
