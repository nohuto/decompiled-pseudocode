/*
 * XREFs of ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180080F74
 * Callers:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180080E18 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ?Create@XamlExponentialInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x180020C90 (-Create@XamlExponentialInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimation.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18006E3E0 (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?Create@CubicBezierInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@MMMMPEAPEAVKeyframeInterpolation@@@Z @ 0x18007E0B0 (-Create@CubicBezierInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@MMMMPEAPEAVKeyframeInte.c)
 *     ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x180080D88 (-CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z.c)
 *     ?AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z @ 0x1800812DC (-AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C57A0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@StepInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@HHH_N1PEAPEAVKeyframeInterpolation@@@Z @ 0x1800C979C (-Create@StepInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@HHH_N1PEAPEAVKeyframeInterpola.c)
 *     ?Create@LinearInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@PEAPEAVKeyframeInterpolation@@@Z @ 0x1800CD0A0 (-Create@LinearInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@PEAPEAVKeyframeInterpolation.c)
 *     ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x1800D1F5C (-CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyfram.c)
 *     ?Create@XamlPowerInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x1800D5A68 (-Create@XamlPowerInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasing.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801C1A68 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x180209850 (-CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAn.c)
 *     ?Create@XamlBackInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x180209D64 (-Create@XamlBackInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingM.c)
 *     ?Create@XamlBounceInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x180209E30 (-Create@XamlBounceInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasin.c)
 *     ?Create@XamlCircleInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z @ 0x180209F1C (-Create@XamlCircleInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasin.c)
 *     ?Create@XamlElasticInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x180209FBC (-Create@XamlElasticInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasi.c)
 *     ?Create@XamlSineInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z @ 0x18020A090 (-Create@XamlSineInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingM.c)
 */

__int64 __fastcall CKeyframeAnimation::AddKeyframeData(
        __int64 a1,
        unsigned int a2,
        float a3,
        __int64 a4,
        unsigned int a5)
{
  __int128 v8; // xmm1
  int v9; // r8d
  int v10; // r8d
  float v11; // xmm9_4
  float v12; // xmm8_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  int v18; // ecx
  __int64 v19; // rbx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v24; // r8d
  unsigned int v25; // r14d
  unsigned int v26; // esi
  unsigned int v27; // edi
  int v28; // ebx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  unsigned int v32; // ecx
  int v33; // r8d
  int v34; // r8d
  int v35; // r8d
  unsigned int v36; // ebx
  __int64 v37; // r8
  unsigned int v38; // ebx
  float v39; // xmm6_4
  int v40; // r8d
  unsigned int v41; // edi
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  __int64 v44; // r8
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  unsigned int v47; // edi
  unsigned int v48; // ebx
  int v49; // eax
  int v50; // xmm1_4
  bool v51; // al
  __int64 v52; // rax
  __int64 v53; // rdx
  unsigned int v54; // [rsp+28h] [rbp-B1h]
  struct KeyframeValue *v55[4]; // [rsp+48h] [rbp-91h] BYREF
  _OWORD v56[4]; // [rsp+68h] [rbp-71h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-31h] BYREF
  int v58; // [rsp+B0h] [rbp-29h]
  char v59; // [rsp+B4h] [rbp-25h]
  struct KeyframeInterpolation *v60; // [rsp+150h] [rbp+77h] BYREF

  g_dbgKeyFrameData = *(_OWORD *)a4;
  v55[0] = 0LL;
  v8 = *(_OWORD *)(a4 + 16);
  v60 = 0LL;
  xmmword_18033C6D8 = v8;
  xmmword_18033C6E8 = *(_OWORD *)(a4 + 32);
  v9 = *(_DWORD *)(a4 + 4);
  if ( v9 > 65539 )
  {
    v33 = v9 - 65540;
    if ( !v33 )
    {
      v47 = (int)*(float *)(a4 + 8);
      v48 = (int)*(float *)(a4 + 12);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v60);
      v15 = XamlElasticInterpolation::Create(a5, v47, v48);
      v17 = v15;
      if ( v15 < 0 )
      {
        v54 = 1182;
        goto LABEL_41;
      }
      goto LABEL_6;
    }
    v34 = v33 - 1;
    if ( !v34 )
    {
      v38 = (int)*(float *)(a4 + 8);
      v39 = *(float *)(a4 + 12);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v60);
      v15 = XamlExponentialInterpolation::Create(a5, v38, v39, &v60);
      v17 = v15;
      if ( v15 < 0 )
      {
        v54 = 1190;
        goto LABEL_41;
      }
      goto LABEL_6;
    }
    v35 = v34 - 1;
    if ( !v35 )
    {
      v36 = (int)*(float *)(a4 + 8);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v60);
      v15 = XamlPowerInterpolation::Create(a5, v36, v37, &v60);
      v17 = v15;
      if ( v15 < 0 )
      {
        v54 = 1198;
        goto LABEL_41;
      }
      goto LABEL_6;
    }
    if ( v35 == 1 )
    {
      v46 = (int)*(float *)(a4 + 8);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v60);
      v15 = XamlSineInterpolation::Create(a5, v46, &v60);
      v17 = v15;
      if ( v15 < 0 )
      {
        v54 = 1205;
        goto LABEL_41;
      }
      goto LABEL_6;
    }
LABEL_50:
    v17 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2003303421, 0x4BCu, 0LL);
    goto LABEL_15;
  }
  if ( v9 == 65539 )
  {
    v45 = (int)*(float *)(a4 + 8);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v60);
    v15 = XamlCircleInterpolation::Create(a5, v45, &v60);
    v17 = v15;
    if ( v15 < 0 )
    {
      v54 = 1173;
      goto LABEL_41;
    }
    goto LABEL_6;
  }
  if ( !v9 )
  {
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v60);
    v15 = LinearInterpolation::Create(a5, &v60);
    v17 = v15;
    if ( v15 < 0 )
    {
      v54 = 1138;
      goto LABEL_41;
    }
    goto LABEL_6;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v11 = *(float *)(a4 + 8);
    v12 = *(float *)(a4 + 12);
    v13 = *(float *)(a4 + 16);
    v14 = *(float *)(a4 + 20);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v60);
    v15 = CubicBezierInterpolation::Create(a5, v11, v12, v13, v14, &v60);
    v17 = v15;
    if ( v15 >= 0 )
      goto LABEL_6;
    v54 = 1132;
LABEL_41:
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, v54, 0LL);
    goto LABEL_15;
  }
  v24 = v10 - 1;
  if ( v24 )
  {
    v40 = v24 - 0xFFFF;
    if ( !v40 )
    {
      v43 = (int)*(float *)(a4 + 8);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v60);
      v15 = XamlBackInterpolation::Create(a5, v43, v44, &v60);
      v17 = v15;
      if ( v15 < 0 )
      {
        v54 = 1157;
        goto LABEL_41;
      }
      goto LABEL_6;
    }
    if ( v40 == 1 )
    {
      v41 = (int)*(float *)(a4 + 8);
      v42 = (int)*(float *)(a4 + 12);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v60);
      v15 = XamlBounceInterpolation::Create(a5, v41, v42);
      v17 = v15;
      if ( v15 < 0 )
      {
        v54 = 1166;
        goto LABEL_41;
      }
      goto LABEL_6;
    }
    goto LABEL_50;
  }
  v25 = (int)*(float *)(a4 + 8);
  v26 = (int)*(float *)(a4 + 12);
  v27 = (int)*(float *)(a4 + 16);
  v28 = (int)*(float *)(a4 + 20);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v60);
  v15 = StepInterpolation::Create(a5, v25, v26, v27, v28 & 1, (v28 & 2) != 0, &v60);
  v17 = v15;
  if ( v15 < 0 )
  {
    v54 = 1149;
    goto LABEL_41;
  }
LABEL_6:
  if ( *(_DWORD *)(a4 + 24) != 1 )
  {
    if ( *(_DWORD *)(a4 + 24) == 2 )
    {
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v55);
      KeyframeValue::CreateExpressionKeyframeValue(*(unsigned int *)(a1 + 144), a1, *(unsigned int *)(a4 + 32), v55);
    }
    else
    {
      if ( *(_DWORD *)(a4 + 24) != 3 )
      {
        v17 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(*(_DWORD *)(a4 + 24) - 2, 0LL, 0, -2003303421, 0x510u, 0LL);
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v55);
      KeyframeValue::CreateStartingValueKeyframeValue(*(unsigned int *)(a1 + 144), a1, v55);
    }
    goto LABEL_14;
  }
  memset_0(v56, 0, sizeof(v56));
  v18 = *(_DWORD *)(a1 + 144);
  v19 = 0LL;
  v57 = 0LL;
  v58 = 18;
  v59 = 0;
  v20 = v18 - 11;
  if ( v20 )
  {
    v21 = v20 - 6;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v29 = v22 - 17;
        if ( v29 )
        {
          v30 = v29 - 17;
          if ( v30 )
          {
            v31 = v30 - 17;
            if ( v31 )
            {
              v32 = v31 - 1;
              if ( v32 )
              {
                if ( v32 != 1 )
                {
                  v17 = -2003303421;
                  MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, -2003303421, 0x507u, 0LL);
                  goto LABEL_15;
                }
                D3DXQuaternionNormalize((struct D2DQuaternion *)&v55[1], (const struct D2DQuaternion *)(a4 + 32));
                v58 = 71;
                v56[0] = *(_OWORD *)&v55[1];
                goto LABEL_11;
              }
              v58 = 70;
            }
            else
            {
              v58 = 69;
            }
            v56[0] = *(_OWORD *)(a4 + 32);
          }
          else
          {
            v49 = *(_DWORD *)(a4 + 40);
            *(_QWORD *)&v56[0] = *(_QWORD *)(a4 + 32);
            v58 = 52;
            DWORD2(v56[0]) = v49;
          }
        }
        else
        {
          v50 = *(_DWORD *)(a4 + 36);
          LODWORD(v56[0]) = *(_DWORD *)(a4 + 32);
          DWORD1(v56[0]) = v50;
          v58 = 35;
        }
      }
      else
      {
        LODWORD(v56[0]) = *(_DWORD *)(a4 + 32);
      }
    }
    else
    {
      v51 = *(float *)(a4 + 32) != 0.0;
      v58 = 17;
      LOBYTE(v56[0]) = v51;
    }
LABEL_11:
    v59 = 1;
    goto LABEL_12;
  }
  v52 = *(unsigned int *)(a4 + 32);
  v53 = *(_QWORD *)(a1 + 424);
  v58 = 11;
  v59 = 1;
  Microsoft::WRL::ComPtr<CPathData>::operator=(&v57, *(_QWORD *)(v53 + 8 * v52));
  v19 = v57;
LABEL_12:
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v55);
  KeyframeValue::CreateConstantKeyframeValue((const struct CExpressionValue *)v56, v55);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
LABEL_14:
  KeyframeSequence::AddKeyframe(*(KeyframeSequence **)(a1 + 360), a2, a3, v55[0], v60);
  v17 = 0;
LABEL_15:
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v60);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v55);
  return v17;
}
