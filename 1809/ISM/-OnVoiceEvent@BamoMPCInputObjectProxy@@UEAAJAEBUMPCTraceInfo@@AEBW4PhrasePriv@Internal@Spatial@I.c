/*
 * XREFs of ?OnVoiceEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@45678@AEBUHitObjectMsg@45678@@Z @ 0x1800149D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800127B8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoMPCInputObjectProxy::OnVoiceEvent(
        BamoMPCInputObjectProxy *this,
        const struct MPCTraceInfo *a2,
        const enum Windows::UI::Input::Spatial::Internal::PhrasePriv *a3,
        const struct Windows::UI::Input::Spatial::Internal::PoseDataMsg *a4,
        const struct Windows::UI::Input::Spatial::Internal::HitObjectMsg *a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  char *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  unsigned int v27[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+60h] [rbp-A0h] BYREF
  struct IMessageCallSendHost *v29; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v30; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v31[3]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v32; // [rsp+90h] [rbp-70h]
  __int128 v33; // [rsp+A0h] [rbp-60h]
  __int128 v34; // [rsp+B0h] [rbp-50h]
  char v35; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]
  unsigned int v37; // [rsp+290h] [rbp+190h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v30,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    v9 = -2018375660;
    v10 = 49149LL;
    v11 = 2276591636LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)v11);
    goto LABEL_9;
  }
  v12 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
          (BamoMPCInputObjectProxy *)((char *)this + 8),
          &v29,
          &v37,
          v27);
  v9 = v12;
  if ( v12 < 0 )
  {
    v11 = (unsigned int)v12;
    v10 = 49156LL;
    goto LABEL_3;
  }
  v13 = 3LL;
  v14 = *((_OWORD *)a5 + 1);
  v32 = *(_OWORD *)a5;
  v15 = *((_OWORD *)a5 + 2);
  v16 = &v35;
  v33 = v14;
  v34 = v15;
  do
  {
    v17 = *((_OWORD *)a4 + 1);
    *(_OWORD *)v16 = *(_OWORD *)a4;
    v18 = *((_OWORD *)a4 + 2);
    *((_OWORD *)v16 + 1) = v17;
    v19 = *((_OWORD *)a4 + 3);
    *((_OWORD *)v16 + 2) = v18;
    v20 = *((_OWORD *)a4 + 4);
    *((_OWORD *)v16 + 3) = v19;
    v21 = *((_OWORD *)a4 + 5);
    *((_OWORD *)v16 + 4) = v20;
    v22 = *((_OWORD *)a4 + 6);
    *((_OWORD *)v16 + 5) = v21;
    v23 = *((_OWORD *)a4 + 7);
    a4 = (const struct Windows::UI::Input::Spatial::Internal::PoseDataMsg *)((char *)a4 + 128);
    *((_OWORD *)v16 + 6) = v22;
    v16 += 128;
    *((_OWORD *)v16 - 1) = v23;
    --v13;
  }
  while ( v13 );
  v24 = *((_OWORD *)a4 + 1);
  *(_OWORD *)v16 = *(_OWORD *)a4;
  v25 = *((_OWORD *)a4 + 2);
  *((_OWORD *)v16 + 1) = v24;
  *((_OWORD *)v16 + 2) = v25;
  v27[2] = *(_DWORD *)a3;
  v28 = *(_DWORD *)a2;
  v31[0] = v37;
  v31[1] = v27[0];
  v9 = CoreUICallSend(v29, v31, 2LL, 27LL, 1, &unk_18014A9FB, (unsigned int)&v28);
LABEL_9:
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v30);
  return v9;
}
