/*
 * XREFs of ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800A0000
 * Callers:
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18009FBD0 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z @ 0x18009FF5C (-RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z @ 0x1800BD160 (-ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800BD464 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x1800BD8C0 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z.c)
 *     ?Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800EA2F0 (-Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18014AF64 (-AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18014B054 (-AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x18016FE44 (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 *     ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x18017028C (-UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z @ 0x18019FF1C (-InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z.c)
 *     ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x1801B8E00 (-InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z.c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z @ 0x1801E53C8 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x1800BD9C0 (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWeakReference<CVisual>::Create(struct CResource *a1, struct CWeakResourceReference **a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  struct CWeakResourceReference *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = CWeakResourceReference::Get(a1, &v7);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x99u);
    if ( v7 )
      (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    *a2 = v7;
  }
  return v5;
}
