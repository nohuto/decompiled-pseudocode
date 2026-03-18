/*
 * XREFs of ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C007CC80
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0001140 (NtUpdateInputSinkTransforms.c)
 *     NtDuplicateCompositionInputSink @ 0x1C0001650 (NtDuplicateCompositionInputSink.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001728 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     NtQueryCompositionInputSinkViewId @ 0x1C0001A00 (NtQueryCompositionInputSinkViewId.c)
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBU_InputHitTestResult@@@Z @ 0x1C0003DB0 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBU_InputHitTestResult@@@Z.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C0036960 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtCompositionSetDropTarget @ 0x1C00794C0 (NtCompositionSetDropTarget.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C0079BF8 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     NtQueryCompositionInputSink @ 0x1C007A960 (NtQueryCompositionInputSink.c)
 *     NtQueryCompositionInputSinkLuid @ 0x1C008D220 (NtQueryCompositionInputSinkLuid.c)
 *     NtQueryCompositionInputIsImplicit @ 0x1C0092C40 (NtQueryCompositionInputIsImplicit.c)
 *     NtUserAddVisualIdentifier @ 0x1C0113EF0 (NtUserAddVisualIdentifier.c)
 *     ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C011C760 (-GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C017FFF0 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C007CCC0 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CompositionInputObject::ResolveHandle(
        void *a1,
        __int64 a2,
        __int64 a3,
        struct CompositionInputObject **a4)
{
  __int64 result; // rax
  struct CompositionInputObject *v6; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  result = CompositionObject::ResolveHandle(a1, a2, a3, 2LL, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
