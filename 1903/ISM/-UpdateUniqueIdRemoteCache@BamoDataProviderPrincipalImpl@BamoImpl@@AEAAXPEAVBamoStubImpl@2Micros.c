/*
 * XREFs of ?UpdateUniqueIdRemoteCache@BamoDataProviderPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180023CE4
 * Callers:
 *     ?SendMaterializeProxy@BamoDataProviderPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180023D70 (-SendMaterializeProxy@BamoDataProviderPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEA.c)
 *     ?UpdateUniqueIdRemoteCacheStatic@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800D2250 (-UpdateUniqueIdRemoteCacheStatic@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Mi.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoDataProviderPrincipalImpl::UpdateUniqueIdRemoteCache(
        BamoImpl::BamoDataProviderPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  unsigned int v4; // eax
  int v5; // [rsp+20h] [rbp-38h]
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v2 + 40) )
  {
    v3 = *(unsigned int *)(*((_QWORD *)a2 + 5) + 36LL);
    v6[1] = *((unsigned int *)this + 6);
    v6[0] = v3;
    LOWORD(v5) = 2;
    v4 = CoreUICallSend(*(_QWORD *)(v2 + 48), v6, 2LL, 1LL);
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2018375675 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1D79,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)v4,
        v5);
      JUMPOUT(0x18003E4E4LL);
    }
  }
}
