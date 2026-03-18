/*
 * XREFs of ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18004F550
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x1800CEAD0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800164B8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@V-$basic_string@GU-$char_.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004FAC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180051474 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18005B880 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x180065D48 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007EADC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@IPEAX@2@@Z @ 0x1800DA240 (-_Erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU-$_Tre.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18018A288 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18018A3D8 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x18018A408 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18019EDCC (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x18019EEBC (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x1801A17EC (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 *     ?GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z @ 0x1801D46A8 (-GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z.c)
 *     ?Reset@CExpressionPerformanceCounter@@QEAAXXZ @ 0x1801D46DC (-Reset@CExpressionPerformanceCounter@@QEAAXXZ.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x1801E5E88 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x1801E7364 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 */

__int64 __fastcall CExpressionManager::UpdateExpressions(CExpressionManager *this, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  unsigned int v5; // r13d
  unsigned int v7; // r15d
  __int64 v8; // rdi
  char v9; // cl
  char v10; // cl
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rax
  CBaseExpression *v14; // r14
  unsigned __int64 v15; // r8
  unsigned int v16; // ecx
  unsigned int j; // r14d
  char *v18; // r14
  double *v19; // rbx
  double v20; // rax
  __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 *v23; // r15
  char v25; // al
  __int64 v26; // rax
  unsigned int *v27; // rbx
  unsigned int v28; // r12d
  unsigned int v29; // edx
  double v30; // rbx
  unsigned int v31; // ecx
  int v32; // ecx
  char v33; // r13
  unsigned __int64 v34; // r14
  unsigned int v35; // edi
  unsigned int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // r8
  unsigned int v39; // eax
  unsigned int v40; // edx
  int v41; // eax
  bool v42; // zf
  int v43; // eax
  unsigned int v44; // ecx
  __int64 v45; // r14
  unsigned int v46; // ebx
  char *i; // r15
  unsigned int v48; // eax
  unsigned int v49; // edx
  int v50; // eax
  unsigned int v51; // ecx
  __int64 Elapsed; // rax
  int v53; // eax
  double v54; // xmm2_8
  double v55; // xmm0_8
  __int64 v56; // rdx
  __int64 v57; // rax
  double DurationAverage; // xmm0_8
  __int64 v59; // rcx
  double v60; // xmm0_8
  __int64 v61; // rcx
  double v62; // xmm0_8
  __int64 v63; // rcx
  double v64; // xmm0_8
  __int64 v65; // rcx
  double v66; // xmm0_8
  __int64 v67; // rcx
  double v68; // xmm0_8
  __int64 v69; // rax
  _DWORD *v70; // rbx
  CChainingHelper *ActiveChainingHelper; // rax
  bool v72[8]; // [rsp+38h] [rbp-D0h] BYREF
  double v73; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v74; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v75; // [rsp+50h] [rbp-B8h] BYREF
  double v76; // [rsp+58h] [rbp-B0h] BYREF
  double v77; // [rsp+60h] [rbp-A8h] BYREF
  double v78; // [rsp+68h] [rbp-A0h] BYREF
  double v79; // [rsp+70h] [rbp-98h] BYREF
  double v80; // [rsp+78h] [rbp-90h] BYREF
  double v81; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  double *v83; // [rsp+A8h] [rbp-60h]
  __int64 v84; // [rsp+B0h] [rbp-58h]
  char *v85; // [rsp+B8h] [rbp-50h]
  __int64 v86; // [rsp+C0h] [rbp-48h]
  char *v87; // [rsp+C8h] [rbp-40h]
  __int64 v88; // [rsp+D0h] [rbp-38h]
  __int64 *v89; // [rsp+D8h] [rbp-30h]
  __int64 v90; // [rsp+E0h] [rbp-28h]
  __int64 *v91; // [rsp+E8h] [rbp-20h]
  __int64 v92; // [rsp+F0h] [rbp-18h]
  bool *v93; // [rsp+F8h] [rbp-10h]
  __int64 v94; // [rsp+100h] [rbp-8h]
  double *v95; // [rsp+108h] [rbp+0h]
  __int64 v96; // [rsp+110h] [rbp+8h]
  double *v97; // [rsp+118h] [rbp+10h]
  __int64 v98; // [rsp+120h] [rbp+18h]
  double *v99; // [rsp+128h] [rbp+20h]
  __int64 v100; // [rsp+130h] [rbp+28h]
  double *v101; // [rsp+138h] [rbp+30h]
  __int64 v102; // [rsp+140h] [rbp+38h]
  double *v103; // [rsp+148h] [rbp+40h]
  __int64 v104; // [rsp+150h] [rbp+48h]
  double *v105; // [rsp+158h] [rbp+50h]
  __int64 v106; // [rsp+160h] [rbp+58h]
  __int64 *v107; // [rsp+168h] [rbp+60h]
  __int64 v108; // [rsp+170h] [rbp+68h]
  __int64 v109; // [rsp+1D8h] [rbp+D0h] BYREF

  v109 = a3;
  v3 = *((_BYTE *)this + 416);
  v5 = 0;
  v75 = 0LL;
  v7 = 0;
  *((_BYTE *)this + 416) = (v3 ^ (v3 ^ (2 * v3)) & 8) & 0xFB;
  v8 = 0LL;
  v72[1] = ((v3 ^ (v3 ^ (unsigned __int8)(2 * v3)) & 8) & 8) != 0;
  if ( *((_DWORD *)this + 64) || ((v3 ^ (v3 ^ (unsigned __int8)(2 * v3)) & 8) & 2) != 0 || *((_DWORD *)this + 40) )
  {
    v9 = (v3 ^ (v3 ^ (2 * v3)) & 8) & 0xF9;
    *((_BYTE *)this + 416) = v9;
    if ( *((_DWORD *)this + 40) || CCommonRegistryData::m_fLogExpressionPerfStats )
    {
      CExpressionPerformanceCounter::Reset((CExpressionManager *)((char *)this + 88));
      QpcStopwatch::Start((QpcStopwatch *)&v75);
      v9 = *((_BYTE *)this + 416);
      a3 = v109;
      v8 = v75;
    }
    v10 = v9 | 1;
    *((_QWORD *)this + 2) = a2;
    *((_QWORD *)this + 3) = a3;
    *((_BYTE *)this + 416) = v10;
    if ( (v10 & 8) != 0 )
    {
      v73 = 0.0;
      if ( CCommonRegistryData::m_fLogExpressionPerfStats )
        QpcStopwatch::Start((QpcStopwatch *)&v73);
      a3 = *((unsigned int *)this + 41);
      v28 = 0;
      if ( *((_DWORD *)this + 8 * a3 + 48) )
      {
        v29 = CBaseExpression::s_recursionLevel;
        do
        {
          v30 = *(double *)(*((_QWORD *)this + 4 * (unsigned int)a3 + 21) + 8LL * v28);
          v31 = a3;
          if ( v30 != 0.0 )
          {
            v32 = *(_DWORD *)(*(_QWORD *)&v30 + 148LL);
            v33 = 0;
            v34 = *((_QWORD *)this + 3);
            *(_DWORD *)(*(_QWORD *)&v30 + 148LL) = v32 + 1;
            if ( v32 < 1 && *(_QWORD *)(*(_QWORD *)&v30 + 152LL) != v34 && v29 <= 0x10 )
            {
              v33 = 1;
              v35 = 0;
              for ( CBaseExpression::s_recursionLevel = v29 + 1; v35 < *(_DWORD *)(*(_QWORD *)&v30 + 240LL); ++v35 )
                CBaseExpression::InsertInOrder(
                  *(CBaseExpression **)(*(_QWORD *)(*(_QWORD *)&v30 + 216LL) + 8LL * v35),
                  v34);
              (*(void (__fastcall **)(double, unsigned __int64))(**(_QWORD **)&v30 + 168LL))(
                COERCE_DOUBLE(*(_QWORD *)&v30),
                v34);
              if ( (*(_BYTE *)(*(_QWORD *)&v30 + 208LL) & 2) != 0 )
              {
                v37 = *(_QWORD *)(*(_QWORD *)&v30 + 16LL);
                v76 = v30;
                v38 = *(_QWORD *)(v37 + 224) + 32LL * (unsigned int)(1 - *(_DWORD *)(*(_QWORD *)(v37 + 224) + 164LL));
                v39 = *(_DWORD *)(v38 + 192);
                v40 = v39 + 1;
                if ( v39 + 1 < v39 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, -2147024362, 0xB5u);
                }
                else if ( v40 > *(_DWORD *)(v38 + 188) )
                {
                  v43 = DynArrayImpl<1>::AddMultipleAndSet(v38 + 168, 8LL, v38, &v76);
                  if ( v43 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0xC0u);
                }
                else
                {
                  *(double *)(*(_QWORD *)(v38 + 168) + 8LL * v39) = v76;
                  *(_DWORD *)(v38 + 192) = v40;
                }
              }
              v29 = CBaseExpression::s_recursionLevel;
            }
            *(_QWORD *)(*(_QWORD *)&v30 + 152LL) = v34;
            if ( v33 )
              CBaseExpression::s_recursionLevel = --v29;
            --*(_DWORD *)(*(_QWORD *)&v30 + 148LL);
            v31 = *((_DWORD *)this + 41);
          }
          ++v28;
          a3 = v31;
        }
        while ( v28 < *((_DWORD *)this + 8 * v31 + 48) );
        v8 = v75;
        v5 = 0;
      }
      *((_DWORD *)this + 8 * (unsigned int)a3 + 48) = 0;
      v41 = 1 - *((_DWORD *)this + 41);
      *((_BYTE *)this + 416) &= ~8u;
      v42 = CCommonRegistryData::m_fLogExpressionPerfStats == 0;
      *((_DWORD *)this + 41) = v41;
      if ( !v42 )
      {
        Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v73);
        ++*((_DWORD *)this + 24);
        *((_QWORD *)this + 16) += Elapsed;
      }
    }
    v11 = *((unsigned int *)this + 41);
    *((_DWORD *)this + 105) = 0;
    v12 = 0;
    *((_DWORD *)this + 106) = 0;
    if ( *((_DWORD *)this + 8 * v11 + 48) )
    {
      do
      {
        v13 = *((_QWORD *)this + 4 * (unsigned int)v11 + 21);
        v14 = *(CBaseExpression **)(v13 + 8LL * v12);
        if ( v14 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v14 + 48LL))(
                 *(_QWORD *)(v13 + 8LL * v12),
                 85LL) )
          {
            v25 = *((_BYTE *)v14 + 524);
            if ( (v25 & 1) != 0 || (v25 & 6) != 0 )
            {
              v26 = *((_QWORD *)v14 + 6);
              if ( v26 )
              {
                ++*(_DWORD *)(v26 + 76);
                *(_BYTE *)(*((_QWORD *)v14 + 2) + 504LL) = 1;
              }
            }
          }
          v15 = *((_QWORD *)this + 3);
          v72[0] = 0;
          CBaseExpression::CalculateValue(v14, (CExpressionManager *)((char *)this + 32), v15, v72);
          *((_BYTE *)this + 416) |= 2 * v72[0];
          v16 = *((_DWORD *)this + 41);
        }
        else
        {
          ++v7;
          v16 = v11;
        }
        ++v12;
        LODWORD(v11) = v16;
      }
      while ( v12 < *((_DWORD *)this + 8 * v16 + 48) );
      if ( v7 > 0x100 )
      {
        v45 = 32LL * v16;
        v46 = 0;
        for ( i = (char *)this + 32 * (1 - v16); v46 < *(_DWORD *)((char *)this + v45 + 192); ++v46 )
        {
          v73 = *(double *)(*(_QWORD *)((char *)this + v45 + 168) + 8LL * v46);
          if ( v73 != 0.0 )
          {
            v48 = *((_DWORD *)i + 48);
            v49 = v48 + 1;
            if ( v48 + 1 < v48 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, -2147024362, 0xB5u);
            }
            else if ( v49 > *((_DWORD *)i + 47) )
            {
              v50 = DynArrayImpl<1>::AddMultipleAndSet(i + 168, 8LL, a3, &v73);
              if ( v50 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0xC0u);
            }
            else
            {
              *(double *)(*((_QWORD *)i + 21) + 8LL * v48) = v73;
              *((_DWORD *)i + 48) = v49;
            }
          }
        }
        *(_DWORD *)((char *)this + v45 + 192) = 0;
        *((_DWORD *)this + 41) = 1 - *((_DWORD *)this + 41);
      }
    }
    *((_BYTE *)this + 416) &= ~1u;
    for ( j = 0; j < *((_DWORD *)this + 64); ++j )
    {
      v27 = (unsigned int *)(*((_QWORD *)this + 29) + 16LL * j);
      CBaseExpression::NotifyAnimationStateChanged(*((_QWORD *)v27 + 1), *v27);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v27 + 1) + 16LL))(*((_QWORD *)v27 + 1));
    }
    *((_DWORD *)this + 64) = 0;
    DynArrayImpl<1>::ShrinkToSize((char *)this + 232, 16LL);
    v18 = (char *)this + 400;
    v19 = (double *)*((_QWORD *)this + 50);
    v20 = *v19;
    v73 = *v19;
    while ( *(double **)&v20 != v19 )
    {
      CExpressionManager::SuspendAnimations(this, *(_DWORD *)(*(_QWORD *)&v20 + 28LL), 1, 0);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::wstring>>,std::_Iterator_base0>::operator++(&v73);
      v20 = v73;
    }
    v21 = *(_QWORD *)v18;
    v22 = *(__int64 **)(*(_QWORD *)v18 + 8LL);
    v23 = v22;
    if ( !*((_BYTE *)v22 + 25) )
    {
      do
      {
        std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Erase(
          (char *)this + 400,
          v23[2]);
        v23 = (__int64 *)*v23;
        std::_Deallocate<16,0>(v22, 32LL);
        v22 = v23;
      }
      while ( !*((_BYTE *)v23 + 25) );
      v21 = *(_QWORD *)v18;
    }
    *(_QWORD *)(v21 + 8) = v21;
    **(_QWORD **)v18 = *(_QWORD *)v18;
    *(_QWORD *)(*(_QWORD *)v18 + 16LL) = *(_QWORD *)v18;
    *((_QWORD *)this + 51) = 0LL;
    if ( v8 )
    {
      v53 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v75);
      v54 = (double)(int)g_qpcFrequency.LowPart / 1000000.0;
      v55 = (double)v53;
      if ( dword_180305E40 > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 1uLL) )
        {
          v84 = 8LL;
          v83 = &v73;
          v85 = (char *)this + 420;
          v87 = (char *)this + 424;
          v57 = *((unsigned int *)this + 41) + 6LL;
          v86 = 4LL;
          v88 = 4LL;
          v73 = v55 / v54;
          LODWORD(v74) = *((_DWORD *)this + 8 * v57);
          v89 = &v74;
          LODWORD(v75) = *((_DWORD *)this + 80);
          v91 = &v75;
          v94 = v56;
          v93 = &v72[1];
          v90 = 4LL;
          v92 = 4LL;
          DurationAverage = CExpressionPerformanceCounter::GetDurationAverage((char *)this + 88, 0LL);
          v96 = 8LL;
          v95 = &v76;
          v76 = DurationAverage / v54;
          v60 = CExpressionPerformanceCounter::GetDurationAverage(v59, 1LL);
          v98 = 8LL;
          v97 = &v77;
          v77 = v60 / v54;
          v62 = CExpressionPerformanceCounter::GetDurationAverage(v61, 2LL);
          v100 = 8LL;
          v99 = &v78;
          v78 = v62 / v54;
          v64 = CExpressionPerformanceCounter::GetDurationAverage(v63, 3LL);
          v102 = 8LL;
          v101 = &v79;
          v79 = v64 / v54;
          v66 = CExpressionPerformanceCounter::GetDurationAverage(v65, 4LL);
          v104 = 8LL;
          v103 = &v80;
          v80 = v66 / v54;
          v68 = CExpressionPerformanceCounter::GetDurationAverage(v67, 5LL);
          v106 = 8LL;
          v105 = &v81;
          v107 = &v109;
          v108 = 8LL;
          v81 = v68 / v54;
          TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B3C27, 0LL, 0LL, 0xFu, &pData);
        }
      }
    }
  }
  if ( *((_DWORD *)this + 72) )
  {
    do
    {
      v69 = *((_QWORD *)this + 33);
      v70 = *(_DWORD **)(v69 + 8LL * v5);
      if ( v70[42] )
        CInteractionTracker::CheckForIdle(*(CInteractionTracker **)(v69 + 8LL * v5));
      CInteractionTracker::CheckForOutOfBounds((CInteractionTracker *)v70);
      ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v70 + 48));
      if ( ActiveChainingHelper )
        CChainingHelper::UpdateConfigurationIfDirty(ActiveChainingHelper);
      CInteractionTracker::SendPendingCallbacks((CInteractionTracker *)v70);
      ++v5;
    }
    while ( v5 < *((_DWORD *)this + 72) );
  }
  return 0LL;
}
