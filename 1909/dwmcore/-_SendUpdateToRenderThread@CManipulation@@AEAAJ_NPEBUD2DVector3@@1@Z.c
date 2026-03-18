/*
 * XREFs of ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801E2924
 * Callers:
 *     ?CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z @ 0x1801E1090 (-CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z.c)
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipulationTelemetryData@@@Z @ 0x1801E21F0 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipul.c)
 *     ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x1801E2510 (-UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithou.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x180022270 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800A833C (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800BC720 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x1801D5880 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
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
  CComposition *v11; // rbx
  signed int ManipulationManager; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  CManipulationManager *v15; // rbx
  __int64 v16; // rbx
  EVENT_DATA_DESCRIPTOR v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  char *v26; // rax
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  UINT32 cDataa; // [rsp+20h] [rbp-E0h]
  struct CManipulationManager *v30; // [rsp+40h] [rbp-C0h] BYREF
  struct IMessageCallSendHost *v31; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+54h] [rbp-ACh] BYREF
  int v34; // [rsp+58h] [rbp-A8h] BYREF
  int v35; // [rsp+5Ch] [rbp-A4h] BYREF
  int v36; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+64h] [rbp-9Ch] BYREF
  int v38; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  CManipulation *v40; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v41[4]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v42[64]; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
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
  char *v54; // [rsp+1B0h] [rbp+B0h]
  __int64 v55; // [rsp+1B8h] [rbp+B8h]
  char *v56; // [rsp+1C0h] [rbp+C0h]
  __int64 v57; // [rsp+1C8h] [rbp+C8h]
  char *v58; // [rsp+1D0h] [rbp+D0h]
  __int64 v59; // [rsp+1D8h] [rbp+D8h]
  char *v60; // [rsp+1E0h] [rbp+E0h]
  __int64 v61; // [rsp+1E8h] [rbp+E8h]
  char *v62; // [rsp+1F0h] [rbp+F0h]
  __int64 v63; // [rsp+1F8h] [rbp+F8h]
  char *v64; // [rsp+200h] [rbp+100h]
  __int64 v65; // [rsp+208h] [rbp+108h]
  char *v66; // [rsp+210h] [rbp+110h]
  __int64 v67; // [rsp+218h] [rbp+118h]
  char *v68; // [rsp+220h] [rbp+120h]
  __int64 v69; // [rsp+228h] [rbp+128h]
  char *v70; // [rsp+230h] [rbp+130h]
  __int64 v71; // [rsp+238h] [rbp+138h]
  char *v72; // [rsp+240h] [rbp+140h]
  __int64 v73; // [rsp+248h] [rbp+148h]
  char *v74; // [rsp+250h] [rbp+150h]
  __int64 v75; // [rsp+258h] [rbp+158h]
  char *v76; // [rsp+260h] [rbp+160h]
  __int64 v77; // [rsp+268h] [rbp+168h]
  char *v78; // [rsp+270h] [rbp+170h]
  __int64 v79; // [rsp+278h] [rbp+178h]
  char *v80; // [rsp+280h] [rbp+180h]
  __int64 v81; // [rsp+288h] [rbp+188h]
  char *v82; // [rsp+290h] [rbp+190h]
  __int64 v83; // [rsp+298h] [rbp+198h]
  char *v84; // [rsp+2A0h] [rbp+1A0h]
  __int64 v85; // [rsp+2A8h] [rbp+1A8h]
  char *v86; // [rsp+2B0h] [rbp+1B0h]
  __int64 v87; // [rsp+2B8h] [rbp+1B8h]
  char *v88; // [rsp+2C0h] [rbp+1C0h]
  __int64 v89; // [rsp+2C8h] [rbp+1C8h]
  char *v90; // [rsp+2D0h] [rbp+1D0h]
  __int64 v91; // [rsp+2D8h] [rbp+1D8h]
  char *v92; // [rsp+2E0h] [rbp+1E0h]
  __int64 v93; // [rsp+2E8h] [rbp+1E8h]
  char *v94; // [rsp+2F0h] [rbp+1F0h]
  __int64 v95; // [rsp+2F8h] [rbp+1F8h]
  char *v96; // [rsp+300h] [rbp+200h]
  __int64 v97; // [rsp+308h] [rbp+208h]
  int *v98; // [rsp+310h] [rbp+210h]
  __int64 v99; // [rsp+318h] [rbp+218h]
  int *v100; // [rsp+320h] [rbp+220h]
  __int64 v101; // [rsp+328h] [rbp+228h]
  int *v102; // [rsp+330h] [rbp+230h]
  __int64 v103; // [rsp+338h] [rbp+238h]
  int *v104; // [rsp+340h] [rbp+240h]
  __int64 v105; // [rsp+348h] [rbp+248h]
  int *v106; // [rsp+350h] [rbp+250h]
  __int64 v107; // [rsp+358h] [rbp+258h]
  int *v108; // [rsp+360h] [rbp+260h]
  __int64 v109; // [rsp+368h] [rbp+268h]
  int *v110; // [rsp+370h] [rbp+270h]
  __int64 v111; // [rsp+378h] [rbp+278h]
  __int64 *v112; // [rsp+380h] [rbp+280h]
  __int64 v113; // [rsp+388h] [rbp+288h]

  if ( a2 )
  {
    CManipulationTransform::CalculateMatrixFromDelta(
      a3,
      a4,
      (CManipulation *)((char *)this + 124),
      (struct D2DMatrix *)v42);
    D2DMatrixMultiply((struct D2DMatrix *)v41, (CManipulation *)((char *)this + 136), (const struct D2DMatrix *)v42);
    v5 = v41[1];
    v6 = v41[2];
    *v7 = v41[0];
    v7[1] = v5;
    v8 = v41[3];
    v7[2] = v6;
    v7[3] = v8;
  }
  if ( dword_180337240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
  {
    v40 = this;
    *(_QWORD *)&v45 = &v40;
    *(_QWORD *)&v46 = (char *)this + 72;
    *(_QWORD *)&v47 = (char *)this + 76;
    *(_QWORD *)&v48 = (char *)this + 80;
    *(_QWORD *)&v49 = (char *)this + 96;
    *(_QWORD *)&v50 = (char *)this + 100;
    *(_QWORD *)&v51 = (char *)this + 104;
    *(_QWORD *)&v52 = (char *)this + 120;
    *(_QWORD *)&v53 = (char *)this + 200;
    v54 = (char *)this + 204;
    v56 = (char *)this + 208;
    v58 = (char *)this + 212;
    v60 = (char *)this + 216;
    v62 = (char *)this + 220;
    v64 = (char *)this + 224;
    v66 = (char *)this + 136;
    v68 = (char *)this + 140;
    v70 = (char *)this + 144;
    v72 = (char *)this + 148;
    v74 = (char *)this + 152;
    v76 = (char *)this + 156;
    v78 = (char *)this + 160;
    v80 = (char *)this + 164;
    v82 = (char *)this + 168;
    v84 = (char *)this + 172;
    v86 = (char *)this + 176;
    v88 = (char *)this + 180;
    *((_QWORD *)&v45 + 1) = 8LL;
    *((_QWORD *)&v46 + 1) = v9;
    *((_QWORD *)&v47 + 1) = v9;
    *((_QWORD *)&v48 + 1) = v9;
    *((_QWORD *)&v49 + 1) = v9;
    *((_QWORD *)&v50 + 1) = v9;
    *((_QWORD *)&v51 + 1) = v9;
    *((_QWORD *)&v52 + 1) = v9;
    *((_QWORD *)&v53 + 1) = v9;
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
    v10 = *((unsigned __int8 *)this + 252);
    v90 = (char *)this + 184;
    v92 = (char *)this + 188;
    v94 = (char *)this + 192;
    v96 = (char *)this + 196;
    v32 = *((_DWORD *)this + 57);
    v98 = &v32;
    v33 = *((_DWORD *)this + 60);
    v100 = &v33;
    v34 = *((_DWORD *)this + 61);
    v102 = &v34;
    v35 = *((_DWORD *)this + 62);
    v104 = &v35;
    v36 = *((_DWORD *)this + 58);
    v106 = &v36;
    v37 = v10 & 1;
    v89 = v9;
    v108 = &v37;
    v110 = &v38;
    LODWORD(v39) = *((_DWORD *)this + 111);
    v112 = &v39;
    v91 = v9;
    v93 = v9;
    v95 = v9;
    v97 = v9;
    v99 = v9;
    v101 = v9;
    v103 = v9;
    v105 = v9;
    v107 = v9;
    v109 = v9;
    v38 = (v10 >> 1) & 1;
    v111 = v9;
    v113 = v9;
    TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DA8F2, 0LL, 0LL, 0x29u, &pData);
  }
  v11 = (CComposition *)*((_QWORD *)this + 2);
  v30 = 0LL;
  v31 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v30);
  ManipulationManager = CComposition::GetManipulationManager(v11, &v30);
  v14 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cDataa = 326;
    goto LABEL_15;
  }
  v15 = v30;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v31);
  ManipulationManager = CManipulationManager::GetManipulationThreadMessageCallSendHost(v15, &v31);
  v14 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cDataa = 328;
    goto LABEL_15;
  }
  v16 = *((_QWORD *)v30 + 7);
  if ( v16 )
  {
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 8LL))(this);
    v40 = this;
    v17 = *(EVENT_DATA_DESCRIPTOR *)((char *)this + 72);
    v18 = *(_OWORD *)((char *)this + 88);
    v39 = v16;
    pData = v17;
    v19 = *(_OWORD *)((char *)this + 104);
    v44 = v18;
    v20 = *(_OWORD *)((char *)this + 120);
    v45 = v19;
    v21 = *(_OWORD *)((char *)this + 136);
    v46 = v20;
    v22 = *(_OWORD *)((char *)this + 152);
    v47 = v21;
    v23 = *(_OWORD *)((char *)this + 168);
    v48 = v22;
    v49 = v23;
    v50 = *(_OWORD *)((char *)this + 184);
    v24 = *(_OWORD *)((char *)this + 216);
    v51 = *(_OWORD *)((char *)this + 200);
    v25 = *(_OWORD *)((char *)this + 232);
    v26 = (char *)*((_QWORD *)this + 31);
    v52 = v24;
    v53 = v25;
    v54 = v26;
    LOWORD(cData) = 0;
    ManipulationManager = CoreUICallSend(v31, &v39, 1LL, 10LL, cData, &unk_1802B1176, (unsigned int)&v40, &pData);
    v14 = ManipulationManager;
    if ( ManipulationManager >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 552LL) + 96LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
        0LL,
        0x4000LL);
      goto LABEL_16;
    }
    cDataa = 340;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, ManipulationManager, cDataa, 0LL);
    goto LABEL_16;
  }
  v14 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x80004005, 0x14Bu, 0LL);
LABEL_16:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v31);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v30);
  return v14;
}
