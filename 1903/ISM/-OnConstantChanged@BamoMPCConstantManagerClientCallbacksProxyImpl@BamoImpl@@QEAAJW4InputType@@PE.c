/*
 * XREFs of ?OnConstantChanged@BamoMPCConstantManagerClientCallbacksProxyImpl@BamoImpl@@QEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z @ 0x180111E14
 * Callers:
 *     ?OnConstantChanged@BamoMPCConstantManagerClientCallbacksProxy@@UEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z @ 0x180111DA0 (-OnConstantChanged@BamoMPCConstantManagerClientCallbacksProxy@@UEAAJW4InputType@@PEBGAEBUtagPROP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180023ED0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientCallbacksProxyImpl::OnConstantChanged(
        Microsoft::BamoImpl::BamoProxyImpl *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int128 *a5)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  unsigned int v13; // [rsp+58h] [rbp-21h] BYREF
  struct IMessageCallSendHost *v14; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v15[2]; // [rsp+68h] [rbp-11h] BYREF
  __int128 v16; // [rsp+78h] [rbp-1h]
  __int64 v17; // [rsp+88h] [rbp+Fh]
  __int128 v18; // [rsp+98h] [rbp+1Fh]
  __int64 v19; // [rsp+A8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]
  unsigned int v21; // [rsp+D8h] [rbp+5Fh] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) + 24LL) + 40LL) )
  {
    v6 = -2018375660;
    v7 = 8830LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(a1, &v14, &v21, &v13);
  if ( v6 < 0 )
  {
    v7 = 8837LL;
    goto LABEL_3;
  }
  v9 = *a5;
  v10 = *((_QWORD *)a5 + 2);
  v15[0] = v21;
  v15[1] = v13;
  v16 = v9;
  v11 = *a4;
  v17 = v10;
  v12 = *((_QWORD *)a4 + 2);
  v18 = v11;
  v19 = v12;
  return CoreUICallSend(v14, v15, 2LL, 2LL);
}
