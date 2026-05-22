/*
 * XREFs of ?SetResult@BamoAsyncResult_PROPVARIANT_Proxy@@UEAAJAEBUtagPROPVARIANT@@@Z @ 0x1800DDD80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800127B8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoAsyncResult_PROPVARIANT_Proxy::SetResult(
        BamoAsyncResult_PROPVARIANT_Proxy *this,
        const struct tagPROPVARIANT *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // eax
  __int128 v8; // xmm0
  BYTE *pData; // xmm1_8
  volatile signed __int32 *v11; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v12[3]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v13; // [rsp+60h] [rbp-20h] BYREF
  BYTE *v14; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  unsigned int v16; // [rsp+A0h] [rbp+20h] BYREF
  unsigned int v17; // [rsp+B0h] [rbp+30h] BYREF
  struct IMessageCallSendHost *v18; // [rsp+B8h] [rbp+38h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v11,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (BamoAsyncResult_PROPVARIANT_Proxy *)((char *)this + 8),
           &v18,
           &v16,
           &v17);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v8 = *(_OWORD *)&a2->vt;
      pData = a2->bstrblobVal.pData;
      v12[0] = v16;
      v12[1] = v17;
      v13 = v8;
      v14 = pData;
      v4 = CoreUICallSend(
             v18,
             v12,
             2LL,
             0LL,
             0,
             &Microsoft::CoreUI::MessageCall::MPCManagerBamo_g_parameters_KN1bQRXcg1OiTYyDlHuINQyWz_I_BamoGroup$ada5be3c,
             (unsigned int)&v13);
      goto LABEL_7;
    }
    v6 = (unsigned int)v7;
    v5 = 6350LL;
  }
  else
  {
    v4 = -2018375660;
    v5 = 6343LL;
    v6 = 2276591636LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
    (const char *)v6);
LABEL_7:
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v11);
  return v4;
}
