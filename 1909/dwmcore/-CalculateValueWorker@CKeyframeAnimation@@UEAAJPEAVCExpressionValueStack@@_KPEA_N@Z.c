/*
 * XREFs of ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A63A0
 * Callers:
 *     ?CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18020EC30 (-CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x18001BE20 (-Pause@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180075BC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A6A50 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800A7080 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A7298 (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A78CC (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A7ED0 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800AA36C (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800AA974 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@2@AEBQEAVCChannelContext@@@Z @ 0x1800B80C0 (-lower_bound@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelContext.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800D753C (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801C0298 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CKeyframeAnimation::CalculateValueWorker(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        double a3,
        bool *a4)
{
  signed int v7; // eax
  __int64 v8; // rcx
  signed int v9; // ebx
  LONGLONG v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rax
  char v17; // r15
  int v18; // r12d
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // r13
  float v25; // xmm1_4
  int v26; // edx
  __int64 v27; // r8
  float v28; // xmm0_4
  int v29; // eax
  float v30; // xmm0_4
  int v31; // ecx
  float v32; // xmm1_4
  int v33; // r9d
  int v34; // r10d
  float v35; // xmm1_4
  int v36; // edx
  bool v37; // al
  bool v38; // zf
  __int64 v39; // rcx
  char v40; // al
  __int64 v41; // rcx
  const struct CExpressionValue *v42; // r15
  char v43; // cl
  char v44; // al
  int v45; // r8d
  int v46; // eax
  __int64 v47; // rax
  char v48; // al
  __m128 v49; // rt1
  int v50; // eax
  int v51; // ecx
  __int64 i; // rbx
  signed int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // r12
  signed int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // r13
  __int64 v59; // rcx
  __int64 v60; // rcx
  signed int v61; // r15d
  __int64 v62; // rcx
  __int64 v63; // r12
  signed int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rcx
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // xmm1_8
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  unsigned int v74; // [rsp+20h] [rbp-A9h]
  bool v75; // [rsp+30h] [rbp-99h] BYREF
  __int64 v76; // [rsp+38h] [rbp-91h] BYREF
  _QWORD v77[2]; // [rsp+40h] [rbp-89h] BYREF
  __int128 v78; // [rsp+50h] [rbp-79h] BYREF
  __int128 v79; // [rsp+60h] [rbp-69h]
  __int128 v80; // [rsp+70h] [rbp-59h]
  __int128 v81; // [rsp+80h] [rbp-49h]
  __int64 v82; // [rsp+90h] [rbp-39h]
  int v83; // [rsp+98h] [rbp-31h]
  char v84; // [rsp+9Ch] [rbp-2Dh]
  _BYTE v85[64]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v86; // [rsp+E0h] [rbp+17h]
  int v87; // [rsp+E8h] [rbp+1Fh]
  char v88; // [rsp+ECh] [rbp+23h]

  *a4 = 0;
  v7 = CKeyframeAnimation::ApplyPlaybackStateChanges(this, a2);
  v9 = v7;
  if ( v7 < 0 )
  {
    v74 = 1461;
    goto LABEL_126;
  }
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL)
      - Time::s_luBegin.QuadPart
      - (*((_QWORD *)this + 58)
       - Time::s_luBegin.QuadPart);
  if ( v10 < 0 )
    goto LABEL_13;
  if ( (*((_BYTE *)this + 541) & 1) != 0 )
  {
    if ( *((_DWORD *)this + 130) != 2 )
    {
      v16 = (*(__int64 (__fastcall **)(CKeyframeAnimation *))(*(_QWORD *)this + 160LL))(this);
      if ( v16 )
        ++*(_DWORD *)(v16 + 40);
    }
    v17 = *((_BYTE *)this + 540);
    v18 = *((_DWORD *)this + 130);
    if ( (v17 & 6) != 0 || !*((_BYTE *)this + 140) )
    {
      if ( v18 != 2 )
      {
LABEL_23:
        if ( v10 == 0x7FFFFFFFFFFFFFFFLL )
        {
          LODWORD(v23) = 0x7FFFFFFF;
        }
        else
        {
          v19 = 1000000 * v10;
          if ( Time::s_luFreq.QuadPart == 10000000 )
            v20 = v19 / 10000000;
          else
            v20 = v19 / Time::s_luFreq.QuadPart;
          v21 = 500LL;
          if ( v20 < 0 )
            v21 = -500LL;
          v22 = (unsigned __int128)((v21 + v20) * (__int128)0x20C49BA5E353F7CFLL) >> 64;
          v23 = ((unsigned __int64)v22 >> 63) + (v22 >> 7);
        }
        v24 = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
        v76 = *((_QWORD *)this + 6);
        if ( !v76
          || (std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::lower_bound(
                v24 + 432,
                v77,
                &v76),
              v77[0] == *(_QWORD *)(v24 + 440)) )
        {
          v25 = *(float *)&FLOAT_1_0;
        }
        else
        {
          v25 = *(float *)(v77[0] + 24LL);
        }
        v26 = (int)(float)((float)((float)(int)v23 * *((float *)this + 122)) * v25);
        if ( v17 < 0 )
        {
          if ( *((_DWORD *)this + 133) == 4 )
          {
            v27 = *((_QWORD *)this + 45);
            v28 = 0.0;
            v29 = *(_DWORD *)(v27 + 112);
            if ( v29 > 0 )
              v28 = (float)*(int *)(*(_QWORD *)(v27 + 104) + 24LL * (unsigned int)(v29 - 1)) / 1000.0;
            v30 = (float)(v28 * *((float *)this + 129)) * 1000.0;
            *(float *)&v76 = v30;
            if ( (LODWORD(v30) & 0x7FFFFFFFu) > 0x497FFFF0 )
            {
              *(float *)&a3 = (float)(int)v30 - v30;
              v49.m128_f32[0] = FLOAT_N0_5;
              LODWORD(v76) = _mm_cmple_ss(*(__m128 *)&a3, v49).m128_u32[0];
              v31 = (int)v30 - v76;
            }
            else
            {
              *(float *)&v76 = v30 + 6291456.25;
              v31 = (int)((_DWORD)v76 << 10) >> 11;
            }
            v32 = *(float *)(v27 + 136);
            if ( v32 == 1.0 )
            {
              v33 = *(_DWORD *)(v27 + 120);
              v34 = v33;
            }
            else
            {
              v34 = *(_DWORD *)(v27 + 120);
              v33 = (int)(float)((float)v34 * v32);
            }
            v35 = *(float *)(v27 + 132);
            if ( v35 == 0.0 )
              v36 = 0;
            else
              v36 = (int)(float)((float)v34 * v35);
            v37 = (*(_BYTE *)(v27 + 140) & 0x10) != 0;
            *(_DWORD *)(v27 + 80) = v36;
            *(_BYTE *)(v27 + 96) = v37;
            *(_DWORD *)(v27 + 84) = v33;
            *(_DWORD *)(v27 + 88) = v34;
            *(_DWORD *)(v27 + 92) = v36;
            *(_BYTE *)(v27 + 140) |= 0x20u;
            *(_DWORD *)(v27 + 92) = v31;
          }
          else
          {
            v45 = *((_DWORD *)this + 113);
            v46 = *((_DWORD *)this + 112);
            if ( v45 < v46 )
            {
              v50 = v46 - v45;
              v51 = (int)(float)((float)((float)(int)v23 * *((float *)this + 122)) * v25);
              if ( v26 >= v50 )
                v51 = v50;
              v26 -= v51;
              *((_DWORD *)this + 113) = v45 + v51;
            }
            v47 = *((_QWORD *)this + 45);
            if ( (*(_BYTE *)(v47 + 140) & 2) != 0 )
              *(_DWORD *)(v47 + 92) += v26;
          }
        }
LABEL_43:
        v38 = (*((_BYTE *)this + 541) & 1) == 0;
        v39 = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL);
        *((_QWORD *)this + 58) = v39;
        if ( v38 || *((_DWORD *)this + 113) >= *((_DWORD *)this + 112) )
        {
          v40 = *((_BYTE *)this + 540);
        }
        else
        {
          v39 = *((unsigned __int8 *)this + 540);
          v40 = v39;
          if ( (v39 & 0x40) == 0 && (*((_DWORD *)this + 132) != 1 || (v39 & 0x10) != 0) )
            goto LABEL_53;
        }
        if ( (v40 & 8) == 0 )
        {
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 98); i = (unsigned int)(i + 1) )
            CBaseExpression::CalculateValue(
              *(CBaseExpression **)(*((_QWORD *)this + 46) + 8 * i),
              a2,
              *((_QWORD *)this + 20),
              &v75);
          if ( *((_QWORD *)this + 44) )
          {
            v53 = CKeyframeAnimation::SampleStartingValue(this);
            v9 = v53;
            if ( v53 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v53, 0x8ACu, 0LL);
LABEL_48:
              if ( v9 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v9, 0x5F7u, 0LL);
                goto LABEL_14;
              }
              v7 = CKeyframeAnimation::Calculate(this, a2);
              v9 = v7;
              if ( v7 < 0 )
              {
                v74 = 1530;
                goto LABEL_126;
              }
              v41 = *((unsigned int *)a2 + 4);
              v42 = (const struct CExpressionValue *)*((_QWORD *)this + 45);
              if ( (unsigned int)~*((_DWORD *)a2 + 4) < 5 )
              {
                v9 = -2147418113;
                MilInstrumentationCheckHR_MaybeFailFast(
                  v41,
                  &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
                  1u,
                  0x8000FFFF,
                  0x52u,
                  0LL);
              }
              else
              {
                if ( *((_DWORD *)a2 + 12) != (_DWORD)v41 )
                {
LABEL_52:
                  *((_DWORD *)a2 + 4) = v41 + 1;
                  CExpressionValue::CopyFrom((CExpressionValue *)(*((_QWORD *)a2 + 3) + 80 * v41), v42);
LABEL_53:
                  v43 = *((_BYTE *)this + 540);
                  if ( (v43 & 0x20) != 0 )
                  {
                    CKeyframeAnimation::Pause(this);
                    v43 = *((_BYTE *)this + 540);
                  }
                  v44 = *((_BYTE *)this + 541);
                  if ( (v44 & 2) == 0 )
                  {
                    if ( (v44 & 1) != 0 && *((_DWORD *)this + 113) < *((_DWORD *)this + 112) )
                    {
                      if ( *((_DWORD *)this + 132) != 1 || (v43 & 0x10) != 0 )
                      {
                        if ( (v43 & 0x40) == 0 )
                          goto LABEL_102;
                      }
                      else
                      {
                        *((_BYTE *)this + 540) = v43 | 0x10;
                      }
                    }
LABEL_13:
                    v9 = 0;
                    goto LABEL_14;
                  }
                  --*((_DWORD *)a2 + 4);
                  v7 = CKeyframeAnimation::Reset(this, 1, a2);
                  v9 = v7;
                  if ( v7 >= 0 )
                  {
                    v48 = *((_BYTE *)this + 540) & 0xFE;
                    *((_BYTE *)this + 540) = v48;
                    if ( (v48 & 0x20) != 0 )
                    {
                      CKeyframeAnimation::Play(this, a2);
                      CKeyframeAnimation::Pause(this);
                    }
                    else
                    {
                      *((_QWORD *)this + 65) = 0LL;
                    }
                    goto LABEL_13;
                  }
                  v74 = 1556;
LABEL_126:
                  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v74, 0LL);
                  goto LABEL_14;
                }
                memset_0(&v78, 0, 0x40uLL);
                v55 = 5LL;
                v82 = 0LL;
                v83 = 18;
                v84 = 0;
                v56 = DynArrayImpl<1>::AddMultiple((char *)a2 + 24, 80LL, 5LL, v77);
                v9 = v56;
                if ( v56 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0xE8u, 0LL);
                }
                else
                {
                  v58 = v77[0];
                  do
                  {
                    CExpressionValue::operator=(v58, &v78);
                    v58 += 80LL;
                    --v55;
                  }
                  while ( v55 );
                }
                if ( v9 >= 0 )
                {
                  v41 = *((unsigned int *)a2 + 4);
                  goto LABEL_52;
                }
                MilInstrumentationCheckHR_MaybeFailFast(
                  v59,
                  &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
                  1u,
                  v9,
                  0x5Bu,
                  0LL);
              }
              MilInstrumentationCheckHR_MaybeFailFast(
                v54,
                &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
                1u,
                v9,
                0x270u,
                0LL);
              MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v9, 0x600u, 0LL);
              goto LABEL_14;
            }
          }
          *((_BYTE *)this + 540) |= 8u;
        }
        v9 = 0;
        goto LABEL_48;
      }
      CKeyframeAnimation::Play(this, a2);
      *((_BYTE *)this + 540) |= 0x20u;
      v17 = *((_BYTE *)this + 540);
    }
    if ( v18 == 2 )
      goto LABEL_43;
    goto LABEL_23;
  }
  if ( !*((_BYTE *)this + 140) )
  {
LABEL_102:
    v9 = 1;
    goto LABEL_14;
  }
  v83 = 18;
  v78 = 0uLL;
  v79 = 0uLL;
  v80 = 0uLL;
  v81 = 0uLL;
  v82 = 0LL;
  v84 = 0;
  CExpressionValue::CopyFrom((CExpressionValue *)&v78, (CKeyframeAnimation *)((char *)this + 64));
  v11 = *((unsigned int *)a2 + 4);
  if ( (unsigned int)~*((_DWORD *)a2 + 4) < 5 )
  {
    v61 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      v11,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      0x8000FFFF,
      0x52u,
      0LL);
  }
  else
  {
    if ( *((_DWORD *)a2 + 12) != (_DWORD)v11 )
    {
LABEL_7:
      v12 = v82;
      *((_DWORD *)a2 + 4) = v11 + 1;
      v13 = *((_QWORD *)a2 + 3);
      v14 = 80LL * (unsigned int)v11;
      if ( v83 == 18 )
      {
        *(_DWORD *)(v14 + v13 + 72) = 18;
LABEL_9:
        *(_DWORD *)(v14 + v13) = v78;
LABEL_10:
        *(_BYTE *)(v14 + v13 + 76) = 1;
      }
      else
      {
        switch ( v83 )
        {
          case 11:
            *(_DWORD *)(v14 + v13 + 72) = 11;
            *(_BYTE *)(v14 + v13 + 76) = 1;
            Microsoft::WRL::ComPtr<CPathData>::operator=(v14 + v13 + 64, v12);
            break;
          case 17:
            *(_BYTE *)(v14 + v13) = v78;
            *(_DWORD *)(v14 + v13 + 72) = 17;
            goto LABEL_10;
          case 35:
            *(_DWORD *)(v14 + v13 + 4) = DWORD1(v78);
            *(_DWORD *)(v14 + v13 + 72) = 35;
            goto LABEL_9;
          case 42:
            *(_DWORD *)(v14 + v13) = v78;
            *(_DWORD *)(v14 + v13 + 72) = 42;
            goto LABEL_10;
          case 52:
            v69 = DWORD2(v78);
            *(_QWORD *)(v14 + v13) = v78;
            *(_DWORD *)(v14 + v13 + 8) = v69;
            *(_DWORD *)(v14 + v13 + 72) = 52;
            goto LABEL_10;
          case 69:
            *(_OWORD *)(v14 + v13) = v78;
            *(_DWORD *)(v14 + v13 + 72) = 69;
            goto LABEL_10;
          case 70:
            *(_OWORD *)(v14 + v13) = v78;
            *(_DWORD *)(v14 + v13 + 72) = 70;
            goto LABEL_10;
          case 71:
            *(_OWORD *)(v14 + v13) = v78;
            *(_DWORD *)(v14 + v13 + 72) = 71;
            goto LABEL_10;
          case 104:
            v70 = v79;
            *(_OWORD *)(v14 + v13) = v78;
            *(_DWORD *)(v14 + v13 + 72) = 104;
            *(_QWORD *)(v14 + v13 + 16) = v70;
            goto LABEL_10;
          case 265:
            v71 = v79;
            *(_OWORD *)(v14 + v13) = v78;
            *(_DWORD *)(v14 + v13 + 72) = 265;
            v72 = v80;
            *(_OWORD *)(v14 + v13 + 16) = v71;
            v73 = v81;
            *(_OWORD *)(v14 + v13 + 32) = v72;
            *(_OWORD *)(v14 + v13 + 48) = v73;
            goto LABEL_10;
          default:
            break;
        }
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      goto LABEL_13;
    }
    memset_0(v85, 0, sizeof(v85));
    v63 = 5LL;
    v86 = 0LL;
    v87 = 18;
    v88 = 0;
    v64 = DynArrayImpl<1>::AddMultiple((char *)a2 + 24, 80LL, 5LL, v77);
    v61 = v64;
    if ( v64 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v64, 0xE8u, 0LL);
    }
    else
    {
      v66 = v77[0];
      do
      {
        CExpressionValue::operator=(v66, v85);
        v66 += 80LL;
        --v63;
      }
      while ( v63 );
    }
    if ( v61 >= 0 )
    {
      LODWORD(v11) = *((_DWORD *)a2 + 4);
      goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      v67,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v61,
      0x5Bu,
      0LL);
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    v62,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    v61,
    0x270u,
    0LL);
  v9 = v61;
  MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v61, 0x649u, 0LL);
  if ( v82 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
LABEL_14:
  *a4 = *((_BYTE *)this + 540) & 1;
  result = (unsigned int)v9;
  *((_BYTE *)this + 540) &= 0x99u;
  return result;
}
