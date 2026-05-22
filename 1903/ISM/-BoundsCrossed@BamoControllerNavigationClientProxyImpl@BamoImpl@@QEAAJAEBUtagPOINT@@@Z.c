/*
 * XREFs of ?BoundsCrossed@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJAEBUtagPOINT@@@Z @ 0x180070F10
 * Callers:
 *     ?BoundsCrossed@BamoControllerNavigationClientProxy@@UEAAJAEBUtagPOINT@@@Z @ 0x180070EC0 (-BoundsCrossed@BamoControllerNavigationClientProxy@@UEAAJAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180023ED0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoControllerNavigationClientProxyImpl::BoundsCrossed(
        BamoImpl::BamoControllerNavigationClientProxyImpl *this,
        const struct tagPOINT *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  struct IMessageCallSendHost *v6; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v7[6]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v9; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+90h] [rbp+18h] BYREF
  __int64 v11; // [rsp+98h] [rbp+20h]

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v3 = -2018375660;
    v4 = 62077LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v6, &v9, &v10);
  if ( v3 < 0 )
  {
    v4 = 62084LL;
    goto LABEL_3;
  }
  v11 = (__int64)*a2;
  v7[0] = v9;
  v7[1] = v10;
  return CoreUICallSend(v6, v7, 2LL, 7LL);
}
