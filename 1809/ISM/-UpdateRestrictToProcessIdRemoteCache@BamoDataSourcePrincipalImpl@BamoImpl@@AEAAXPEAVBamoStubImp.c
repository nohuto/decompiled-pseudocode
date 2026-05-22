/*
 * XREFs of ?UpdateRestrictToProcessIdRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18009ABD0
 * Callers:
 *     ?SendMaterializeProxy@BamoDataSourcePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18009A7C0 (-SendMaterializeProxy@BamoDataSourcePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVB.c)
 *     ?UpdateRestrictToProcessIdRemoteCacheStatic@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18009ABB0 (-UpdateRestrictToProcessIdRemoteCacheStatic@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStu.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall BamoImpl::BamoDataSourcePrincipalImpl::UpdateRestrictToProcessIdRemoteCache(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int64 v2; // r10
  __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // eax
  int v6; // [rsp+30h] [rbp-28h]
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v2 + 40) )
  {
    v6 = *((_DWORD *)this + 12);
    v3 = *((unsigned int *)this + 6);
    v7[0] = *(unsigned int *)(*((_QWORD *)a2 + 5) + 36LL);
    v7[1] = v3;
    v4 = CoreUICallSend(*(_QWORD *)(v2 + 48), v7, 2LL, 5LL, 10, &unk_18014BF1D, v6);
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2018375675 )
    {
      v5 = wil::verify_hresult<long>(v4);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2418,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)v5);
      JUMPOUT(0x18009AC66LL);
    }
  }
}
