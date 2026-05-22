/*
 * XREFs of ?clear@?$list@IV?$allocator@I@std@@@std@@QEAAXXZ @ 0x1800347E0
 * Callers:
 *     ??1?$list@IV?$allocator@I@std@@@std@@QEAA@XZ @ 0x1800312E4 (--1-$list@IV-$allocator@I@std@@@std@@QEAA@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800313E8 (--1-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_compare@GU-$hash.c)
 *     ??1PenEventsDispatcherPrincipal@@UEAA@XZ @ 0x1800314D0 (--1PenEventsDispatcherPrincipal@@UEAA@XZ.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1800349EC (-erase@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@_ea_1800349EC.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180074C20 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1800790C4 (-clear@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_compare@GU-$.c)
 *     ??1ISMHeatFrameworkHost@@MEAA@XZ @ 0x18007AE00 (--1ISMHeatFrameworkHost@@MEAA@XZ.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUIHeatSystemContextClient@@@Z @ 0x18007B9EC (-erase@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSystemCo.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800A10E0 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@QEAA_KAEBW4_Button@@@Z @ 0x1800A2788 (-erase@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$hash@W4_B_ea_1800A2788.c)
 *     ??_GCustomCursorApplication@@QEAAPEAXI@Z @ 0x1800C91A8 (--_GCustomCursorApplication@@QEAAPEAXI@Z.c)
 *     ??1SystemContextProvider@@MEAA@XZ @ 0x1800D31CC (--1SystemContextProvider@@MEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1800D344C (-clear@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemContextO.c)
 *     ??_ETouchInfoAdapter@@UEAAPEAXI@Z @ 0x180141C7C (--_ETouchInfoAdapter@@UEAAPEAXI@Z.c)
 *     ?EndCurrentSession@TouchInfoAdapter@@UEAAJK@Z @ 0x180141D30 (-EndCurrentSession@TouchInfoAdapter@@UEAAJK@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<unsigned int>::clear(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = *(_QWORD **)a1;
  v3 = **(_QWORD ***)a1;
  *v1 = v1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v3 != *(_QWORD **)a1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x18);
      v3 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
}
