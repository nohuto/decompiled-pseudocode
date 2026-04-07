/*
 * XREFs of ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18000C3A0
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18003E6B0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x18000C8A0 (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18000C924 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::OnTick(CAnimationEngine *this, double a2, bool *a3)
{
  bool *v4; // r15
  char v5; // r14
  int started; // eax
  __int64 v7; // rdx
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 **v15; // rcx
  __int64 *v16; // r14
  __int64 v17; // r15
  __int64 v18; // r13
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // rax
  int v22; // eax
  unsigned int v23; // r8d
  int v24; // eax
  __int64 (__fastcall *v25)(__int64 *, _BYTE *); // rax
  int v26; // eax
  __int64 v27; // r15
  __int64 v28; // r15
  int v29; // eax
  int v30; // eax
  __int64 (__fastcall *v31)(__int64 *, _BYTE *); // rax
  int v32; // eax
  int v33; // eax
  char v34; // bl
  int v36; // eax
  int v37; // eax
  __int64 v38; // rcx
  float v39; // xmm0_4
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned int i; // r15d
  _QWORD *v45; // rax
  __int64 v46; // r12
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rax
  float v51; // xmm0_4
  int v52; // eax
  int v53; // eax
  __int64 v54; // rcx
  float v55; // xmm0_4
  float v56; // xmm0_4
  __int64 v57; // rax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  __int64 v61; // rcx
  float v62; // xmm0_4
  __int64 v63; // rax
  int v64; // eax
  int v65; // eax
  __int64 v66; // rcx
  float v67; // xmm0_4
  float v68; // xmm0_4
  __int64 v69; // rax
  int v70; // eax
  int v71; // eax
  __int64 v72; // rax
  float *v73; // rcx
  double v74; // xmm0_8
  int v75; // eax
  char v76; // [rsp+38h] [rbp-D0h]
  unsigned int v77; // [rsp+3Ch] [rbp-CCh] BYREF
  int v78; // [rsp+40h] [rbp-C8h]
  unsigned int v79; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v80; // [rsp+48h] [rbp-C0h]
  double v81; // [rsp+50h] [rbp-B8h] BYREF
  double v82; // [rsp+58h] [rbp-B0h]
  __int64 v83; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v84; // [rsp+68h] [rbp-A0h]
  __int64 v85; // [rsp+70h] [rbp-98h]
  __int64 v86; // [rsp+78h] [rbp-90h]
  double v87; // [rsp+80h] [rbp-88h] BYREF
  __int64 v88; // [rsp+88h] [rbp-80h]
  bool *v89; // [rsp+90h] [rbp-78h]
  __int64 v90; // [rsp+98h] [rbp-70h]
  __int64 v91; // [rsp+A8h] [rbp-60h]
  __int64 v92; // [rsp+B8h] [rbp-50h]
  __int64 v93; // [rsp+C8h] [rbp-40h]
  int v94; // [rsp+E0h] [rbp-28h]
  __int64 v95; // [rsp+E8h] [rbp-20h]
  __int64 v96; // [rsp+F8h] [rbp-10h]
  __int64 v97; // [rsp+108h] [rbp+0h]
  __int64 v98; // [rsp+118h] [rbp+10h]
  int v99; // [rsp+130h] [rbp+28h]
  double v100; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v101[2]; // [rsp+140h] [rbp+38h] BYREF
  _QWORD v102[2]; // [rsp+150h] [rbp+48h]
  _BYTE v103[20]; // [rsp+160h] [rbp+58h] BYREF
  float v104; // [rsp+174h] [rbp+6Ch]
  float v105; // [rsp+178h] [rbp+70h]
  float v106; // [rsp+17Ch] [rbp+74h]
  int v107; // [rsp+18Ch] [rbp+84h]
  int v108; // [rsp+190h] [rbp+88h]
  int v109; // [rsp+194h] [rbp+8Ch]
  _BYTE v110[20]; // [rsp+198h] [rbp+90h] BYREF
  float v111; // [rsp+1ACh] [rbp+A4h]
  float v112; // [rsp+1B0h] [rbp+A8h]
  float v113; // [rsp+1B4h] [rbp+ACh]
  int v114; // [rsp+1C4h] [rbp+BCh]
  int v115; // [rsp+1C8h] [rbp+C0h]
  int v116; // [rsp+1CCh] [rbp+C4h]
  _BYTE v117[20]; // [rsp+1D0h] [rbp+C8h] BYREF
  float v118; // [rsp+1E4h] [rbp+DCh]
  float v119; // [rsp+1E8h] [rbp+E0h]
  int v120; // [rsp+1F4h] [rbp+ECh]
  int v121; // [rsp+1F8h] [rbp+F0h]
  _BYTE v122[20]; // [rsp+200h] [rbp+F8h] BYREF
  float v123; // [rsp+214h] [rbp+10Ch]
  float v124; // [rsp+218h] [rbp+110h]
  int v125; // [rsp+224h] [rbp+11Ch]
  int v126; // [rsp+228h] [rbp+120h]
  _BYTE v127[20]; // [rsp+230h] [rbp+128h] BYREF
  float v128; // [rsp+244h] [rbp+13Ch]
  _BYTE v129[20]; // [rsp+250h] [rbp+148h] BYREF
  float v130; // [rsp+264h] [rbp+15Ch]
  float v131; // [rsp+268h] [rbp+160h]
  float v132; // [rsp+26Ch] [rbp+164h]
  _BYTE v133[20]; // [rsp+288h] [rbp+180h] BYREF
  float v134; // [rsp+29Ch] [rbp+194h]
  float v135; // [rsp+2A0h] [rbp+198h]
  _BYTE v136[20]; // [rsp+2B8h] [rbp+1B0h] BYREF
  char v137; // [rsp+2CCh] [rbp+1C4h] BYREF
  double v138; // [rsp+2F0h] [rbp+1E8h] BYREF
  double v139; // [rsp+2F8h] [rbp+1F0h]
  double v140; // [rsp+300h] [rbp+1F8h]
  double v141[4]; // [rsp+308h] [rbp+200h] BYREF

  v89 = a3;
  v4 = a3;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0;
  *((double *)this + 13) = a2;
  v76 = 0;
  started = CAnimationEngine::StartAnimations(this);
  v8 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x141u);
    goto LABEL_37;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
         *((_QWORD *)this + 1),
         v7,
         0LL);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x144u);
    goto LABEL_37;
  }
  v10 = 0LL;
  v78 = 0;
  if ( !*((_DWORD *)this + 16) )
    goto LABEL_30;
  while ( 1 )
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v10);
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    if ( *(_BYTE *)(v11 + 48) && !*(_BYTE *)(v11 + 49) )
      break;
    CBaseObject::Release((CBaseObject *)v11);
LABEL_28:
    v10 = (unsigned int)(v10 + 1);
    v78 = v10;
    if ( (unsigned int)v10 >= *((_DWORD *)this + 16) )
    {
      v4 = v89;
LABEL_30:
      v33 = CAnimationEngine::StopAnimations(this);
      v8 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x210u);
      }
      else if ( v5
             && ((EnterCriticalSection(&CDesktopManager::s_csDwmInstance), !*((_DWORD *)this + 16))
              || !*((_BYTE *)this + 120)
               ? (v34 = 1)
               : (v34 = 0),
                 LeaveCriticalSection(&CDesktopManager::s_csDwmInstance),
                 !v34)
             || *((_BYTE *)this + 112) )
      {
        *v4 = 1;
        *((_BYTE *)this + 112) = 0;
      }
      goto LABEL_37;
    }
  }
  ++*(_DWORD *)(v11 + 24);
  v12 = 0;
  LODWORD(v80) = 0;
  if ( !*(_DWORD *)(v11 + 20) )
  {
LABEL_26:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1LL);
    goto LABEL_28;
  }
  while ( 1 )
  {
    v13 = v12;
    v14 = *(_QWORD *)(v11 + 40);
    v84 = v13;
    v15 = *(__int64 ***)(v14 + 8 * v13);
    v16 = *v15;
    v17 = *v15[1];
    v18 = *v15[5];
    v19 = v15[6];
    v85 = *v15[4];
    v20 = *v19;
    v21 = v15[7];
    v86 = v20;
    v88 = *v21;
    if ( (*(int (__fastcall **)(_QWORD, double *))(**(_QWORD **)(v11 + 32) + 152LL))(*(_QWORD *)(v11 + 32), &v100) >= 0 )
      *(double *)(v11 + 56) = v100 + *(double *)(v11 + 56);
    if ( *(_DWORD *)(v11 + 24) <= 1u )
    {
      v42 = **(_QWORD **)(*(_QWORD *)(v11 + 40) + 8 * v13);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v42 + 48LL))(v42, &v83) >= 0 && *(float *)&v83 == 0.0 )
      {
        v102[0] = 0LL;
        v101[0] = 0LL;
        v101[1] = 0LL;
        v43 = *(_QWORD *)(v11 + 40);
        *(_QWORD *)((char *)v102 + 4) = 1065353216LL;
        (*(void (__fastcall **)(_QWORD, _QWORD *))(***(_QWORD ***)(v43 + 8 * v13) + 168LL))(
          **(_QWORD **)(v43 + 8 * v13),
          v101);
      }
    }
    (*(void (__fastcall **)(__int64 *))(*v16 + 120))(v16);
    if ( v17 )
    {
      v22 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 24LL))(v17, &v77);
      v8 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x17Du);
        goto LABEL_87;
      }
      v23 = v77;
      if ( v77 == 2 )
      {
        v24 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v17 + 40LL))(v17, &v81);
        v8 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x180u);
          goto LABEL_87;
        }
        v25 = *(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v16 + 144);
        v134 = v81;
        v135 = v82;
        v26 = v25(v16, v133);
        v8 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x186u);
          goto LABEL_87;
        }
      }
      else if ( v77 == 3 )
      {
        for ( i = 0; i < v23; ++i )
        {
          v45 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 8 * v13) + 8LL * (int)i + 8);
          v46 = *v45;
          if ( *v45 )
          {
            v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(*(_QWORD *)v46 + 200LL))(*v45, 0LL, &v79);
            v8 = v47;
            if ( v47 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x194u);
              goto LABEL_87;
            }
            v48 = **(_QWORD **)(*(_QWORD *)(v11 + 40) + 8 * v84);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v48 + 240LL))(v48, v79);
            v49 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v46 + 40LL))(v46, &v138, 3LL);
            v8 = v49;
            if ( v49 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x199u);
              goto LABEL_87;
            }
            v50 = *(_QWORD *)(v11 + 40);
            v13 = v84;
            v51 = v138;
            v130 = v51;
            v131 = v139;
            v132 = v140;
            (*(void (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)(v50 + 8 * v84) + 240LL))(
              **(_QWORD **)(v50 + 8 * v84),
              v79);
            v52 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v16 + 176))(v16, v129);
            v8 = v52;
            if ( v52 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x1A1u);
              goto LABEL_87;
            }
            v23 = v77;
          }
          else
          {
            v13 = v84;
          }
        }
      }
    }
    if ( v18 )
    {
      v36 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 24LL))(v18, &v77);
      v8 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x1ADu);
        goto LABEL_87;
      }
      if ( v77 == 2 )
      {
        v37 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v18 + 40LL))(v18, &v81, 2LL);
        v8 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x1B0u);
          goto LABEL_87;
        }
        v38 = *(_QWORD *)(v11 + 40);
        v39 = v81;
        v118 = v39;
        v119 = v82;
        v90 = *(_QWORD *)(*(_QWORD *)(v38 + 8 * v13) + 64LL);
        v120 = v90;
        v40 = *v16;
        v91 = *(_QWORD *)(*(_QWORD *)(v38 + 8 * v13) + 64LL);
        v121 = HIDWORD(v91);
        v41 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(v40 + 152))(v16, v117);
        v8 = v41;
        if ( v41 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x1B8u);
          goto LABEL_87;
        }
      }
      else if ( v77 == 3 )
      {
        v53 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v18 + 40LL))(v18, &v138, 3LL);
        v8 = v53;
        if ( v53 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x1BCu);
          goto LABEL_87;
        }
        v54 = *(_QWORD *)(v11 + 40);
        v55 = v138;
        v104 = v55;
        v56 = v140;
        v105 = v139;
        v106 = v56;
        v92 = *(_QWORD *)(*(_QWORD *)(v54 + 8 * v13) + 64LL);
        v107 = v92;
        v93 = *(_QWORD *)(*(_QWORD *)(v54 + 8 * v13) + 64LL);
        v108 = HIDWORD(v93);
        v94 = *(_DWORD *)(*(_QWORD *)(v54 + 8 * v13) + 72LL);
        v57 = *v16;
        v109 = v94;
        v58 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(v57 + 184))(v16, v103);
        v8 = v58;
        if ( v58 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x1C6u);
          goto LABEL_87;
        }
      }
    }
    v27 = v85;
    if ( v85 )
    {
      v59 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v85 + 24LL))(v85, &v77);
      v8 = v59;
      if ( v59 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0x1D0u);
        goto LABEL_87;
      }
      if ( v77 == 2 )
      {
        v60 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v27 + 40LL))(v27, &v81, 2LL);
        v8 = v60;
        if ( v60 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v60, 0x1D3u);
          goto LABEL_87;
        }
        v61 = *(_QWORD *)(v11 + 40);
        v62 = v81;
        v123 = v62;
        v124 = v82;
        v95 = *(_QWORD *)(*(_QWORD *)(v61 + 8 * v13) + 76LL);
        v125 = v95;
        v63 = *v16;
        v96 = *(_QWORD *)(*(_QWORD *)(v61 + 8 * v13) + 76LL);
        v126 = HIDWORD(v96);
        v64 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(v63 + 160))(v16, v122);
        v8 = v64;
        if ( v64 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x1DBu);
          goto LABEL_87;
        }
      }
      else if ( v77 == 3 )
      {
        v65 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v27 + 40LL))(v27, &v138, 3LL);
        v8 = v65;
        if ( v65 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v65, 0x1DFu);
          goto LABEL_87;
        }
        v66 = *(_QWORD *)(v11 + 40);
        v67 = v138;
        v111 = v67;
        v68 = v140;
        v112 = v139;
        v113 = v68;
        v97 = *(_QWORD *)(*(_QWORD *)(v66 + 8 * v13) + 76LL);
        v114 = v97;
        v98 = *(_QWORD *)(*(_QWORD *)(v66 + 8 * v13) + 76LL);
        v115 = HIDWORD(v98);
        v99 = *(_DWORD *)(*(_QWORD *)(v66 + 8 * v13) + 84LL);
        v69 = *v16;
        v116 = v99;
        v70 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(v69 + 192))(v16, v110);
        v8 = v70;
        if ( v70 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0x1E8u);
          goto LABEL_87;
        }
      }
    }
    v28 = v86;
    if ( !v86 )
      goto LABEL_23;
    v29 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v86 + 24LL))(v86, &v77);
    v8 = v29;
    if ( v29 < 0 )
      break;
    v30 = (*(__int64 (__fastcall **)(__int64, double *, _QWORD))(*(_QWORD *)v28 + 40LL))(v28, &v87, v77);
    v8 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x1F6u);
      goto LABEL_87;
    }
    v31 = *(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v16 + 168);
    v128 = v87;
    v32 = v31(v16, v127);
    v8 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x1FBu);
      goto LABEL_87;
    }
LABEL_23:
    if ( v88 )
    {
      v71 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v88 + 40LL))(v88, v141, 4LL);
      v8 = v71;
      if ( v71 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v71, 0x200u);
        goto LABEL_87;
      }
      v72 = 0LL;
      v73 = (float *)&v137;
      do
      {
        v74 = v141[v72++];
        *v73++ = v74;
      }
      while ( v72 < 4 );
      v75 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v16 + 200))(v16, v136);
      v8 = v75;
      if ( v75 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v75, 0x208u);
        goto LABEL_87;
      }
    }
    v5 = (*(__int64 (__fastcall **)(__int64 *))(*v16 + 248))(v16) | v76;
    v12 = v80 + 1;
    v76 = v5;
    LODWORD(v80) = v12;
    if ( v12 >= *(_DWORD *)(v11 + 20) )
    {
      LODWORD(v10) = v78;
      goto LABEL_26;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x1F2u);
LABEL_87:
  CBaseObject::Release((CBaseObject *)v11);
LABEL_37:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v8;
}
