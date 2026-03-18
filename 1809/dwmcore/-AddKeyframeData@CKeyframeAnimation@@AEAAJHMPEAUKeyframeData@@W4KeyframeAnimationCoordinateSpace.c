/*
 * XREFs of ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180053104
 * Callers:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180052FB0 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ?Create@XamlExponentialInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x18001EBAC (-Create@XamlExponentialInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimation.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1800309B0 (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x18004F474 (-CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z.c)
 *     ?AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z @ 0x180053720 (-AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?Create@CubicBezierInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@MMMMPEAPEAVKeyframeInterpolation@@@Z @ 0x180053AB4 (-Create@CubicBezierInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@MMMMPEAPEAVKeyframeInte.c)
 *     ?Create@LinearInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@PEAPEAVKeyframeInterpolation@@@Z @ 0x180054408 (-Create@LinearInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@PEAPEAVKeyframeInterpolation.c)
 *     ?Create@StepInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@HHH_N1PEAPEAVKeyframeInterpolation@@@Z @ 0x180054654 (-Create@StepInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@HHH_N1PEAPEAVKeyframeInterpola.c)
 *     ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x180054A24 (-CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyfram.c)
 *     ?Create@XamlPowerInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x180054F54 (-Create@XamlPowerInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasing.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801A4FFC (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?Create@XamlBackInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x1801D8984 (-Create@XamlBackInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingM.c)
 *     ?Create@XamlBounceInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x1801D8A50 (-Create@XamlBounceInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasin.c)
 *     ?Create@XamlCircleInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z @ 0x1801D8B3C (-Create@XamlCircleInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasin.c)
 *     ?Create@XamlElasticInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x1801D8BDC (-Create@XamlElasticInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasi.c)
 *     ?Create@XamlSineInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z @ 0x1801D8CB0 (-Create@XamlSineInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingM.c)
 *     ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x1801D9874 (-CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAn.c)
 */

__int64 __fastcall CKeyframeAnimation::AddKeyframeData(
        __int64 a1,
        unsigned int a2,
        float a3,
        __int128 *a4,
        unsigned int a5)
{
  __int128 v5; // xmm0
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  unsigned int v13; // edi
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // r14d
  unsigned int v23; // esi
  unsigned int v24; // edi
  int v25; // ebx
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // ebx
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // r8d
  int v36; // r8d
  int v37; // r8d
  unsigned int v38; // ebx
  int v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // ebx
  __int64 v42; // r8
  int v43; // eax
  unsigned int v44; // ecx
  unsigned int v45; // ebx
  float v46; // xmm6_4
  int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // edi
  unsigned int v50; // ebx
  int v51; // eax
  unsigned int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  unsigned __int64 v60; // rcx
  int v61; // eax
  int v62; // xmm1_4
  bool v63; // al
  __int64 v64; // rdx
  __int64 v65; // rdx
  unsigned int v67; // [rsp+28h] [rbp-B1h]
  struct KeyframeValue *v68[4]; // [rsp+48h] [rbp-91h] BYREF
  _OWORD v69[4]; // [rsp+68h] [rbp-71h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-31h] BYREF
  int v71; // [rsp+B0h] [rbp-29h]
  char v72; // [rsp+B4h] [rbp-25h]
  struct KeyframeInterpolation *v73; // [rsp+150h] [rbp+77h] BYREF

  v5 = *a4;
  v68[0] = 0LL;
  v73 = 0LL;
  g_dbgKeyFrameData = v5;
  xmmword_180307FF8 = a4[1];
  xmmword_180308008 = a4[2];
  v9 = *((_DWORD *)a4 + 1);
  if ( v9 > 65539 )
  {
    v35 = v9 - 65540;
    if ( v35 )
    {
      v36 = v35 - 1;
      if ( v36 )
      {
        v37 = v36 - 1;
        if ( v37 )
        {
          if ( v37 != 1 )
            goto LABEL_24;
          v38 = (int)*((float *)a4 + 2);
          Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v73);
          v39 = XamlSineInterpolation::Create(a5, v38, &v73);
          v17 = v39;
          if ( v39 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x4BAu);
            goto LABEL_63;
          }
        }
        else
        {
          v41 = (int)*((float *)a4 + 2);
          Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v73);
          v43 = XamlPowerInterpolation::Create(a5, v41, v42, &v73);
          v17 = v43;
          if ( v43 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x4B3u);
            goto LABEL_63;
          }
        }
      }
      else
      {
        v45 = (int)*((float *)a4 + 2);
        v46 = *((float *)a4 + 3);
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v73);
        v47 = XamlExponentialInterpolation::Create(a5, v45, v46, &v73);
        v17 = v47;
        if ( v47 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x4ABu);
          goto LABEL_63;
        }
      }
    }
    else
    {
      v49 = (int)*((float *)a4 + 2);
      v50 = (int)*((float *)a4 + 3);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v73);
      v51 = XamlElasticInterpolation::Create(a5, v49, v50);
      v17 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x4A3u);
        goto LABEL_63;
      }
    }
LABEL_32:
    if ( *((_DWORD *)a4 + 6) != 1 )
    {
      if ( *((_DWORD *)a4 + 6) == 2 )
      {
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v68);
        KeyframeValue::CreateExpressionKeyframeValue(*(unsigned int *)(a1 + 144), a1, *((unsigned int *)a4 + 8), v68);
      }
      else
      {
        if ( *((_DWORD *)a4 + 6) != 3 )
        {
          v17 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(*((_DWORD *)a4 + 6) - 2, 0LL, 0, -2003303421, 0x51Au);
          goto LABEL_63;
        }
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v68);
        KeyframeValue::CreateStartingValueKeyframeValue(*(unsigned int *)(a1 + 144), a1, v68);
      }
LABEL_61:
      KeyframeSequence::AddKeyframe(*(KeyframeSequence **)(a1 + 336), a2, a3, v68[0], v73);
      v17 = 0;
      goto LABEL_63;
    }
    memset_0(v69, 0, sizeof(v69));
    v53 = *(_DWORD *)(a1 + 144);
    v70 = 0LL;
    v71 = 18;
    v72 = 0;
    v54 = v53 - 11;
    if ( !v54 )
    {
      v64 = *(_QWORD *)(a1 + 408);
      v60 = *((unsigned int *)a4 + 8);
      if ( v60 >= (*(_QWORD *)(a1 + 416) - v64) >> 3 )
      {
        v67 = 1290;
        goto LABEL_58;
      }
      v65 = *(_QWORD *)(v64 + 8 * v60);
      v71 = 11;
      v72 = 1;
      Microsoft::WRL::ComPtr<CPathData>::operator=(&v70, v65);
LABEL_60:
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v68);
      KeyframeValue::CreateConstantKeyframeValue((const struct CExpressionValue *)v69, v68);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v69);
      goto LABEL_61;
    }
    v55 = v54 - 6;
    if ( v55 )
    {
      v56 = v55 - 1;
      if ( v56 )
      {
        v57 = v56 - 17;
        if ( v57 )
        {
          v58 = v57 - 17;
          if ( v58 )
          {
            v59 = v58 - 17;
            if ( v59 )
            {
              LODWORD(v60) = v59 - 1;
              if ( (_DWORD)v60 )
              {
                if ( (_DWORD)v60 != 1 )
                {
                  v67 = 1297;
LABEL_58:
                  v17 = -2003303421;
                  MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, -2003303421, v67);
                  CExpressionValue::~CExpressionValue((CExpressionValue *)v69);
                  goto LABEL_63;
                }
                D3DXQuaternionNormalize((struct D2DQuaternion *)&v68[1], (const struct D2DQuaternion *)(a4 + 2));
                v71 = 71;
                v69[0] = *(_OWORD *)&v68[1];
                goto LABEL_55;
              }
              v71 = 70;
            }
            else
            {
              v71 = 69;
            }
            v69[0] = a4[2];
          }
          else
          {
            v61 = *((_DWORD *)a4 + 10);
            *(_QWORD *)&v69[0] = *((_QWORD *)a4 + 4);
            v71 = 52;
            DWORD2(v69[0]) = v61;
          }
        }
        else
        {
          v62 = *((_DWORD *)a4 + 9);
          LODWORD(v69[0]) = *((_DWORD *)a4 + 8);
          DWORD1(v69[0]) = v62;
          v71 = 35;
        }
      }
      else
      {
        LODWORD(v69[0]) = *((_DWORD *)a4 + 8);
        v71 = 18;
      }
    }
    else
    {
      v63 = *((float *)a4 + 8) != 0.0;
      v71 = 17;
      LOBYTE(v69[0]) = v63;
    }
LABEL_55:
    v72 = 1;
    goto LABEL_60;
  }
  if ( v9 == 65539 )
  {
    v32 = (int)*((float *)a4 + 2);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v73);
    v33 = XamlCircleInterpolation::Create(a5, v32, &v73);
    v17 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x49Au);
      goto LABEL_63;
    }
    goto LABEL_32;
  }
  if ( !v9 )
  {
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v73);
    v30 = LinearInterpolation::Create(a5, &v73);
    v17 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x477u);
      goto LABEL_63;
    }
    goto LABEL_32;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v73);
    v28 = CubicBezierInterpolation::Create(a5);
    v17 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x471u);
      goto LABEL_63;
    }
    goto LABEL_32;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v22 = (int)*((float *)a4 + 2);
    v23 = (int)*((float *)a4 + 3);
    v24 = (int)*((float *)a4 + 4);
    v25 = (int)*((float *)a4 + 5);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v73);
    v26 = StepInterpolation::Create(a5, v22, v23, v24, v25 & 1, (v25 & 2) != 0, &v73);
    v17 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x482u);
      goto LABEL_63;
    }
    goto LABEL_32;
  }
  v12 = v11 - 0xFFFF;
  if ( !v12 )
  {
    v18 = (int)*((float *)a4 + 2);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v73);
    v20 = XamlBackInterpolation::Create(a5, v18, v19, &v73);
    v17 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x48Au);
      goto LABEL_63;
    }
    goto LABEL_32;
  }
  if ( v12 != 1 )
  {
LABEL_24:
    v17 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2003303421, 0x4C1u);
    goto LABEL_63;
  }
  v13 = (int)*((float *)a4 + 2);
  v14 = (int)*((float *)a4 + 3);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v73);
  v15 = XamlBounceInterpolation::Create(a5, v13, v14);
  v17 = v15;
  if ( v15 >= 0 )
    goto LABEL_32;
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x493u);
LABEL_63:
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v73);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v68);
  return v17;
}
