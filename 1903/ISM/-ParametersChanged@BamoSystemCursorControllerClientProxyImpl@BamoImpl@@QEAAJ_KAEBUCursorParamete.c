/*
 * XREFs of ?ParametersChanged@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_KAEBUCursorParametersInfo@@@Z @ 0x180060CB0
 * Callers:
 *     ?ParametersChanged@BamoSystemCursorControllerClientProxy@@UEAAJ_KAEBUCursorParametersInfo@@@Z @ 0x180060C50 (-ParametersChanged@BamoSystemCursorControllerClientProxy@@UEAAJ_KAEBUCursorParametersInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180023ED0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoSystemCursorControllerClientProxyImpl::ParametersChanged(
        BamoImpl::BamoSystemCursorControllerClientProxyImpl *this,
        __int64 a2,
        const struct CursorParametersInfo *a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  struct IMessageCallSendHost *v6; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v7[2]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v9; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+88h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v3 = -2018375660;
    v4 = 14397LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v6, &v9, &v10);
  if ( v3 < 0 )
  {
    v4 = 14404LL;
    goto LABEL_3;
  }
  v7[0] = v9;
  v7[1] = v10;
  return CoreUICallSend(v6, v7, 2LL, 49LL);
}
