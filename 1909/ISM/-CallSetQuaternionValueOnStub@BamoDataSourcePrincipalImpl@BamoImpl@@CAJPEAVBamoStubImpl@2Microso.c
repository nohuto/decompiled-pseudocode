/*
 * XREFs of ?CallSetQuaternionValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IMMMM@Z @ 0x1800CF8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetQuaternionValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x1800D11F8 (-SetQuaternionValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::CallSetQuaternionValueOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        unsigned int a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  unsigned int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = BamoImpl::BamoDataSourceStubImpl::SetQuaternionValue(a1, a2, a3, a4, a5, a6);
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2018375675 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      9077LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)v6);
    __debugbreak();
  }
  return 0LL;
}
