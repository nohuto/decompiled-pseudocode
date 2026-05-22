/*
 * XREFs of ?OnInteractiveIntentGesture@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJAEBULegacyDeviceInfo@@IIII_KI@Z @ 0x1801127A4
 * Callers:
 *     ?OnInteractiveIntentGesture@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@IIII_KI@Z @ 0x180112710 (-OnInteractiveIntentGesture@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@IIII_KI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800239F0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 */

__int64 __fastcall BamoImpl::BamoMPCManagerClientProxyImpl::OnInteractiveIntentGesture(
        BamoImpl::BamoMPCManagerClientProxyImpl *this,
        const struct LegacyDeviceInfo *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  unsigned int v6[2]; // [rsp+78h] [rbp-90h] BYREF
  struct IMessageCallSendHost *v7; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v8[2]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v9[1568]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+6D0h] [rbp+5C8h]
  unsigned int v11; // [rsp+6D8h] [rbp+5D0h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v3 = -2018375660;
    v4 = 9959LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v7, &v11, v6);
  if ( v3 < 0 )
  {
    v4 = 9966LL;
    goto LABEL_3;
  }
  memcpy_0(v9, a2, sizeof(v9));
  v8[0] = v11;
  v8[1] = v6[0];
  return CoreUICallSend(v7, v8, 2LL, 5LL);
}
