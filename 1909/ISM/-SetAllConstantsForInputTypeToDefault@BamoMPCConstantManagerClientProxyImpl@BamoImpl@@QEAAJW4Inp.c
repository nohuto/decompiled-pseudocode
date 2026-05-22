/*
 * XREFs of ?SetAllConstantsForInputTypeToDefault@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x180113FC0
 * Callers:
 *     ?SetAllConstantsForInputTypeToDefault@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x180113F50 (-SetAllConstantsForInputTypeToDefault@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEAVB.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800239F0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180023A74 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientProxyImpl::SetAllConstantsForInputTypeToDefault(
        __int64 a1,
        __int64 a2,
        struct Microsoft::Bamo::BamoPrincipal *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  struct IMessageCallSendHost *v7; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v10; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL) + 40LL) )
  {
    v4 = -2018375660;
    v5 = 8387LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  if ( a3 )
    Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
      (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1,
      a3);
  v4 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
         (Microsoft::BamoImpl::BamoProxyImpl *)a1,
         &v7,
         &v10,
         &v11);
  if ( v4 < 0 )
  {
    v5 = 8395LL;
    goto LABEL_3;
  }
  v8[0] = v10;
  v8[1] = v11;
  return CoreUICallSend(v7, v8, 2LL, 1LL);
}
