/*
 * XREFs of ?PanGestureDetected@BamoMagnifierClientProxyImpl@BamoImpl@@QEAAJIIAEBUtagPOINT@@@Z @ 0x18006FAE4
 * Callers:
 *     ?PanGestureDetected@BamoMagnifierClientProxy@@UEAAJIIAEBUtagPOINT@@@Z @ 0x18006FA78 (-PanGestureDetected@BamoMagnifierClientProxy@@UEAAJIIAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180023ED0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoMagnifierClientProxyImpl::PanGestureDetected(
        BamoImpl::BamoMagnifierClientProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const struct tagPOINT *a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  unsigned int v8; // [rsp+50h] [rbp-38h] BYREF
  __int64 v9; // [rsp+58h] [rbp-30h]
  struct IMessageCallSendHost *v10; // [rsp+60h] [rbp-28h] BYREF
  _QWORD v11[3]; // [rsp+68h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v13; // [rsp+90h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v5 = -2018375660;
    v6 = 9033LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v10, &v13, &v8);
  if ( v5 < 0 )
  {
    v6 = 9040LL;
    goto LABEL_3;
  }
  v9 = (__int64)*a4;
  v11[0] = v13;
  v11[1] = v8;
  return CoreUICallSend(v10, v11, 2LL, 35LL);
}
