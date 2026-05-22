/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180105AF0
 * Callers:
 *     ??_EDeviceState@MagnifierProcessor@@UEAAPEAXI@Z @ 0x180105120 (--_EDeviceState@MagnifierProcessor@@UEAAPEAXI@Z.c)
 *     ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x180106810 (-Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@2@@Z @ 0x180105A3C (-_Erase@-$_Tree@V-$_Tmap_traits@KUContactState@MagnifierRecognizer@@U-$less@K@std@@V-$allocator@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::clear(
        _QWORD *a1)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *a1;
  std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Erase(
    (__int64)a1,
    *(void **)(*a1 + 8LL));
  *(_QWORD *)(*a1 + 8LL) = v2;
  *(_QWORD *)*a1 = v2;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = v2;
  a1[1] = 0LL;
  return result;
}
