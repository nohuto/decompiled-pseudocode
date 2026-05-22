/*
 * XREFs of ?RequestHitTest@BamoTestCommandsProxy@@UEAAJ_J0PEBG@Z @ 0x180015D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800127B8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoTestCommandsProxy::RequestHitTest(
        BamoTestCommandsProxy *this,
        int a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // eax
  unsigned int v11; // [rsp+50h] [rbp-48h] BYREF
  struct IMessageCallSendHost *v12; // [rsp+58h] [rbp-40h] BYREF
  volatile signed __int32 *v13; // [rsp+60h] [rbp-38h] BYREF
  _QWORD v14[3]; // [rsp+68h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v16; // [rsp+A0h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v13,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (BamoTestCommandsProxy *)((char *)this + 8),
           &v12,
           &v16,
           &v11);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v14[0] = v16;
      v14[1] = v11;
      v6 = CoreUICallSend(v12, v14, 2LL, 36LL, 0, &unk_18014A973, a2);
      goto LABEL_7;
    }
    v8 = (unsigned int)v9;
    v7 = 51864LL;
  }
  else
  {
    v6 = -2018375660;
    v7 = 51857LL;
    v8 = 2276591636LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
    (const char *)v8);
LABEL_7:
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v13);
  return v6;
}
