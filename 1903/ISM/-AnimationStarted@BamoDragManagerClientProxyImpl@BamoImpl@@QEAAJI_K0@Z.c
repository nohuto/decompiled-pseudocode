/*
 * XREFs of ?AnimationStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJI_K0@Z @ 0x18005B41C
 * Callers:
 *     ?AnimationStarted@BamoDragManagerClientProxy@@UEAAJI_K0@Z @ 0x18005B3B0 (-AnimationStarted@BamoDragManagerClientProxy@@UEAAJI_K0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180023ED0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoDragManagerClientProxyImpl::AnimationStarted(
        BamoImpl::BamoDragManagerClientProxyImpl *this)
{
  int v1; // ebx
  __int64 v2; // rdx
  unsigned int v4; // [rsp+50h] [rbp-28h] BYREF
  struct IMessageCallSendHost *v5; // [rsp+58h] [rbp-20h] BYREF
  _QWORD v6[2]; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v8; // [rsp+80h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v1 = -2018375660;
    v2 = 64916LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v1);
    return (unsigned int)v1;
  }
  v1 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v5, &v8, &v4);
  if ( v1 < 0 )
  {
    v2 = 64923LL;
    goto LABEL_3;
  }
  v6[0] = v8;
  v6[1] = v4;
  return CoreUICallSend(v5, v6, 2LL, 15LL);
}
