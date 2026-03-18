/*
 * XREFs of ?OnAddDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18019785C
 * Callers:
 *     ?OnAddDataSourceError@BamoDataProviderProxy@@UEAAJI@Z @ 0x180197810 (-OnAddDataSourceError@BamoDataProviderProxy@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1801968DC (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::OnAddDataSourceError(
        BamoImpl::BamoDataProviderProxyImpl *this,
        int a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v6; // [rsp+20h] [rbp-48h]
  __int64 v7; // [rsp+38h] [rbp-30h]
  _QWORD v8[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v10; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v12; // [rsp+88h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v3 = -2018375660;
    v4 = 7802LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v12, &v10, &v11);
  if ( v3 < 0 )
  {
    v4 = 7809LL;
    goto LABEL_3;
  }
  v8[0] = v10;
  v8[1] = v11;
  LOWORD(v6) = 2;
  return CoreUICallSend(v12, v8, 2LL, 0LL, v6, &unk_1802BA8B5, a2, v7);
}
