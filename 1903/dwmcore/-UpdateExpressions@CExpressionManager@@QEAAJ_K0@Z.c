/*
 * XREFs of ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180099040
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180097A30 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180029F40 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18008092C (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800993F0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x1800BDB78 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180173874 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x1801C1408 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x1801C1528 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801C1558 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@IPEAX@2@@Z @ 0x1801C1870 (-_Erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU-$_Tre.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1801D9A44 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x1801D9B34 (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x1801DC3E4 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1801E02F8 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 *     ?GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z @ 0x180205660 (-GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z.c)
 *     ?Reset@CExpressionPerformanceCounter@@QEAAXXZ @ 0x180205694 (-Reset@CExpressionPerformanceCounter@@QEAAXXZ.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x18021F8C4 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x180220C3C (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 */

__int64 __fastcall CExpressionManager::UpdateExpressions(CExpressionManager *this, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v5; // r13d
  unsigned int v7; // r15d
  __int64 v8; // rsi
  char v9; // cl
  char v10; // cl
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rax
  CBaseExpression *v14; // rdi
  unsigned __int64 v15; // r8
  unsigned int v16; // ecx
  unsigned int j; // edi
  void *v18; // rcx
  char *v19; // r15
  __int64 *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 *v24; // rdi
  __int64 *v25; // r12
  unsigned int v26; // ebx
  char v28; // al
  __int64 v29; // rax
  __int64 v30; // rbx
  unsigned int v31; // ebx
  unsigned int v32; // edx
  CBaseExpression *v33; // rcx
  int v34; // eax
  bool v35; // zf
  __int64 Elapsed; // rax
  __int64 v37; // rdi
  unsigned int v38; // r15d
  char *i; // rbx
  unsigned int v40; // eax
  unsigned int v41; // edx
  signed int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 k; // rax
  int v48; // eax
  double v49; // xmm2_8
  double v50; // xmm0_8
  __int64 v51; // rdx
  __int64 v52; // rax
  double DurationAverage; // xmm0_8
  __int64 v54; // rcx
  double v55; // xmm0_8
  __int64 v56; // rcx
  double v57; // xmm0_8
  __int64 v58; // rcx
  double v59; // xmm0_8
  __int64 v60; // rcx
  double v61; // xmm0_8
  __int64 v62; // rcx
  double v63; // xmm0_8
  __int64 v64; // rdx
  CInteractionTrackerBindingManager *v65; // rcx
  unsigned int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rbx
  bool v69; // di
  CChainingHelper *ActiveChainingHelper; // rax
  bool v71[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v72; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v73; // [rsp+48h] [rbp-C0h] BYREF
  double v74; // [rsp+50h] [rbp-B8h] BYREF
  double v75; // [rsp+58h] [rbp-B0h] BYREF
  double v76; // [rsp+60h] [rbp-A8h] BYREF
  double v77; // [rsp+68h] [rbp-A0h] BYREF
  double v78; // [rsp+70h] [rbp-98h] BYREF
  double v79; // [rsp+78h] [rbp-90h] BYREF
  double v80; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  double *v82; // [rsp+A8h] [rbp-60h]
  __int64 v83; // [rsp+B0h] [rbp-58h]
  char *v84; // [rsp+B8h] [rbp-50h]
  __int64 v85; // [rsp+C0h] [rbp-48h]
  char *v86; // [rsp+C8h] [rbp-40h]
  __int64 v87; // [rsp+D0h] [rbp-38h]
  __int64 *v88; // [rsp+D8h] [rbp-30h]
  __int64 v89; // [rsp+E0h] [rbp-28h]
  __int64 *v90; // [rsp+E8h] [rbp-20h]
  __int64 v91; // [rsp+F0h] [rbp-18h]
  bool *v92; // [rsp+F8h] [rbp-10h]
  __int64 v93; // [rsp+100h] [rbp-8h]
  double *v94; // [rsp+108h] [rbp+0h]
  __int64 v95; // [rsp+110h] [rbp+8h]
  double *v96; // [rsp+118h] [rbp+10h]
  __int64 v97; // [rsp+120h] [rbp+18h]
  double *v98; // [rsp+128h] [rbp+20h]
  __int64 v99; // [rsp+130h] [rbp+28h]
  double *v100; // [rsp+138h] [rbp+30h]
  __int64 v101; // [rsp+140h] [rbp+38h]
  double *v102; // [rsp+148h] [rbp+40h]
  __int64 v103; // [rsp+150h] [rbp+48h]
  double *v104; // [rsp+158h] [rbp+50h]
  __int64 v105; // [rsp+160h] [rbp+58h]
  __int64 *v106; // [rsp+168h] [rbp+60h]
  __int64 v107; // [rsp+170h] [rbp+68h]
  __int64 v108; // [rsp+1D8h] [rbp+D0h] BYREF

  v108 = a3;
  v3 = *((_BYTE *)this + 416);
  v5 = 0;
  v73 = 0LL;
  *((_BYTE *)this + 416) = v3 & 0xF3 | (2 * (v3 & 4));
  v7 = 0;
  v8 = 0LL;
  v71[1] = ((2 * (v3 & 4)) & 8) != 0;
  if ( *((_DWORD *)this + 64) || v3 & 2 | (2 * (v3 & 4)) & 2 || *((_DWORD *)this + 40) )
  {
    v9 = v3 & 0xF1 | (2 * (v3 & 4)) & 0xFD;
    *((_BYTE *)this + 416) = v9;
    if ( *((_DWORD *)this + 40) || CCommonRegistryData::m_fLogExpressionPerfStats )
    {
      CExpressionPerformanceCounter::Reset((CExpressionManager *)((char *)this + 88));
      QpcStopwatch::Start((QpcStopwatch *)&v73);
      v9 = *((_BYTE *)this + 416);
      a3 = v108;
      v8 = v73;
    }
    v10 = v9 | 1;
    *((_QWORD *)this + 2) = a2;
    *((_QWORD *)this + 3) = a3;
    *((_BYTE *)this + 416) = v10;
    if ( (v10 & 8) != 0 )
    {
      v72 = 0LL;
      if ( CCommonRegistryData::m_fLogExpressionPerfStats )
        QpcStopwatch::Start((QpcStopwatch *)&v72);
      a3 = *((unsigned int *)this + 41);
      v31 = 0;
      if ( *((_DWORD *)this + 8 * a3 + 48) )
      {
        do
        {
          v32 = a3;
          v33 = *(CBaseExpression **)(*((_QWORD *)this + 4 * (unsigned int)a3 + 21) + 8LL * v31);
          if ( v33 )
          {
            CBaseExpression::InsertInOrder(v33, *((_QWORD *)this + 3));
            v32 = *((_DWORD *)this + 41);
          }
          ++v31;
          a3 = v32;
        }
        while ( v31 < *((_DWORD *)this + 8 * v32 + 48) );
      }
      *((_DWORD *)this + 8 * (unsigned int)a3 + 48) = 0;
      v34 = 1 - *((_DWORD *)this + 41);
      *((_BYTE *)this + 416) &= ~8u;
      v35 = CCommonRegistryData::m_fLogExpressionPerfStats == 0;
      *((_DWORD *)this + 41) = v34;
      if ( !v35 )
      {
        Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v72);
        ++*((_DWORD *)this + 24);
        *((_QWORD *)this + 16) += Elapsed;
      }
    }
    v11 = *((unsigned int *)this + 41);
    v12 = 0;
    *(_QWORD *)((char *)this + 420) = 0LL;
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
                 90LL) )
          {
            v28 = *((_BYTE *)v14 + 540);
            if ( (v28 & 1) != 0 || (v28 & 6) != 0 )
            {
              v29 = *((_QWORD *)v14 + 6);
              if ( v29 )
              {
                ++*(_DWORD *)(v29 + 76);
                *(_BYTE *)(*((_QWORD *)v14 + 2) + 520LL) = 1;
              }
            }
          }
          v15 = *((_QWORD *)this + 3);
          v71[0] = 0;
          CBaseExpression::CalculateValue(v14, (CExpressionManager *)((char *)this + 32), v15, v71);
          *((_BYTE *)this + 416) |= 2 * v71[0];
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
        v37 = 32LL * v16;
        v38 = 0;
        for ( i = (char *)this + 32 * (1 - v16); v38 < *(_DWORD *)((char *)this + v37 + 192); ++v38 )
        {
          v72 = *(_QWORD *)(*(_QWORD *)((char *)this + v37 + 168) + 8LL * v38);
          if ( v72 )
          {
            v40 = *((_DWORD *)i + 48);
            v41 = v40 + 1;
            if ( v40 + 1 < v40 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, 0x80070216, 0xB8u, 0LL);
            }
            else if ( v41 > *((_DWORD *)i + 47) )
            {
              v42 = DynArrayImpl<1>::AddMultipleAndSet((__int64)(i + 168), 8u, a3, &v72);
              if ( v42 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0xC3u, 0LL);
            }
            else
            {
              *(_QWORD *)(*((_QWORD *)i + 21) + 8LL * v40) = v72;
              *((_DWORD *)i + 48) = v41;
            }
          }
        }
        *(_DWORD *)((char *)this + v37 + 192) = 0;
        *((_DWORD *)this + 41) = 1 - *((_DWORD *)this + 41);
      }
    }
    *((_BYTE *)this + 416) &= ~1u;
    for ( j = 0; j < *((_DWORD *)this + 64); ++j )
    {
      v30 = *((_QWORD *)this + 29) + 16LL * j;
      CBaseExpression::NotifyAnimationStateChanged(*(_QWORD *)(v30 + 8), *(_DWORD *)v30);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v30 + 8) + 16LL))(*(_QWORD *)(v30 + 8));
    }
    v18 = (void *)*((_QWORD *)this + 29);
    *((_DWORD *)this + 64) = 0;
    if ( v18 != *((void **)this + 30) )
    {
      operator delete(v18);
      *((_QWORD *)this + 29) = *((_QWORD *)this + 30);
      *((_DWORD *)this + 63) = *((_DWORD *)this + 62);
    }
    v19 = (char *)this + 400;
    v20 = (__int64 *)*((_QWORD *)this + 50);
    v21 = *v20;
    while ( (__int64 *)v21 != v20 )
    {
      CExpressionManager::SuspendAnimations(this, *(_DWORD *)(v21 + 28), 1, 0);
      v46 = *(_QWORD *)(v21 + 16);
      if ( *(_BYTE *)(v46 + 25) )
      {
        for ( k = *(_QWORD *)(v21 + 8); !*(_BYTE *)(k + 25); k = *(_QWORD *)(k + 8) )
        {
          if ( v21 != *(_QWORD *)(k + 16) )
            break;
          v21 = k;
        }
        v21 = k;
      }
      else
      {
        v21 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min(
                v46,
                v44,
                v45);
      }
    }
    v22 = *(_QWORD *)v19;
    v23 = *(_QWORD *)v19;
    v24 = *(__int64 **)(*(_QWORD *)v19 + 8LL);
    v25 = v24;
    if ( !*((_BYTE *)v24 + 25) )
    {
      do
      {
        std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Erase(
          (char *)this + 400,
          v25[2]);
        v25 = (__int64 *)*v25;
        std::_Deallocate<16,0>(v24, 32LL);
        v24 = v25;
      }
      while ( !*((_BYTE *)v25 + 25) );
      v23 = *(_QWORD *)v19;
    }
    *(_QWORD *)(v23 + 8) = v22;
    **(_QWORD **)v19 = v22;
    *(_QWORD *)(*(_QWORD *)v19 + 16LL) = v22;
    *((_QWORD *)this + 51) = 0LL;
    if ( v8 )
    {
      v48 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v73);
      v49 = (double)(int)g_qpcFrequency.LowPart / 1000000.0;
      v50 = (double)v48;
      if ( dword_18033A240 > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
        {
          v83 = 8LL;
          v82 = &v74;
          v85 = 4LL;
          v84 = (char *)this + 420;
          v86 = (char *)this + 424;
          v52 = *((unsigned int *)this + 41) + 6LL;
          v87 = 4LL;
          v74 = v50 / v49;
          LODWORD(v72) = *((_DWORD *)this + 8 * v52);
          v88 = &v72;
          LODWORD(v73) = *((_DWORD *)this + 80);
          v90 = &v73;
          v93 = v51;
          v92 = &v71[1];
          v89 = 4LL;
          v91 = 4LL;
          DurationAverage = CExpressionPerformanceCounter::GetDurationAverage((char *)this + 88, 0LL);
          v95 = 8LL;
          v94 = &v75;
          v75 = DurationAverage / v49;
          v55 = CExpressionPerformanceCounter::GetDurationAverage(v54, 1LL);
          v97 = 8LL;
          v96 = &v76;
          v76 = v55 / v49;
          v57 = CExpressionPerformanceCounter::GetDurationAverage(v56, 2LL);
          v99 = 8LL;
          v98 = &v77;
          v77 = v57 / v49;
          v59 = CExpressionPerformanceCounter::GetDurationAverage(v58, 3LL);
          v101 = 8LL;
          v100 = &v78;
          v78 = v59 / v49;
          v61 = CExpressionPerformanceCounter::GetDurationAverage(v60, 4LL);
          v103 = 8LL;
          v102 = &v79;
          v79 = v61 / v49;
          v63 = CExpressionPerformanceCounter::GetDurationAverage(v62, 5LL);
          v105 = 8LL;
          v104 = &v80;
          v106 = &v108;
          v107 = 8LL;
          v80 = v63 / v49;
          TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DB993, 0LL, 0LL, 0xFu, &pData);
        }
      }
    }
  }
  v26 = 0;
  if ( *((_DWORD *)this + 72) )
  {
    do
    {
      v64 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL * v26);
      v65 = *(CInteractionTrackerBindingManager **)(v64 + 632);
      if ( v65 && *(_DWORD *)(v64 + 168) == 2 && (*(_BYTE *)(v64 + 533) & 1) != 0 )
        CInteractionTrackerBindingManager::TryUpdateBoundTrackerInertiaCallbackValues(
          v65,
          (struct CInteractionTracker *)v64);
      v66 = *((_DWORD *)this + 72);
      ++v26;
    }
    while ( v26 < v66 );
    if ( v66 )
    {
      while ( 1 )
      {
        v67 = *((_QWORD *)this + 33);
        v68 = *(_QWORD *)(v67 + 8LL * v5);
        v69 = (*(_BYTE *)(v68 + 533) & 1) != 0 || !*(_QWORD *)(v68 + 632);
        if ( !*(_DWORD *)(v68 + 168) )
          goto LABEL_73;
        if ( v69 )
          break;
LABEL_75:
        ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v68 + 192));
        if ( ActiveChainingHelper )
          CChainingHelper::UpdateConfigurationIfDirty(ActiveChainingHelper);
        CInteractionTracker::SendPendingCallbacks((CInteractionTracker *)v68);
        if ( ++v5 >= *((_DWORD *)this + 72) )
          return 0LL;
      }
      CInteractionTracker::CheckForIdle(*(CInteractionTracker **)(v67 + 8LL * v5));
LABEL_73:
      if ( v69 )
        CInteractionTracker::CheckForOutOfBounds((CInteractionTracker *)v68);
      goto LABEL_75;
    }
  }
  return 0LL;
}
