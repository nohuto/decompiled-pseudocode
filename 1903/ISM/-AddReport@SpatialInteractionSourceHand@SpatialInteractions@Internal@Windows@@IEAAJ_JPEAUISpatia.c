/*
 * XREFs of ?AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2_NW4HandState@1234@@Z @ 0x1800F3AC0
 * Callers:
 *     ?Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800F5E90 (-Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatial.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x180037D4B (sqrtf_0.c)
 *     memcpy_0 @ 0x180037D6F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007C0B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?XMMatrixRotationQuaternion@DirectX@@YQ?AUXMMATRIX@1@T__m128@@@Z @ 0x1800D8EF4 (-XMMatrixRotationQuaternion@DirectX@@YQ-AUXMMATRIX@1@T__m128@@@Z.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800E278C (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1800EFB2C (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x1800F2420 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 *     ??$HandReportIgnored@U_GUID@@AEA_JIIAEAEAEA_N@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEA_J$$QEAI2AEAEAEA_N@Z @ 0x1800F28EC (--$HandReportIgnored@U_GUID@@AEA_JIIAEAEAEA_N@SpatialInteractionTraceContinuous@SpatialInteracti.c)
 *     ??$_Emplace_reallocate@AEBUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@?$vector@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@V?$allocator@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@std@@@std@@QEAAPEAUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@QEAU23456@AEBU23456@@Z @ 0x1800F2B88 (--$_Emplace_reallocate@AEBUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Intern.c)
 *     ApplyTransform @ 0x1800F4864 (ApplyTransform.c)
 *     InitJoints @ 0x1800F514C (InitJoints.c)
 *     ?XMQuaternionRotationMatrix@DirectX@@YQ?AT__m128@@UXMMATRIX@1@@Z @ 0x1800F7348 (-XMQuaternionRotationMatrix@DirectX@@YQ-AT__m128@@UXMMATRIX@1@@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::AddReport(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        __m128 *a5,
        bool a6,
        int a7)
{
  int v11; // eax
  unsigned int v12; // edi
  const char *v13; // r9
  __int64 result; // rax
  char v15; // dl
  __m128 v16; // xmm5
  __m128 v17; // xmm4
  __m128 v18; // xmm3
  __m128 v19; // xmm6
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // esi
  int v23; // r12d
  __m128 v24; // xmm4
  __m128i v25; // xmm6
  __m128 v26; // xmm9
  __m128 v27; // xmm8
  char v28; // r9
  __m128 v29; // xmm7
  char v30; // dl
  __m128 v31; // xmm1
  __m128 v32; // xmm1
  __m128 v33; // xmm2
  __m128i v34; // xmm3
  double v35; // xmm0_8
  __int128 v36; // xmm11
  __m128 v37; // xmm8
  __m128i v38; // xmm6
  __m128 v39; // xmm12
  __m128 v40; // xmm10
  __m128 v41; // xmm9
  __m128 v42; // xmm7
  __m128 v43; // xmm14
  __m128 v44; // xmm15
  double v45; // xmm0_8
  int v46; // r8d
  char v47; // r9
  int v48; // r10d
  char v49; // r15
  char v50; // al
  _BYTE *v51; // rsi
  __m128 *v52; // rax
  __m128 v53; // xmm8
  __m128 v54; // xmm9
  __m128 v55; // xmm2
  __m128 v56; // xmm0
  char v57; // cl
  __m128 *v58; // rax
  __m128 v59; // xmm2
  __m128 v60; // xmm0
  int *v61; // r9
  unsigned __int64 v62; // rax
  __int64 v63; // r8
  __m128 v64; // xmm3
  __m128 v65; // xmm7
  __m128 v66; // xmm6
  __m128 v67; // xmm2
  __m128 v68; // xmm6
  __m128 v69; // xmm1
  __m128 v70; // xmm2
  double v71; // xmm0_8
  double v72; // xmm0_8
  __m128 v73; // xmm0
  __int64 v74; // r8
  __int64 v75; // r8
  int *v76; // rdx
  __int64 *v77; // rcx
  __m128 v78; // xmm3
  __m128 v79; // xmm4
  __m128 v80; // xmm0
  __m128 v81; // xmm1
  float v82; // xmm2_4
  __m128 v83; // xmm1
  __m128 v84; // xmm4
  __m128 v85; // xmm1
  __m128 v86; // xmm4
  __m128 v87; // xmm3
  __m128 v88; // xmm3
  __m128 v89; // xmm3
  __int32 v90; // ecx
  bool v91; // zf
  _BYTE *v92; // rdx
  _BYTE *v93; // rdx
  struct _GUID *v94; // rax
  __m128 v95; // [rsp+30h] [rbp-DA8h] BYREF
  int v96; // [rsp+40h] [rbp-D98h] BYREF
  __int64 v97[3]; // [rsp+48h] [rbp-D90h] BYREF
  __m128 v98; // [rsp+60h] [rbp-D78h] BYREF
  __m128 v99; // [rsp+70h] [rbp-D68h]
  __m128 v100; // [rsp+80h] [rbp-D58h]
  __m128 v101; // [rsp+90h] [rbp-D48h]
  __m256i v102; // [rsp+A0h] [rbp-D38h] BYREF
  __m128 v103; // [rsp+C0h] [rbp-D18h]
  __m128i v104; // [rsp+D0h] [rbp-D08h]
  __m128 v105; // [rsp+E0h] [rbp-CF8h] BYREF
  __m128 v106; // [rsp+F0h] [rbp-CE8h]
  __m128 v107; // [rsp+100h] [rbp-CD8h]
  __m128 v108; // [rsp+110h] [rbp-CC8h]
  __int128 v109; // [rsp+120h] [rbp-CB8h] BYREF
  int v110; // [rsp+130h] [rbp-CA8h]
  char v111[16]; // [rsp+140h] [rbp-C98h] BYREF
  int v112; // [rsp+150h] [rbp-C88h]
  __m128 v113; // [rsp+164h] [rbp-C74h]
  __m128 v114; // [rsp+174h] [rbp-C64h]
  __m128 v115; // [rsp+184h] [rbp-C54h]
  unsigned __int64 v116; // [rsp+194h] [rbp-C44h]
  unsigned int v117; // [rsp+19Ch] [rbp-C3Ch]
  unsigned __int64 v118; // [rsp+1D0h] [rbp-C08h]
  unsigned int v119; // [rsp+1D8h] [rbp-C00h]
  _OWORD Src[4]; // [rsp+1E0h] [rbp-BF8h] BYREF
  __m128 v121; // [rsp+220h] [rbp-BB8h] BYREF
  __int64 v122; // [rsp+230h] [rbp-BA8h]
  unsigned __int32 v123; // [rsp+238h] [rbp-BA0h]
  _BYTE v124[4]; // [rsp+23Ch] [rbp-B9Ch]
  __m128 v125; // [rsp+240h] [rbp-B98h]
  __int32 v126; // [rsp+250h] [rbp-B88h]
  unsigned __int32 v127; // [rsp+254h] [rbp-B84h]
  unsigned __int32 v128; // [rsp+258h] [rbp-B80h]
  char v129; // [rsp+25Ch] [rbp-B7Ch]
  char v130; // [rsp+25Dh] [rbp-B7Bh]
  __int128 v131; // [rsp+260h] [rbp-B78h]
  __int64 v132; // [rsp+270h] [rbp-B68h]
  int v133; // [rsp+278h] [rbp-B60h]
  char v134; // [rsp+27Ch] [rbp-B5Ch]
  char v135; // [rsp+27Dh] [rbp-B5Bh]
  unsigned __int64 v136; // [rsp+280h] [rbp-B58h]
  unsigned __int32 v137; // [rsp+288h] [rbp-B50h]
  unsigned __int64 v138; // [rsp+28Ch] [rbp-B4Ch]
  unsigned __int32 v139; // [rsp+294h] [rbp-B44h]
  int v140; // [rsp+298h] [rbp-B40h]
  int v141; // [rsp+29Ch] [rbp-B3Ch]
  BOOL v142; // [rsp+2A0h] [rbp-B38h]
  int v143; // [rsp+2A4h] [rbp-B34h]
  float v144; // [rsp+2A8h] [rbp-B30h]
  __int64 v145; // [rsp+2B0h] [rbp-B28h]
  int v146; // [rsp+2B8h] [rbp-B20h]
  __int128 v147; // [rsp+30Ch] [rbp-ACCh]
  int v148; // [rsp+31Ch] [rbp-ABCh]
  int v149; // [rsp+320h] [rbp-AB8h]
  int v150; // [rsp+324h] [rbp-AB4h]
  int v151; // [rsp+328h] [rbp-AB0h]
  char v152; // [rsp+32Ch] [rbp-AACh]
  char v153; // [rsp+32Dh] [rbp-AABh]
  int v154; // [rsp+330h] [rbp-AA8h]
  int v155; // [rsp+334h] [rbp-AA4h]
  __m128 v156; // [rsp+6E0h] [rbp-6F8h]
  __int64 v157; // [rsp+6F0h] [rbp-6E8h]
  unsigned __int32 v158; // [rsp+6F8h] [rbp-6E0h]
  float v159; // [rsp+6FCh] [rbp-6DCh]
  BOOL v160; // [rsp+700h] [rbp-6D8h]
  int v161; // [rsp+708h] [rbp-6D0h]
  char v162[16]; // [rsp+710h] [rbp-6C8h] BYREF
  char v163[16]; // [rsp+720h] [rbp-6B8h] BYREF
  int v164; // [rsp+730h] [rbp-6A8h]
  __m128 v165; // [rsp+744h] [rbp-694h]
  __m128 v166; // [rsp+754h] [rbp-684h]
  __m128 v167; // [rsp+764h] [rbp-674h]
  _BYTE v168[196]; // [rsp+7C0h] [rbp-618h] BYREF
  int v169; // [rsp+884h] [rbp-554h]
  int v170; // [rsp+CE8h] [rbp-F0h]
  wil::details::in1diag3 *retaddr; // [rsp+DD8h] [rbp+0h]

  v97[1] = -2LL;
  v97[0] = a2;
  memset_0(Src, 0, 0x530uLL);
  try
  {
    if ( a3 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, char *))(*(_QWORD *)a3 + 32LL))(a3, a2, 0LL, v163);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17D,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
          (const char *)(unsigned int)v11);
        return v12;
      }
      v15 = v164;
      v16 = (__m128)DirectX::g_XMIdentityR0;
      v17 = (__m128)DirectX::g_XMIdentityR1;
      v18 = (__m128)DirectX::g_XMIdentityR2;
      v19 = (__m128)DirectX::g_XMIdentityR3;
    }
    else
    {
      v16 = (__m128)DirectX::g_XMIdentityR0;
      v17 = (__m128)DirectX::g_XMIdentityR1;
      v18 = (__m128)DirectX::g_XMIdentityR2;
      v19 = (__m128)DirectX::g_XMIdentityR3;
      v165 = _mm_shuffle_ps(
               DirectX::g_XMIdentityR0,
               _mm_shuffle_ps(DirectX::g_XMIdentityR1, DirectX::g_XMIdentityR0, 160),
               36);
      v166 = _mm_shuffle_ps(DirectX::g_XMIdentityR1, DirectX::g_XMIdentityR2, 73);
      v167 = _mm_shuffle_ps(
               _mm_shuffle_ps(DirectX::g_XMIdentityR2, DirectX::g_XMIdentityR3, 10),
               DirectX::g_XMIdentityR3,
               152);
      v15 = 3;
      v164 = 3;
    }
    v20 = *(_QWORD *)(a1 + 88);
    if ( v20 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, char *))(*(_QWORD *)v20 + 32LL))(v20, a2, 0LL, v111);
      v22 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x187,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
          (const char *)(unsigned int)v21);
        return v22;
      }
      v15 = v164;
      v19 = (__m128)DirectX::g_XMIdentityR3;
    }
    else
    {
      v113 = _mm_shuffle_ps(v16, _mm_shuffle_ps(v17, v16, 160), 36);
      v114 = _mm_shuffle_ps(v17, v18, 73);
      v115 = _mm_shuffle_ps(_mm_shuffle_ps(v18, v19, 10), v19, 152);
      v112 = 3;
    }
    v23 = 2 * (v15 & 1) + 1;
    v24 = _mm_shuffle_ps(v166, v165, 244);
    v25 = _mm_or_si128(_mm_srli_si128((__m128i)v167, 4), (__m128i)v19);
    v26 = _mm_and_ps(_mm_shuffle_ps(v166, v167, 14), DirectX::g_XMMask3);
    v27 = _mm_and_ps(_mm_shuffle_ps(v24, v24, 82), DirectX::g_XMMask3);
    v29 = DirectX::XMMatrixInverse(0LL, *(double *)v27.m128_u64, *(double *)v26.m128_u64, *(double *)v25.m128i_i64);
    if ( !v30 )
      v25 = (__m128i)xmmword_1801E03E8;
    v31 = _mm_shuffle_ps(v114, v113, 244);
    v32 = _mm_and_ps(_mm_shuffle_ps(v31, v31, 82), DirectX::g_XMMask3);
    v33 = _mm_and_ps(_mm_shuffle_ps(v114, v115, 14), DirectX::g_XMMask3);
    v34 = _mm_or_si128(_mm_srli_si128((__m128i)v115, 4), DirectX::g_XMIdentityR3);
    if ( !v28 )
      v34 = (__m128i)xmmword_1801E03E8;
    *(__m128 *)v102.m256i_i8 = v29;
    *(__m128 *)&v102.m256i_u64[2] = v27;
    v103 = v26;
    v104 = v25;
    *(_QWORD *)&v35 = DirectX::XMMatrixMultiply(COERCE_DOUBLE(v113.m128_u64[0] & DirectX::g_XMMask3), (__m128 *)&v102).m128_u64[0];
    v36 = a4[1];
    v37 = *((__m128 *)a4 + 2);
    v38 = *((__m128i *)a4 + 3);
    v39 = *a5;
    v40 = a5[1];
    v41 = a5[2];
    v42 = a5[3];
    *(_OWORD *)v102.m256i_i8 = *a4;
    *(_OWORD *)&v102.m256i_u64[2] = v36;
    v103 = v37;
    v104 = v38;
    v95 = (__m128)v34;
    v43 = v33;
    v44 = v32;
    *(__m128 *)v102.m256i_i8 = DirectX::XMMatrixMultiply(v35, (__m128 *)&v102);
    *(__m128 *)&v102.m256i_u64[2] = v32;
    v103 = v33;
    v104 = v34;
    *(_QWORD *)&v45 = DirectX::XMMatrixInverse(0LL, *(double *)&v36, *(double *)v37.m128_u64, *(double *)v38.m128i_i64).m128_u64[0];
    v98 = v39;
    v99 = v40;
    v100 = v41;
    v101 = v42;
    Src[0] = DirectX::XMMatrixMultiply(v45, &v98);
    Src[1] = v36;
    Src[2] = v37;
    Src[3] = v38;
    if ( !v48 || (v49 = 1, !v46) )
      v49 = 0;
    if ( !v48 || (v50 = 1, !v47) )
      v50 = 0;
    v51 = (_BYTE *)(a1 + 264);
    *(_BYTE *)(a1 + 264) = v50;
    v141 = *(_DWORD *)(a1 + 12);
    v149 = *(_DWORD *)(a1 + 8);
    v150 = *(_DWORD *)(a1 + 152);
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
      (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *)a1,
      (struct Windows::Internal::Holographic::DynamicNodeInfo *)&v109);
    v147 = v109;
    v148 = v110;
    v145 = a2;
    v140 = 1;
    v146 = *(_DWORD *)(a1 + 252);
    if ( *(_QWORD *)(a1 + 88) )
      v151 = *v51 != 0 ? v23 : 0;
    else
      v151 = -1;
    v134 = *(_BYTE *)(a1 + 296);
    v132 = *(_QWORD *)(a1 + 268);
    v133 = *(_DWORD *)(a1 + 276);
    v135 = v134;
    v131 = *(_OWORD *)(a1 + 280);
    if ( v134 )
    {
      v52 = (__m128 *)ApplyTransform(&v98, a1 + 268, &v102);
      v53 = *(__m128 *)v102.m256i_i8;
      v54 = v95;
    }
    else
    {
      v53 = *(__m128 *)v102.m256i_i8;
      v98 = *(__m128 *)v102.m256i_i8;
      v99 = v32;
      v100 = v33;
      v54 = v95;
      v101 = v95;
      v52 = &v98;
    }
    v105 = *v52;
    v106 = v52[1];
    v107 = v52[2];
    v55 = v52[3];
    v124[0] = *v51;
    v124[1] = v49 != 0;
    LODWORD(v122) = v55.m128_i32[0];
    HIDWORD(v122) = _mm_shuffle_ps(v55, v55, 85).m128_u32[0];
    v123 = _mm_shuffle_ps(v55, v55, 170).m128_u32[0];
    v56 = *v52;
    *(double *)v56.m128_u64 = DirectX::XMQuaternionRotationMatrix();
    v121 = v56;
    if ( *(_QWORD *)(a1 + 216) )
    {
      v58 = (__m128 *)ApplyTransform(&v98, a1 + 300, &v102);
      v57 = *(_BYTE *)(a1 + 264);
    }
    else
    {
      v98 = v53;
      v99 = v32;
      v100 = v43;
      v101 = v54;
      v58 = &v98;
    }
    v105 = *v58;
    v106 = v58[1];
    v107 = v58[2];
    v59 = v58[3];
    if ( !v57 || (v91 = *(_BYTE *)(a1 + 328) == 0, v129 = 1, v91) )
      v129 = 0;
    if ( !v49 || (v91 = *(_BYTE *)(a1 + 328) == 0, v130 = 1, v91) )
      v130 = 0;
    v126 = v59.m128_i32[0];
    v127 = _mm_shuffle_ps(v59, v59, 85).m128_u32[0];
    v128 = _mm_shuffle_ps(v59, v59, 170).m128_u32[0];
    v60 = *v58;
    *(double *)v60.m128_u64 = DirectX::XMQuaternionRotationMatrix();
    v125 = v60;
    InitJoints(&v121);
    v61 = *(int **)(a1 + 336);
    v62 = *(_QWORD *)v61;
    v95.m128_u64[0] = *(_QWORD *)v61;
    while ( (int *)v62 != v61 )
    {
      v63 = *(_QWORD *)(v62 + 88);
      v102 = *(__m256i *)(v62 + 48);
      v64 = *(__m128 *)v102.m256i_i8;
      v65 = *(__m128 *)&v102.m256i_u64[2];
      *(__int32 *)((char *)v125.m128_i32 + v63) = *(_DWORD *)(v62 + 80) != 2;
      v66 = 0LL;
      v66.m128_f32[0] = v64.m128_f32[0];
      v67 = 0LL;
      v67.m128_f32[0] = _mm_shuffle_ps(v64, v64, 85).m128_f32[0];
      v68 = _mm_unpacklo_ps(v66, v67);
      v69 = _mm_shuffle_ps(v64, v64, 170);
      v70 = 0LL;
      v70.m128_f32[0] = v69.m128_f32[0];
      *(_QWORD *)&v71 = DirectX::XMMatrixRotationQuaternion(*(double *)((char *)&v102.m256i_i64[1] + 4)).m128_u64[0];
      v98 = (__m128)DirectX::g_XMIdentityR0;
      v99 = (__m128)DirectX::g_XMIdentityR1;
      v100 = (__m128)DirectX::g_XMIdentityR2;
      v101 = _mm_or_ps(
               _mm_and_ps(_mm_movelh_ps(v68, v70), DirectX::g_XMMask3),
               _mm_andnot_ps(DirectX::g_XMMask3, DirectX::g_XMIdentityR3));
      *(_QWORD *)&v72 = DirectX::XMMatrixMultiply(v71, &v98).m128_u64[0];
      v105 = v53;
      v106 = v44;
      v107 = v43;
      v108 = v54;
      v73 = DirectX::XMMatrixMultiply(v72, &v105);
      *(_DWORD *)((char *)&v122 + v74) = v69.m128_i32[0];
      *(_DWORD *)((char *)&v122 + v74 + 4) = _mm_shuffle_ps(v69, v69, 85).m128_u32[0];
      *(_DWORD *)&v124[v74 - 4] = _mm_shuffle_ps(v69, v69, 170).m128_u32[0];
      *(double *)v73.m128_u64 = DirectX::XMQuaternionRotationMatrix();
      *(__m128 *)((char *)&v121 + v75) = v73;
      *(_DWORD *)&v124[v75] = _mm_shuffle_ps(v65, v65, 255).m128_u32[0];
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v95);
      v62 = v95.m128_u64[0];
    }
    v76 = v61;
    v77 = (__int64 *)*((_QWORD *)v61 + 1);
    if ( *((_BYTE *)v77 + 25) )
      goto LABEL_47;
    do
    {
      if ( *((int *)v77 + 8) >= 0 )
      {
        v76 = (int *)v77;
        v77 = (__int64 *)*v77;
      }
      else
      {
        v77 = (__int64 *)v77[2];
      }
    }
    while ( !*((_BYTE *)v77 + 25) );
    if ( v76 == v61 || v76[8] > 0 )
LABEL_47:
      v76 = v61;
    if ( v76 == v61 )
    {
      v156 = v121;
      v157 = v122;
      v158 = v123;
      v160 = *(_BYTE *)(a1 + 296) == 0;
      v159 = FLOAT_0_064999998;
    }
    if ( (v112 & 0x80u) == 0 )
    {
      v95.m128_i32[2] = sqrtf_0(0.5);
      v138 = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_0_5), (__m128)LODWORD(FLOAT_0_5)).m128_u64[0];
      v139 = v95.m128_u32[2];
      if ( *v51 )
        goto LABEL_53;
      v144 = 0.0;
    }
    else
    {
      v78 = _mm_movelh_ps((__m128)v118, (__m128)v119);
      v79 = _mm_mul_ps(v78, v78);
      v80 = _mm_shuffle_ps(v79, v79, 102);
      v81 = v79;
      v81.m128_f32[0] = (float)(v79.m128_f32[0] + v80.m128_f32[0]) + _mm_shuffle_ps(v80, v80, 85).m128_f32[0];
      v82 = _mm_sqrt_ps(_mm_shuffle_ps(v81, v81, 0)).m128_f32[0];
      v81.m128_f32[0] = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v82) & _xmm);
      if ( v81.m128_f32[0] <= 0.001 )
      {
        v95.m128_i32[2] = sqrtf_0(0.5);
        v138 = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_0_5), (__m128)LODWORD(FLOAT_0_5)).m128_u64[0];
        v139 = v95.m128_u32[2];
LABEL_53:
        v144 = FLOAT_1_0;
        goto LABEL_57;
      }
      v144 = 1.0 - v82;
      v83 = _mm_shuffle_ps(v79, v79, 153);
      v79.m128_f32[0] = (float)(v79.m128_f32[0] + v83.m128_f32[0]) + _mm_shuffle_ps(v83, v83, 85).m128_f32[0];
      v84 = _mm_shuffle_ps(v79, v79, 0);
      v85 = _mm_sqrt_ps(v84);
      v86 = _mm_cmpneq_ps(v84, DirectX::g_XMInfinity);
      v87 = _mm_or_ps(
              _mm_and_ps(_mm_and_ps(_mm_div_ps(v78, v85), _mm_cmpneq_ps(v85, (__m128)0LL)), v86),
              _mm_andnot_ps(v86, DirectX::g_XMQNaN));
      LODWORD(v138) = v87.m128_i32[0];
      HIDWORD(v138) = _mm_shuffle_ps(v87, v87, 85).m128_u32[0];
      v139 = _mm_shuffle_ps(v87, v87, 170).m128_u32[0];
    }
LABEL_57:
    if ( (v112 & 4) != 0 )
    {
      v88 = _mm_movelh_ps((__m128)v116, (__m128)v117);
      v89 = _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v88, v88, 170), v43),
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v88, v88, 85), v44), _mm_mul_ps(_mm_shuffle_ps(v88, v88, 0), v53)));
      LODWORD(v136) = v89.m128_i32[0];
      HIDWORD(v136) = _mm_shuffle_ps(v89, v89, 85).m128_u32[0];
      v137 = _mm_shuffle_ps(v89, v89, 170).m128_u32[0];
    }
    else
    {
      v95.m128_i32[2] = 0;
      v136 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      v137 = 0;
    }
    v90 = *(_DWORD *)(a1 + 248);
    v142 = v90 == 3;
    v152 = *(_BYTE *)(a1 + 156);
    v153 = *(_BYTE *)(a1 + 157);
    v154 = *(_DWORD *)(a1 + 256);
    v155 = *(_DWORD *)(a1 + 260);
    v143 = 0;
    v161 = 0;
    if ( !*v51 )
    {
      if ( !a6 )
      {
        v96 = a7;
        v95.m128_i32[0] = v90;
        v94 = (struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 120) + 48LL))(
                                *(_QWORD *)(a1 + 120),
                                v162);
        SpatialInteractionDevices::SpatialInteractionTraceContinuous::HandReportIgnored<_GUID,__int64 &,unsigned int,unsigned int,unsigned char &,bool &>(
          v94,
          v97,
          (int *)&v95,
          &v96,
          (char *)(a1 + 264),
          &a6);
        return 0LL;
      }
      v161 = 4;
LABEL_82:
      v93 = *(_BYTE **)(a1 + 360);
      if ( *(_BYTE **)(a1 + 368) == v93 )
      {
        std::vector<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo>::_Emplace_reallocate<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo const &>(
          (const void **)(a1 + 352),
          v93,
          Src);
      }
      else
      {
        memcpy_0(*(void **)(a1 + 360), Src, 0x530uLL);
        *(_QWORD *)(a1 + 360) += 1328LL;
      }
      return 0LL;
    }
    switch ( v90 )
    {
      case 2:
        v91 = a7 == 2;
        goto LABEL_63;
      case 4:
        if ( *(_BYTE *)(a1 + 158) )
        {
          v161 = 11;
          goto LABEL_75;
        }
        break;
      case 5:
        v91 = a7 == 5;
LABEL_63:
        if ( !v91 )
        {
          v161 = 9;
          goto LABEL_75;
        }
        break;
      case 3:
        if ( a7 != 3 )
        {
          v161 = 2;
          v143 = 1;
          goto LABEL_75;
        }
        goto LABEL_79;
    }
    if ( a7 == 3 )
    {
      v161 = 3;
      v143 = 2;
LABEL_75:
      if ( !a6 )
      {
        memcpy_0(v168, Src, 0x530uLL);
        v170 = 5;
        v169 = 0;
        v92 = *(_BYTE **)(a1 + 360);
        if ( *(_BYTE **)(a1 + 368) == v92 )
        {
          std::vector<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo>::_Emplace_reallocate<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo const &>(
            (const void **)(a1 + 352),
            v92,
            v168);
        }
        else
        {
          memcpy_0(*(void **)(a1 + 360), v168, 0x530uLL);
          *(_QWORD *)(a1 + 360) += 1328LL;
        }
      }
      goto LABEL_82;
    }
LABEL_79:
    v161 = a6 + 5;
    goto LABEL_82;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x277,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
                           v13);
  }
  return result;
}
