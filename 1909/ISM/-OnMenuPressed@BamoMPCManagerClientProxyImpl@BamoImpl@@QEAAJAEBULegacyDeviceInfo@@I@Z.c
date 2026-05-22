/*
 * XREFs of ?OnMenuPressed@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJAEBULegacyDeviceInfo@@I@Z @ 0x180112A70
 * Callers:
 *     ?OnMenuPressed@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@I@Z @ 0x180112A10 (-OnMenuPressed@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800239F0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 */

__int64 __fastcall BamoImpl::BamoMPCManagerClientProxyImpl::OnMenuPressed(
        BamoImpl::BamoMPCManagerClientProxyImpl *this,
        const struct LegacyDeviceInfo *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  struct IMessageCallSendHost *v6; // [rsp+40h] [rbp-648h] BYREF
  _QWORD v7[3]; // [rsp+48h] [rbp-640h] BYREF
  _BYTE v8[1568]; // [rsp+60h] [rbp-628h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+688h] [rbp+0h]
  unsigned int v10; // [rsp+690h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+6A8h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v3 = -2018375660;
    v4 = 9981LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v6, &v10, &v11);
  if ( v3 < 0 )
  {
    v4 = 9988LL;
    goto LABEL_3;
  }
  memcpy_0(v8, a2, sizeof(v8));
  v7[0] = v10;
  v7[1] = v11;
  return CoreUICallSend(v6, v7, 2LL, 5LL);
}
