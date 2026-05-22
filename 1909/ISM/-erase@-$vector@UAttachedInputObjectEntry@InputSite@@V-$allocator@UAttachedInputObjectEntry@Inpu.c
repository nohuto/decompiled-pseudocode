/*
 * XREFs of ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x180066CDC
 * Callers:
 *     ?OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180006BE0 (-OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnUIAHitTestInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x1800077D0 (-OnUIAHitTestInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnMPCInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180007900 (-OnMPCInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDropTargetClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180007A30 (-OnDropTargetClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragAreaClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180007B60 (-OnDragAreaClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180007C90 (-OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragManagerClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180007DC0 (-OnDragManagerClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ @ 0x1800081E0 (-OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnActuationClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180008290 (-OnActuationClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnContainerInfoInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000AEB0 (-OnContainerInfoInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnActivationListenerInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000DEB0 (-OnActivationListenerInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??4?$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800669B8 (--4-$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV01.c)
 */

_QWORD *__fastcall std::vector<InputSite::AttachedInputObjectEntry>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rdi
  _QWORD *result; // rax

  v3 = *(_QWORD **)(a1 + 8);
  v4 = (_QWORD *)(a3 + 16);
  if ( (_QWORD *)(a3 + 16) != v3 )
  {
    do
    {
      *(v4 - 2) = *v4;
      Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodeReference>::operator=(v4 - 1, v4 + 1);
      v4 += 2;
    }
    while ( v4 != v3 );
    v3 = *(_QWORD **)(a1 + 8);
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v3 - 1);
  *(_QWORD *)(a1 + 8) -= 16LL;
  result = a2;
  *a2 = a3;
  return result;
}
