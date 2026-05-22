/*
 * XREFs of ?OnInput@BamoAttachableInputObjectSampleProxy@@UEAAJ_J0PEBG@Z @ 0x180012B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800127B8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoAttachableInputObjectSampleProxy::OnInput(
        BamoAttachableInputObjectSampleProxy *this,
        __int64 a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  __int16 v13; // [rsp+20h] [rbp-78h]
  unsigned int v14; // [rsp+50h] [rbp-48h] BYREF
  struct IMessageCallSendHost *v15; // [rsp+58h] [rbp-40h] BYREF
  volatile signed __int32 *v16; // [rsp+60h] [rbp-38h] BYREF
  _QWORD v17[3]; // [rsp+68h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v19; // [rsp+A0h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v16,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (BamoAttachableInputObjectSampleProxy *)((char *)this + 8),
            &v15,
            &v19,
            &v14);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v17[0] = v19;
      v17[1] = v14;
      v13 = 0;
      v8 = CoreUICallSend(v15, v17, 2LL, 1LL, v13, &unk_18014A973, a2, a3, a4);
      goto LABEL_7;
    }
    v10 = (unsigned int)v11;
    v9 = 38597LL;
  }
  else
  {
    v8 = -2018375660;
    v9 = 38590LL;
    v10 = 2276591636LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
    (const char *)v10);
LABEL_7:
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v16);
  return v8;
}
