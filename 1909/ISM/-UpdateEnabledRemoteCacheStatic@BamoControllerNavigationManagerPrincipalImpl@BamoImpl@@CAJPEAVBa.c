/*
 * XREFs of ?UpdateEnabledRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180005460
 * Callers:
 *     ?SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z @ 0x1800057C0 (-SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdateEnabledRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoControllerNavigationManagerPrincipalImpl *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // eax
  int v8; // [rsp+20h] [rbp-38h]
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL);
  if ( *(_QWORD *)(v3 + 40) )
  {
    v4 = *(_QWORD *)(v3 + 48);
    v5 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 36LL);
    v9[1] = *((unsigned int *)a2 + 6);
    v9[0] = v5;
    LOWORD(v8) = 0;
    v6 = CoreUICallSend(v4, v9, 2LL, 10LL);
    if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2018375675 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xF42F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v6,
        v8);
      __debugbreak();
    }
  }
  return 0LL;
}
