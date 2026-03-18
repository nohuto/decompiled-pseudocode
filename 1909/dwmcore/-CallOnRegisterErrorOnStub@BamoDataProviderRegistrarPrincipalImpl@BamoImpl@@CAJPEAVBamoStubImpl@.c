/*
 * XREFs of ?CallOnRegisterErrorOnStub@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I@Z @ 0x180194EA4
 * Callers:
 *     ?BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180194D18 (-BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180187DB0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x180194FFC (-OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::CallOnRegisterErrorOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        unsigned int a2)
{
  unsigned int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = BamoImpl::BamoDataProviderRegistrarStubImpl::OnRegisterError(a1, a2);
  if ( (int)(v2 + 0x80000000) >= 0 && v2 != -2018375675 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2049,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)v2);
    __debugbreak();
  }
  return 0LL;
}
