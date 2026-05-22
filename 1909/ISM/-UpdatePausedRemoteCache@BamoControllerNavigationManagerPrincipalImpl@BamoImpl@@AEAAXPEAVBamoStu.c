/*
 * XREFs of ?UpdatePausedRemoteCache@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180073D80
 * Callers:
 *     ?UpdatePausedRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180073E18 (-UpdatePausedRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBam.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdatePausedRemoteCache(
        BamoImpl::BamoControllerNavigationManagerPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  unsigned int v4; // eax
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v2 + 40) )
  {
    v3 = *(unsigned int *)(*((_QWORD *)a2 + 5) + 36LL);
    v5[1] = *((unsigned int *)this + 6);
    v5[0] = v3;
    v4 = CoreUICallSend(*(_QWORD *)(v2 + 48), v5, 2LL, 10LL);
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2018375675 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        62549LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v4);
      __debugbreak();
    }
  }
}
