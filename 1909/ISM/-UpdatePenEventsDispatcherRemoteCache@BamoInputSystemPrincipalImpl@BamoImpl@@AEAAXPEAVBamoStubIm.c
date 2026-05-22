/*
 * XREFs of ?UpdatePenEventsDispatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18002EC30
 * Callers:
 *     ?SendMaterializeProxy@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800030C0 (-SendMaterializeProxy@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAV.c)
 *     ?SetPenEventsDispatcher@BamoInputSystemPrincipal@@UEAAXPEAVBamoPenEventsDispatcherPrincipal@@@Z @ 0x18002EB80 (-SetPenEventsDispatcher@BamoInputSystemPrincipal@@UEAAXPEAVBamoPenEventsDispatcherPrincipal@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18004E300 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEAVBaseBamoPeer@53@@Z @ 0x1800654F0 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEA.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdatePenEventsDispatcherRemoteCache(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int64 v4; // rdi
  struct Microsoft::Bamo::BamoPrincipal *v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // eax
  unsigned int v8; // eax
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v4 + 40) )
  {
    v5 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 17);
    if ( v5 )
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v5,
        *(struct Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 5) + 16LL));
    v6 = *(unsigned int *)(*((_QWORD *)a2 + 5) + 36LL);
    v9[1] = *((unsigned int *)this + 6);
    v9[0] = v6;
    v7 = CoreUICallSend(*(_QWORD *)(v4 + 48), v9, 2LL, 32LL);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2018375675 )
    {
      v8 = wil::verify_hresult<long>(v7);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        7077LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
        (const char *)v8);
      JUMPOUT(0x18002ECFALL);
    }
  }
}
