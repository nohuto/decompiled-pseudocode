/*
 * XREFs of ?PanGestureDetected@BamoMagnifierClientProxy@@UEAAJIIAEBUtagPOINT@@@Z @ 0x1800288EC
 * Callers:
 *     ?PanGestureDetected@MagnifierClientProxy@@UEAAJIIAEBUtagPOINT@@@Z @ 0x180028C70 (-PanGestureDetected@MagnifierClientProxy@@UEAAJIIAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800127B8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoMagnifierClientProxy::PanGestureDetected(
        BamoMagnifierClientProxy *this,
        int a2,
        __int64 a3,
        const struct tagPOINT *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // eax
  unsigned int v12; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-28h]
  struct IMessageCallSendHost *v14; // [rsp+60h] [rbp-20h] BYREF
  volatile signed __int32 *v15; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v16[2]; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  unsigned int v18; // [rsp+A0h] [rbp+20h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v15,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v10 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (BamoMagnifierClientProxy *)((char *)this + 8),
            &v14,
            &v18,
            &v12);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v13 = (__int64)*a4;
      v16[0] = v18;
      v16[1] = v12;
      v7 = CoreUICallSend(v14, v16, 2LL, 29LL, 1, &unk_18014AA16, a2);
      goto LABEL_7;
    }
    v9 = (unsigned int)v10;
    v8 = 49832LL;
  }
  else
  {
    v7 = -2018375660;
    v8 = 49825LL;
    v9 = 2276591636LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
    (const char *)v9);
LABEL_7:
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v15);
  return v7;
}
