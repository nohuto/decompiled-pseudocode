/*
 * XREFs of ?EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x180027170
 * Callers:
 *     ?OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ @ 0x1800CDB70 (-OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800127B8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoEdgyControllerClientProxy::EdgyGestureDetected(
        BamoEdgyControllerClientProxy *this,
        const unsigned __int16 *a2,
        __int64 a3,
        const struct D2D_VECTOR_2F *a4,
        unsigned __int64 a5,
        const struct D2D_VECTOR_2F *a6)
{
  int v6; // r14d
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // xmm0_8
  unsigned int v15; // [rsp+78h] [rbp-21h] BYREF
  __int64 v16; // [rsp+80h] [rbp-19h]
  __int64 v17; // [rsp+88h] [rbp-11h]
  struct IMessageCallSendHost *v18; // [rsp+90h] [rbp-9h] BYREF
  volatile signed __int32 *v19; // [rsp+98h] [rbp-1h] BYREF
  _QWORD v20[3]; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+37h]
  unsigned int v22; // [rsp+D8h] [rbp+3Fh] BYREF

  v6 = (int)a2;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v19,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v12 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (BamoEdgyControllerClientProxy *)((char *)this + 8),
            &v18,
            &v22,
            &v15);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v17 = (__int64)*a4;
      v13 = (__int64)*a6;
      v20[0] = v22;
      v20[1] = v15;
      v16 = v13;
      v9 = CoreUICallSend(v18, v20, 2LL, 16LL, 0, &unk_18014A9CE, v6);
      goto LABEL_7;
    }
    v11 = (unsigned int)v12;
    v10 = 44217LL;
  }
  else
  {
    v9 = -2018375660;
    v10 = 44210LL;
    v11 = 2276591636LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
    (const char *)v11);
LABEL_7:
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v19);
  return v9;
}
