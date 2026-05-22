/*
 * XREFs of ?OnAugmentedInputEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@56789@_JAEBUHitObjectMsg@56789@@Z @ 0x18005F4E0
 * Callers:
 *     ?OnAugmentedInputEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@45678@_JAEBUHitObjectMsg@45678@@Z @ 0x18005F460 (-OnAugmentedInputEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800239F0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoMPCInputObjectProxyImpl::OnAugmentedInputEvent(
        Microsoft::BamoImpl::BamoProxyImpl *a1,
        unsigned int *a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int128 *a6)
{
  int v8; // ebx
  __int64 v9; // rdx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  _OWORD *v20; // rdi
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  unsigned int v28[4]; // [rsp+60h] [rbp-A0h] BYREF
  struct IMessageCallSendHost *v29; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v30[3]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v31; // [rsp+90h] [rbp-70h]
  __int128 v32; // [rsp+A0h] [rbp-60h]
  __int128 v33; // [rsp+B0h] [rbp-50h]
  __int128 v34; // [rsp+C0h] [rbp-40h]
  __int128 v35; // [rsp+D0h] [rbp-30h]
  __int128 v36; // [rsp+E0h] [rbp-20h]
  __int128 v37; // [rsp+F0h] [rbp-10h]
  __int128 v38; // [rsp+100h] [rbp+0h]
  __int128 v39; // [rsp+110h] [rbp+10h]
  __int128 v40; // [rsp+120h] [rbp+20h]
  __int128 v41; // [rsp+130h] [rbp+30h]
  __int128 v42; // [rsp+140h] [rbp+40h]
  __int128 v43; // [rsp+150h] [rbp+50h]
  __int128 v44; // [rsp+160h] [rbp+60h]
  __int128 v45; // [rsp+170h] [rbp+70h]
  __int128 v46; // [rsp+180h] [rbp+80h]
  __int128 v47; // [rsp+190h] [rbp+90h]
  __int128 v48; // [rsp+1A0h] [rbp+A0h]
  __int64 v49; // [rsp+1B0h] [rbp+B0h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]
  unsigned int v51; // [rsp+1E0h] [rbp+E0h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) + 24LL) + 40LL) )
  {
    v8 = -2018375660;
    v9 = 8382LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(a1, &v29, &v51, v28);
  if ( v8 < 0 )
  {
    v9 = 8389LL;
    goto LABEL_3;
  }
  v11 = a6[1];
  v31 = *a6;
  v12 = a6[2];
  v32 = v11;
  v13 = a4[1];
  v33 = v12;
  v34 = *a4;
  v14 = a4[2];
  v35 = v13;
  v15 = a4[3];
  v36 = v14;
  v16 = a4[4];
  v37 = v15;
  v17 = a4[5];
  v38 = v16;
  v18 = a4[6];
  v39 = v17;
  v40 = v18;
  v19 = a4[7];
  v20 = a4 + 8;
  v41 = v19;
  v21 = *((_QWORD *)v20 + 14);
  v22 = v20[1];
  v42 = *v20;
  v23 = v20[2];
  v43 = v22;
  v24 = v20[3];
  v44 = v23;
  v25 = v20[4];
  v45 = v24;
  v26 = v20[5];
  v46 = v25;
  v27 = v20[6];
  v47 = v26;
  v48 = v27;
  v49 = v21;
  v28[2] = *a2;
  v30[0] = v51;
  v30[1] = v28[0];
  return CoreUICallSend(v29, v30, 2LL, 33LL);
}
