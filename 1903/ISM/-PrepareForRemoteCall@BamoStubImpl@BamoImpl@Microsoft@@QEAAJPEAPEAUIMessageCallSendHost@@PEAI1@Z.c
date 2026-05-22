/*
 * XREFs of ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18007A5D4
 * Callers:
 *     ?GripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z @ 0x18007A490 (-GripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z.c)
 *     ?AddDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x1800CEC34 (-AddDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 *     ?RemoveDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x1800D0A94 (-RemoveDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 *     ?SetBooleanValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJI_N@Z @ 0x1800D0E8C (-SetBooleanValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJI_N@Z.c)
 *     ?SetColorValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x1800D0FF8 (-SetColorValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 *     ?SetMatrix3x2Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800D117C (-SetMatrix3x2Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z @ 0x1800D12BC (-SetMatrix4x4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z.c)
 *     ?SetQuaternionValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x1800D1438 (-SetQuaternionValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 *     ?SetScalarValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIM@Z @ 0x1800D167C (-SetScalarValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIM@Z.c)
 *     ?SetVector2Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMM@Z @ 0x1800D18AC (-SetVector2Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMM@Z.c)
 *     ?SetVector3Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMM@Z @ 0x1800D1A2C (-SetVector3Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMM@Z.c)
 *     ?SetVector4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x1800D1BD8 (-SetVector4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 *     ?UIAHitTestResponse@BamoUIAHitTestStubImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z @ 0x1801249C0 (-UIAHitTestResponse@BamoUIAHitTestStubImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z.c)
 *     ?RemoteClear@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJXZ @ 0x1801288E0 (-RemoteClear@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft.c)
 *     ?RemoteInsert@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoPenDevicePrincipal@@@Z @ 0x180128A00 (-RemoteInsert@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsof.c)
 *     ?RemoteRemove@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJI@Z @ 0x180128B3C (-RemoteRemove@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsof.c)
 *     ?RemoteReplace@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoPenDevicePrincipal@@@Z @ 0x180128C70 (-RemoteReplace@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microso.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(
        Microsoft::BamoImpl::BamoStubImpl *this,
        struct IMessageCallSendHost **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 5);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
  if ( *((_BYTE *)this + 32) && *(_QWORD *)(v5 + 40) )
  {
    *a2 = *(struct IMessageCallSendHost **)(v5 + 48);
    *a3 = *(_DWORD *)(v4 + 36);
    result = 0LL;
    *a4 = *(_DWORD *)(*((_QWORD *)this + 3) + 24LL);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x122,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamostub.inl",
      (const char *)0x87B20805LL);
    return 2276591621LL;
  }
  return result;
}
