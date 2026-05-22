/*
 * XREFs of ?ParametersChanged@BamoSystemCursorControllerClientProxy@@UEAAJ_KAEBUCursorParametersInfo@@@Z @ 0x180015AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800127B8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoSystemCursorControllerClientProxy::ParametersChanged(
        BamoSystemCursorControllerClientProxy *this,
        int a2,
        const struct CursorParametersInfo *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // eax
  struct IMessageCallSendHost *v10; // [rsp+48h] [rbp-28h] BYREF
  volatile signed __int32 *v11; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v12[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  unsigned int v14; // [rsp+90h] [rbp+20h] BYREF
  unsigned int v15; // [rsp+A8h] [rbp+38h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v11,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (BamoSystemCursorControllerClientProxy *)((char *)this + 8),
           &v10,
           &v14,
           &v15);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v12[0] = v14;
      v12[1] = v15;
      v5 = CoreUICallSend(v10, v12, 2LL, 34LL, 3, &unk_18014AA2A, a2);
      goto LABEL_7;
    }
    v7 = (unsigned int)v8;
    v6 = 51491LL;
  }
  else
  {
    v5 = -2018375660;
    v6 = 51484LL;
    v7 = 2276591636LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
    (const char *)v7);
LABEL_7:
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v11);
  return v5;
}
