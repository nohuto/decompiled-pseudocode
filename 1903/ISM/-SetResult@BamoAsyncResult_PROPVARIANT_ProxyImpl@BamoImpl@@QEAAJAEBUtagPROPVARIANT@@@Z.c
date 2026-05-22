/*
 * XREFs of ?SetResult@BamoAsyncResult_PROPVARIANT_ProxyImpl@BamoImpl@@QEAAJAEBUtagPROPVARIANT@@@Z @ 0x180114A40
 * Callers:
 *     ?SetResult@BamoAsyncResult_PROPVARIANT_Proxy@@UEAAJAEBUtagPROPVARIANT@@@Z @ 0x1801149F0 (-SetResult@BamoAsyncResult_PROPVARIANT_Proxy@@UEAAJAEBUtagPROPVARIANT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180023ED0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoAsyncResult_PROPVARIANT_ProxyImpl::SetResult(
        BamoImpl::BamoAsyncResult_PROPVARIANT_ProxyImpl *this,
        const struct tagPROPVARIANT *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int128 v6; // xmm0
  BYTE *pData; // xmm1_8
  _QWORD v8[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v9; // [rsp+50h] [rbp-20h]
  BYTE *v10; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  unsigned int v12; // [rsp+90h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+A0h] [rbp+30h] BYREF
  struct IMessageCallSendHost *v14; // [rsp+A8h] [rbp+38h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v3 = -2018375660;
    v4 = 7770LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v14, &v12, &v13);
  if ( v3 < 0 )
  {
    v4 = 7777LL;
    goto LABEL_3;
  }
  v6 = *(_OWORD *)&a2->vt;
  pData = a2->bstrblobVal.pData;
  v8[0] = v12;
  v8[1] = v13;
  v9 = v6;
  v10 = pData;
  return CoreUICallSend(v14, v8, 2LL, 0LL);
}
