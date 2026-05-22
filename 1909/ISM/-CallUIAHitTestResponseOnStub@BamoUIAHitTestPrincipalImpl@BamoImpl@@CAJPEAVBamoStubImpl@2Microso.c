/*
 * XREFs of ?CallUIAHitTestResponseOnStub@BamoUIAHitTestPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@AEBU_GUID@@@Z @ 0x180124620
 * Callers:
 *     ?BroadcastUIAHitTestResponse@BamoUIAHitTestPrincipalImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z @ 0x180124580 (-BroadcastUIAHitTestResponse@BamoUIAHitTestPrincipalImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UIAHitTestResponse@BamoUIAHitTestStubImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z @ 0x1801249C0 (-UIAHitTestResponse@BamoUIAHitTestStubImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoUIAHitTestPrincipalImpl::CallUIAHitTestResponseOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        const struct _GUID *a2)
{
  unsigned int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = BamoImpl::BamoUIAHitTestStubImpl::UIAHitTestResponse(a1, a2);
  if ( (int)(v2 + 0x80000000) >= 0 && v2 != -2018375675 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      14981LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)v2);
    __debugbreak();
  }
  return 0LL;
}
