/*
 * XREFs of ?UpdateDragNDropContextualProcessorRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180065AC0
 * Callers:
 *     ?UpdateDragNDropContextualProcessorRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180065B98 (-UpdateDragNDropContextualProcessorRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJP.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEAVBaseBamoPeer@53@@Z @ 0x180065750 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEA.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateDragNDropContextualProcessorRemoteCache(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int64 v4; // rdi
  struct Microsoft::Bamo::BamoPrincipal *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // eax
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v4 + 40) )
  {
    v5 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 5);
    if ( v5 )
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v5,
        *(struct Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 5) + 16LL));
    v6 = *((unsigned int *)this + 6);
    v9[0] = *(unsigned int *)(*((_QWORD *)a2 + 5) + 36LL);
    v7 = *(_QWORD *)(v4 + 48);
    v9[1] = v6;
    v8 = CoreUICallSend(v7, v9, 2LL, 32LL);
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2018375675 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        6597LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
        (const char *)v8);
      __debugbreak();
    }
  }
}
