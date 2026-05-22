/*
 * XREFs of ?GripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z @ 0x18007A490
 * Callers:
 *     ?CallGripStatusForPanelReceivedOnStub@BamoHeatGripServicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUHeatGripReport@@@Z @ 0x18007A3F0 (-CallGripStatusForPanelReceivedOnStub@BamoHeatGripServicePrincipalImpl@BamoImpl@@CAJPEAVBamoStub.c)
 *     ?GripStatusForPanelReceived@BamoHeatGripServiceStub@@UEAAJAEBUHeatGripReport@@@Z @ 0x18007A440 (-GripStatusForPanelReceived@BamoHeatGripServiceStub@@UEAAJAEBUHeatGripReport@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18007A5D4 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 */

__int64 __fastcall BamoImpl::BamoHeatGripServiceStubImpl::GripStatusForPanelReceived(
        BamoImpl::BamoHeatGripServiceStubImpl *this,
        const struct HeatGripReport *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  _QWORD v8[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v9; // [rsp+50h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  unsigned int v12; // [rsp+90h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+A0h] [rbp+30h] BYREF
  struct IMessageCallSendHost *v14; // [rsp+A8h] [rbp+38h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 24LL) + 40LL) )
  {
    v3 = -2018375660;
    v4 = 2399LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v14, &v12, &v13);
  if ( v3 < 0 )
  {
    v4 = 2406LL;
    goto LABEL_3;
  }
  v6 = *(_OWORD *)a2;
  v8[0] = v12;
  v7 = *((_QWORD *)a2 + 2);
  v8[1] = v13;
  v9 = v6;
  v10 = v7;
  return CoreUICallSend(v14, v8, 2LL, 24LL);
}
