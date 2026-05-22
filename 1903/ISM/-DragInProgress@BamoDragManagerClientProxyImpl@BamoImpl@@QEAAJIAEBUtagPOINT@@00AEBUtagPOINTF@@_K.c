/*
 * XREFs of ?DragInProgress@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x18005D138
 * Callers:
 *     ?DragInProgress@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x18005D0A0 (-DragInProgress@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyM.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180023ED0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoDragManagerClientProxyImpl::DragInProgress(
        Microsoft::BamoImpl::BamoProxyImpl *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // rcx
  unsigned int v12; // [rsp+70h] [rbp-19h] BYREF
  __int64 v13; // [rsp+78h] [rbp-11h]
  __int64 v14; // [rsp+80h] [rbp-9h]
  __int64 v15; // [rsp+88h] [rbp-1h]
  __int64 v16; // [rsp+90h] [rbp+7h]
  struct IMessageCallSendHost *v17; // [rsp+98h] [rbp+Fh] BYREF
  _QWORD v18[2]; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+3Fh]
  unsigned int v20; // [rsp+D0h] [rbp+47h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) + 24LL) + 40LL) )
  {
    v8 = -2018375660;
    v9 = 64812LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(a1, &v17, &v20, &v12);
  if ( v8 < 0 )
  {
    v9 = 64819LL;
    goto LABEL_3;
  }
  v13 = *a6;
  v11 = *a5;
  v15 = *a4;
  v16 = *a3;
  v18[0] = v20;
  v18[1] = v12;
  v14 = v11;
  return CoreUICallSend(v17, v18, 2LL, 15LL);
}
