/*
 * XREFs of ?CallOnUnregisterErrorOnStub@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I@Z @ 0x18016DBE8
 * Callers:
 *     ?BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18016DB08 (-BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE364 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnUnregisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x18016DE0C (-OnUnregisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::CallOnUnregisterErrorOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        unsigned int a2)
{
  unsigned int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = BamoImpl::BamoDataProviderRegistrarStubImpl::OnUnregisterError(a1, a2);
  if ( (int)(v2 + 0x80000000) >= 0 && v2 != -2018375675 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2062,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)v2);
    __debugbreak();
  }
  return 0LL;
}
