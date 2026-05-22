/*
 * XREFs of ?EdgyGestureDetected@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x18006EB8C
 * Callers:
 *     ?EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x18006EAE0 (-EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180023ED0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoEdgyControllerClientProxyImpl::EdgyGestureDetected(
        BamoImpl::BamoEdgyControllerClientProxyImpl *this,
        const unsigned __int16 *a2,
        __int64 a3,
        const struct D2D_VECTOR_2F *a4,
        unsigned __int64 a5,
        const struct D2D_VECTOR_2F *a6)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // xmm0_8
  unsigned int v11; // [rsp+78h] [rbp-11h] BYREF
  __int64 v12; // [rsp+80h] [rbp-9h]
  __int64 v13; // [rsp+88h] [rbp-1h]
  struct IMessageCallSendHost *v14; // [rsp+90h] [rbp+7h] BYREF
  _QWORD v15[2]; // [rsp+98h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+37h]
  unsigned int v17; // [rsp+C8h] [rbp+3Fh] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v7 = -2018375660;
    v8 = 1612LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v14, &v17, &v11);
  if ( v7 < 0 )
  {
    v8 = 1619LL;
    goto LABEL_3;
  }
  v13 = (__int64)*a4;
  v10 = (__int64)*a6;
  v15[0] = v17;
  v15[1] = v11;
  v12 = v10;
  return CoreUICallSend(v14, v15, 2LL, 20LL);
}
