/*
 * XREFs of ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800993F0
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180081380 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180099040 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800993F0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x1800C0A64 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x1801D8D24 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1801DBC68 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801DDF58 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1801E1714 (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180082060 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180082BD4 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800993F0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180099900 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z @ 0x18009A210 (-IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800A76D4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800C0DF0 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800C7190 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x1800CE1E8 (-NotifyAnimationStarted@CBaseExpression@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     memcmp_0 @ 0x1800EC53F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x1801C1408 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x1801C1528 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801C1A68 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??8CPathData@@QEBA_NAEBV0@@Z @ 0x1801C1AB8 (--8CPathData@@QEBA_NAEBV0@@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801C1AF8 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x1801E73B4 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseExpression::CalculateValue(
        CBaseExpression *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v7; // rax
  char v10; // si
  int v11; // r13d
  __int64 v12; // rcx
  signed int v13; // esi
  char v15; // al
  CBaseExpression *v16; // rcx
  _DWORD *v17; // r12
  char v18; // r13
  unsigned int v19; // r13d
  __int64 v20; // rcx
  char v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rsi
  int v25; // eax
  __int64 v26; // rax
  struct CResource *v27; // rdx
  signed int v28; // eax
  signed int v29; // r12d
  unsigned int v30; // ecx
  __int64 v31; // rdx
  unsigned int v32; // ecx
  __int64 v33; // rax
  unsigned __int64 v34; // r8
  signed int v35; // eax
  __int64 v36; // rcx
  __int64 Elapsed; // rax
  _QWORD *v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned int v42; // r9d
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // eax
  bool v46; // zf
  __int64 v47; // rax
  __int64 v48; // rax
  char v49; // al
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned int TracingCookie; // eax
  signed int v54; // eax
  __int64 v55; // rcx
  HANDLE EventW; // rsi
  __int64 v57; // rax
  _DWORD *v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rax
  _DWORD *v61; // rcx
  unsigned int v62; // [rsp+28h] [rbp-E0h]
  bool v63[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v64; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD *v65; // [rsp+48h] [rbp-C0h]
  __int64 v66; // [rsp+50h] [rbp-B8h]
  __int64 v67; // [rsp+58h] [rbp-B0h]
  __int64 v68; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+68h] [rbp-A0h]
  WCHAR Name[32]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-50h]
  int v72; // [rsp+C0h] [rbp-48h]
  char v73; // [rsp+C4h] [rbp-44h]

  v4 = 0LL;
  v5 = 0LL;
  *a4 = 0;
  v7 = *((_QWORD *)this + 38);
  v67 = a3;
  v68 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  if ( *(int *)(v7 + 4) < 0 || CCommonRegistryData::m_fLogExpressionPerfStats )
  {
    v10 = 1;
    v65 = (_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 240LL) + 88LL);
    QpcStopwatch::Start((QpcStopwatch *)&v68);
    a3 = v67;
    v4 = v68;
  }
  else
  {
    v10 = 0;
  }
  v11 = *((_DWORD *)this + 66);
  *(_DWORD *)v63 = *((_DWORD *)a2 + 4);
  if ( !*((_QWORD *)this + 34) )
    *((_QWORD *)this + 34) = a3;
  (*(void (__fastcall **)(CBaseExpression *, bool *))(*(_QWORD *)this + 264LL))(this, &v63[4]);
  if ( !v63[4] && *((_BYTE *)this + 140) )
  {
    v13 = 0;
    goto LABEL_9;
  }
  *((_QWORD *)this + 20) = v67;
  if ( v10 )
  {
    if ( (*((_BYTE *)this + 208) & 2) != 0 )
    {
      v31 = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
      v32 = *(_DWORD *)(*((_QWORD *)this + 38) + 4LL);
      ++*(_DWORD *)(v31 + 420);
      v12 = v32 >> 31;
      if ( (_BYTE)v12 )
        ++*(_DWORD *)(v31 + 424);
    }
  }
  if ( v65 )
  {
    QpcStopwatch::Start((QpcStopwatch *)&v64);
    v5 = v64;
  }
  v15 = *((_BYTE *)this + 208);
  if ( (v15 & 0x10) != 0 )
    goto LABEL_16;
  v12 = 0LL;
  LODWORD(v66) = 0;
  if ( !*((_DWORD *)this + 60) )
  {
LABEL_51:
    *((_BYTE *)this + 208) = v15 | 0x10;
LABEL_16:
    v13 = 0;
    goto LABEL_17;
  }
  while ( 1 )
  {
    v33 = *((_QWORD *)this + 27);
    v34 = *((_QWORD *)this + 20);
    v63[5] = 0;
    v69 = v12;
    v35 = CBaseExpression::CalculateValue(*(CBaseExpression **)(v33 + 8 * v12), a2, v34, &v63[5]);
    v13 = v35;
    if ( v35 < 0 )
      break;
    CBaseExpression::EnsureExpressionIsUnregistered(*(CBaseExpression **)(*((_QWORD *)this + 27) + 8 * v69));
    v12 = (unsigned int)(v66 + 1);
    LODWORD(v66) = v12;
    if ( (unsigned int)v12 >= *((_DWORD *)this + 60) )
    {
      v15 = *((_BYTE *)this + 208);
      goto LABEL_51;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x2B7u, 0LL);
LABEL_17:
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_180283148, 1u, v13, 0x3EAu, 0LL);
    goto LABEL_47;
  }
  if ( !v11 )
    CBaseExpression::NotifyAnimationStarted(this);
  v13 = (*(__int64 (__fastcall **)(CBaseExpression *, struct CExpressionValueStack *, __int64, bool *))(*(_QWORD *)this + 240LL))(
          this,
          a2,
          v67,
          a4);
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, &dword_180283148, 1u, v13, 0x3F1u, 0LL);
    goto LABEL_47;
  }
  if ( v5 )
  {
    Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v64);
    v17 = v65;
    ++v65[1];
    *((_QWORD *)v17 + 4) += Elapsed;
    v5 = 0LL;
    v64 = 0LL;
  }
  else
  {
    v17 = v65;
  }
  if ( v13 == 1 )
  {
    v18 = 1;
  }
  else
  {
    v18 = 0;
    if ( CBaseExpression::IsExpressionValueValid(
           v16,
           (struct CExpressionValue *)(*((_QWORD *)a2 + 3) + 80LL * (unsigned int)(*((_DWORD *)a2 + 4) - 1))) )
    {
      goto LABEL_25;
    }
  }
  memset_0(Name, 0, sizeof(Name));
  v38 = (_QWORD *)*((_QWORD *)this + 22);
  v71 = 0LL;
  v72 = 18;
  v73 = 0;
  if ( !v38 || (v38 = (_QWORD *)v38[2]) == 0LL )
  {
    v13 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v38, &dword_180283148, 1u, 0x80070006, 0x40Bu, 0LL);
    v43 = v71;
    if ( !v71 )
      goto LABEL_47;
    goto LABEL_76;
  }
  v39 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, WCHAR *))(*v38 + 136LL))(v38, *((unsigned int *)this + 46), Name);
  v13 = v39;
  if ( v39 < 0 )
  {
    v62 = 1037;
    goto LABEL_72;
  }
  v41 = *((_QWORD *)this + 24);
  if ( v41 )
  {
    if ( *(_BYTE *)(v41 + 4) )
    {
      v39 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)Name, (struct SubchannelMaskInfo *)v41);
      v13 = v39;
      if ( v39 < 0 )
      {
        v62 = 1043;
LABEL_72:
        v42 = v39;
        goto LABEL_74;
      }
    }
  }
  if ( v72 != *((_DWORD *)this + 36) )
  {
    v13 = -2147024809;
    v42 = -2147024809;
    v62 = 1048;
LABEL_74:
    MilInstrumentationCheckHR_MaybeFailFast(v40, &dword_180283148, 1u, v42, v62, 0LL);
    v43 = v71;
    if ( v71 )
    {
      v71 = 0LL;
LABEL_76:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
LABEL_47:
    v19 = *(_DWORD *)v63;
    goto LABEL_48;
  }
  if ( v18 )
  {
    v39 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)Name);
    v13 = v39;
    if ( v39 < 0 )
    {
      v62 = 1053;
      goto LABEL_72;
    }
  }
  else
  {
    CExpressionValue::CopyFrom(
      (CExpressionValue *)(*((_QWORD *)a2 + 3) + 80LL * (unsigned int)(*((_DWORD *)a2 + 4) - 1)),
      (const struct CExpressionValue *)Name);
  }
  v44 = v71;
  if ( v71 )
  {
    v71 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
LABEL_25:
  v19 = *(_DWORD *)v63;
  v20 = *((unsigned int *)a2 + 4);
  if ( (_DWORD)v20 != *(_DWORD *)v63 + 1 )
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_180283148, 1u, 0x80004005, 0x431u, 0LL);
    goto LABEL_48;
  }
  if ( v17 )
  {
    QpcStopwatch::Start((QpcStopwatch *)&v64);
    LODWORD(v20) = *((_DWORD *)a2 + 4);
    v5 = v64;
  }
  v21 = 0;
  v22 = 5LL * (unsigned int)(v20 - 1);
  v23 = (unsigned int)(v20 - 1);
  v24 = *((_QWORD *)a2 + 3) + 16 * v22;
  if ( *(int *)(*((_QWORD *)this + 38) + 4LL) < 0 )
  {
    v45 = *((_DWORD *)this + 34);
    if ( v45 == *(_DWORD *)(v24 + 72) )
    {
      v23 = *((unsigned __int8 *)this + 140);
      if ( (_BYTE)v23 == *(_BYTE *)(v24 + 76) )
      {
        if ( !(_BYTE)v23 )
          goto LABEL_29;
        if ( v45 == 35 )
        {
          if ( *((_QWORD *)this + 8) == *(_QWORD *)v24 )
            goto LABEL_29;
        }
        else
        {
          if ( v45 != 52 )
          {
            switch ( v45 )
            {
              case 11:
                v51 = *((_QWORD *)this + 16);
                if ( v51 && *(_QWORD *)(v24 + 64) )
                {
                  v49 = CPathData::operator==(*((_QWORD *)this + 16));
                  goto LABEL_125;
                }
                if ( v51 == *(_QWORD *)(v24 + 64) )
                  goto LABEL_29;
                goto LABEL_128;
              case 17:
                v46 = *((_BYTE *)this + 64) == *(_BYTE *)v24;
                goto LABEL_124;
              case 18:
              case 42:
                if ( *((float *)this + 16) != *(float *)v24 )
                  goto LABEL_128;
                goto LABEL_29;
              case 69:
                v47 = *((_QWORD *)this + 8) - *(_QWORD *)v24;
                if ( !v47 )
                  v47 = *((_QWORD *)this + 9) - *(_QWORD *)(v24 + 8);
                v46 = v47 == 0;
                goto LABEL_124;
              case 70:
                v48 = *((_QWORD *)this + 8) - *(_QWORD *)v24;
                if ( !v48 )
                  v48 = *((_QWORD *)this + 9) - *(_QWORD *)(v24 + 8);
                if ( v48 )
                  goto LABEL_128;
                goto LABEL_29;
              case 71:
                v49 = *((float *)this + 16) == *(float *)v24
                   && *((float *)this + 17) == *(float *)(v24 + 4)
                   && *((float *)this + 18) == *(float *)(v24 + 8)
                   && *((float *)this + 19) == *(float *)(v24 + 12);
                goto LABEL_125;
              case 104:
                v50 = *((_QWORD *)this + 8) - *(_QWORD *)v24;
                if ( !v50 )
                {
                  v50 = *((_QWORD *)this + 9) - *(_QWORD *)(v24 + 8);
                  if ( !v50 )
                    v50 = *((_QWORD *)this + 10) - *(_QWORD *)(v24 + 16);
                }
                if ( v50 )
                  goto LABEL_128;
                goto LABEL_29;
              case 265:
                if ( memcmp_0((char *)this + 64, (const void *)v24, 0x40uLL) )
                  goto LABEL_128;
                goto LABEL_29;
              default:
                goto LABEL_128;
            }
          }
          v23 = *((_QWORD *)this + 8) - *(_QWORD *)v24;
          if ( !v23 )
            v23 = *((unsigned int *)this + 18) - (unsigned __int64)*(unsigned int *)(v24 + 8);
          v46 = v23 == 0;
LABEL_124:
          v49 = v46;
LABEL_125:
          if ( v49 )
            goto LABEL_29;
        }
      }
    }
LABEL_128:
    v21 = 1;
  }
LABEL_29:
  v25 = *(_DWORD *)(v24 + 72);
  if ( v25 == 18 )
  {
    *((_DWORD *)this + 16) = *(_DWORD *)v24;
    *((_DWORD *)this + 34) = 18;
LABEL_31:
    *((_BYTE *)this + 140) = 1;
  }
  else
  {
    switch ( v25 )
    {
      case 11:
        v52 = *(_QWORD *)(v24 + 64);
        *((_DWORD *)this + 34) = 11;
        *((_BYTE *)this + 140) = 1;
        Microsoft::WRL::ComPtr<CPathData>::operator=((char *)this + 128, v52);
        break;
      case 17:
        *((_BYTE *)this + 64) = *(_BYTE *)v24;
        *((_DWORD *)this + 34) = 17;
        goto LABEL_31;
      case 35:
        *((_DWORD *)this + 34) = 35;
        *((_QWORD *)this + 8) = *(_QWORD *)v24;
        goto LABEL_31;
      case 42:
        *((_DWORD *)this + 34) = 42;
        *((_DWORD *)this + 16) = *(_DWORD *)v24;
        goto LABEL_31;
      case 52:
        *((_DWORD *)this + 34) = 52;
        *((_QWORD *)this + 8) = *(_QWORD *)v24;
        *((_DWORD *)this + 18) = *(_DWORD *)(v24 + 8);
        goto LABEL_31;
      case 69:
        *((_DWORD *)this + 34) = 69;
        *((_OWORD *)this + 4) = *(_OWORD *)v24;
        goto LABEL_31;
      case 70:
        *((_DWORD *)this + 34) = 70;
        *((_OWORD *)this + 4) = *(_OWORD *)v24;
        goto LABEL_31;
      case 71:
        *((_DWORD *)this + 34) = 71;
        *((_OWORD *)this + 4) = *(_OWORD *)v24;
        goto LABEL_31;
      case 104:
        *((_DWORD *)this + 34) = 104;
        *((_OWORD *)this + 4) = *(_OWORD *)v24;
        *((_QWORD *)this + 10) = *(_QWORD *)(v24 + 16);
        goto LABEL_31;
      case 265:
        *((_DWORD *)this + 34) = 265;
        *((_OWORD *)this + 4) = *(_OWORD *)v24;
        *((_OWORD *)this + 5) = *(_OWORD *)(v24 + 16);
        *((_OWORD *)this + 6) = *(_OWORD *)(v24 + 32);
        *((_OWORD *)this + 7) = *(_OWORD *)(v24 + 48);
        goto LABEL_31;
      default:
        break;
    }
  }
  if ( v21 )
  {
    CBaseExpression::LogSetOutputValue(this);
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    v54 = StringCchPrintfW(Name, 0x3CuLL, L"DwmExpression_SetValue_%d", TracingCookie);
    v29 = v54;
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x1EAu, 0LL);
      goto LABEL_38;
    }
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
  }
  if ( (*((_BYTE *)this + 208) & 3) != 3 )
  {
LABEL_37:
    v29 = 0;
    goto LABEL_38;
  }
  v26 = *((_QWORD *)this + 22);
  if ( v26 )
  {
    v27 = *(struct CResource **)(v26 + 16);
    if ( v27 )
    {
      v28 = CBaseExpression::SetOutputValueOnTarget(this, v27);
      v29 = v28;
      if ( v28 >= 0 )
        goto LABEL_37;
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v28, 0x1FCu, 0LL);
LABEL_38:
      v13 = v29;
      if ( v29 >= 0 )
      {
        if ( v5 )
        {
          v57 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v64);
          v58 = v65;
          ++v65[5];
          *((_QWORD *)v58 + 8) += v57;
        }
        --*((_DWORD *)a2 + 4);
        v13 = 0;
        goto LABEL_9;
      }
      goto LABEL_139;
    }
  }
  v13 = -2147024890;
  v29 = -2147024890;
  MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, 0x80070006, 0x1FBu, 0LL);
LABEL_139:
  MilInstrumentationCheckHR_MaybeFailFast(v23, &dword_180283148, 1u, v29, 0x43Eu, 0LL);
LABEL_48:
  v30 = *((_DWORD *)a2 + 4);
  if ( v30 > v19 )
  {
    v59 = v30 - v19;
    do
    {
      --v30;
      --v59;
    }
    while ( v59 );
    *((_DWORD *)a2 + 4) = v30;
  }
LABEL_9:
  if ( v4 )
  {
    v60 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v68);
    v61 = v65;
    ++*v65;
    *((_QWORD *)v61 + 3) += v60;
  }
  return (unsigned int)v13;
}
