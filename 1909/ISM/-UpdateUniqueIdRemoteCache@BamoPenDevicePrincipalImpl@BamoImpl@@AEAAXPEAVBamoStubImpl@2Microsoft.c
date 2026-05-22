/*
 * XREFs of ?UpdateUniqueIdRemoteCache@BamoPenDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18012A950
 * Callers:
 *     ?SendMaterializeProxy@BamoPenDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18012A530 (-SendMaterializeProxy@BamoPenDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBa.c)
 *     ?UpdateUniqueIdRemoteCacheStatic@BamoPenDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012A9F0 (-UpdateUniqueIdRemoteCacheStatic@BamoPenDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Micro.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoPenDevicePrincipalImpl::UpdateUniqueIdRemoteCache(
        BamoImpl::BamoPenDevicePrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int64 v2; // r10
  __int128 v3; // xmm0
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // eax
  _QWORD v7[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v8; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v2 + 40) )
  {
    v3 = *(_OWORD *)((char *)this + 40);
    v4 = *(unsigned int *)(*((_QWORD *)a2 + 5) + 36LL);
    v7[1] = *((unsigned int *)this + 6);
    v7[0] = v4;
    v5 = *(_QWORD *)(v2 + 48);
    v8 = v3;
    v6 = CoreUICallSend(v5, v7, 2LL, 38LL);
    if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2018375675 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        9696LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v6);
      __debugbreak();
    }
  }
}
