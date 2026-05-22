/*
 * XREFs of ?CustomCursorShapeAnimationCreated@BamoCustomCursorControllerClientProxy@@UEAAJ_K00@Z @ 0x180013190
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800127B8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoCustomCursorControllerClientProxy::CustomCursorShapeAnimationCreated(
        BamoCustomCursorControllerClientProxy *this,
        int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // eax
  unsigned int v9; // [rsp+50h] [rbp-38h] BYREF
  struct IMessageCallSendHost *v10; // [rsp+58h] [rbp-30h] BYREF
  volatile signed __int32 *v11; // [rsp+60h] [rbp-28h] BYREF
  _QWORD v12[3]; // [rsp+68h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v14; // [rsp+90h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v11,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (BamoCustomCursorControllerClientProxy *)((char *)this + 8),
           &v10,
           &v14,
           &v9);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v12[0] = v14;
      v12[1] = v9;
      v4 = CoreUICallSend(v10, v12, 2LL, 9LL, 2, &unk_18014A98D, a2);
      goto LABEL_7;
    }
    v6 = (unsigned int)v7;
    v5 = 41034LL;
  }
  else
  {
    v4 = -2018375660;
    v5 = 41027LL;
    v6 = 2276591636LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
    (const char *)v6);
LABEL_7:
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v11);
  return v4;
}
