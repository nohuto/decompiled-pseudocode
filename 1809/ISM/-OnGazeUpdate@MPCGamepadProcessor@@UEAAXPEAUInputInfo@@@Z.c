/*
 * XREFs of ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800F88C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18004541C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800454D0 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800457AC (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180045AE0 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180045BA4 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180047A44 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x180047AF8 (-ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ.c)
 *     ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z @ 0x180047B48 (-ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3C58 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x1800F87A0 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F921C (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F9484 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x1800F9784 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1800FA994 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1801008C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180102D88 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MPCGamepadProcessor::OnGazeUpdate(unsigned __int64 this, struct InputInfo *a2)
{
  MPCGamepadInputHelper *Instance; // rax
  struct MPCGestureHandlerManager *v5; // rcx
  MPCGamepadInputHelper *v6; // rax
  char ShouldUseGazeAndCommit; // al
  _OWORD *v8; // rdi
  __int64 v9; // r13
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // r14
  struct MPCGestureHandlerManager *v14; // rcx
  bool IsInjecting; // r12
  __int64 v16; // rax
  int v17; // xmm0_4
  __int64 v18; // rax
  int v19; // xmm0_4
  char *v20; // rax
  MPCGestureHandlerManager *v21; // rcx
  const char *v22; // r9
  unsigned __int64 v23; // rdi
  struct MPCGestureHandlerManager *v24; // rcx
  struct MPCGestureHandlerManager *v25; // rcx
  float v26; // xmm3_4
  float v27; // xmm4_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm7_4
  struct MPCHolographicInputManager *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  const char *v36; // r9
  __int64 v37; // rax
  double v38; // xmm1_8
  double v39; // xmm1_8
  double v40; // xmm2_8
  struct IMPCInputProviderBase *v41; // rdi
  float v42; // xmm6_4
  unsigned int **v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  const char *v47; // r9
  unsigned int **v48; // rax
  __m128 v49; // xmm0
  __m128 v50; // xmm2
  float v51; // xmm1_4
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  const char *v55; // r9
  unsigned int **v56; // rax
  float v57; // xmm6_4
  unsigned int **v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  const char *v62; // r9
  unsigned int **v63; // rax
  __m128 v64; // xmm0
  __m128 v65; // xmm2
  float v66; // xmm1_4
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  const char *v70; // r9
  unsigned int **v71; // rax
  float v72; // xmm6_4
  unsigned int **v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  const char *v77; // r9
  unsigned int **v78; // rax
  __m128 v79; // xmm0
  __m128 v80; // xmm0
  __m128 v81; // xmm2
  float v82; // xmm1_4
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  const char *v86; // r9
  unsigned int **v87; // rax
  float v88; // xmm6_4
  unsigned int **v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  const char *v93; // r9
  unsigned int **v94; // rax
  struct MPCGestureHandlerManager *v95; // rcx
  unsigned __int64 v96; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 *v97; // [rsp+40h] [rbp-C8h]
  float v98; // [rsp+48h] [rbp-C0h]
  float v99[16]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v100; // [rsp+98h] [rbp-70h]
  _OWORD v101[4]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v102[24]; // [rsp+E8h] [rbp-20h] BYREF
  int v103; // [rsp+100h] [rbp-8h]
  char v104; // [rsp+340h] [rbp+238h] BYREF
  int v105; // [rsp+530h] [rbp+428h]
  int v106; // [rsp+540h] [rbp+438h]
  int v107; // [rsp+544h] [rbp+43Ch]
  __int128 v108; // [rsp+548h] [rbp+440h]
  int v109; // [rsp+558h] [rbp+450h]
  bool v110; // [rsp+55Ch] [rbp+454h]
  __int128 v111; // [rsp+628h] [rbp+520h]
  __int128 v112; // [rsp+638h] [rbp+530h]
  __int128 v113; // [rsp+648h] [rbp+540h]
  __int128 v114; // [rsp+658h] [rbp+550h]

  v100 = -2LL;
  *(_QWORD *)(this + 3768) = *((_QWORD *)a2 + 2);
  MPCSlateDeadzoneHelper::UpdateState(
    *(MPCSlateDeadzoneHelper **)(this + 5912),
    (*(_DWORD *)(this + 5368) & 4) != 0,
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 151),
    *((float *)a2 + 152),
    *((float *)a2 + 166));
  MPCGamepadProcessor::ProcessInteractionMode((MPCGamepadProcessor *)(this - 32));
  Instance = MPCGamepadInputHelper::GetInstance();
  if ( MPCGamepadInputHelper::ShouldHandleMPCInput(Instance) )
  {
    v6 = MPCGamepadInputHelper::GetInstance();
    ShouldUseGazeAndCommit = MPCGamepadInputHelper::ShouldUseGazeAndCommit(v6, a2);
    *(_BYTE *)(this + 5812) = ShouldUseGazeAndCommit;
    if ( ShouldUseGazeAndCommit && *((_BYTE *)a2 + 600) && MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this)
      || *(_DWORD *)(this + 5808) )
    {
      v8 = (_OWORD *)((char *)a2 + 600);
      v9 = 2LL;
      if ( *((_BYTE *)a2 + 600) )
      {
        v10 = (_OWORD *)(this + 5488);
        v11 = (_OWORD *)((char *)a2 + 600);
        v12 = 2LL;
        do
        {
          *v10 = *v11;
          v10[1] = v11[1];
          v10[2] = v11[2];
          v10[3] = v11[3];
          v10[4] = v11[4];
          v10[5] = v11[5];
          v10[6] = v11[6];
          v10 += 8;
          *(v10 - 1) = v11[7];
          v11 += 8;
          --v12;
        }
        while ( v12 );
        *v10 = *v11;
        v10[1] = v11[1];
        v10[2] = v11[2];
        v10[3] = v11[3];
      }
      if ( *((_BYTE *)a2 + 602) || *(_DWORD *)(this + 5808) )
      {
        MPCGamepadProcessor::UpdateScroll((MPCGamepadProcessor *)(this - 32), a2);
        MPCGamepadProcessor::UpdateZoom((MPCGamepadProcessor *)(this - 32), a2);
        if ( !*(_DWORD *)(this + 5808) )
        {
          if ( *(_BYTE *)v8 )
          {
            v97 = &v96;
            v13 = this & -(__int64)(this != 32);
            v96 = v13;
            if ( v13 )
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 8LL))(this & -(__int64)(this != 32));
            v14 = MPCGestureHandlerManager::GetInstance();
            IsInjecting = MPCGestureHandlerManager::IsInjecting((__int64)v14, &v96);
            memset_0(v102, 0, 0x640uLL);
            v103 = 1600;
            if ( !IsInjecting || (v16 = *(_QWORD *)(this + 5912), *(_BYTE *)(v16 + 13)) )
              v17 = *((_DWORD *)a2 + 151);
            else
              v17 = *(_DWORD *)(v16 + 4);
            v106 = v17;
            if ( !IsInjecting || (v18 = *(_QWORD *)(this + 5912), *(_BYTE *)(v18 + 13)) )
              v19 = *((_DWORD *)a2 + 152);
            else
              v19 = *(_DWORD *)(v18 + 8);
            v107 = v19;
            v108 = *(_OWORD *)((char *)a2 + 612);
            v109 = *((_DWORD *)a2 + 158);
            v110 = *((_BYTE *)a2 + 897) == 1;
            v20 = &v104;
            do
            {
              *(_OWORD *)v20 = *v8;
              *((_OWORD *)v20 + 1) = v8[1];
              *((_OWORD *)v20 + 2) = v8[2];
              *((_OWORD *)v20 + 3) = v8[3];
              *((_OWORD *)v20 + 4) = v8[4];
              *((_OWORD *)v20 + 5) = v8[5];
              *((_OWORD *)v20 + 6) = v8[6];
              v20 += 128;
              *((_OWORD *)v20 - 1) = v8[7];
              v8 += 8;
              --v9;
            }
            while ( v9 );
            *(_OWORD *)v20 = *v8;
            *((_OWORD *)v20 + 1) = v8[1];
            *((_OWORD *)v20 + 2) = v8[2];
            *((_OWORD *)v20 + 3) = v8[3];
            v105 = IsInjecting ? 7 : 4;
            v97 = &v96;
            v96 = this & -(__int64)(this != 32);
            if ( v13 )
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 8LL))(this & -(__int64)(this != 32));
            v21 = MPCGestureHandlerManager::GetInstance();
            MPCGestureHandlerManager::DownLevelTo2D(v21, (__int64)v102, &v96, v22);
          }
        }
      }
    }
    else
    {
      v97 = &v96;
      v23 = this & -(__int64)(this != 32);
      v96 = v23;
      if ( v23 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v23 + 8LL))(this & -(__int64)(this != 32));
      v24 = MPCGestureHandlerManager::GetInstance();
      if ( MPCGestureHandlerManager::IsInjecting((__int64)v24, &v96) && (*(_BYTE *)(this + 5368) & 4) == 0 )
        goto LABEL_41;
      v97 = &v96;
      v96 = this & -(__int64)(this != 32);
      if ( v23 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v23 + 8LL))(this & -(__int64)(this != 32));
      v25 = MPCGestureHandlerManager::GetInstance();
      if ( MPCGestureHandlerManager::IsHovering((__int64)v25, &v96) )
LABEL_41:
        MPCGamepadProcessor::EndGesture((MPCGamepadProcessor *)(this - 32));
    }
    v26 = *(double *)(this + 5400);
    v28 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(double *)(this + 5384)) ^ _xmm) + (float)*(double *)(this + 5376);
    v29 = 0.0;
    if ( (*(_DWORD *)(this + 5368) & 0x400) != 0 )
      v30 = FLOAT_N1_0;
    else
      v30 = 0.0;
    v31 = FLOAT_1_0;
    if ( (*(_DWORD *)(this + 5368) & 0x800) != 0 )
      v29 = FLOAT_1_0;
    v27 = *(double *)(this + 5392);
    *(float *)(this + 5840) = (float)(v27 + *(float *)(this + 5840)) * 0.5;
    *(float *)(this + 5844) = (float)(v26 + *(float *)(this + 5844)) * 0.5;
    *(float *)(this + 5848) = (float)(v28 + *(float *)(this + 5848)) * 0.5;
    *(float *)(this + 5852) = (float)((float)(v29 + v30) + *(float *)(this + 5852)) * 0.5;
    v32 = MPCHolographicInputManager::GetInstance();
    memcpy_0(v102, v32, 0x710uLL);
    v101[0] = v111;
    v101[1] = v112;
    v101[2] = v113;
    v101[3] = v114;
    MPCMath::OrientToGravity(v99, v101);
    v37 = *((_QWORD *)a2 + 2);
    v38 = (double)(int)v37;
    if ( v37 < 0 )
      v38 = v38 + 1.844674407370955e19;
    v39 = v38 * *(double *)(this + 5872);
    v40 = *(double *)(this + 5880);
    if ( v40 != 0.0 )
      v31 = (float)(v39 - v40) / 0.02;
    *(float *)(this + 5888) = v31;
    *(double *)(this + 5880) = v39;
    v41 = (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32));
    v42 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(this + 5840)) & _xmm);
    v43 = (unsigned int **)MPCConstantManager::GetInstance(v34, v33, v35, v36);
    if ( v42 >= MPCConstantManager::GetConstant<float>(v43, v41, L"ThumbstickDeadzone").m128_f32[0] )
    {
      v48 = (unsigned int **)MPCConstantManager::GetInstance(v45, v44, v46, v47);
      v49 = MPCConstantManager::GetConstant<float>(
              v48,
              (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
              L"PointScaleFactor");
      v49.m128_f32[0] = v49.m128_f32[0] * *(float *)(this + 5840);
      v50 = v49;
      v51 = (float)((float)(v49.m128_f32[0] * v99[2]) * v31) + *(float *)(this + 5836);
      v50.m128_f32[0] = (float)((float)(v49.m128_f32[0] * v99[1]) * v31) + *(float *)(this + 5832);
      v49.m128_f32[0] = (float)((float)(v49.m128_f32[0] * v99[0]) * v31) + *(float *)(this + 5828);
      v98 = v51;
      *(_QWORD *)(this + 5828) = _mm_unpacklo_ps(v49, v50).m128_u64[0];
      *(float *)(this + 5836) = v98;
      v56 = (unsigned int **)MPCConstantManager::GetInstance(v53, v52, v54, v55);
      *(float *)(this + 5856) = (float)((float)(MPCConstantManager::GetConstant<float>(
                                                  v56,
                                                  (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
                                                  L"PointScaleFactor").m128_f32[0]
                                              * *(float *)(this + 5840))
                                      * v31)
                              + *(float *)(this + 5856);
    }
    v57 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(this + 5844)) & _xmm);
    v58 = (unsigned int **)MPCConstantManager::GetInstance(v45, v44, v46, v47);
    if ( v57 >= MPCConstantManager::GetConstant<float>(
                  v58,
                  (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
                  L"ThumbstickDeadzone").m128_f32[0] )
    {
      v63 = (unsigned int **)MPCConstantManager::GetInstance(v60, v59, v61, v62);
      v64 = MPCConstantManager::GetConstant<float>(
              v63,
              (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
              L"PointScaleFactor");
      v64.m128_f32[0] = v64.m128_f32[0] * *(float *)(this + 5844);
      v65 = v64;
      v66 = (float)((float)(v64.m128_f32[0] * v99[6]) * v31) + *(float *)(this + 5836);
      v65.m128_f32[0] = (float)((float)(v64.m128_f32[0] * v99[5]) * v31) + *(float *)(this + 5832);
      v64.m128_f32[0] = (float)((float)(v64.m128_f32[0] * v99[4]) * v31) + *(float *)(this + 5828);
      v98 = v66;
      *(_QWORD *)(this + 5828) = _mm_unpacklo_ps(v64, v65).m128_u64[0];
      *(float *)(this + 5836) = v98;
      v71 = (unsigned int **)MPCConstantManager::GetInstance(v68, v67, v69, v70);
      *(float *)(this + 5860) = (float)((float)(MPCConstantManager::GetConstant<float>(
                                                  v71,
                                                  (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
                                                  L"PointScaleFactor").m128_f32[0]
                                              * *(float *)(this + 5844))
                                      * v31)
                              + *(float *)(this + 5860);
    }
    v72 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(this + 5848)) & _xmm);
    v73 = (unsigned int **)MPCConstantManager::GetInstance(v60, v59, v61, v62);
    if ( v72 >= MPCConstantManager::GetConstant<float>(
                  v73,
                  (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
                  L"ThumbstickDeadzone").m128_f32[0] )
    {
      v78 = (unsigned int **)MPCConstantManager::GetInstance(v75, v74, v76, v77);
      v79 = MPCConstantManager::GetConstant<float>(
              v78,
              (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
              L"PointScaleFactor");
      v79.m128_f32[0] = v79.m128_f32[0] * *(float *)(this + 5848);
      v80 = _mm_xor_ps(v79, (__m128)_xmm);
      v81 = v80;
      v82 = (float)((float)(v80.m128_f32[0] * v99[10]) * v31) + *(float *)(this + 5836);
      v81.m128_f32[0] = (float)((float)(v80.m128_f32[0] * v99[9]) * v31) + *(float *)(this + 5832);
      v80.m128_f32[0] = (float)((float)(v80.m128_f32[0] * v99[8]) * v31) + *(float *)(this + 5828);
      v98 = v82;
      *(_QWORD *)(this + 5828) = _mm_unpacklo_ps(v80, v81).m128_u64[0];
      *(float *)(this + 5836) = v98;
      v87 = (unsigned int **)MPCConstantManager::GetInstance(v84, v83, v85, v86);
      *(float *)(this + 5864) = (float)((float)(MPCConstantManager::GetConstant<float>(
                                                  v87,
                                                  (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
                                                  L"PointScaleFactor").m128_f32[0]
                                              * *(float *)(this + 5848))
                                      * v31)
                              + *(float *)(this + 5864);
    }
    v88 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(this + 5852)) & _xmm);
    v89 = (unsigned int **)MPCConstantManager::GetInstance(v75, v74, v76, v77);
    if ( v88 >= MPCConstantManager::GetConstant<float>(
                  v89,
                  (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
                  L"ThumbstickDeadzone").m128_f32[0] )
    {
      v94 = (unsigned int **)MPCConstantManager::GetInstance(v91, v90, v92, v93);
      *(float *)(this + 5868) = (float)((float)(MPCConstantManager::GetConstant<float>(
                                                  v94,
                                                  (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
                                                  L"PointScaleFactor").m128_f32[0]
                                              * *(float *)(this + 5852))
                                      * v31)
                              + *(float *)(this + 5868);
    }
    *(_OWORD *)(this + 5424) = *(_OWORD *)(this + 5360);
    *(_OWORD *)(this + 5440) = *(_OWORD *)(this + 5376);
    *(_OWORD *)(this + 5456) = *(_OWORD *)(this + 5392);
    *(_OWORD *)(this + 5472) = *(_OWORD *)(this + 5408);
    v97 = &v96;
    v96 = this & -(__int64)(this != 32);
    if ( v41 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v41 + 8LL))(this & -(__int64)(this != 32));
    v95 = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::OnGazeUpdate((__int64)v95, &v96);
  }
  else
  {
    if ( *(_DWORD *)(this + 5808) )
      goto LABEL_6;
    v97 = &v96;
    v96 = this & -(__int64)(this != 32);
    if ( v96 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(this & -(__int64)(this != 32)) + 8LL))(this & -(__int64)(this != 32));
    v5 = MPCGestureHandlerManager::GetInstance();
    if ( MPCGestureHandlerManager::IsHovering((__int64)v5, &v96) )
LABEL_6:
      MPCGamepadProcessor::EndGesture((MPCGamepadProcessor *)(this - 32));
  }
}
