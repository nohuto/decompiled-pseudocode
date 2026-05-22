/*
 * XREFs of ?SetConstant@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x1801142CC
 * Callers:
 *     ?SetConstant@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x180114240 (-SetConstant@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBa.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180023ED0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180023F54 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientProxyImpl::SetConstant(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        struct Microsoft::Bamo::BamoPrincipal *a5)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  unsigned int v12; // [rsp+50h] [rbp-11h] BYREF
  struct IMessageCallSendHost *v13; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp-1h] BYREF
  __int128 v15; // [rsp+70h] [rbp+Fh]
  __int64 v16; // [rsp+80h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]
  unsigned int v18; // [rsp+C0h] [rbp+5Fh] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL) + 40LL) )
  {
    v7 = -2018375660;
    v8 = 8340LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  if ( a5 )
    Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
      (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1,
      a5);
  v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
         (Microsoft::BamoImpl::BamoProxyImpl *)a1,
         &v13,
         &v18,
         &v12);
  if ( v7 < 0 )
  {
    v8 = 8348LL;
    goto LABEL_3;
  }
  v10 = *a4;
  v11 = *((_QWORD *)a4 + 2);
  v14[0] = v18;
  v14[1] = v12;
  v15 = v10;
  v16 = v11;
  return CoreUICallSend(v13, v14, 2LL, 1LL);
}
