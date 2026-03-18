/*
 * XREFs of ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18002B314
 * Callers:
 *     ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z @ 0x18002AFA8 (-RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18002B208 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z @ 0x1800824E0 (-ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETSOURCES@@PE.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180082990 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x1800BD9D0 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z.c)
 *     ?Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800D6698 (-Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800DD3C8 (-AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1801770C8 (-AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801982B4 (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 *     ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801986FC (-UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 *     ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x1801CDA64 (-InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z.c)
 *     ?GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV?$CWeakReference@VCResource@@@@XZ @ 0x1801DAAE0 (-GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV-$CWeakReference@VCResource@@@@XZ.c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z @ 0x18021EDEC (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x180082D58 (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x97u, 0LL);
    if ( v7 )
      (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    *a2 = v7;
  }
  return v5;
}
