/*
 * XREFs of ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@0I_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x180028F40
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180059ED4 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 * Callees:
 *     ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x180028CD0 (-GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA-AUKeyboardSize@2@PEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??$Make@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBUCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@12@AEBUCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@$$QEAUpermission@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@Z @ 0x1800AC448 (--$Make@V-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboar.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_GipVerticalCandidateWindowExperience@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800AC5EC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_GipVerticalCandidateWindowExperience.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_OverlayHandWritingPanel@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800AC648 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_OverlayHandWritingPanel@@@wil@@CAX_N.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptions(
        __int64 a1,
        float *a2,
        float *a3,
        int a4,
        char a5,
        __int64 a6)
{
  unsigned int v9; // r15d
  __int64 v10; // rdi
  __int64 v11; // rbx
  unsigned int v12; // esi
  int v13; // eax
  int v14; // esi
  int v15; // eax
  __int128 v16; // xmm6
  __int128 v17; // xmm8
  __int128 v18; // xmm9
  __int64 v19; // xmm7_8
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int v24; // r12d
  float v25; // xmm6_4
  float v26; // xmm12_4
  float v27; // xmm4_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  __int128 v34; // xmm7
  __int128 v35; // xmm9
  __int128 v36; // xmm10
  __int64 v37; // xmm8_8
  int v38; // eax
  int v39; // eax
  float v40; // xmm5_4
  int v41; // eax
  float v42; // xmm11_4
  int v43; // ecx
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm0_4
  float v47; // xmm2_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  __int128 v50; // xmm6
  __int128 v51; // xmm12
  __int128 v52; // xmm13
  __int64 v53; // xmm11_8
  int v54; // eax
  int v55; // eax
  int v56; // r13d
  unsigned int v57; // ecx
  unsigned int v58; // eax
  unsigned int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  float v64; // xmm11_4
  float v65; // xmm6_4
  int v66; // r12d
  float v67; // xmm1_4
  float v68; // xmm0_4
  float v69; // xmm0_4
  float v70; // xmm2_4
  float v71; // xmm1_4
  float v72; // xmm0_4
  int v73; // eax
  float v74; // xmm1_4
  float v75; // xmm0_4
  float v76; // xmm0_4
  float v77; // xmm2_4
  float v78; // xmm1_4
  float v79; // xmm0_4
  int v80; // eax
  __int64 v81; // r9
  __int64 v82; // rdx
  int v83; // [rsp+28h] [rbp-E0h]
  __int128 v84; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v85[3]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v86; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v87; // [rsp+8Ch] [rbp-7Ch]
  __int128 v88; // [rsp+98h] [rbp-70h] BYREF
  __int128 v89; // [rsp+A8h] [rbp-60h]
  __int128 v90; // [rsp+B8h] [rbp-50h]
  __int64 v91; // [rsp+C8h] [rbp-40h]
  __int64 v92; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v93; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v94; // [rsp+E4h] [rbp-24h]
  __int128 v95; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v96; // [rsp+F8h] [rbp-10h]
  __int64 v97; // [rsp+100h] [rbp-8h]
  __int64 v98; // [rsp+108h] [rbp+0h]
  float *v99; // [rsp+110h] [rbp+8h]
  __int64 v100; // [rsp+118h] [rbp+10h]
  __int128 v101; // [rsp+128h] [rbp+20h] BYREF
  __int64 v102; // [rsp+138h] [rbp+30h]
  __int128 v103; // [rsp+148h] [rbp+40h] BYREF
  _OWORD v104[3]; // [rsp+158h] [rbp+50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+260h] [rbp+158h]

  v102 = -2LL;
  v99 = a3;
  v100 = a6;
  v9 = 0;
  v10 = 0LL;
  v96 = 0LL;
  Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality const &,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::permission>(&v92);
  v11 = v92;
  if ( !v92 )
  {
    v14 = -2147024882;
    v81 = 2147942414LL;
    v82 = 35LL;
    goto LABEL_75;
  }
  v10 = v92;
  v96 = v92;
  v92 = (unsigned int)(int)*(float *)(a1 + 144);
  v12 = (int)(float)(*(float *)(a1 + 148) * 0.5);
  v98 = v12;
  v95 = *(_OWORD *)(a1 + 136);
  KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
    (__int64 **)(a1 + 16),
    &v93,
    *(HMONITOR *)(a1 + 128),
    (__int64)&v95,
    *(_DWORD *)(a1 + 168),
    *(_BYTE *)(a1 + 200),
    *(double *)(a1 + 208),
    (double *)(a1 + 192));
  v97 = (unsigned int)(int)*(float *)(a1 + 48);
  *(_QWORD *)&v95 = (unsigned int)(int)(float)(*(float *)(a1 + 52) * 0.5);
  v101 = *(_OWORD *)(a1 + 40);
  KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
    (__int64 **)(a1 + 16),
    &v86,
    *(HMONITOR *)(a1 + 32),
    (__int64)&v101,
    *(_DWORD *)(a1 + 72),
    *(_BYTE *)(a1 + 200),
    *(double *)(a1 + 208),
    (double *)(a1 + 176));
  *(_QWORD *)((char *)&v84 + 4) = 14LL;
  memset((char *)v85 + 12, 0, 28);
  LODWORD(v84) = 1;
  LODWORD(v85[0]) = v92;
  HIDWORD(v84) = v12;
  *(_QWORD *)((char *)v85 + 4) = __PAIR64__(v92, v94);
  v103 = v84;
  v104[0] = v85[0];
  v104[1] = v85[1];
  *(_QWORD *)&v104[2] = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v103);
  v14 = v13;
  if ( v13 < 0 )
  {
    v81 = (unsigned int)v13;
    v82 = 72LL;
  }
  else
  {
    v88 = v84;
    DWORD1(v88) = 13;
    v84 = v88;
    *(_QWORD *)&v85[2] = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v84);
    v14 = v15;
    if ( v15 < 0 )
    {
      v81 = (unsigned int)v15;
      v82 = 76LL;
    }
    else
    {
      DWORD2(v84) = 257;
      memset((char *)v85 + 12, 0, 24);
      *(_QWORD *)&v84 = 0x200000001LL;
      LODWORD(v85[0]) = v97;
      HIDWORD(v84) = v95;
      *(_QWORD *)((char *)v85 + 4) = __PAIR64__(v86, v87);
      DWORD1(v85[2]) = a4;
      v16 = v84;
      v103 = v84;
      v17 = v85[0];
      v104[0] = v85[0];
      v18 = v85[1];
      v104[1] = v85[1];
      v19 = *(_QWORD *)&v85[2];
      *(_QWORD *)&v104[2] = *(_QWORD *)&v85[2];
      v20 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v103);
      v14 = v20;
      if ( v20 < 0 )
      {
        v81 = (unsigned int)v20;
        v82 = 89LL;
      }
      else
      {
        v88 = v16;
        DWORD1(v88) = 10;
        v84 = v88;
        v85[0] = v17;
        v85[1] = v18;
        *(_QWORD *)&v85[2] = v19;
        v21 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v84);
        v14 = v21;
        if ( v21 < 0 )
        {
          v81 = (unsigned int)v21;
          v82 = 94LL;
        }
        else
        {
          v88 = v16;
          DWORD1(v88) = 6;
          v84 = v88;
          v85[0] = v17;
          v85[1] = v18;
          *(_QWORD *)&v85[2] = v19;
          v22 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v84);
          v14 = v22;
          if ( v22 < 0 )
          {
            v81 = (unsigned int)v22;
            v82 = 99LL;
          }
          else
          {
            v88 = v16;
            DWORD1(v88) = 1;
            v84 = v88;
            v85[0] = v17;
            v85[1] = v18;
            *(_QWORD *)&v85[2] = v19;
            v23 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v84);
            v14 = v23;
            if ( v23 < 0 )
            {
              v81 = (unsigned int)v23;
              v82 = 104LL;
            }
            else
            {
              *(_QWORD *)&v95 = (unsigned int)(int)*(float *)(a1 + 96);
              v24 = (int)(*(float *)(a1 + 100) * 0.5);
              v101 = *(_OWORD *)(a1 + 88);
              KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
                (__int64 **)(a1 + 16),
                &v86,
                *(HMONITOR *)(a1 + 80),
                (__int64)&v101,
                *(_DWORD *)(a1 + 120),
                *(_BYTE *)(a1 + 200),
                *(double *)(a1 + 208),
                (double *)(a1 + 184));
              wil::Feature<__WilFeatureTraits_Feature_OverlayHandWritingPanel>::ReportUsageToService();
              WORD5(v103) = 0;
              DWORD1(v104[2]) = 0;
              *(_QWORD *)&v103 = 0x200000002LL;
              LODWORD(v104[0]) = v92;
              HIDWORD(v103) = v98;
              *(_OWORD *)((char *)v104 + 4) = __PAIR64__(v93, v94);
              v25 = *a2;
              v26 = a2[1];
              v27 = v26 + a2[3];
              v28 = *(float *)(a1 + 136);
              v29 = *a2 - v28;
              if ( (float)(int)v92 <= v29 )
                v29 = (float)(int)v92;
              DWORD1(v104[1]) = (int)v29;
              v30 = *(float *)(a1 + 140);
              v31 = v27 - v30;
              if ( (float)(int)v98 <= (float)(v27 - v30) )
                v31 = (float)(int)v98;
              DWORD2(v104[1]) = (int)v31;
              v32 = (float)(v28 + *(float *)(a1 + 144)) - v25;
              if ( (float)(int)v92 <= v32 )
                v32 = (float)(int)v92;
              HIDWORD(v104[1]) = (int)v32;
              v33 = (float)(v30 + *(float *)(a1 + 148)) - v27;
              if ( (float)(int)v98 <= v33 )
                v33 = (float)(int)v98;
              LODWORD(v104[2]) = (int)v33;
              WORD4(v103) = 0;
              v34 = v103;
              v84 = v103;
              v35 = v104[0];
              v85[0] = v104[0];
              v36 = v104[1];
              v85[1] = v104[1];
              v37 = *(_QWORD *)&v104[2];
              *(_QWORD *)&v85[2] = *(_QWORD *)&v104[2];
              v38 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v84);
              v14 = v38;
              if ( v38 < 0 )
              {
                v81 = (unsigned int)v38;
                v82 = 149LL;
              }
              else
              {
                v88 = v34;
                DWORD1(v88) = 1;
                v84 = v88;
                v85[0] = v35;
                v85[1] = v36;
                *(_QWORD *)&v85[2] = v37;
                v39 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v84);
                v14 = v39;
                if ( v39 < 0 )
                {
                  v81 = (unsigned int)v39;
                  v82 = 153LL;
                }
                else
                {
                  wil::Feature<__WilFeatureTraits_Feature_GipVerticalCandidateWindowExperience>::ReportUsageToService();
                  v40 = *(float *)(a1 + 144);
                  v41 = (int)(float)(v40 * 0.5);
                  v42 = *(float *)(a1 + 148);
                  v43 = (int)v42;
                  v84 = v34;
                  v85[1] = v36;
                  *(_QWORD *)&v85[2] = v37;
                  LODWORD(v85[0]) = v41;
                  HIDWORD(v84) = (int)v42;
                  *((_QWORD *)&v85[0] + 1) = __PAIR64__(HIDWORD(v35), v41);
                  DWORD1(v85[0]) = (int)v42;
                  v44 = *(float *)(a1 + 136);
                  v45 = v25 - v44;
                  if ( (float)v41 <= (float)(v25 - v44) )
                    v45 = (float)v41;
                  DWORD1(v85[1]) = (int)v45;
                  v46 = *(float *)(a1 + 140);
                  v47 = v26 - v46;
                  if ( (float)v43 <= (float)(v26 - v46) )
                    v47 = (float)v43;
                  DWORD2(v85[1]) = (int)v47;
                  v48 = (float)(v44 + v40) - v25;
                  if ( (float)v41 <= v48 )
                    v48 = (float)v41;
                  HIDWORD(v85[1]) = (int)v48;
                  v49 = (float)(v46 + v42) - v26;
                  if ( (float)v43 <= v49 )
                    v49 = (float)v43;
                  LODWORD(v85[2]) = (int)v49;
                  v50 = v84;
                  v88 = v84;
                  v51 = v85[0];
                  v52 = v85[1];
                  v53 = *(_QWORD *)&v85[2];
                  DWORD1(v88) = 4;
                  v84 = v88;
                  v54 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v84);
                  v14 = v54;
                  if ( v54 < 0 )
                  {
                    v81 = (unsigned int)v54;
                    v82 = 175LL;
                  }
                  else
                  {
                    v88 = v50;
                    DWORD1(v88) = 8;
                    v84 = v88;
                    v85[0] = v51;
                    v85[1] = v52;
                    *(_QWORD *)&v85[2] = v53;
                    v55 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v84);
                    v14 = v55;
                    if ( v55 < 0 )
                    {
                      v81 = (unsigned int)v55;
                      v82 = 179LL;
                    }
                    else
                    {
                      memset((char *)v104 + 12, 0, 28);
                      LODWORD(v103) = 2;
                      *(_QWORD *)((char *)&v103 + 4) = 0x10100000002LL;
                      v56 = v95;
                      LODWORD(v104[0]) = v95;
                      HIDWORD(v103) = v24;
                      *(_QWORD *)((char *)v104 + 4) = __PAIR64__(v86, v87);
                      v57 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
                      v58 = v95;
                      if ( v57 < (unsigned int)v95 )
                        v58 = v57;
                      DWORD1(v104[1]) = v58;
                      v59 = v24;
                      if ( DWORD2(v104[1]) < v24 )
                        v59 = DWORD2(v104[1]);
                      DWORD2(v104[1]) = v59;
                      v60 = v95;
                      if ( (_DWORD)v95 )
                        v60 = 0;
                      HIDWORD(v104[1]) = v60;
                      if ( LODWORD(v104[2]) < v24 )
                        v24 = v104[2];
                      LODWORD(v104[2]) = v24;
                      if ( !a5 )
                        goto LABEL_37;
                      v84 = v34;
                      v85[0] = v35;
                      v85[1] = v36;
                      *(_QWORD *)&v85[2] = v37;
                      v64 = *v99;
                      v65 = v99[3] + v99[1];
                      DWORD1(v84) = 6;
                      v66 = (int)v99[2];
                      DWORD2(v85[0]) = v66;
                      LODWORD(v85[0]) = v66;
                      LODWORD(v85[1]) = v66;
                      v67 = *(float *)(a1 + 136);
                      v68 = v64 - v67;
                      if ( (float)v66 <= (float)(v64 - v67) )
                        v68 = (float)v66;
                      DWORD1(v85[1]) = (int)v68;
                      v69 = *(float *)(a1 + 140);
                      v70 = v65 - v69;
                      if ( (float)SHIDWORD(v84) <= (float)(v65 - v69) )
                        v70 = (float)SHIDWORD(v84);
                      DWORD2(v85[1]) = (int)v70;
                      v71 = (float)(v67 + *(float *)(a1 + 144)) - v64;
                      if ( (float)v66 <= v71 )
                        v71 = (float)v66;
                      HIDWORD(v85[1]) = (int)v71;
                      v72 = (float)(v69 + *(float *)(a1 + 148)) - v65;
                      if ( (float)SHIDWORD(v84) <= v72 )
                        v72 = (float)SHIDWORD(v84);
                      LODWORD(v85[2]) = (int)v72;
                      v88 = v84;
                      v89 = v85[0];
                      v90 = v85[1];
                      v91 = *(_QWORD *)&v85[2];
                      v73 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v88);
                      v14 = v73;
                      if ( v73 < 0 )
                      {
                        v81 = (unsigned int)v73;
                        v82 = 212LL;
                        goto LABEL_75;
                      }
                      v84 = v34;
                      v85[0] = v35;
                      v85[1] = v36;
                      *(_QWORD *)&v85[2] = v37;
                      DWORD1(v84) = 6;
                      DWORD2(v85[0]) = v66;
                      LODWORD(v85[0]) = v56;
                      v74 = *(float *)(a1 + 136);
                      v75 = v64 - v74;
                      if ( (float)v56 <= (float)(v64 - v74) )
                        v75 = (float)v56;
                      DWORD1(v85[1]) = (int)v75;
                      v76 = *(float *)(a1 + 140);
                      v77 = v65 - v76;
                      if ( (float)SHIDWORD(v84) <= (float)(v65 - v76) )
                        v77 = (float)SHIDWORD(v84);
                      DWORD2(v85[1]) = (int)v77;
                      v78 = (float)(v74 + *(float *)(a1 + 144)) - v64;
                      if ( (float)v56 <= v78 )
                        v78 = (float)v56;
                      HIDWORD(v85[1]) = (int)v78;
                      v79 = (float)(v76 + *(float *)(a1 + 148)) - v65;
                      if ( (float)SHIDWORD(v84) <= v79 )
                        v79 = (float)SHIDWORD(v84);
                      LODWORD(v85[2]) = (int)v79;
                      v88 = v84;
                      v89 = v85[0];
                      v90 = v85[1];
                      v91 = *(_QWORD *)&v85[2];
                      v80 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v88);
                      v14 = v80;
                      if ( v80 < 0 )
                      {
                        v81 = (unsigned int)v80;
                        v82 = 225LL;
                      }
                      else
                      {
LABEL_37:
                        v88 = v103;
                        v89 = v104[0];
                        v90 = v104[1];
                        v91 = *(_QWORD *)&v104[2];
                        v61 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v88);
                        v14 = v61;
                        if ( v61 < 0 )
                        {
                          v81 = (unsigned int)v61;
                          v82 = 228LL;
                        }
                        else
                        {
                          v62 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 64LL))(v11, v100);
                          v14 = v62;
                          if ( v62 >= 0 )
                            goto LABEL_39;
                          v81 = (unsigned int)v62;
                          v82 = 230LL;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_75:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v82,
    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
    (const char *)v81,
    v83);
  v9 = v14;
LABEL_39:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v9;
}
