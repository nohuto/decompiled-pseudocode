/*
 * XREFs of ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801A6E8C
 * Callers:
 *     ?CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z @ 0x1801A5650 (-CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z.c)
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipulationTelemetryData@@@Z @ 0x1801A67E0 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipul.c)
 *     ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x1801A6AA0 (-UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithou.c)
 * Callees:
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x18001A320 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18007F878 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800C0A0C (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x18019C030 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 */

__int64 __fastcall CManipulation::_SendUpdateToRenderThread(
        CManipulation *this,
        char a2,
        const struct D2DVector3 *a3,
        const struct D2DVector3 *a4)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD *v7; // rdx
  __int128 v8; // xmm0
  __int64 v9; // r9
  unsigned int v10; // ecx
  int ManipulationManager; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  struct CManipulationManager *v14; // rbx
  __int64 v15; // rbx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  struct CManipulationManager *v28; // [rsp+40h] [rbp-C0h] BYREF
  struct IMessageCallSendHost *v29; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+54h] [rbp-ACh] BYREF
  int v32; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+5Ch] [rbp-A4h] BYREF
  int v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  CManipulation *v36; // [rsp+70h] [rbp-90h] BYREF
  __int128 v37; // [rsp+80h] [rbp-80h]
  __int128 v38; // [rsp+90h] [rbp-70h]
  __int128 v39; // [rsp+A0h] [rbp-60h]
  __int128 v40; // [rsp+B0h] [rbp-50h]
  __int128 v41; // [rsp+C0h] [rbp-40h]
  __int128 v42; // [rsp+D0h] [rbp-30h]
  __int128 v43; // [rsp+E0h] [rbp-20h]
  __int128 v44; // [rsp+F0h] [rbp-10h]
  __int128 v45; // [rsp+100h] [rbp+0h]
  __int128 v46; // [rsp+110h] [rbp+10h]
  __int128 v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+130h] [rbp+30h]
  _OWORD v49[4]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v50[64]; // [rsp+180h] [rbp+80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C0h] [rbp+C0h] BYREF
  CManipulation **v52; // [rsp+1E0h] [rbp+E0h]
  __int64 v53; // [rsp+1E8h] [rbp+E8h]
  char *v54; // [rsp+1F0h] [rbp+F0h]
  __int64 v55; // [rsp+1F8h] [rbp+F8h]
  char *v56; // [rsp+200h] [rbp+100h]
  __int64 v57; // [rsp+208h] [rbp+108h]
  char *v58; // [rsp+210h] [rbp+110h]
  __int64 v59; // [rsp+218h] [rbp+118h]
  char *v60; // [rsp+220h] [rbp+120h]
  __int64 v61; // [rsp+228h] [rbp+128h]
  char *v62; // [rsp+230h] [rbp+130h]
  __int64 v63; // [rsp+238h] [rbp+138h]
  char *v64; // [rsp+240h] [rbp+140h]
  __int64 v65; // [rsp+248h] [rbp+148h]
  char *v66; // [rsp+250h] [rbp+150h]
  __int64 v67; // [rsp+258h] [rbp+158h]
  char *v68; // [rsp+260h] [rbp+160h]
  __int64 v69; // [rsp+268h] [rbp+168h]
  char *v70; // [rsp+270h] [rbp+170h]
  __int64 v71; // [rsp+278h] [rbp+178h]
  char *v72; // [rsp+280h] [rbp+180h]
  __int64 v73; // [rsp+288h] [rbp+188h]
  char *v74; // [rsp+290h] [rbp+190h]
  __int64 v75; // [rsp+298h] [rbp+198h]
  char *v76; // [rsp+2A0h] [rbp+1A0h]
  __int64 v77; // [rsp+2A8h] [rbp+1A8h]
  char *v78; // [rsp+2B0h] [rbp+1B0h]
  __int64 v79; // [rsp+2B8h] [rbp+1B8h]
  char *v80; // [rsp+2C0h] [rbp+1C0h]
  __int64 v81; // [rsp+2C8h] [rbp+1C8h]
  char *v82; // [rsp+2D0h] [rbp+1D0h]
  __int64 v83; // [rsp+2D8h] [rbp+1D8h]
  char *v84; // [rsp+2E0h] [rbp+1E0h]
  __int64 v85; // [rsp+2E8h] [rbp+1E8h]
  char *v86; // [rsp+2F0h] [rbp+1F0h]
  __int64 v87; // [rsp+2F8h] [rbp+1F8h]
  char *v88; // [rsp+300h] [rbp+200h]
  __int64 v89; // [rsp+308h] [rbp+208h]
  char *v90; // [rsp+310h] [rbp+210h]
  __int64 v91; // [rsp+318h] [rbp+218h]
  char *v92; // [rsp+320h] [rbp+220h]
  __int64 v93; // [rsp+328h] [rbp+228h]
  char *v94; // [rsp+330h] [rbp+230h]
  __int64 v95; // [rsp+338h] [rbp+238h]
  char *v96; // [rsp+340h] [rbp+240h]
  __int64 v97; // [rsp+348h] [rbp+248h]
  char *v98; // [rsp+350h] [rbp+250h]
  __int64 v99; // [rsp+358h] [rbp+258h]
  char *v100; // [rsp+360h] [rbp+260h]
  __int64 v101; // [rsp+368h] [rbp+268h]
  char *v102; // [rsp+370h] [rbp+270h]
  __int64 v103; // [rsp+378h] [rbp+278h]
  char *v104; // [rsp+380h] [rbp+280h]
  __int64 v105; // [rsp+388h] [rbp+288h]
  char *v106; // [rsp+390h] [rbp+290h]
  __int64 v107; // [rsp+398h] [rbp+298h]
  char *v108; // [rsp+3A0h] [rbp+2A0h]
  __int64 v109; // [rsp+3A8h] [rbp+2A8h]
  char *v110; // [rsp+3B0h] [rbp+2B0h]
  __int64 v111; // [rsp+3B8h] [rbp+2B8h]
  char *v112; // [rsp+3C0h] [rbp+2C0h]
  __int64 v113; // [rsp+3C8h] [rbp+2C8h]
  int *v114; // [rsp+3D0h] [rbp+2D0h]
  __int64 v115; // [rsp+3D8h] [rbp+2D8h]
  int *v116; // [rsp+3E0h] [rbp+2E0h]
  __int64 v117; // [rsp+3E8h] [rbp+2E8h]
  int *v118; // [rsp+3F0h] [rbp+2F0h]
  __int64 v119; // [rsp+3F8h] [rbp+2F8h]
  int *v120; // [rsp+400h] [rbp+300h]
  __int64 v121; // [rsp+408h] [rbp+308h]
  int *v122; // [rsp+410h] [rbp+310h]
  __int64 v123; // [rsp+418h] [rbp+318h]
  __int64 *v124; // [rsp+420h] [rbp+320h]
  __int64 v125; // [rsp+428h] [rbp+328h]
  struct CManipulationManager **v126; // [rsp+430h] [rbp+330h]
  __int64 v127; // [rsp+438h] [rbp+338h]
  struct IMessageCallSendHost **v128; // [rsp+440h] [rbp+340h]
  __int64 v129; // [rsp+448h] [rbp+348h]

  if ( a2 )
  {
    CManipulationTransform::CalculateMatrixFromDelta(
      a3,
      a4,
      (CManipulation *)((char *)this + 124),
      (struct D2DMatrix *)v50);
    D2DMatrixMultiply((struct D2DMatrix *)v49, (CManipulation *)((char *)this + 136), (const struct D2DMatrix *)v50);
    v5 = v49[1];
    v6 = v49[2];
    *v7 = v49[0];
    v7[1] = v5;
    v8 = v49[3];
    v7[2] = v6;
    v7[3] = v8;
  }
  if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
  {
    v36 = this;
    v52 = &v36;
    v54 = (char *)this + 72;
    v56 = (char *)this + 76;
    v58 = (char *)this + 80;
    v60 = (char *)this + 96;
    v62 = (char *)this + 100;
    v64 = (char *)this + 104;
    v66 = (char *)this + 120;
    v68 = (char *)this + 200;
    v70 = (char *)this + 204;
    v72 = (char *)this + 208;
    v74 = (char *)this + 212;
    v76 = (char *)this + 216;
    v78 = (char *)this + 220;
    v80 = (char *)this + 224;
    v82 = (char *)this + 136;
    v84 = (char *)this + 140;
    v86 = (char *)this + 144;
    v88 = (char *)this + 148;
    v90 = (char *)this + 152;
    v92 = (char *)this + 156;
    v94 = (char *)this + 160;
    v96 = (char *)this + 164;
    v98 = (char *)this + 168;
    v100 = (char *)this + 172;
    v102 = (char *)this + 176;
    v104 = (char *)this + 180;
    v53 = 8LL;
    v55 = v9;
    v57 = v9;
    v59 = v9;
    v61 = v9;
    v63 = v9;
    v65 = v9;
    v67 = v9;
    v69 = v9;
    v71 = v9;
    v73 = v9;
    v75 = v9;
    v77 = v9;
    v79 = v9;
    v81 = v9;
    v83 = v9;
    v85 = v9;
    v87 = v9;
    v89 = v9;
    v91 = v9;
    v93 = v9;
    v95 = v9;
    v97 = v9;
    v99 = v9;
    v101 = v9;
    v103 = v9;
    v10 = *((unsigned __int8 *)this + 252);
    v106 = (char *)this + 184;
    v108 = (char *)this + 188;
    v110 = (char *)this + 192;
    v112 = (char *)this + 196;
    v30 = *((_DWORD *)this + 57);
    v114 = &v30;
    v31 = *((_DWORD *)this + 60);
    v116 = &v31;
    v32 = *((_DWORD *)this + 61);
    v118 = &v32;
    v33 = *((_DWORD *)this + 62);
    v120 = &v33;
    v34 = *((_DWORD *)this + 58);
    v122 = &v34;
    LODWORD(v35) = v10 & 1;
    v105 = v9;
    v124 = &v35;
    v126 = &v28;
    LODWORD(v29) = *((_DWORD *)this + 111);
    v128 = &v29;
    v107 = v9;
    v109 = v9;
    v111 = v9;
    v113 = v9;
    v115 = v9;
    v117 = v9;
    v119 = v9;
    v121 = v9;
    v123 = v9;
    v125 = v9;
    LODWORD(v28) = (v10 >> 1) & 1;
    v127 = v9;
    v129 = v9;
    TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B520A, 0LL, 0LL, 0x29u, &pData);
  }
  v28 = 0LL;
  v29 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v28);
  ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 2), &v28);
  v13 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cData = 322;
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v29);
  v14 = v28;
  ManipulationManager = CManipulationManager::GetManipulationThreadMessageCallSendHost(v28, &v29);
  v13 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cData = 324;
    goto LABEL_15;
  }
  v15 = *((_QWORD *)v14 + 44);
  v13 = v15 == 0 ? 0x80004005 : 0;
  if ( !v15 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v13, 0x147u);
    goto LABEL_16;
  }
  (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 8LL))(this);
  v36 = this;
  v16 = *(_OWORD *)((char *)this + 72);
  v17 = *(_OWORD *)((char *)this + 88);
  v35 = v15;
  v37 = v16;
  v18 = *(_OWORD *)((char *)this + 104);
  v38 = v17;
  v19 = *(_OWORD *)((char *)this + 120);
  v39 = v18;
  v20 = *(_OWORD *)((char *)this + 136);
  v40 = v19;
  v21 = *(_OWORD *)((char *)this + 152);
  v41 = v20;
  v22 = *(_OWORD *)((char *)this + 168);
  v42 = v21;
  v43 = v22;
  v44 = *(_OWORD *)((char *)this + 184);
  v23 = *(_OWORD *)((char *)this + 216);
  v45 = *(_OWORD *)((char *)this + 200);
  v24 = *(_OWORD *)((char *)this + 232);
  v25 = *((_QWORD *)this + 31);
  v46 = v23;
  v47 = v24;
  v48 = v25;
  ManipulationManager = CoreUICallSend(v29, &v35, 1LL, 9LL, 0, &unk_180276400);
  v13 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cData = 336;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, ManipulationManager, cData);
    goto LABEL_16;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 536LL) + 104LL))(
    *(_QWORD *)(*((_QWORD *)this + 2) + 536LL),
    0LL,
    0x4000LL);
LABEL_16:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v29);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v28);
  return v13;
}
