/*
 * XREFs of ?BoundsCrossed@BamoControllerNavigationOverrideProxy@@UEAAJAEBUtagPOINT@@@Z @ 0x18002BC90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800127B8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoControllerNavigationOverrideProxy::BoundsCrossed(
        BamoControllerNavigationOverrideProxy *this,
        const struct tagPOINT *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // eax
  struct IMessageCallSendHost *v9; // [rsp+40h] [rbp-20h] BYREF
  volatile signed __int32 *v10; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v13; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v14; // [rsp+90h] [rbp+30h] BYREF
  __int64 v15; // [rsp+98h] [rbp+38h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v10,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (BamoControllerNavigationOverrideProxy *)((char *)this + 8),
           &v9,
           &v13,
           &v14);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v15 = (__int64)*a2;
      v11[0] = v13;
      v11[1] = v14;
      v4 = CoreUICallSend(v9, v11, 2LL, 7LL, 0, &unk_18014A97B, (unsigned int)&v15);
      goto LABEL_7;
    }
    v6 = (unsigned int)v7;
    v5 = 40509LL;
  }
  else
  {
    v4 = -2018375660;
    v5 = 40502LL;
    v6 = 2276591636LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
    (const char *)v6);
LABEL_7:
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v10);
  return v4;
}
