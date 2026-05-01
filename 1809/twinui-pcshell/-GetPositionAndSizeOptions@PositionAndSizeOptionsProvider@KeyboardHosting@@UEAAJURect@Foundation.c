/*
 * XREFs of ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@0I_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800547B0
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180054554 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ??$Make@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBUCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@12@AEBUCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@$$QEAUpermission@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@Z @ 0x1800943FC (--$Make@V-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboar.c)
 *     ?GetDefaultKeyboardSizeConsideringOverriddenMonitorSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x1800945A0 (-GetDefaultKeyboardSizeConsideringOverriddenMonitorSize@PositionAndSizeOptionsHelper@KeyboardHos.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GenericInputProcessor@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1802CE00C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GenericInputProcessor@@@wil@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_OverlayHandWritingPanel@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1802CE0C8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_OverlayHandWritingPanel@@@wi.c)
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
  __int128 v13; // xmm6
  __int128 v14; // xmm8
  __int128 v15; // xmm9
  __int64 v16; // xmm7_8
  int v17; // eax
  int v18; // esi
  int v19; // eax
  __int128 v20; // xmm6
  __int128 v21; // xmm8
  __int128 v22; // xmm9
  __int64 v23; // xmm7_8
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned int v28; // r13d
  float v29; // xmm6_4
  float v30; // xmm4_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  __int128 v37; // xmm6
  __int128 v38; // xmm8
  __int128 v39; // xmm9
  __int64 v40; // xmm7_8
  int v41; // eax
  int v42; // eax
  int v43; // edx
  unsigned int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  float v49; // xmm6_4
  float v50; // xmm3_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm1_4
  float v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm1_4
  int v57; // eax
  __int64 v58; // r9
  __int64 v59; // rdx
  int v60; // [rsp+30h] [rbp-D8h]
  int v61; // [rsp+30h] [rbp-D8h]
  __int64 v62; // [rsp+48h] [rbp-C0h]
  __int128 v63; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v64; // [rsp+68h] [rbp-A0h]
  __int128 v65; // [rsp+78h] [rbp-90h]
  __int64 v66; // [rsp+88h] [rbp-80h]
  unsigned int v67[4]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v68; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v69; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v70; // [rsp+BCh] [rbp-4Ch]
  __int128 v71; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v72; // [rsp+D8h] [rbp-30h]
  __int128 v73; // [rsp+E8h] [rbp-20h]
  __int64 v74; // [rsp+F8h] [rbp-10h]
  __int64 v75; // [rsp+108h] [rbp+0h]
  __int128 v76; // [rsp+118h] [rbp+10h] BYREF
  __int64 v77; // [rsp+128h] [rbp+20h]
  __int64 v78; // [rsp+130h] [rbp+28h]
  float *v79; // [rsp+138h] [rbp+30h]
  __int64 v80; // [rsp+140h] [rbp+38h]
  __int64 v81; // [rsp+148h] [rbp+40h]
  __int128 v82; // [rsp+158h] [rbp+50h] BYREF
  __int128 v83; // [rsp+168h] [rbp+60h]
  __int128 v84; // [rsp+178h] [rbp+70h]
  __int64 v85; // [rsp+188h] [rbp+80h]
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v81 = -2LL;
  v79 = a3;
  v80 = a6;
  v9 = 0;
  v10 = 0LL;
  v77 = 0LL;
  Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality const &,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::permission>(v67);
  v11 = *(_QWORD *)v67;
  if ( *(_QWORD *)v67 )
  {
    v10 = *(_QWORD *)v67;
    v77 = *(_QWORD *)v67;
    v75 = (unsigned int)(int)*(float *)(a1 + 144);
    v12 = (int)(float)(*(float *)(a1 + 148) * 0.5);
    v78 = v12;
    v76 = *(_OWORD *)(a1 + 136);
    KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSizeConsideringOverriddenMonitorSize(
      a1 + 16,
      &v69,
      *(_QWORD *)(a1 + 128),
      &v76,
      *(_DWORD *)(a1 + 168),
      *(_BYTE *)(a1 + 200),
      *(_QWORD *)(a1 + 208),
      a1 + 192);
    *(_QWORD *)v67 = (unsigned int)(int)*(float *)(a1 + 48);
    v62 = (unsigned int)(int)(float)(*(float *)(a1 + 52) * 0.5);
    v76 = *(_OWORD *)(a1 + 40);
    LOBYTE(v60) = *(_BYTE *)(a1 + 200);
    KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSizeConsideringOverriddenMonitorSize(
      a1 + 16,
      &v68,
      *(_QWORD *)(a1 + 32),
      &v76,
      *(_DWORD *)(a1 + 72),
      v60,
      *(_QWORD *)(a1 + 208),
      a1 + 176);
    memset_0(&v63, 0, 0x38uLL);
    *(_QWORD *)&v63 = 0xE00000001LL;
    LODWORD(v64) = v75;
    HIDWORD(v63) = v12;
    *(_QWORD *)((char *)&v64 + 4) = __PAIR64__(v75, v70);
    WORD4(v63) = 0;
    v13 = v63;
    v82 = v63;
    v14 = v64;
    v83 = v64;
    v15 = v65;
    v84 = v65;
    v16 = v66;
    v85 = v66;
    v17 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v82);
    v18 = v17;
    if ( v17 < 0 )
    {
      v58 = (unsigned int)v17;
      v59 = 72LL;
    }
    else
    {
      v71 = v13;
      DWORD1(v71) = 13;
      v63 = v71;
      v64 = v14;
      v65 = v15;
      v66 = v16;
      v19 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v63);
      v18 = v19;
      if ( v19 < 0 )
      {
        v58 = (unsigned int)v19;
        v59 = 76LL;
      }
      else
      {
        memset_0(&v63, 0, 0x38uLL);
        *(_QWORD *)&v63 = 0x200000001LL;
        *(_QWORD *)&v64 = __PAIR64__(DWORD1(v68), v67[0]);
        HIDWORD(v63) = v62;
        DWORD2(v64) = v68;
        HIDWORD(v66) = a4;
        WORD4(v63) = 257;
        v20 = v63;
        v82 = v63;
        v21 = v64;
        v83 = v64;
        v22 = v65;
        v84 = v65;
        v23 = v66;
        v85 = v66;
        v24 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v82);
        v18 = v24;
        if ( v24 < 0 )
        {
          v58 = (unsigned int)v24;
          v59 = 89LL;
        }
        else
        {
          v71 = v20;
          DWORD1(v71) = 10;
          v63 = v71;
          v64 = v21;
          v65 = v22;
          v66 = v23;
          v25 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v63);
          v18 = v25;
          if ( v25 < 0 )
          {
            v58 = (unsigned int)v25;
            v59 = 94LL;
          }
          else
          {
            v71 = v20;
            DWORD1(v71) = 6;
            v63 = v71;
            v64 = v21;
            v65 = v22;
            v66 = v23;
            v26 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v63);
            v18 = v26;
            if ( v26 < 0 )
            {
              v58 = (unsigned int)v26;
              v59 = 99LL;
            }
            else
            {
              v71 = v20;
              DWORD1(v71) = 1;
              v63 = v71;
              v64 = v21;
              v65 = v22;
              v66 = v23;
              v27 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v63);
              v18 = v27;
              if ( v27 < 0 )
              {
                v58 = (unsigned int)v27;
                v59 = 104LL;
              }
              else
              {
                v28 = (int)*(float *)(a1 + 96);
                *(_QWORD *)&v76 = (unsigned int)(int)(*(float *)(a1 + 100) * 0.5);
                v68 = *(_OWORD *)(a1 + 88);
                LOBYTE(v61) = *(_BYTE *)(a1 + 200);
                KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSizeConsideringOverriddenMonitorSize(
                  a1 + 16,
                  v67,
                  *(_QWORD *)(a1 + 80),
                  &v68,
                  *(_DWORD *)(a1 + 120),
                  v61,
                  *(_QWORD *)(a1 + 208),
                  a1 + 184);
                if ( (`wil::Feature<__WilFeatureTraits_Feature_OverlayHandWritingPanel>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
                  wil::Feature<__WilFeatureTraits_Feature_OverlayHandWritingPanel>::GetCachedFeatureEnabledState();
                BYTE4(v62) = 0;
                LODWORD(v68) = 0;
                WORD2(v68) = WORD2(v62);
                wil::details::ReportUsageToService(
                  &`wil::Feature<__WilFeatureTraits_Feature_OverlayHandWritingPanel>::GetFeaturePropertyCache'::`2'::data,
                  11217568LL,
                  &v68,
                  0LL,
                  3);
                memset_0(&v82, 0, 0x38uLL);
                *(_QWORD *)&v82 = 0x200000002LL;
                LODWORD(v83) = v75;
                HIDWORD(v82) = v78;
                *(_QWORD *)((char *)&v83 + 4) = __PAIR64__(v69, v70);
                v29 = *a2;
                v30 = a2[3] + a2[1];
                v31 = *(float *)(a1 + 136);
                v32 = *a2 - v31;
                if ( (float)(int)v75 <= v32 )
                  v32 = (float)(int)v75;
                DWORD1(v84) = (int)v32;
                v33 = *(float *)(a1 + 140);
                v34 = v30 - v33;
                if ( (float)(int)v78 <= (float)(v30 - v33) )
                  v34 = (float)(int)v78;
                DWORD2(v84) = (int)v34;
                v35 = (float)(v31 + *(float *)(a1 + 144)) - v29;
                if ( (float)(int)v75 <= v35 )
                  v35 = (float)(int)v75;
                HIDWORD(v84) = (int)v35;
                v36 = (float)(v33 + *(float *)(a1 + 148)) - v30;
                if ( (float)(int)v78 <= v36 )
                  v36 = (float)(int)v78;
                LODWORD(v85) = (int)v36;
                WORD4(v82) = 0;
                v37 = v82;
                v63 = v82;
                v38 = v83;
                v64 = v83;
                v39 = v84;
                v65 = v84;
                v40 = v85;
                v66 = v85;
                v41 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v63);
                v18 = v41;
                if ( v41 < 0 )
                {
                  v58 = (unsigned int)v41;
                  v59 = 149LL;
                }
                else
                {
                  v71 = v37;
                  DWORD1(v71) = 1;
                  v63 = v71;
                  v64 = v38;
                  v65 = v39;
                  v66 = v40;
                  v42 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v63);
                  v18 = v42;
                  if ( v42 < 0 )
                  {
                    v58 = (unsigned int)v42;
                    v59 = 153LL;
                  }
                  else
                  {
                    if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericInputProcessor>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
                      wil::Feature<__WilFeatureTraits_Feature_GenericInputProcessor>::GetCachedFeatureEnabledState();
                    BYTE4(v62) = 0;
                    LODWORD(v68) = 0;
                    WORD2(v68) = WORD2(v62);
                    wil::details::ReportUsageToService(
                      &`wil::Feature<__WilFeatureTraits_Feature_GenericInputProcessor>::GetFeaturePropertyCache'::`2'::data,
                      11100291LL,
                      &v68,
                      0LL,
                      3);
                    memset_0(&v82, 0, 0x38uLL);
                    *(_QWORD *)&v82 = 0x200000002LL;
                    *(_QWORD *)&v83 = __PAIR64__(v67[1], v28);
                    v43 = v76;
                    HIDWORD(v82) = v76;
                    DWORD2(v83) = v67[0];
                    v44 = v28;
                    if ( DWORD1(v84) < v28 )
                      v44 = DWORD1(v84);
                    DWORD1(v84) = v44;
                    v45 = v76;
                    if ( DWORD2(v84) < (unsigned int)v76 )
                      v45 = DWORD2(v84);
                    DWORD2(v84) = v45;
                    if ( HIDWORD(v84) < v28 )
                      v28 = HIDWORD(v84);
                    HIDWORD(v84) = v28;
                    if ( (unsigned int)v85 < (unsigned int)v76 )
                      v43 = v85;
                    LODWORD(v85) = v43;
                    WORD4(v82) = 257;
                    if ( !a5 )
                      goto LABEL_31;
                    v63 = v37;
                    v64 = v38;
                    v65 = v39;
                    v66 = v40;
                    v49 = *v79;
                    v50 = v79[3] + v79[1];
                    DWORD1(v63) = 6;
                    DWORD2(v64) = (int)v79[2];
                    LODWORD(v64) = DWORD2(v64);
                    LODWORD(v65) = DWORD2(v64);
                    v51 = *(float *)(a1 + 136);
                    v52 = v49 - v51;
                    if ( (float)SDWORD2(v64) <= (float)(v49 - v51) )
                      v52 = (float)SDWORD2(v64);
                    DWORD1(v65) = (int)v52;
                    v53 = *(float *)(a1 + 140);
                    v54 = v50 - v53;
                    if ( (float)SHIDWORD(v63) <= (float)(v50 - v53) )
                      v54 = (float)SHIDWORD(v63);
                    DWORD2(v65) = (int)v54;
                    v55 = (float)(v51 + *(float *)(a1 + 144)) - v49;
                    if ( (float)SDWORD2(v64) <= v55 )
                      v55 = (float)SDWORD2(v64);
                    HIDWORD(v65) = (int)v55;
                    v56 = (float)(v53 + *(float *)(a1 + 148)) - v50;
                    if ( (float)SHIDWORD(v63) <= v56 )
                      v56 = (float)SHIDWORD(v63);
                    LODWORD(v66) = (int)v56;
                    v71 = v63;
                    v72 = v64;
                    v73 = v65;
                    v74 = v66;
                    v57 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v71);
                    v18 = v57;
                    if ( v57 < 0 )
                    {
                      v58 = (unsigned int)v57;
                      v59 = 196LL;
                    }
                    else
                    {
LABEL_31:
                      v71 = v82;
                      v72 = v83;
                      v73 = v84;
                      v74 = v85;
                      v46 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v71);
                      v18 = v46;
                      if ( v46 < 0 )
                      {
                        v58 = (unsigned int)v46;
                        v59 = 199LL;
                      }
                      else
                      {
                        v47 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 64LL))(v11, v80);
                        v18 = v47;
                        if ( v47 >= 0 )
                          goto LABEL_33;
                        v58 = (unsigned int)v47;
                        v59 = 201LL;
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
  else
  {
    v18 = -2147024882;
    v58 = 2147942414LL;
    v59 = 35LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v59,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
    (const char *)v58);
  v9 = v18;
LABEL_33:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v9;
}
