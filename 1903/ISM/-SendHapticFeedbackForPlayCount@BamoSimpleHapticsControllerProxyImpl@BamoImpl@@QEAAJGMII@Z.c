/*
 * XREFs of ?SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJGMII@Z @ 0x180062834
 * Callers:
 *     ?SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerProxy@@UEAAJGMII@Z @ 0x1800627C0 (-SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerProxy@@UEAAJGMII@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180023ED0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoSimpleHapticsControllerProxyImpl::SendHapticFeedbackForPlayCount(
        BamoImpl::BamoSimpleHapticsControllerProxyImpl *this,
        __int64 a2,
        float a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  unsigned int v6; // [rsp+50h] [rbp-38h] BYREF
  struct IMessageCallSendHost *v7; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v8[2]; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v10; // [rsp+90h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v3 = -2018375660;
    v4 = 12595LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v7, &v10, &v6);
  if ( v3 < 0 )
  {
    v4 = 12602LL;
    goto LABEL_3;
  }
  v8[0] = v10;
  v8[1] = v6;
  return CoreUICallSend(v7, v8, 2LL, 43LL);
}
