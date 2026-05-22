/*
 * XREFs of ?CallSetVector3ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IMMM@Z @ 0x1800CFBE4
 * Callers:
 *     ??$EnumerateStubs@IMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMM@Z_NIMMM@Z @ 0x1800CE43C (--$EnumerateStubs@IMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMM@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetVector3Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMM@Z @ 0x1800D1A2C (-SetVector3Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMM@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::CallSetVector3ValueOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        unsigned int a2,
        float a3,
        float a4,
        float a5)
{
  unsigned int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = BamoImpl::BamoDataSourceStubImpl::SetVector3Value(a1, a2, a3, a4, a5);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -2018375675 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      9019LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)v5);
    __debugbreak();
  }
  return 0LL;
}
