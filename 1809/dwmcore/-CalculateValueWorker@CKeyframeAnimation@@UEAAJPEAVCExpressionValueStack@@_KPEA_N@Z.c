/*
 * XREFs of ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180051970
 * Callers:
 *     ?CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801E0220 (-CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x18001AE40 (-Pause@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004FAC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180052748 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180052EB4 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180053DB8 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18005427C (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180054AB4 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@2@AEBQEAVCChannelContext@@@Z @ 0x180058950 (-lower_bound@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelContext.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x18007EA60 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800E6E2C (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801A4FFC (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CKeyframeAnimation::CalculateValueWorker(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        double a3,
        bool *a4)
{
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // ebx
  LONGLONG v10; // rbx
  __int64 v11; // rax
  char v12; // si
  int v13; // r14d
  char v14; // r8
  __int64 v15; // rbx
  float v16; // xmm4_4
  __int64 v17; // r14
  float v18; // xmm1_4
  int v19; // edx
  __int64 v20; // r8
  float v21; // xmm0_4
  int v22; // eax
  float v23; // xmm0_4
  int v24; // ecx
  __m128 v25; // rt1
  float v26; // xmm1_4
  int v27; // r10d
  int v28; // edx
  float v29; // xmm1_4
  int v30; // r9d
  bool v31; // al
  int v32; // r8d
  int v33; // eax
  int v34; // eax
  int v35; // ecx
  __int64 v36; // rax
  bool v37; // zf
  unsigned __int8 v38; // al
  unsigned int v39; // ecx
  unsigned int i; // ebx
  int v41; // eax
  unsigned int v42; // ecx
  __int128 *v43; // r14
  unsigned int v44; // ecx
  __int64 v45; // rsi
  int v46; // eax
  unsigned int v47; // ecx
  __int64 v48; // r12
  unsigned int v49; // ecx
  __int64 v50; // r8
  unsigned int v51; // ecx
  __int128 v52; // xmm0
  __int128 v53; // xmm0
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int64 v56; // rdx
  char v57; // cl
  char v58; // al
  char v59; // al
  unsigned int v60; // ecx
  int v61; // r14d
  unsigned int v62; // ecx
  __int64 v63; // rsi
  int v64; // eax
  unsigned int v65; // ecx
  __int64 v66; // rbx
  unsigned int v67; // ecx
  __int64 v68; // r8
  __int64 v69; // rbx
  __int64 v70; // rdx
  unsigned int v71; // ecx
  int v72; // xmm1_4
  int v73; // eax
  __int64 v74; // xmm1_8
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int64 result; // rax
  unsigned int v79; // [rsp+20h] [rbp-A9h]
  bool v80; // [rsp+30h] [rbp-99h] BYREF
  __int64 v81; // [rsp+38h] [rbp-91h] BYREF
  _QWORD v82[2]; // [rsp+40h] [rbp-89h] BYREF
  __int128 v83; // [rsp+50h] [rbp-79h] BYREF
  __int128 v84; // [rsp+60h] [rbp-69h]
  __int128 v85; // [rsp+70h] [rbp-59h]
  __int128 v86; // [rsp+80h] [rbp-49h]
  __int64 v87; // [rsp+90h] [rbp-39h]
  int v88; // [rsp+98h] [rbp-31h]
  char v89; // [rsp+9Ch] [rbp-2Dh]
  _QWORD v90[9]; // [rsp+A0h] [rbp-29h] BYREF
  int v91; // [rsp+E8h] [rbp+1Fh]
  char v92; // [rsp+ECh] [rbp+23h]

  *a4 = 0;
  v7 = CKeyframeAnimation::ApplyPlaybackStateChanges(this, a2);
  v9 = v7;
  if ( v7 < 0 )
  {
    v79 = 1464;
    goto LABEL_128;
  }
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 480LL)
      - Time::s_luBegin.QuadPart
      - (*((_QWORD *)this + 56)
       - Time::s_luBegin.QuadPart);
  if ( v10 < 0 )
    goto LABEL_126;
  if ( (*((_BYTE *)this + 525) & 1) != 0 )
  {
    if ( *((_DWORD *)this + 126) != 2 )
    {
      v11 = (*(__int64 (__fastcall **)(CKeyframeAnimation *))(*(_QWORD *)this + 128LL))(this);
      if ( v11 )
        ++*(_DWORD *)(v11 + 40);
    }
    v12 = *((_BYTE *)this + 524);
    v13 = *((_DWORD *)this + 126);
    if ( (v12 & 6) != 0 || (v14 = *((_BYTE *)this + 524), !*((_BYTE *)this + 140)) )
    {
      v14 = *((_BYTE *)this + 524);
      if ( v13 != 2 )
      {
LABEL_12:
        if ( v10 == 0x7FFFFFFFFFFFFFFFLL )
        {
          LODWORD(v15) = 0x7FFFFFFF;
        }
        else
        {
          v12 = v14;
          v15 = (__int64)(1000000 * v10 / Time::s_luFreq.QuadPart
                        + 500
                        + (((1000000 * v10 / Time::s_luFreq.QuadPart) >> 63) & 0xFFFFFFFFFFFFFC18uLL))
              / 1000;
        }
        v16 = FLOAT_1_0;
        v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 224LL);
        v81 = *((_QWORD *)this + 6);
        if ( !v81
          || (std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::lower_bound(
                v17 + 432,
                v82,
                &v81),
              v82[0] == *(_QWORD *)(v17 + 440)) )
        {
          v18 = v16;
        }
        else
        {
          v18 = *(float *)(v82[0] + 24LL);
        }
        v19 = (int)(float)((float)((float)(int)v15 * *((float *)this + 118)) * v18);
        if ( v12 < 0 )
        {
          if ( *((_DWORD *)this + 129) == 4 )
          {
            v20 = *((_QWORD *)this + 42);
            v21 = 0.0;
            v22 = *(_DWORD *)(v20 + 112);
            if ( v22 > 0 )
              v21 = (float)*(int *)(*(_QWORD *)(v20 + 104) + 24LL * (unsigned int)(v22 - 1)) / 1000.0;
            v23 = (float)(v21 * *((float *)this + 125)) * 1000.0;
            *(float *)&v81 = v23;
            if ( (LODWORD(v23) & 0x7FFFFFFFu) > 0x497FFFF0 )
            {
              *(float *)&a3 = (float)(int)v23 - v23;
              v25.m128_f32[0] = FLOAT_N0_5;
              LODWORD(v81) = _mm_cmple_ss(*(__m128 *)&a3, v25).m128_u32[0];
              v24 = (int)v23 - v81;
            }
            else
            {
              *(float *)&v81 = v23 + 6291456.25;
              v24 = (int)((_DWORD)v81 << 10) >> 11;
            }
            v26 = *(float *)(v20 + 136);
            if ( v26 == v16 )
            {
              v27 = *(_DWORD *)(v20 + 120);
              v28 = v27;
            }
            else
            {
              v28 = *(_DWORD *)(v20 + 120);
              v27 = (int)(float)((float)v28 * v26);
            }
            v29 = *(float *)(v20 + 132);
            if ( v29 == 0.0 )
              v30 = 0;
            else
              v30 = (int)(float)((float)v28 * v29);
            v31 = (*(_BYTE *)(v20 + 140) & 0x10) != 0;
            *(_DWORD *)(v20 + 80) = v30;
            *(_BYTE *)(v20 + 96) = v31;
            *(_DWORD *)(v20 + 84) = v27;
            *(_DWORD *)(v20 + 88) = v28;
            *(_DWORD *)(v20 + 92) = v30;
            *(_BYTE *)(v20 + 140) |= 0x20u;
            *(_DWORD *)(v20 + 92) = v24;
          }
          else
          {
            v32 = *((_DWORD *)this + 109);
            v33 = *((_DWORD *)this + 108);
            if ( v32 < v33 )
            {
              v34 = v33 - v32;
              v35 = (int)(float)((float)((float)(int)v15 * *((float *)this + 118)) * v18);
              if ( v19 >= v34 )
                v35 = v34;
              v19 -= v35;
              *((_DWORD *)this + 109) = v32 + v35;
            }
            v36 = *((_QWORD *)this + 42);
            if ( (*(_BYTE *)(v36 + 140) & 2) != 0 )
              *(_DWORD *)(v36 + 92) += v19;
          }
        }
LABEL_39:
        v37 = (*((_BYTE *)this + 525) & 1) == 0;
        *((_QWORD *)this + 56) = *(_QWORD *)(*((_QWORD *)this + 2) + 480LL);
        if ( v37 || *((_DWORD *)this + 109) >= *((_DWORD *)this + 108) )
        {
          v39 = *((unsigned __int8 *)this + 524);
        }
        else
        {
          v38 = *((_BYTE *)this + 524);
          v39 = v38;
          if ( (v38 & 0x40) == 0 && (*((_DWORD *)this + 128) != 1 || (v38 & 0x10) != 0) )
            goto LABEL_80;
        }
        if ( (v39 & 8) == 0 )
        {
          for ( i = 0; i < *((_DWORD *)this + 92); ++i )
            CBaseExpression::CalculateValue(
              *(CBaseExpression **)(*((_QWORD *)this + 43) + 8LL * i),
              a2,
              *((_QWORD *)this + 20),
              &v80);
          if ( *((_QWORD *)this + 41) )
          {
            v41 = CKeyframeAnimation::SampleStartingValue(this);
            v9 = v41;
            if ( v41 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v41, 0x8B5u);
LABEL_54:
              if ( v9 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v9, 0x5FAu);
                goto LABEL_129;
              }
              v7 = CKeyframeAnimation::Calculate(this, a2);
              v9 = v7;
              if ( v7 < 0 )
              {
                v79 = 1533;
                goto LABEL_128;
              }
              v42 = *((_DWORD *)a2 + 4);
              v43 = (__int128 *)*((_QWORD *)this + 42);
              if ( ~v42 < 5 )
              {
                v9 = -2147418113;
                MilInstrumentationCheckHR_MaybeFailFast(
                  v42,
                  &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
                  1u,
                  -2147418113,
                  0x55u);
LABEL_68:
                MilInstrumentationCheckHR_MaybeFailFast(
                  v44,
                  &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
                  1u,
                  v9,
                  0x27Cu);
                MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v9, 0x603u);
                goto LABEL_129;
              }
              if ( *((_DWORD *)a2 + 12) == v42 )
              {
                v87 = 0LL;
                v45 = 5LL;
                v83 = 0uLL;
                v84 = 0uLL;
                v85 = 0uLL;
                v86 = 0uLL;
                v88 = 18;
                v89 = 0;
                v46 = DynArrayImpl<1>::AddMultiple((char *)a2 + 24, 80LL, 5LL, v82);
                v9 = v46;
                if ( v46 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0xE5u);
                }
                else
                {
                  v48 = v82[0];
                  do
                  {
                    CExpressionValue::operator=(v48, &v83);
                    v48 += 80LL;
                    --v45;
                  }
                  while ( v45 );
                }
                if ( v9 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    v49,
                    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
                    1u,
                    v9,
                    0x5Eu);
                  goto LABEL_68;
                }
                v42 = *((_DWORD *)a2 + 4);
              }
              *((_DWORD *)a2 + 4) = v42 + 1;
              v50 = *((_QWORD *)a2 + 3) + 80LL * v42;
              switch ( *((_DWORD *)v43 + 18) )
              {
                case 0xB:
                  v56 = *((_QWORD *)v43 + 8);
                  *(_DWORD *)(v50 + 72) = 11;
                  *(_BYTE *)(v50 + 76) = 1;
                  Microsoft::WRL::ComPtr<CPathData>::operator=(v50 + 64, v56);
                  break;
                case 0x11:
                  *(_BYTE *)v50 = *(_BYTE *)v43;
                  *(_DWORD *)(v50 + 72) = 17;
                  *(_BYTE *)(v50 + 76) = 1;
                  break;
                case 0x12:
                  *(_DWORD *)v50 = *(_DWORD *)v43;
                  *(_DWORD *)(v50 + 72) = 18;
                  *(_BYTE *)(v50 + 76) = 1;
                  break;
                case 0x23:
                  *(_DWORD *)(v50 + 72) = 35;
                  *(_QWORD *)v50 = *(_QWORD *)v43;
                  *(_BYTE *)(v50 + 76) = 1;
                  break;
                case 0x2A:
                  *(_DWORD *)(v50 + 72) = 42;
                  *(_DWORD *)v50 = *(_DWORD *)v43;
                  *(_BYTE *)(v50 + 76) = 1;
                  break;
                case 0x34:
                  *(_DWORD *)(v50 + 72) = 52;
                  *(_QWORD *)v50 = *(_QWORD *)v43;
                  *(_DWORD *)(v50 + 8) = *((_DWORD *)v43 + 2);
                  *(_BYTE *)(v50 + 76) = 1;
                  break;
                case 0x45:
                  *(_DWORD *)(v50 + 72) = 69;
                  v52 = *v43;
                  *(_BYTE *)(v50 + 76) = 1;
                  *(_OWORD *)v50 = v52;
                  break;
                case 0x46:
                  *(_DWORD *)(v50 + 72) = 70;
                  v53 = *v43;
                  *(_BYTE *)(v50 + 76) = 1;
                  *(_OWORD *)v50 = v53;
                  break;
                case 0x47:
                  *(_DWORD *)(v50 + 72) = 71;
                  v54 = *v43;
                  *(_BYTE *)(v50 + 76) = 1;
                  *(_OWORD *)v50 = v54;
                  break;
                case 0x68:
                  *(_DWORD *)(v50 + 72) = 104;
                  *(_OWORD *)v50 = *v43;
                  *(_QWORD *)(v50 + 16) = *((_QWORD *)v43 + 2);
                  *(_BYTE *)(v50 + 76) = 1;
                  break;
                case 0x109:
                  *(_DWORD *)(v50 + 72) = 265;
                  *(_OWORD *)v50 = *v43;
                  *(_OWORD *)(v50 + 16) = v43[1];
                  *(_OWORD *)(v50 + 32) = v43[2];
                  v55 = v43[3];
                  *(_BYTE *)(v50 + 76) = 1;
                  *(_OWORD *)(v50 + 48) = v55;
                  break;
                default:
                  break;
              }
LABEL_80:
              v57 = *((_BYTE *)this + 524);
              if ( (v57 & 0x20) != 0 )
              {
                CKeyframeAnimation::Pause(this);
                v57 = *((_BYTE *)this + 524);
              }
              v58 = *((_BYTE *)this + 525);
              if ( (v58 & 2) != 0 )
              {
                --*((_DWORD *)a2 + 4);
                v7 = CKeyframeAnimation::Reset(this, 1, a2);
                v9 = v7;
                if ( v7 >= 0 )
                {
                  v59 = *((_BYTE *)this + 524) & 0xFE;
                  *((_BYTE *)this + 524) = v59;
                  if ( (v59 & 0x20) != 0 )
                  {
                    CKeyframeAnimation::Play(this, a2);
                    CKeyframeAnimation::Pause(this);
                  }
                  else
                  {
                    *((_QWORD *)this + 63) = 0LL;
                  }
                  v9 = 0;
                  goto LABEL_129;
                }
                v79 = 1559;
LABEL_128:
                MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v79);
                goto LABEL_129;
              }
              if ( (v58 & 1) != 0 && *((_DWORD *)this + 109) < *((_DWORD *)this + 108) )
              {
                if ( *((_DWORD *)this + 128) == 1 && (v57 & 0x10) == 0 )
                {
                  v9 = 0;
                  *((_BYTE *)this + 524) = v57 | 0x10;
                  goto LABEL_129;
                }
                if ( (v57 & 0x40) == 0 )
                {
LABEL_95:
                  v9 = 1;
                  goto LABEL_129;
                }
              }
LABEL_126:
              v9 = 0;
              goto LABEL_129;
            }
          }
          *((_BYTE *)this + 524) |= 8u;
        }
        v9 = 0;
        goto LABEL_54;
      }
      CKeyframeAnimation::Play(this, a2);
      v12 = *((_BYTE *)this + 524) | 0x20;
      *((_BYTE *)this + 524) = v12;
      v14 = v12;
    }
    if ( v13 == 2 )
      goto LABEL_39;
    goto LABEL_12;
  }
  if ( !*((_BYTE *)this + 140) )
    goto LABEL_95;
  v87 = 0LL;
  v83 = 0uLL;
  v84 = 0uLL;
  v85 = 0uLL;
  v86 = 0uLL;
  v89 = 0;
  v88 = 18;
  CExpressionValue::CopyFrom((CExpressionValue *)&v83, (CKeyframeAnimation *)((char *)this + 64));
  v60 = *((_DWORD *)a2 + 4);
  if ( ~v60 < 5 )
  {
    v61 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      v60,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x55u);
    goto LABEL_111;
  }
  if ( *((_DWORD *)a2 + 12) != v60 )
  {
LABEL_109:
    v68 = *((_QWORD *)a2 + 3);
    v69 = v87;
    *((_DWORD *)a2 + 4) = v60 + 1;
    v70 = 80LL * v60;
    switch ( v88 )
    {
      case 11:
        *(_DWORD *)(v70 + v68 + 72) = 11;
        *(_BYTE *)(v70 + v68 + 76) = 1;
        Microsoft::WRL::ComPtr<CPathData>::operator=(v70 + v68 + 64, v69);
        break;
      case 17:
        *(_BYTE *)(v70 + v68) = v83;
        *(_DWORD *)(v70 + v68 + 72) = 17;
        *(_BYTE *)(v70 + v68 + 76) = 1;
        break;
      case 18:
        *(_DWORD *)(v70 + v68) = v83;
        *(_DWORD *)(v70 + v68 + 72) = 18;
        *(_BYTE *)(v70 + v68 + 76) = 1;
        break;
      case 35:
        v72 = DWORD1(v83);
        *(_DWORD *)(v70 + v68) = v83;
        *(_DWORD *)(v70 + v68 + 4) = v72;
        *(_DWORD *)(v70 + v68 + 72) = 35;
        *(_BYTE *)(v70 + v68 + 76) = 1;
        break;
      case 42:
        *(_DWORD *)(v70 + v68) = v83;
        *(_DWORD *)(v70 + v68 + 72) = 42;
        *(_BYTE *)(v70 + v68 + 76) = 1;
        break;
      case 52:
        v73 = DWORD2(v83);
        *(_QWORD *)(v70 + v68) = v83;
        *(_DWORD *)(v70 + v68 + 8) = v73;
        *(_DWORD *)(v70 + v68 + 72) = 52;
        *(_BYTE *)(v70 + v68 + 76) = 1;
        break;
      case 69:
        *(_OWORD *)(v70 + v68) = v83;
        *(_DWORD *)(v70 + v68 + 72) = 69;
        *(_BYTE *)(v70 + v68 + 76) = 1;
        break;
      case 70:
        *(_OWORD *)(v70 + v68) = v83;
        *(_DWORD *)(v70 + v68 + 72) = 70;
        *(_BYTE *)(v70 + v68 + 76) = 1;
        break;
      case 71:
        *(_OWORD *)(v70 + v68) = v83;
        *(_DWORD *)(v70 + v68 + 72) = 71;
        *(_BYTE *)(v70 + v68 + 76) = 1;
        break;
      case 104:
        v74 = v84;
        *(_OWORD *)(v70 + v68) = v83;
        *(_DWORD *)(v70 + v68 + 72) = 104;
        *(_QWORD *)(v70 + v68 + 16) = v74;
        *(_BYTE *)(v70 + v68 + 76) = 1;
        break;
      case 265:
        v75 = v84;
        *(_OWORD *)(v70 + v68) = v83;
        *(_DWORD *)(v70 + v68 + 72) = 265;
        v76 = v85;
        *(_OWORD *)(v70 + v68 + 16) = v75;
        *(_BYTE *)(v70 + v68 + 76) = 1;
        v77 = v86;
        *(_OWORD *)(v70 + v68 + 32) = v76;
        *(_OWORD *)(v70 + v68 + 48) = v77;
        break;
      default:
        break;
    }
    if ( v69 )
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v69 + 16LL))(v69, v70, v68);
    goto LABEL_126;
  }
  v63 = 5LL;
  memset(v90, 0, sizeof(v90));
  v91 = 18;
  v92 = 0;
  v64 = DynArrayImpl<1>::AddMultiple((char *)a2 + 24, 80LL, 5LL, v82);
  v61 = v64;
  if ( v64 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v64, 0xE5u);
  }
  else
  {
    v66 = v82[0];
    do
    {
      CExpressionValue::operator=(v66, v90);
      v66 += 80LL;
      --v63;
    }
    while ( v63 );
  }
  if ( v61 >= 0 )
  {
    v60 = *((_DWORD *)a2 + 4);
    goto LABEL_109;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v67, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1u, v61, 0x5Eu);
LABEL_111:
  MilInstrumentationCheckHR_MaybeFailFast(v62, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1u, v61, 0x27Cu);
  v9 = v61;
  MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v61, 0x64Cu);
  if ( v87 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 16LL))(v87);
LABEL_129:
  *a4 = *((_BYTE *)this + 524) & 1;
  result = (unsigned int)v9;
  *((_BYTE *)this + 524) &= 0x99u;
  return result;
}
