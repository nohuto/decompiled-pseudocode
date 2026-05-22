/*
 * XREFs of ?OnAugmentedInputEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@45678@_JAEBUHitObjectMsg@45678@@Z @ 0x180014BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800127B8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoMPCInputObjectProxy::OnAugmentedInputEvent(
        __int64 a1,
        int *a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int128 *a6)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  _OWORD *v22; // rdi
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  unsigned int v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+68h] [rbp-98h] BYREF
  struct IMessageCallSendHost *v33; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v34; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v35[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v36; // [rsp+90h] [rbp-70h]
  __int128 v37; // [rsp+A0h] [rbp-60h]
  __int128 v38; // [rsp+B0h] [rbp-50h]
  __int128 v39; // [rsp+C0h] [rbp-40h]
  __int128 v40; // [rsp+D0h] [rbp-30h]
  __int128 v41; // [rsp+E0h] [rbp-20h]
  __int128 v42; // [rsp+F0h] [rbp-10h]
  __int128 v43; // [rsp+100h] [rbp+0h]
  __int128 v44; // [rsp+110h] [rbp+10h]
  __int128 v45; // [rsp+120h] [rbp+20h]
  __int128 v46; // [rsp+130h] [rbp+30h]
  __int128 v47; // [rsp+140h] [rbp+40h]
  __int128 v48; // [rsp+150h] [rbp+50h]
  __int128 v49; // [rsp+160h] [rbp+60h]
  __int128 v50; // [rsp+170h] [rbp+70h]
  __int128 v51; // [rsp+180h] [rbp+80h]
  __int128 v52; // [rsp+190h] [rbp+90h]
  __int128 v53; // [rsp+1A0h] [rbp+A0h]
  __int64 v54; // [rsp+1B0h] [rbp+B0h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]
  unsigned int v56; // [rsp+1E0h] [rbp+E0h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v34,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 24LL) + 40LL) )
  {
    v12 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)(a1 + 8),
            &v33,
            &v56,
            &v31);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v13 = a6[1];
      v36 = *a6;
      v14 = a6[2];
      v37 = v13;
      v15 = a4[1];
      v38 = v14;
      v39 = *a4;
      v16 = a4[2];
      v40 = v15;
      v17 = a4[3];
      v41 = v16;
      v18 = a4[4];
      v42 = v17;
      v19 = a4[5];
      v43 = v18;
      v20 = a4[6];
      v44 = v19;
      v45 = v20;
      v21 = a4[7];
      v22 = a4 + 8;
      v46 = v21;
      v23 = *((_QWORD *)v22 + 14);
      v24 = v22[1];
      v47 = *v22;
      v25 = v22[2];
      v48 = v24;
      v26 = v22[3];
      v49 = v25;
      v27 = v22[4];
      v50 = v26;
      v28 = v22[5];
      v51 = v27;
      v29 = v22[6];
      v52 = v28;
      v53 = v29;
      v54 = v23;
      v32 = *a2;
      v35[0] = v56;
      v35[1] = v31;
      v9 = CoreUICallSend(v33, v35, 2LL, 27LL, 2, &unk_18014AA09, (unsigned int)&v32);
      goto LABEL_7;
    }
    v11 = (unsigned int)v12;
    v10 = 49181LL;
  }
  else
  {
    v9 = -2018375660;
    v10 = 49174LL;
    v11 = 2276591636LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
    (const char *)v11);
LABEL_7:
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v34);
  return v9;
}
