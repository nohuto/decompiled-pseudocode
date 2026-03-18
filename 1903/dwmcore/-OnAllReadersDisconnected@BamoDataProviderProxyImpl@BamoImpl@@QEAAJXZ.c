/*
 * XREFs of ?OnAllReadersDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJXZ @ 0x180199220
 * Callers:
 *     ?OnAllReadersDisconnected@BamoDataProviderProxy@@UEAAJXZ @ 0x1801991E0 (-OnAllReadersDisconnected@BamoDataProviderProxy@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18019819C (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::OnAllReadersDisconnected(
        BamoImpl::BamoDataProviderProxyImpl *this)
{
  int v1; // ebx
  __int64 v2; // rdx
  int v4; // [rsp+20h] [rbp-28h]
  __int64 v5; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+10h] BYREF
  struct IMessageCallSendHost *v9; // [rsp+60h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v1 = -2018375660;
    v2 = 7781LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v1);
    return (unsigned int)v1;
  }
  v1 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v9, &v7, &v8);
  if ( v1 < 0 )
  {
    v2 = 7788LL;
    goto LABEL_3;
  }
  LOWORD(v4) = 1;
  return CoreUICallSend(v9, &v5, 2LL, 0LL, v4, &unk_1802BC763, v7, v8);
}
