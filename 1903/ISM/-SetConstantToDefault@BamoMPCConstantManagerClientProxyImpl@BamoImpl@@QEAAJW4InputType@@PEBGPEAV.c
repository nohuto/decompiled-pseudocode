/*
 * XREFs of ?SetConstantToDefault@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEBGPEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x180114470
 * Callers:
 *     ?SetConstantToDefault@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEBGPEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x1801143F0 (-SetConstantToDefault@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEBGPEAVBamoAsyncHRES.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180023ED0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180023F54 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientProxyImpl::SetConstantToDefault(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct Microsoft::Bamo::BamoPrincipal *a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  unsigned int v8; // [rsp+50h] [rbp-28h] BYREF
  struct IMessageCallSendHost *v9; // [rsp+58h] [rbp-20h] BYREF
  _QWORD v10[2]; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v12; // [rsp+80h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL) + 40LL) )
  {
    v5 = -2018375660;
    v6 = 8411LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( a4 )
    Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
      (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1,
      a4);
  v5 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
         (Microsoft::BamoImpl::BamoProxyImpl *)a1,
         &v9,
         &v12,
         &v8);
  if ( v5 < 0 )
  {
    v6 = 8419LL;
    goto LABEL_3;
  }
  v10[0] = v12;
  v10[1] = v8;
  return CoreUICallSend(v9, v10, 2LL, 1LL);
}
