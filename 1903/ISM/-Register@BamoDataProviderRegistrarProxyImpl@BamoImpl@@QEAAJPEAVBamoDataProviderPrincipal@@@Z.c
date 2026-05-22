/*
 * XREFs of ?Register@BamoDataProviderRegistrarProxyImpl@BamoImpl@@QEAAJPEAVBamoDataProviderPrincipal@@@Z @ 0x180023B44
 * Callers:
 *     ?Register@BamoDataProviderRegistrarProxy@@UEAAJPEAVBamoDataProviderPrincipal@@@Z @ 0x180023A70 (-Register@BamoDataProviderRegistrarProxy@@UEAAJPEAVBamoDataProviderPrincipal@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180023ED0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180023F54 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarProxyImpl::Register(
        BamoImpl::BamoDataProviderRegistrarProxyImpl *this,
        struct BamoDataProviderPrincipal *a2)
{
  int v3; // ebx
  __int64 v5; // rdx
  _QWORD v6[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v8; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v10; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    if ( a2 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(this, a2);
    v3 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v10, &v8, &v9);
    if ( v3 >= 0 )
    {
      v6[0] = v8;
      v6[1] = v9;
      return CoreUICallSend(v10, v6, 2LL, 2LL);
    }
    v5 = 8487LL;
  }
  else
  {
    v3 = -2018375660;
    v5 = 8479LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
