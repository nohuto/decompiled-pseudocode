/*
 * XREFs of ?CallAddDataSourceOnStub@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAVBamoDataSourcePrincipal@@@Z @ 0x18009A200
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?AddDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x18009A340 (-AddDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderPrincipalImpl::CallAddDataSourceOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoDataSourcePrincipal *a2)
{
  unsigned int v2; // eax
  unsigned int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = BamoImpl::BamoDataProviderStubImpl::AddDataSource(a1, a2);
  if ( (int)(v2 + 0x80000000) >= 0 && v2 != -2018375675 )
  {
    v4 = wil::verify_hresult<long>(v2);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1D34,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)v4);
    JUMPOUT(0x18009A243LL);
  }
  return 0LL;
}
