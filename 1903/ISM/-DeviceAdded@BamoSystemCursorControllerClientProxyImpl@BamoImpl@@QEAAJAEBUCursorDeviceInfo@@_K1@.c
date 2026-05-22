/*
 * XREFs of ?DeviceAdded@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJAEBUCursorDeviceInfo@@_K1@Z @ 0x18005C95C
 * Callers:
 *     ?DeviceAdded@BamoSystemCursorControllerClientProxy@@UEAAJAEBUCursorDeviceInfo@@_K1@Z @ 0x18005C8F0 (-DeviceAdded@BamoSystemCursorControllerClientProxy@@UEAAJAEBUCursorDeviceInfo@@_K1@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180023ED0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoSystemCursorControllerClientProxyImpl::DeviceAdded(
        BamoImpl::BamoSystemCursorControllerClientProxyImpl *this,
        const struct CursorDeviceInfo *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int128 v6; // xmm0
  unsigned int v7; // [rsp+50h] [rbp-48h] BYREF
  struct IMessageCallSendHost *v8; // [rsp+58h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+60h] [rbp-38h] BYREF
  __int128 v10; // [rsp+70h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v12; // [rsp+A0h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v3 = -2018375660;
    v4 = 14332LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v8, &v12, &v7);
  if ( v3 < 0 )
  {
    v4 = 14339LL;
    goto LABEL_3;
  }
  v6 = *(_OWORD *)a2;
  v9[0] = v12;
  v9[1] = v7;
  v10 = v6;
  return CoreUICallSend(v8, v9, 2LL, 49LL);
}
