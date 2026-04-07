/*
 * XREFs of ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x1800113E4
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180040D20 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?OnTick@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x1800118B0 (-OnTick@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800118F4 (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x180011978 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x180011AA0 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::OnTick(CAnimationEngine *this, double a2, bool *a3)
{
  bool *v3; // rbx
  char v5; // r15
  int started; // eax
  __int64 v7; // rdx
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rbx
  volatile signed __int32 *v12; // r14
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 **v16; // rcx
  __int64 *v17; // r15
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // rax
  int v25; // eax
  unsigned int v26; // r8d
  int v27; // eax
  __int64 (__fastcall *v28)(__int64 *, _BYTE *); // rax
  int v29; // eax
  __int64 v30; // r12
  __int64 v31; // r13
  __int64 v32; // r12
  int v33; // eax
  int v34; // eax
  __int64 (__fastcall *v35)(__int64 *, _BYTE *); // rax
  int v36; // eax
  char v37; // al
  signed __int32 v38; // eax
  int v39; // eax
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rcx
  float v46; // xmm0_4
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // r9
  int v50; // r12d
  _QWORD *v51; // rax
  __int64 v52; // r13
  int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rax
  float v57; // xmm0_4
  int v58; // eax
  int v59; // eax
  __int64 v60; // rcx
  float v61; // xmm0_4
  float v62; // xmm0_4
  __int64 v63; // rax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  __int64 v67; // rcx
  float v68; // xmm0_4
  __int64 v69; // rax
  int v70; // eax
  int v71; // eax
  __int64 v72; // rcx
  float v73; // xmm0_4
  float v74; // xmm0_4
  __int64 v75; // rax
  int v76; // eax
  int v77; // eax
  __int64 v78; // rax
  float *v79; // rcx
  double v80; // xmm0_8
  int v81; // eax
  signed __int32 v82; // eax
  void *v83; // [rsp+30h] [rbp-D8h]
  float v84; // [rsp+38h] [rbp-D0h] BYREF
  int v85; // [rsp+3Ch] [rbp-CCh]
  unsigned int v86; // [rsp+40h] [rbp-C8h] BYREF
  int v87; // [rsp+44h] [rbp-C4h]
  __int64 v88; // [rsp+48h] [rbp-C0h]
  unsigned int v89; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v90; // [rsp+54h] [rbp-B4h]
  double v91; // [rsp+58h] [rbp-B0h] BYREF
  double v92; // [rsp+60h] [rbp-A8h]
  __int64 v93; // [rsp+68h] [rbp-A0h]
  __int64 v94; // [rsp+70h] [rbp-98h]
  double v95; // [rsp+78h] [rbp-90h] BYREF
  __int64 v96; // [rsp+80h] [rbp-88h]
  bool *v97; // [rsp+88h] [rbp-80h]
  __int64 v98; // [rsp+90h] [rbp-78h]
  __int64 v99; // [rsp+A0h] [rbp-68h]
  __int64 v100; // [rsp+B0h] [rbp-58h]
  __int64 v101; // [rsp+C0h] [rbp-48h]
  int v102; // [rsp+D8h] [rbp-30h]
  __int64 v103; // [rsp+E0h] [rbp-28h]
  __int64 v104; // [rsp+F0h] [rbp-18h]
  __int64 v105; // [rsp+100h] [rbp-8h]
  __int64 v106; // [rsp+110h] [rbp+8h]
  int v107; // [rsp+128h] [rbp+20h]
  __int64 v108; // [rsp+130h] [rbp+28h]
  _QWORD v109[2]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v110[2]; // [rsp+148h] [rbp+40h]
  _BYTE v111[20]; // [rsp+158h] [rbp+50h] BYREF
  float v112; // [rsp+16Ch] [rbp+64h]
  float v113; // [rsp+170h] [rbp+68h]
  float v114; // [rsp+174h] [rbp+6Ch]
  int v115; // [rsp+184h] [rbp+7Ch]
  int v116; // [rsp+188h] [rbp+80h]
  int v117; // [rsp+18Ch] [rbp+84h]
  _BYTE v118[20]; // [rsp+190h] [rbp+88h] BYREF
  float v119; // [rsp+1A4h] [rbp+9Ch]
  float v120; // [rsp+1A8h] [rbp+A0h]
  float v121; // [rsp+1ACh] [rbp+A4h]
  int v122; // [rsp+1BCh] [rbp+B4h]
  int v123; // [rsp+1C0h] [rbp+B8h]
  int v124; // [rsp+1C4h] [rbp+BCh]
  _BYTE v125[20]; // [rsp+1C8h] [rbp+C0h] BYREF
  float v126; // [rsp+1DCh] [rbp+D4h]
  float v127; // [rsp+1E0h] [rbp+D8h]
  int v128; // [rsp+1ECh] [rbp+E4h]
  int v129; // [rsp+1F0h] [rbp+E8h]
  _BYTE v130[20]; // [rsp+1F8h] [rbp+F0h] BYREF
  float v131; // [rsp+20Ch] [rbp+104h]
  float v132; // [rsp+210h] [rbp+108h]
  int v133; // [rsp+21Ch] [rbp+114h]
  int v134; // [rsp+220h] [rbp+118h]
  _BYTE v135[20]; // [rsp+228h] [rbp+120h] BYREF
  float v136; // [rsp+23Ch] [rbp+134h]
  _BYTE v137[20]; // [rsp+248h] [rbp+140h] BYREF
  float v138; // [rsp+25Ch] [rbp+154h]
  float v139; // [rsp+260h] [rbp+158h]
  float v140; // [rsp+264h] [rbp+15Ch]
  _BYTE v141[20]; // [rsp+280h] [rbp+178h] BYREF
  float v142; // [rsp+294h] [rbp+18Ch]
  float v143; // [rsp+298h] [rbp+190h]
  _BYTE v144[20]; // [rsp+2B0h] [rbp+1A8h] BYREF
  char v145; // [rsp+2C4h] [rbp+1BCh] BYREF
  double v146; // [rsp+2E8h] [rbp+1E0h] BYREF
  double v147; // [rsp+2F0h] [rbp+1E8h]
  double v148; // [rsp+2F8h] [rbp+1F0h]
  double v149[4]; // [rsp+300h] [rbp+1F8h] BYREF

  v3 = a3;
  v97 = a3;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0;
  *((double *)this + 13) = a2;
  LOBYTE(v85) = 0;
  started = CAnimationEngine::StartAnimations(this);
  v8 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x141u, v83);
    goto LABEL_34;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
         *((_QWORD *)this + 1),
         v7,
         0LL);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x144u, v83);
    goto LABEL_34;
  }
  v10 = 0LL;
  v87 = 0;
  if ( !*((_DWORD *)this + 16) )
    goto LABEL_30;
  while ( 1 )
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v10);
    v12 = (volatile signed __int32 *)(v11 + 8);
    if ( v11 )
      _InterlockedIncrement(v12);
    if ( !*(_BYTE *)(v11 + 48) || *(_BYTE *)(v11 + 49) )
    {
      v38 = _InterlockedExchangeAdd(v12, 0xFFFFFFFF);
      goto LABEL_26;
    }
    ++*(_DWORD *)(v11 + 24);
    v13 = 0;
    v90 = 0;
    if ( *(_DWORD *)(v11 + 20) )
      break;
LABEL_25:
    v38 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF);
LABEL_26:
    if ( v38 == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1LL);
    v10 = (unsigned int)(v10 + 1);
    v87 = v10;
    if ( (unsigned int)v10 >= *((_DWORD *)this + 16) )
    {
      v3 = v97;
LABEL_30:
      v39 = CAnimationEngine::StopAnimations(this);
      v8 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x210u, v83);
      }
      else if ( v5 && !CAnimationEngine::IsIdle(this) || *((_BYTE *)this + 112) )
      {
        *v3 = 1;
        *((_BYTE *)this + 112) = 0;
      }
      goto LABEL_34;
    }
  }
  while ( 1 )
  {
    v14 = v13;
    v15 = *(_QWORD *)(v11 + 40);
    v88 = v14;
    v16 = *(__int64 ***)(v15 + 8 * v14);
    v17 = *v16;
    v18 = *v16[1];
    v19 = *v16[5];
    v20 = v16[4];
    v108 = v19;
    v21 = *v20;
    v22 = v16[6];
    v93 = v21;
    v23 = *v22;
    v24 = v16[7];
    v94 = v23;
    v96 = *v24;
    CAnimationEngine::CTransitionVisualSet::OnTick((CAnimationEngine::CTransitionVisualSet *)v11);
    if ( *(_DWORD *)(v11 + 24) <= 1u )
    {
      v41 = **(_QWORD **)(*(_QWORD *)(v11 + 40) + 8 * v14);
      if ( (*(int (__fastcall **)(__int64, float *))(*(_QWORD *)v41 + 48LL))(v41, &v84) >= 0 && v84 == 0.0 )
      {
        v110[0] = 0LL;
        v109[0] = 0LL;
        v109[1] = 0LL;
        v42 = *(_QWORD *)(v11 + 40);
        *(_QWORD *)((char *)v110 + 4) = 1065353216LL;
        (*(void (__fastcall **)(_QWORD, _QWORD *))(***(_QWORD ***)(v42 + 8 * v14) + 168LL))(
          **(_QWORD **)(v42 + 8 * v14),
          v109);
      }
    }
    (*(void (__fastcall **)(__int64 *))(*v17 + 120))(v17);
    if ( v18 )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 24LL))(v18, &v86);
      v8 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x17Du, v83);
        goto LABEL_85;
      }
      v26 = v86;
      if ( v86 == 2 )
      {
        v27 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v18 + 40LL))(v18, &v91);
        v8 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x180u, v83);
          goto LABEL_79;
        }
        v28 = *(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v17 + 144);
        v142 = v91;
        v143 = v92;
        v29 = v28(v17, v141);
        v8 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x186u, v83);
          goto LABEL_79;
        }
      }
      else if ( v86 == 3 )
      {
        v49 = v88;
        v50 = 0;
        while ( 1 )
        {
          v51 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 8 * v49) + 8LL * v50 + 8);
          v52 = *v51;
          if ( *v51 )
          {
            v53 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(*(_QWORD *)v52 + 200LL))(*v51, 0LL, &v89);
            v8 = v53;
            if ( v53 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x194u, v83);
              goto LABEL_79;
            }
            v54 = **(_QWORD **)(*(_QWORD *)(v11 + 40) + 8 * v88);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v54 + 240LL))(v54, v89);
            v55 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v52 + 40LL))(v52, &v146, 3LL);
            v8 = v55;
            if ( v55 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x199u, v83);
              goto LABEL_79;
            }
            v56 = *(_QWORD *)(v11 + 40);
            v57 = v146;
            v138 = v57;
            v139 = v147;
            v140 = v148;
            (*(void (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)(v56 + 8 * v88) + 240LL))(
              **(_QWORD **)(v56 + 8 * v88),
              v89);
            v58 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v17 + 176))(v17, v137);
            v8 = v58;
            if ( v58 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x1A1u, v83);
              goto LABEL_79;
            }
            v26 = v86;
            v49 = v88;
          }
          if ( ++v50 >= v26 )
          {
            v19 = v108;
            break;
          }
        }
      }
    }
    if ( !v19 )
    {
LABEL_16:
      v30 = v88;
      goto LABEL_17;
    }
    v43 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 24LL))(v19, &v86);
    v8 = v43;
    if ( v43 < 0 )
      break;
    if ( v86 == 2 )
    {
      v44 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v19 + 40LL))(v19, &v91, 2LL);
      v8 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x1B0u, v83);
LABEL_79:
        v82 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF);
        goto LABEL_86;
      }
      v45 = *(_QWORD *)(v11 + 40);
      v30 = v88;
      v46 = v91;
      v126 = v46;
      v127 = v92;
      v98 = *(_QWORD *)(*(_QWORD *)(v45 + 8 * v88) + 64LL);
      v128 = v98;
      v47 = *v17;
      v99 = *(_QWORD *)(*(_QWORD *)(v45 + 8 * v88) + 64LL);
      v129 = HIDWORD(v99);
      v48 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(v47 + 152))(v17, v125);
      v8 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x1B8u, v83);
        goto LABEL_79;
      }
    }
    else
    {
      if ( v86 != 3 )
        goto LABEL_16;
      v59 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v19 + 40LL))(v19, &v146, 3LL);
      v8 = v59;
      if ( v59 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0x1BCu, v83);
        goto LABEL_79;
      }
      v60 = *(_QWORD *)(v11 + 40);
      v30 = v88;
      v61 = v146;
      v112 = v61;
      v62 = v148;
      v113 = v147;
      v114 = v62;
      v100 = *(_QWORD *)(*(_QWORD *)(v60 + 8 * v88) + 64LL);
      v115 = v100;
      v101 = *(_QWORD *)(*(_QWORD *)(v60 + 8 * v88) + 64LL);
      v116 = HIDWORD(v101);
      v102 = *(_DWORD *)(*(_QWORD *)(v60 + 8 * v88) + 72LL);
      v63 = *v17;
      v117 = v102;
      v64 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(v63 + 184))(v17, v111);
      v8 = v64;
      if ( v64 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x1C6u, v83);
        goto LABEL_79;
      }
    }
LABEL_17:
    v31 = v93;
    if ( v93 )
    {
      v65 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v93 + 24LL))(v93, &v86);
      v8 = v65;
      if ( v65 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v65, 0x1D0u, v83);
        goto LABEL_79;
      }
      if ( v86 == 2 )
      {
        v66 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v31 + 40LL))(v31, &v91, 2LL);
        v8 = v66;
        if ( v66 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v66, 0x1D3u, v83);
          goto LABEL_79;
        }
        v67 = *(_QWORD *)(v11 + 40);
        v68 = v91;
        v131 = v68;
        v132 = v92;
        v103 = *(_QWORD *)(*(_QWORD *)(v67 + 8 * v30) + 76LL);
        v133 = v103;
        v69 = *v17;
        v104 = *(_QWORD *)(*(_QWORD *)(v67 + 8 * v30) + 76LL);
        v134 = HIDWORD(v104);
        v70 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(v69 + 160))(v17, v130);
        v8 = v70;
        if ( v70 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0x1DBu, v83);
          goto LABEL_79;
        }
      }
      else if ( v86 == 3 )
      {
        v71 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v31 + 40LL))(v31, &v146, 3LL);
        v8 = v71;
        if ( v71 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v71, 0x1DFu, v83);
          goto LABEL_79;
        }
        v72 = *(_QWORD *)(v11 + 40);
        v73 = v146;
        v119 = v73;
        v74 = v148;
        v120 = v147;
        v121 = v74;
        v105 = *(_QWORD *)(*(_QWORD *)(v72 + 8 * v30) + 76LL);
        v122 = v105;
        v106 = *(_QWORD *)(*(_QWORD *)(v72 + 8 * v30) + 76LL);
        v123 = HIDWORD(v106);
        v107 = *(_DWORD *)(*(_QWORD *)(v72 + 8 * v30) + 84LL);
        v75 = *v17;
        v124 = v107;
        v76 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(v75 + 192))(v17, v118);
        v8 = v76;
        if ( v76 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v76, 0x1E8u, v83);
          goto LABEL_79;
        }
      }
    }
    v32 = v94;
    if ( v94 )
    {
      v33 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v94 + 24LL))(v94, &v86);
      v8 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x1F2u, v83);
        goto LABEL_79;
      }
      v34 = (*(__int64 (__fastcall **)(__int64, double *, _QWORD))(*(_QWORD *)v32 + 40LL))(v32, &v95, v86);
      v8 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x1F6u, v83);
        goto LABEL_79;
      }
      v35 = *(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v17 + 168);
      v136 = v95;
      v36 = v35(v17, v135);
      v8 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x1FBu, v83);
        goto LABEL_79;
      }
    }
    if ( v96 )
    {
      v77 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v96 + 40LL))(v96, v149, 4LL);
      v8 = v77;
      if ( v77 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v77, 0x200u, v83);
        goto LABEL_79;
      }
      v78 = 0LL;
      v79 = (float *)&v145;
      do
      {
        v80 = v149[v78++];
        *v79++ = v80;
      }
      while ( v78 < 4 );
      v81 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v17 + 200))(v17, v144);
      v8 = v81;
      if ( v81 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, 0x208u, v83);
        goto LABEL_79;
      }
    }
    v37 = (*(__int64 (__fastcall **)(__int64 *))(*v17 + 248))(v17);
    v5 = v37 | v85;
    v13 = v90 + 1;
    LOBYTE(v85) = v5;
    v90 = v13;
    if ( v13 >= *(_DWORD *)(v11 + 20) )
    {
      LODWORD(v10) = v87;
      goto LABEL_25;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x1ADu, v83);
LABEL_85:
  v82 = _InterlockedExchangeAdd(v12, 0xFFFFFFFF);
LABEL_86:
  if ( v82 == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1LL);
LABEL_34:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v8;
}
