/*
 * XREFs of ?UpdateCallbacksRemoteCache@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@AEAAXXZ @ 0x180114C30
 * Callers:
 *     ?SetCallbacks@BamoMPCConstantManagerClientProxy@@UEAAXPEAVBamoMPCConstantManagerClientCallbacksPrincipal@@@Z @ 0x1801141A0 (-SetCallbacks@BamoMPCConstantManagerClientProxy@@UEAAXPEAVBamoMPCConstantManagerClientCallbacksP.c)
 * Callees:
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180023F54 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateCallbacksRemoteCache(
        BamoImpl::BamoMPCConstantManagerClientProxyImpl *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  struct Microsoft::Bamo::BamoPrincipal *v4; // rdx
  unsigned int v5; // eax
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((_QWORD *)this + 2);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 24LL);
  if ( *(_QWORD *)(v3 + 40) )
  {
    v4 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 4);
    if ( v4 )
    {
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
        v4);
      v2 = *((_QWORD *)this + 2);
    }
    v6[0] = *(unsigned int *)(v2 + 36);
    v6[1] = *((unsigned int *)this + 6);
    v5 = CoreUICallSend(*(_QWORD *)(v3 + 48), v6, 2LL, 1LL);
    if ( (int)(v5 + 0x80000000) >= 0 && v5 != -2018375675 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        8519LL,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.MPCManagerBamo.bamo.h",
        (const char *)v5);
      __debugbreak();
    }
  }
}
