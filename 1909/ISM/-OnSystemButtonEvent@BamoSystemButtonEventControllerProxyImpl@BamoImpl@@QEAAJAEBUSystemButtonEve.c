/*
 * XREFs of ?OnSystemButtonEvent@BamoSystemButtonEventControllerProxyImpl@BamoImpl@@QEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18002FCE0
 * Callers:
 *     ?OnSystemButtonEvent@BamoSystemButtonEventControllerProxy@@UEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18002FC90 (-OnSystemButtonEvent@BamoSystemButtonEventControllerProxy@@UEAAJAEBUSystemButtonEventInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800239F0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoSystemButtonEventControllerProxyImpl::OnSystemButtonEvent(
        BamoImpl::BamoSystemButtonEventControllerProxyImpl *this,
        const struct SystemButtonEventInfo *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int128 v6; // xmm0
  _QWORD v7[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v8; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v10; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+90h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v12; // [rsp+98h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v3 = -2018375660;
    v4 = 13150LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v12, &v10, &v11);
  if ( v3 < 0 )
  {
    v4 = 13157LL;
    goto LABEL_3;
  }
  v6 = *(_OWORD *)a2;
  v7[0] = v10;
  v7[1] = v11;
  v8 = v6;
  return CoreUICallSend(v12, v7, 2LL, 45LL);
}
