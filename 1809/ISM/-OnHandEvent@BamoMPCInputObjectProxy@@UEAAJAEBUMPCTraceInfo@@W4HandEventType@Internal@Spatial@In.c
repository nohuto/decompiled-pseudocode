/*
 * XREFs of ?OnHandEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@AEBUHandStateMsg@45678@AEBUHitObjectMsg@45678@@Z @ 0x180014800
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800127B8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoMPCInputObjectProxy::OnHandEvent(__int64 a1, int *a2, __int64 a3, __int128 *a4, __int128 *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  _OWORD *v21; // rdi
  __int64 v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  unsigned int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+58h] [rbp-A8h] BYREF
  struct IMessageCallSendHost *v29; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int32 *v30; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v31[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v32; // [rsp+80h] [rbp-80h]
  __int128 v33; // [rsp+90h] [rbp-70h]
  __int128 v34; // [rsp+A0h] [rbp-60h]
  __int128 v35; // [rsp+B0h] [rbp-50h]
  __int128 v36; // [rsp+C0h] [rbp-40h]
  __int128 v37; // [rsp+D0h] [rbp-30h]
  __int128 v38; // [rsp+E0h] [rbp-20h]
  __int128 v39; // [rsp+F0h] [rbp-10h]
  __int128 v40; // [rsp+100h] [rbp+0h]
  __int128 v41; // [rsp+110h] [rbp+10h]
  __int128 v42; // [rsp+120h] [rbp+20h]
  __int128 v43; // [rsp+130h] [rbp+30h]
  __int128 v44; // [rsp+140h] [rbp+40h]
  __int128 v45; // [rsp+150h] [rbp+50h]
  __int128 v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+170h] [rbp+70h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]
  unsigned int v49; // [rsp+1A0h] [rbp+A0h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v30,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 24LL) + 40LL) )
  {
    v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)(a1 + 8),
            &v29,
            &v49,
            &v27);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v12 = a5[1];
      v32 = *a5;
      v13 = a5[2];
      v33 = v12;
      v14 = a4[1];
      v34 = v13;
      v35 = *a4;
      v15 = a4[2];
      v36 = v14;
      v16 = a4[3];
      v37 = v15;
      v17 = a4[4];
      v38 = v16;
      v18 = a4[5];
      v39 = v17;
      v19 = a4[6];
      v40 = v18;
      v41 = v19;
      v20 = a4[7];
      v21 = a4 + 8;
      v42 = v20;
      v22 = *((_QWORD *)v21 + 8);
      v23 = v21[1];
      v43 = *v21;
      v24 = v21[2];
      v44 = v23;
      v25 = v21[3];
      v45 = v24;
      v46 = v25;
      v47 = v22;
      v28 = *a2;
      v31[0] = v49;
      v31[1] = v27;
      v8 = CoreUICallSend(v29, v31, 2LL, 27LL, 0, &unk_18014A9EF, (unsigned int)&v28);
      goto LABEL_7;
    }
    v10 = (unsigned int)v11;
    v9 = 49132LL;
  }
  else
  {
    v8 = -2018375660;
    v9 = 49125LL;
    v10 = 2276591636LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
    (const char *)v10);
LABEL_7:
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v30);
  return v8;
}
