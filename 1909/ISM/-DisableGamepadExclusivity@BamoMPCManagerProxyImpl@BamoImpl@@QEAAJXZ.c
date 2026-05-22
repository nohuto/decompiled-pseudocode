/*
 * XREFs of ?DisableGamepadExclusivity@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJXZ @ 0x1801109A0
 * Callers:
 *     ?DisableGamepadExclusivity@BamoMPCManagerProxy@@UEAAJXZ @ 0x180110960 (-DisableGamepadExclusivity@BamoMPCManagerProxy@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800239F0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoMPCManagerProxyImpl::DisableGamepadExclusivity(
        BamoImpl::BamoMPCManagerProxyImpl *this)
{
  int v1; // ebx
  __int64 v2; // rdx
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+58h] [rbp+10h] BYREF
  struct IMessageCallSendHost *v8; // [rsp+60h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v1 = -2018375660;
    v2 = 9388LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v1);
    return (unsigned int)v1;
  }
  v1 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v8, &v6, &v7);
  if ( v1 < 0 )
  {
    v2 = 9395LL;
    goto LABEL_3;
  }
  v4[0] = v6;
  v4[1] = v7;
  return CoreUICallSend(v8, v4, 2LL, 3LL);
}
