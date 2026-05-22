/*
 * XREFs of ?CreateCursorForDevice@BamoSystemCursorControllerProxy@@UEAAJ_K@Z @ 0x180015260
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800127B8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoSystemCursorControllerProxy::CreateCursorForDevice(
        BamoSystemCursorControllerProxy *this,
        int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // eax
  volatile signed __int32 *v9; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v14; // [rsp+88h] [rbp+20h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (BamoSystemCursorControllerProxy *)((char *)this + 8),
           &v14,
           &v12,
           &v13);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v10[0] = v12;
      v10[1] = v13;
      v4 = CoreUICallSend(v14, v10, 2LL, 32LL, 2, &unk_18014A9C8, a2);
      goto LABEL_7;
    }
    v6 = (unsigned int)v7;
    v5 = 50838LL;
  }
  else
  {
    v4 = -2018375660;
    v5 = 50831LL;
    v6 = 2276591636LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
    (const char *)v6);
LABEL_7:
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v9);
  return v4;
}
