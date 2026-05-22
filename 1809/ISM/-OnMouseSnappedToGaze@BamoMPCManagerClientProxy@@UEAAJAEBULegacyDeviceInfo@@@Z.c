/*
 * XREFs of ?OnMouseSnappedToGaze@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@@Z @ 0x1800DC7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800127B8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoMPCManagerClientProxy::OnMouseSnappedToGaze(
        BamoMPCManagerClientProxy *this,
        const struct LegacyDeviceInfo *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  volatile signed __int32 *v23; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v24[3]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v25[1008]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+458h] [rbp+358h]
  unsigned int v27; // [rsp+460h] [rbp+360h] BYREF
  unsigned int v28; // [rsp+470h] [rbp+370h] BYREF
  struct IMessageCallSendHost *v29; // [rsp+478h] [rbp+378h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v23,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v4 = -2018375660;
    v5 = 8106LL;
    v6 = 2276591636LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)v6);
    goto LABEL_9;
  }
  v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
         (BamoMPCManagerClientProxy *)((char *)this + 8),
         &v29,
         &v27,
         &v28);
  v4 = v7;
  if ( v7 < 0 )
  {
    v6 = (unsigned int)v7;
    v5 = 8113LL;
    goto LABEL_3;
  }
  v8 = 7LL;
  v9 = v25;
  do
  {
    v10 = *((_OWORD *)a2 + 1);
    *v9 = *(_OWORD *)a2;
    v11 = *((_OWORD *)a2 + 2);
    v9[1] = v10;
    v12 = *((_OWORD *)a2 + 3);
    v9[2] = v11;
    v13 = *((_OWORD *)a2 + 4);
    v9[3] = v12;
    v14 = *((_OWORD *)a2 + 5);
    v9[4] = v13;
    v15 = *((_OWORD *)a2 + 6);
    v9[5] = v14;
    v16 = *((_OWORD *)a2 + 7);
    a2 = (const struct LegacyDeviceInfo *)((char *)a2 + 128);
    v9[6] = v15;
    v9 += 8;
    *(v9 - 1) = v16;
    --v8;
  }
  while ( v8 );
  v17 = *((_QWORD *)a2 + 10);
  v18 = *((_OWORD *)a2 + 1);
  *v9 = *(_OWORD *)a2;
  v19 = *((_OWORD *)a2 + 2);
  v9[1] = v18;
  v20 = *((_OWORD *)a2 + 3);
  v9[2] = v19;
  v21 = *((_OWORD *)a2 + 4);
  v9[3] = v20;
  v9[4] = v21;
  *((_QWORD *)v9 + 10) = v17;
  v24[0] = v27;
  v24[1] = v28;
  v4 = CoreUICallSend(v29, v24, 2LL, 4LL, 3, &unk_18014AFE6, (unsigned int)v25);
LABEL_9:
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v23);
  return v4;
}
