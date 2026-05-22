/*
 * XREFs of ?CreateCursorShapeAnimation@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K0@Z @ 0x18005B830
 * Callers:
 *     ?CreateCursorShapeAnimation@BamoSystemCursorControllerProxy@@UEAAJ_K0@Z @ 0x18005B7D0 (-CreateCursorShapeAnimation@BamoSystemCursorControllerProxy@@UEAAJ_K0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800239F0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoSystemCursorControllerProxyImpl::CreateCursorShapeAnimation(
        BamoImpl::BamoSystemCursorControllerProxyImpl *this)
{
  int v1; // ebx
  __int64 v2; // rdx
  struct IMessageCallSendHost *v4; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v5[3]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v7; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+88h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v1 = -2018375660;
    v2 = 13764LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v1);
    return (unsigned int)v1;
  }
  v1 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v4, &v7, &v8);
  if ( v1 < 0 )
  {
    v2 = 13771LL;
    goto LABEL_3;
  }
  v5[0] = v7;
  v5[1] = v8;
  return CoreUICallSend(v4, v5, 2LL, 47LL);
}
