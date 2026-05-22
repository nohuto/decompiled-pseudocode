/*
 * XREFs of ?GetActiveInputTypeList@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJPEAVBamoAsyncResult_string_Principal@@@Z @ 0x180110F44
 * Callers:
 *     ?GetActiveInputTypeList@BamoMPCConstantManagerClientProxy@@UEAAJPEAVBamoAsyncResult_string_Principal@@@Z @ 0x180110EE0 (-GetActiveInputTypeList@BamoMPCConstantManagerClientProxy@@UEAAJPEAVBamoAsyncResult_string_Princ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180023ED0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180023F54 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientProxyImpl::GetActiveInputTypeList(
        BamoImpl::BamoMPCConstantManagerClientProxyImpl *this,
        struct BamoAsyncResult_string_Principal *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v8; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+70h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v10; // [rsp+78h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v3 = -2018375660;
    v4 = 8433LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  if ( a2 )
    Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
      (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
      a2);
  v3 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v10, &v8, &v9);
  if ( v3 < 0 )
  {
    v4 = 8441LL;
    goto LABEL_3;
  }
  v6[0] = v8;
  v6[1] = v9;
  return CoreUICallSend(v10, v6, 2LL, 1LL);
}
