/*
 * XREFs of ?RequestHitTest@BamoTestCommandsProxyImpl@BamoImpl@@QEAAJ_J0PEBG@Z @ 0x18006227C
 * Callers:
 *     ?RequestHitTest@BamoTestCommandsProxy@@UEAAJ_J0PEBG@Z @ 0x180062210 (-RequestHitTest@BamoTestCommandsProxy@@UEAAJ_J0PEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800239F0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoTestCommandsProxyImpl::RequestHitTest(
        BamoImpl::BamoTestCommandsProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  unsigned int v7; // [rsp+50h] [rbp-38h] BYREF
  struct IMessageCallSendHost *v8; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v9[2]; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v11; // [rsp+90h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v4 = -2018375660;
    v5 = 14770LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v8, &v11, &v7);
  if ( v4 < 0 )
  {
    v5 = 14777LL;
    goto LABEL_3;
  }
  v9[0] = v11;
  v9[1] = v7;
  return CoreUICallSend(v8, v9, 2LL, 51LL);
}
