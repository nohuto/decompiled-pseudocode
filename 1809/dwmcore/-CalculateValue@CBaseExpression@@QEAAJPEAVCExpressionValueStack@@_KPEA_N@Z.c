/*
 * XREFs of ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004FAC0
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18004F550 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004FAC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180051970 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x180053FA0 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x18019E0A0 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1801A0FD8 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801A3090 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1801A3B6C (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 * Callees:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004FAC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800506D0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z @ 0x180051040 (-IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x180051448 (-NotifyAnimationStarted@CBaseExpression@@IEAAXXZ.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180052EB4 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180053984 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800544A0 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800669E4 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180083F48 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800F006F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18018A288 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18018A3D8 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18018C420 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801A4FFC (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??8CPathData@@QEBA_NAEBV0@@Z @ 0x1801AAA0C (--8CPathData@@QEBA_NAEBV0@@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801BD7C8 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 */

__int64 __fastcall CBaseExpression::CalculateValue(
        CBaseExpression *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  int v11; // ecx
  char v12; // si
  CBaseExpression *v13; // rcx
  int v14; // r15d
  __int64 v15; // rdx
  char v16; // al
  __int64 v17; // rsi
  __int64 v18; // rcx
  unsigned __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // ecx
  __int64 Elapsed; // rax
  float *v23; // rsi
  int v24; // eax
  __int64 v25; // rax
  CExpressionValue *v26; // rax
  struct CExpressionValue *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rcx
  int v31; // eax
  unsigned int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rax
  CExpressionValue *v35; // rax
  CExpressionValue *v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  CExpressionValue *v40; // rax
  __int64 v41; // rax
  char v42; // r15
  unsigned __int64 v43; // rcx
  char v44; // al
  char v45; // al
  __int64 v46; // rax
  bool v47; // zf
  __int64 v48; // rax
  __int64 v49; // rdx
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int64 v52; // rdx
  unsigned int TracingCookie; // eax
  int v54; // eax
  unsigned int v55; // ecx
  int v56; // esi
  HANDLE EventW; // rsi
  __int64 v58; // rax
  struct CResource *v59; // rdx
  int v60; // eax
  __int64 v61; // rax
  unsigned int v62; // ecx
  __int64 v63; // rdx
  __int64 v64; // rax
  unsigned int v66; // [rsp+20h] [rbp-E0h]
  unsigned int v67; // [rsp+20h] [rbp-E0h]
  bool v68; // [rsp+30h] [rbp-D0h] BYREF
  char v69[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v70; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v71; // [rsp+40h] [rbp-C0h]
  int v72; // [rsp+44h] [rbp-BCh]
  __int64 v73; // [rsp+48h] [rbp-B8h] BYREF
  bool *v74; // [rsp+50h] [rbp-B0h]
  __int64 v75; // [rsp+58h] [rbp-A8h]
  _BYTE v76[80]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR Name[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-48h]
  __int64 v79; // [rsp+C0h] [rbp-40h]
  __int64 v80; // [rsp+C8h] [rbp-38h]
  __int64 v81; // [rsp+D0h] [rbp-30h]
  __int64 v82; // [rsp+D8h] [rbp-28h]
  __int64 v83; // [rsp+E0h] [rbp-20h]
  __int64 v84; // [rsp+E8h] [rbp-18h]
  __int64 v85; // [rsp+F0h] [rbp-10h]
  int v86; // [rsp+F8h] [rbp-8h]
  char v87; // [rsp+FCh] [rbp-4h]

  v4 = 0LL;
  v5 = 0LL;
  *a4 = 0;
  v7 = 0LL;
  v8 = *((_QWORD *)this + 35);
  v74 = a4;
  v11 = *(_DWORD *)(v8 + 4) >> 31;
  v75 = a3;
  v73 = 0LL;
  v70 = 0LL;
  if ( (_BYTE)v11 || CCommonRegistryData::m_fLogExpressionPerfStats )
  {
    v12 = 1;
    v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 224LL) + 88LL;
    QpcStopwatch::Start((QpcStopwatch *)&v73);
    v7 = v73;
  }
  else
  {
    v12 = 0;
  }
  v71 = *((_DWORD *)a2 + 4);
  v72 = *((_DWORD *)this + 66);
  if ( !*((_QWORD *)this + 34) )
    *((_QWORD *)this + 34) = a3;
  (*(void (__fastcall **)(CBaseExpression *, char *))(*(_QWORD *)this + 232LL))(this, v69);
  if ( *((_BYTE *)this + 140) && !v69[0] )
  {
    v14 = 0;
    goto LABEL_139;
  }
  *((_QWORD *)this + 20) = a3;
  if ( v12 )
  {
    if ( (*((_BYTE *)this + 208) & 2) != 0 )
    {
      LODWORD(v13) = *(_DWORD *)(*((_QWORD *)this + 35) + 4LL) >> 31;
      v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 224LL);
      ++*(_DWORD *)(v15 + 420);
      if ( (_BYTE)v13 )
        ++*(_DWORD *)(v15 + 424);
    }
  }
  if ( v4 )
  {
    QpcStopwatch::Start((QpcStopwatch *)&v70);
    v5 = v70;
  }
  v16 = *((_BYTE *)this + 208);
  if ( (v16 & 0x10) != 0 )
    goto LABEL_22;
  v17 = 0LL;
  if ( !*((_DWORD *)this + 60) )
  {
LABEL_21:
    *((_BYTE *)this + 208) = v16 | 0x10;
LABEL_22:
    v14 = 0;
    goto LABEL_23;
  }
  while ( 1 )
  {
    v18 = *((_QWORD *)this + 27);
    v19 = *((_QWORD *)this + 20);
    v68 = 0;
    v20 = CBaseExpression::CalculateValue(*(CBaseExpression **)(v18 + 8 * v17), a2, v19, &v68);
    v14 = v20;
    if ( v20 < 0 )
      break;
    CBaseExpression::EnsureExpressionIsUnregistered(*(CBaseExpression **)(*((_QWORD *)this + 27) + 8 * v17));
    v17 = (unsigned int)(v17 + 1);
    if ( (unsigned int)v17 >= *((_DWORD *)this + 60) )
    {
      v16 = *((_BYTE *)this + 208);
      goto LABEL_21;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x295u);
LABEL_23:
  if ( v14 < 0 )
  {
    v66 = 950;
    goto LABEL_134;
  }
  if ( !v72 )
    CBaseExpression::NotifyAnimationStarted(this);
  v14 = (*(__int64 (__fastcall **)(CBaseExpression *, struct CExpressionValueStack *, __int64, bool *))(*(_QWORD *)this + 208LL))(
          this,
          a2,
          v75,
          v74);
  if ( v14 < 0 )
  {
    v66 = 957;
    goto LABEL_134;
  }
  if ( v5 )
  {
    Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v70);
    ++*(_DWORD *)(v4 + 4);
    *(_QWORD *)(v4 + 32) += Elapsed;
    v5 = 0LL;
    v70 = 0LL;
  }
  v23 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( v14 == 1 )
  {
    v68 = 1;
LABEL_38:
    v30 = (_QWORD *)*((_QWORD *)this + 22);
    *(_QWORD *)Name = 0LL;
    v78 = 0LL;
    v79 = 0LL;
    v80 = 0LL;
    v81 = 0LL;
    v82 = 0LL;
    v83 = 0LL;
    v84 = 0LL;
    v85 = 0LL;
    v86 = 18;
    v87 = 0;
    if ( !v30 || (v30 = (_QWORD *)v30[2]) == 0LL )
    {
      v14 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v30, &dword_18027646C, 1u, -2147024890, 0x3E0u);
LABEL_60:
      v38 = v85;
      if ( v85 )
      {
        v85 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      }
      goto LABEL_135;
    }
    v31 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, WCHAR *))(*v30 + 104LL))(v30, *((unsigned int *)this + 46), Name);
    v14 = v31;
    if ( v31 < 0 )
    {
      v67 = 994;
      goto LABEL_59;
    }
    v33 = *((_QWORD *)this + 24);
    if ( v33 )
    {
      if ( *(_BYTE *)(v33 + 4) )
      {
        v31 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)Name, (struct SubchannelMaskInfo *)v33);
        v14 = v31;
        if ( v31 < 0 )
        {
          v67 = 1000;
LABEL_59:
          MilInstrumentationCheckHR_MaybeFailFast(v32, &dword_18027646C, 1u, v31, v67);
          goto LABEL_60;
        }
      }
    }
    if ( v86 != *((_DWORD *)this + 36) )
    {
      v14 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v32, &dword_18027646C, 1u, -2147024809, 0x3EDu);
      goto LABEL_60;
    }
    if ( v68 )
    {
      v31 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)Name);
      v14 = v31;
      if ( v31 < 0 )
      {
        v67 = 1010;
        goto LABEL_59;
      }
    }
    else
    {
      v34 = (unsigned int)(*((_DWORD *)a2 + 4) - 1);
      if ( (unsigned int)v34 < *((_DWORD *)a2 + 12) )
      {
        v36 = (CExpressionValue *)(*((_QWORD *)a2 + 3) + 80 * v34);
      }
      else
      {
        v35 = CExpressionValue::CExpressionValue((CExpressionValue *)v76);
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v35);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v76);
        v36 = (CExpressionValue *)&CExpressionValueStack::s_emptyValue;
      }
      CExpressionValue::CopyFrom(v36, (const struct CExpressionValue *)Name);
    }
    v37 = v85;
    if ( v85 )
    {
      v85 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    goto LABEL_56;
  }
  v24 = *((_DWORD *)a2 + 4);
  v68 = 0;
  if ( !v24 )
  {
    CBaseExpression::EnsureExpressionIsUnregistered(this);
    v14 = -2147467259;
    v66 = 982;
LABEL_134:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v13, &dword_18027646C, 1u, v14, v66);
LABEL_135:
    v62 = *((_DWORD *)a2 + 4);
    if ( v62 > v71 )
    {
      v63 = v62 - v71;
      do
      {
        --v62;
        --v63;
      }
      while ( v63 );
      *((_DWORD *)a2 + 4) = v62;
    }
    goto LABEL_139;
  }
  v25 = (unsigned int)(v24 - 1);
  if ( (unsigned int)v25 < *((_DWORD *)a2 + 12) )
  {
    v27 = (struct CExpressionValue *)(*((_QWORD *)a2 + 3) + 80 * v25);
  }
  else
  {
    v26 = CExpressionValue::CExpressionValue((CExpressionValue *)Name);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v26);
    CExpressionValue::~CExpressionValue((CExpressionValue *)Name);
    v27 = (struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
  }
  if ( !CBaseExpression::IsExpressionValueValid(v13, v27) )
    goto LABEL_38;
LABEL_56:
  LODWORD(v13) = *((_DWORD *)a2 + 4);
  if ( (_DWORD)v13 != v71 + 1 )
  {
    v14 = -2147467259;
    v66 = 1030;
    goto LABEL_134;
  }
  if ( v4 )
  {
    QpcStopwatch::Start((QpcStopwatch *)&v70);
    LODWORD(v13) = *((_DWORD *)a2 + 4);
    v5 = v70;
  }
  v39 = (unsigned int)((_DWORD)v13 - 1);
  if ( (unsigned int)v39 < *((_DWORD *)a2 + 12) )
  {
    v23 = (float *)(*((_QWORD *)a2 + 3) + 80 * v39);
  }
  else
  {
    v40 = CExpressionValue::CExpressionValue((CExpressionValue *)v76);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v40);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v76);
  }
  v41 = *((_QWORD *)this + 35);
  v42 = 0;
  LODWORD(v43) = *(_DWORD *)(v41 + 4) >> 31;
  if ( *(int *)(v41 + 4) < 0 )
  {
    LODWORD(v43) = *((_DWORD *)this + 34);
    if ( (_DWORD)v43 == *((_DWORD *)v23 + 18) )
    {
      v44 = *((_BYTE *)this + 140);
      if ( v44 == *((_BYTE *)v23 + 76) )
      {
        if ( !v44 )
          goto LABEL_103;
        LODWORD(v43) = v43 - 11;
        switch ( (int)v43 )
        {
          case 0:
            v48 = *((_QWORD *)this + 16);
            if ( v48 && (v49 = *((_QWORD *)v23 + 8)) != 0 )
            {
              v45 = CPathData::operator==(*((_QWORD *)this + 16), v49, v28, v29);
LABEL_98:
              if ( v45 )
                goto LABEL_103;
            }
            else
            {
              v47 = v48 == *((_QWORD *)v23 + 8);
LABEL_101:
              if ( v47 )
                goto LABEL_103;
            }
            break;
          case 6:
            v45 = *((_BYTE *)this + 64) == *(_BYTE *)v23;
            goto LABEL_98;
          case 7:
          case 31:
            if ( *((float *)this + 16) != *v23 )
              break;
            goto LABEL_103;
          case 24:
            v45 = *((_QWORD *)this + 8) == *(_QWORD *)v23;
            goto LABEL_98;
          case 41:
            v43 = *((_QWORD *)this + 8) - *(_QWORD *)v23;
            if ( !v43 )
              v43 = *((unsigned int *)this + 18) - (unsigned __int64)*((unsigned int *)v23 + 2);
            v45 = v43 == 0;
            goto LABEL_98;
          case 58:
            v46 = *((_QWORD *)this + 8) - *(_QWORD *)v23;
            if ( !v46 )
              v46 = *((_QWORD *)this + 9) - *((_QWORD *)v23 + 1);
            v45 = v46 == 0;
            goto LABEL_98;
          case 59:
            if ( *((_QWORD *)this + 8) != *(_QWORD *)v23 )
              break;
            v47 = *((_QWORD *)this + 9) == *((_QWORD *)v23 + 1);
            goto LABEL_101;
          case 60:
            v45 = *((float *)this + 16) == *v23
               && *((float *)this + 17) == v23[1]
               && *((float *)this + 18) == v23[2]
               && *((float *)this + 19) == v23[3];
            goto LABEL_98;
          case 93:
            if ( *((_QWORD *)this + 8) != *(_QWORD *)v23 || *((_QWORD *)this + 9) != *((_QWORD *)v23 + 1) )
              break;
            v47 = *((_QWORD *)this + 10) == *((_QWORD *)v23 + 2);
            goto LABEL_101;
          case 254:
            v47 = memcmp_0((char *)this + 64, v23, 0x40uLL) == 0;
            goto LABEL_101;
          default:
            break;
        }
      }
    }
    v42 = 1;
  }
LABEL_103:
  switch ( *((_DWORD *)v23 + 18) )
  {
    case 0xB:
      v52 = *((_QWORD *)v23 + 8);
      *((_DWORD *)this + 34) = 11;
      *((_BYTE *)this + 140) = 1;
      Microsoft::WRL::ComPtr<CPathData>::operator=((char *)this + 128, v52);
      break;
    case 0x11:
      *((_BYTE *)this + 64) = *(_BYTE *)v23;
      *((_DWORD *)this + 34) = 17;
      *((_BYTE *)this + 140) = 1;
      break;
    case 0x12:
      *((float *)this + 16) = *v23;
      *((_DWORD *)this + 34) = 18;
      *((_BYTE *)this + 140) = 1;
      break;
    case 0x23:
      *((_DWORD *)this + 34) = 35;
      *((_QWORD *)this + 8) = *(_QWORD *)v23;
      *((_BYTE *)this + 140) = 1;
      break;
    case 0x2A:
      *((_DWORD *)this + 34) = 42;
      *((float *)this + 16) = *v23;
      *((_BYTE *)this + 140) = 1;
      break;
    case 0x34:
      *((_DWORD *)this + 34) = 52;
      *((_QWORD *)this + 8) = *(_QWORD *)v23;
      *((float *)this + 18) = v23[2];
      *((_BYTE *)this + 140) = 1;
      break;
    case 0x45:
      *((_DWORD *)this + 34) = 69;
      goto LABEL_109;
    case 0x46:
      *((_DWORD *)this + 34) = 70;
      goto LABEL_109;
    case 0x47:
      *((_DWORD *)this + 34) = 71;
LABEL_109:
      v50 = *(_OWORD *)v23;
      *((_BYTE *)this + 140) = 1;
      *((_OWORD *)this + 4) = v50;
      break;
    case 0x68:
      *((_DWORD *)this + 34) = 104;
      *((_OWORD *)this + 4) = *(_OWORD *)v23;
      *((_QWORD *)this + 10) = *((_QWORD *)v23 + 2);
      *((_BYTE *)this + 140) = 1;
      break;
    case 0x109:
      *((_DWORD *)this + 34) = 265;
      *((_OWORD *)this + 4) = *(_OWORD *)v23;
      *((_OWORD *)this + 5) = *((_OWORD *)v23 + 1);
      *((_OWORD *)this + 6) = *((_OWORD *)v23 + 2);
      v51 = *((_OWORD *)v23 + 3);
      *((_BYTE *)this + 140) = 1;
      *((_OWORD *)this + 7) = v51;
      break;
    default:
      break;
  }
  if ( v42 )
  {
    CBaseExpression::LogSetOutputValue(this);
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    v54 = StringCchPrintfW(Name, 0x3CuLL, L"DwmExpression_SetValue_%d", TracingCookie);
    v56 = v54;
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x1C8u);
      goto LABEL_128;
    }
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
  }
  if ( (*((_BYTE *)this + 208) & 3) != 3 )
    goto LABEL_127;
  v58 = *((_QWORD *)this + 22);
  if ( !v58 || (v59 = *(struct CResource **)(v58 + 16)) == 0LL )
  {
    v14 = -2147024890;
    v56 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, -2147024890, 0x1D9u);
LABEL_126:
    MilInstrumentationCheckHR_MaybeFailFast(v43, &dword_18027646C, 1u, v56, 0x413u);
    goto LABEL_135;
  }
  v60 = CBaseExpression::SetOutputValueOnTarget(this, v59);
  v56 = v60;
  if ( v60 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v60, 0x1DAu);
  else
LABEL_127:
    v56 = 0;
LABEL_128:
  v14 = v56;
  if ( v56 < 0 )
    goto LABEL_126;
  if ( v5 )
  {
    v61 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v70);
    ++*(_DWORD *)(v4 + 20);
    *(_QWORD *)(v4 + 64) += v61;
  }
  --*((_DWORD *)a2 + 4);
  v14 = 0;
LABEL_139:
  if ( v7 )
  {
    v64 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v73);
    ++*(_DWORD *)v4;
    *(_QWORD *)(v4 + 24) += v64;
  }
  return (unsigned int)v14;
}
