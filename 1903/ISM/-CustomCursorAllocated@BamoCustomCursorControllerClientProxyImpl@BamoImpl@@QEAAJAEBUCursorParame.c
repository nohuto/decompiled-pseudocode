/*
 * XREFs of ?CustomCursorAllocated@BamoCustomCursorControllerClientProxyImpl@BamoImpl@@QEAAJAEBUCursorParametersInfo@@_K@Z @ 0x18005C360
 * Callers:
 *     ?CustomCursorAllocated@BamoCustomCursorControllerClientProxy@@UEAAJAEBUCursorParametersInfo@@_K@Z @ 0x18005C300 (-CustomCursorAllocated@BamoCustomCursorControllerClientProxy@@UEAAJAEBUCursorParametersInfo@@_K@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180023ED0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoCustomCursorControllerClientProxyImpl::CustomCursorAllocated(
        BamoImpl::BamoCustomCursorControllerClientProxyImpl *this,
        const struct CursorParametersInfo *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  struct IMessageCallSendHost *v5; // [rsp+48h] [rbp-30h] BYREF
  _QWORD v6[5]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v8; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+98h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v2 = -2018375660;
    v3 = 63857LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v5, &v8, &v9);
  if ( v2 < 0 )
  {
    v3 = 63864LL;
    goto LABEL_3;
  }
  v6[0] = v8;
  v6[1] = v9;
  return CoreUICallSend(v5, v6, 2LL, 13LL);
}
