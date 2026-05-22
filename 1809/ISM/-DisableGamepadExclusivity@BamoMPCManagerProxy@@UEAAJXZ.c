/*
 * XREFs of ?DisableGamepadExclusivity@BamoMPCManagerProxy@@UEAAJXZ @ 0x1800DCF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800127B8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoMPCManagerProxy::DisableGamepadExclusivity(BamoMPCManagerProxy *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r9
  int v5; // eax
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF
  struct IMessageCallSendHost *v11; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v12; // [rsp+68h] [rbp+20h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v12,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v5 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (BamoMPCManagerProxy *)((char *)this + 8),
           &v11,
           &v9,
           &v10);
    v2 = v5;
    if ( v5 >= 0 )
    {
      v7[1] = v10;
      v2 = CoreUICallSend(v11, v7, 2LL, 2LL, 4, &unk_18014AFD3, v9);
      goto LABEL_7;
    }
    v4 = (unsigned int)v5;
    v3 = 7541LL;
  }
  else
  {
    v2 = -2018375660;
    v3 = 7534LL;
    v4 = 2276591636LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
    (const char *)v4);
LABEL_7:
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v12);
  return v2;
}
