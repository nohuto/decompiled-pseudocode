/*
 * XREFs of ?clear@?$list@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@2@@std@@QEAAXXZ @ 0x1802D7868
 * Callers:
 *     ??1?$list@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@2@@std@@QEAA@XZ @ 0x1802D5C4C (--1-$list@U-$pair@$$CBV-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V-$ComPtr@UIVirtualDesktop@Mul.c)
 *     ??1VirtualDesktopDataSource@@UEAA@XZ @ 0x1802D5C74 (--1VirtualDesktopDataSource@@UEAA@XZ.c)
 *     ?UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ @ 0x1802D7290 (-UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>::clear(
        __int64 a1)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rdi

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2 + 3);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2 + 2);
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x20);
      v2 = v3;
    }
    while ( v3 != *(_QWORD **)a1 );
  }
}
