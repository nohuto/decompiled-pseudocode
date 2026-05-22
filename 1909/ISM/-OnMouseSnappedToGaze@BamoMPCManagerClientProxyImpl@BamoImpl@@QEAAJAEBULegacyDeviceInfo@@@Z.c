/*
 * XREFs of ?OnMouseSnappedToGaze@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJAEBULegacyDeviceInfo@@@Z @ 0x180112C40
 * Callers:
 *     ?OnMouseSnappedToGaze@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@@Z @ 0x180112BF0 (-OnMouseSnappedToGaze@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800239F0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 */

__int64 __fastcall BamoImpl::BamoMPCManagerClientProxyImpl::OnMouseSnappedToGaze(
        BamoImpl::BamoMPCManagerClientProxyImpl *this,
        const struct LegacyDeviceInfo *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  _QWORD v6[2]; // [rsp+40h] [rbp-638h] BYREF
  _BYTE v7[1576]; // [rsp+50h] [rbp-628h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+678h] [rbp+0h]
  unsigned int v9; // [rsp+680h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+690h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v11; // [rsp+698h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v3 = -2018375660;
    v4 = 10024LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v11, &v9, &v10);
  if ( v3 < 0 )
  {
    v4 = 10031LL;
    goto LABEL_3;
  }
  memcpy_0(v7, a2, 0x620uLL);
  v6[0] = v9;
  v6[1] = v10;
  return CoreUICallSend(v11, v6, 2LL, 5LL);
}
