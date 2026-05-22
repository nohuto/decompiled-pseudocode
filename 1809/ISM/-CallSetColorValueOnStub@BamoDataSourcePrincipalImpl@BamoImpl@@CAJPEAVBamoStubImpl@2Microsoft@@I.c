/*
 * XREFs of ?CallSetColorValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IMMMM@Z @ 0x18009AA70
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?SetColorValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x18009B240 (-SetColorValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::CallSetColorValueOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        unsigned int a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  unsigned int v6; // eax
  unsigned int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = BamoImpl::BamoDataSourceStubImpl::SetColorValue(a1, a2, a3, a4, a5, a6);
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2018375675 )
  {
    v8 = wil::verify_hresult<long>(v6);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2392,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)v8);
    JUMPOUT(0x18009AACBLL);
  }
  return 0LL;
}
