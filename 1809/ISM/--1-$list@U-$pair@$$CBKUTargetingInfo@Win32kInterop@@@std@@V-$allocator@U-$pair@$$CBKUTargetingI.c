/*
 * XREFs of ??1?$list@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAA@XZ @ 0x180084E50
 * Callers:
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$25 @ 0x180131D85 (_Win32kInterop--Win32kInterop_--_1_--dtor$25.c)
 * Callees:
 *     ?clear@?$list@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAAXXZ @ 0x180084F98 (-clear@-$list@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V-$allocator@U-$pair@$$CBKUTarget.c)
 */

void __fastcall std::list<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>::~list<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>(
        void **a1)
{
  std::list<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>::clear(a1);
  operator delete(*a1, (const struct std::nothrow_t *)0x50);
}
