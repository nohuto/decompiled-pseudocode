/*
 * XREFs of ?clear@?$list@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@2@@std@@QEAAXXZ @ 0x1800564BC
 * Callers:
 *     ??1?$list@U?$pair@$$CBK_K@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x1800535B8 (--1-$list@U-$pair@$$CBK_K@std@@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ.c)
 *     ??1MPCInputRouter@@EEAA@XZ @ 0x1800535E0 (--1MPCInputRouter@@EEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180056484 (-clear@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 *     ??1?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x18006A514 (--1-$unordered_map@K_KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@.c)
 *     ??1DragNDropProcessor@@EEAA@XZ @ 0x18006A568 (--1DragNDropProcessor@@EEAA@XZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18006E364 (-erase@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$all.c)
 *     ??1ControllerNavigationManager@@UEAA@XZ @ 0x180072118 (--1ControllerNavigationManager@@UEAA@XZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x180074088 (-erase@-$_Hash@V-$_Umap_traits@KPEAVControllerProcessor@@V-$_Uhash_compare@KU-$hash@K@std@@U-$eq.c)
 *     ??1InputStateManager@@MEAA@XZ @ 0x180092478 (--1InputStateManager@@MEAA@XZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x180092FFC (-erase@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equa.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x1800C23D8 (--1DWMInputRouter@@MEAA@XZ.c)
 *     ??1DragNDropProcessorLegacy@@EEAA@XZ @ 0x1800FE3AC (--1DragNDropProcessorLegacy@@EEAA@XZ.c)
 *     ??_EInputInfoValidator@@UEAAPEAXI@Z @ 0x180142DA0 (--_EInputInfoValidator@@UEAAPEAXI@Z.c)
 *     ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@@Z @ 0x180142EE8 (-ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<unsigned long const,InputInfoValidator::PointerState>>::clear(__int64 a1)
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
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x20);
      v3 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
}
