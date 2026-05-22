/*
 * XREFs of ?RegisterEdgyControllerClient@BamoEdgyControllerServerProxyImpl@BamoImpl@@QEAAJPEBGPEAVBamoEdgyControllerClientPrincipal@@@Z @ 0x180061CB4
 * Callers:
 *     ?RegisterEdgyControllerClient@BamoEdgyControllerServerProxy@@UEAAJPEBGPEAVBamoEdgyControllerClientPrincipal@@@Z @ 0x180061C40 (-RegisterEdgyControllerClient@BamoEdgyControllerServerProxy@@UEAAJPEBGPEAVBamoEdgyControllerClie.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180023ED0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180023F54 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoEdgyControllerServerProxyImpl::RegisterEdgyControllerClient(
        BamoImpl::BamoEdgyControllerServerProxyImpl *this,
        const unsigned __int16 *a2,
        struct BamoEdgyControllerClientPrincipal *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  struct IMessageCallSendHost *v7; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v8[6]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v10; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+98h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v4 = -2018375660;
    v5 = 2134LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  if ( a3 )
    Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
      (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
      a3);
  v4 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v7, &v10, &v11);
  if ( v4 < 0 )
  {
    v5 = 2142LL;
    goto LABEL_3;
  }
  v8[0] = v10;
  v8[1] = v11;
  return CoreUICallSend(v7, v8, 2LL, 22LL);
}
