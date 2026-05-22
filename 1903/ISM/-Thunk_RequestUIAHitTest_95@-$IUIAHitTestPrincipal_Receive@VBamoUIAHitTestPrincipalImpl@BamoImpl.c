/*
 * XREFs of ?Thunk_RequestUIAHitTest_95@?$IUIAHitTestPrincipal_Receive@VBamoUIAHitTestPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180124950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IUIAHitTestPrincipal_Receive<BamoImpl::BamoUIAHitTestPrincipalImpl>::Thunk_RequestUIAHitTest_95(
        BamoImpl::BamoUIAHitTestPrincipalImpl *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoUIAHitTestPrincipalImpl::RequestUIAHitTest(a1, **a2, *a2[1]);
}
