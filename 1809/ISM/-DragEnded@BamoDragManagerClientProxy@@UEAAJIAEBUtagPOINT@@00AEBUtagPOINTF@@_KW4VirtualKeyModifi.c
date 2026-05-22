/*
 * XREFs of ?DragEnded@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800136E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800127B8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoDragManagerClientProxy::DragEnded(
        __int64 a1,
        int a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v16; // [rsp+70h] [rbp-29h] BYREF
  __int64 v17; // [rsp+78h] [rbp-21h]
  __int64 v18; // [rsp+80h] [rbp-19h]
  __int64 v19; // [rsp+88h] [rbp-11h]
  __int64 v20; // [rsp+90h] [rbp-9h]
  struct IMessageCallSendHost *v21; // [rsp+98h] [rbp-1h] BYREF
  volatile signed __int32 *v22; // [rsp+A0h] [rbp+7h] BYREF
  _QWORD v23[3]; // [rsp+A8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+3Fh]
  unsigned int v25; // [rsp+E0h] [rbp+47h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v22,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 24LL) + 40LL) )
  {
    v13 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)(a1 + 8),
            &v21,
            &v25,
            &v16);
    v10 = v13;
    if ( v13 >= 0 )
    {
      v17 = *a6;
      v14 = *a5;
      v19 = *a4;
      v20 = *a3;
      v23[0] = v25;
      v23[1] = v16;
      v18 = v14;
      v10 = CoreUICallSend(v21, v23, 2LL, 11LL, 2, &unk_18014A9A9, a2);
      goto LABEL_7;
    }
    v12 = (unsigned int)v13;
    v11 = 41973LL;
  }
  else
  {
    v10 = -2018375660;
    v11 = 41966LL;
    v12 = 2276591636LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
    (const char *)v12);
LABEL_7:
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v22);
  return v10;
}
