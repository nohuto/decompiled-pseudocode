/*
 * XREFs of ?OnVoiceEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@56789@AEBUHitObjectMsg@56789@@Z @ 0x1800605A8
 * Callers:
 *     ?OnVoiceEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@45678@AEBUHitObjectMsg@45678@@Z @ 0x180060530 (-OnVoiceEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@I.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800239F0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoMPCInputObjectProxyImpl::OnVoiceEvent(
        BamoImpl::BamoMPCInputObjectProxyImpl *this,
        const struct MPCTraceInfo *a2,
        const enum Windows::UI::Input::Spatial::Internal::PhrasePriv *a3,
        const struct Windows::UI::Input::Spatial::Internal::PoseDataMsg *a4,
        const struct Windows::UI::Input::Spatial::Internal::HitObjectMsg *a5)
{
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  char *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  unsigned int v28[6]; // [rsp+50h] [rbp-B0h] BYREF
  struct IMessageCallSendHost *v29; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v30[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v31; // [rsp+80h] [rbp-80h]
  __int128 v32; // [rsp+90h] [rbp-70h]
  __int128 v33; // [rsp+A0h] [rbp-60h]
  char v34; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]
  unsigned int v36; // [rsp+240h] [rbp+140h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v29, &v36, v28);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = 2LL;
      v12 = *((_OWORD *)a5 + 1);
      v31 = *(_OWORD *)a5;
      v13 = *((_OWORD *)a5 + 2);
      v14 = &v34;
      v32 = v12;
      v33 = v13;
      do
      {
        v15 = *((_OWORD *)a4 + 1);
        *(_OWORD *)v14 = *(_OWORD *)a4;
        v16 = *((_OWORD *)a4 + 2);
        *((_OWORD *)v14 + 1) = v15;
        v17 = *((_OWORD *)a4 + 3);
        *((_OWORD *)v14 + 2) = v16;
        v18 = *((_OWORD *)a4 + 4);
        *((_OWORD *)v14 + 3) = v17;
        v19 = *((_OWORD *)a4 + 5);
        *((_OWORD *)v14 + 4) = v18;
        v20 = *((_OWORD *)a4 + 6);
        *((_OWORD *)v14 + 5) = v19;
        v21 = *((_OWORD *)a4 + 7);
        a4 = (const struct Windows::UI::Input::Spatial::Internal::PoseDataMsg *)((char *)a4 + 128);
        *((_OWORD *)v14 + 6) = v20;
        v14 += 128;
        *((_OWORD *)v14 - 1) = v21;
        --v11;
      }
      while ( v11 );
      v22 = *((_OWORD *)a4 + 1);
      *(_OWORD *)v14 = *(_OWORD *)a4;
      v23 = *((_OWORD *)a4 + 2);
      *((_OWORD *)v14 + 1) = v22;
      v24 = *((_OWORD *)a4 + 3);
      *((_OWORD *)v14 + 2) = v23;
      v25 = *((_OWORD *)a4 + 4);
      *((_OWORD *)v14 + 3) = v24;
      v26 = *((_OWORD *)a4 + 5);
      *((_OWORD *)v14 + 4) = v25;
      v27 = *((_OWORD *)a4 + 6);
      *((_OWORD *)v14 + 5) = v26;
      *((_OWORD *)v14 + 6) = v27;
      v28[2] = *(_DWORD *)a3;
      v28[4] = *(_DWORD *)a2;
      v30[0] = v36;
      v30[1] = v28[0];
      return CoreUICallSend(v29, v30, 2LL, 33LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20AC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20A5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
