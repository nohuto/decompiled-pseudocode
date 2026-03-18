/*
 * XREFs of ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800757E0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180074920 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180075BC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800A5654 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x1800A8848 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800AAD90 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180172124 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x1801BFC68 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x1801BFD88 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801BFDB8 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@IPEAX@2@@Z @ 0x1801C00D0 (-_Erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU-$_Tre.c)
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x1801D97AC (-NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ.c)
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1801DEBE8 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 *     ?GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z @ 0x180203F70 (-GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z.c)
 *     ?Reset@CExpressionPerformanceCounter@@QEAAXXZ @ 0x180203FA4 (-Reset@CExpressionPerformanceCounter@@QEAAXXZ.c)
 */

__int64 __fastcall CExpressionManager::UpdateExpressions(CExpressionManager *this, __int64 a2, __int64 a3)
{
  char v4; // cl
  unsigned int v5; // r13d
  char v7; // cl
  unsigned int v8; // r15d
  __int64 v9; // rsi
  char v10; // cl
  char v11; // cl
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rax
  CBaseExpression *v15; // rdi
  unsigned __int64 v16; // r8
  unsigned int v17; // ecx
  unsigned int j; // edi
  void *v19; // rcx
  char *v20; // r15
  __int64 *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 *v25; // rdi
  __int64 *v26; // r12
  unsigned int v27; // eax
  unsigned int m; // ebx
  char v30; // al
  __int64 v31; // rax
  unsigned int *v32; // rbx
  unsigned int v33; // ebx
  unsigned int v34; // edx
  CBaseExpression *v35; // rcx
  int v36; // eax
  bool v37; // zf
  __int64 Elapsed; // rax
  __int64 v39; // rdi
  unsigned int v40; // r15d
  char *i; // rbx
  unsigned int v42; // eax
  unsigned int v43; // edx
  signed int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 k; // rax
  int v50; // eax
  double v51; // xmm2_8
  double v52; // xmm0_8
  __int64 v53; // rdx
  __int64 v54; // rax
  double DurationAverage; // xmm0_8
  __int64 v56; // rcx
  double v57; // xmm0_8
  __int64 v58; // rcx
  double v59; // xmm0_8
  __int64 v60; // rcx
  double v61; // xmm0_8
  __int64 v62; // rcx
  double v63; // xmm0_8
  __int64 v64; // rcx
  double v65; // xmm0_8
  __int64 v66; // rdx
  CInteractionTrackerBindingManager *v67; // rcx
  bool v68[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v69; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v70; // [rsp+48h] [rbp-C0h] BYREF
  double v71; // [rsp+50h] [rbp-B8h] BYREF
  double v72; // [rsp+58h] [rbp-B0h] BYREF
  double v73; // [rsp+60h] [rbp-A8h] BYREF
  double v74; // [rsp+68h] [rbp-A0h] BYREF
  double v75; // [rsp+70h] [rbp-98h] BYREF
  double v76; // [rsp+78h] [rbp-90h] BYREF
  double v77; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  double *v79; // [rsp+A8h] [rbp-60h]
  __int64 v80; // [rsp+B0h] [rbp-58h]
  char *v81; // [rsp+B8h] [rbp-50h]
  __int64 v82; // [rsp+C0h] [rbp-48h]
  char *v83; // [rsp+C8h] [rbp-40h]
  __int64 v84; // [rsp+D0h] [rbp-38h]
  __int64 *v85; // [rsp+D8h] [rbp-30h]
  __int64 v86; // [rsp+E0h] [rbp-28h]
  __int64 *v87; // [rsp+E8h] [rbp-20h]
  __int64 v88; // [rsp+F0h] [rbp-18h]
  bool *v89; // [rsp+F8h] [rbp-10h]
  __int64 v90; // [rsp+100h] [rbp-8h]
  double *v91; // [rsp+108h] [rbp+0h]
  __int64 v92; // [rsp+110h] [rbp+8h]
  double *v93; // [rsp+118h] [rbp+10h]
  __int64 v94; // [rsp+120h] [rbp+18h]
  double *v95; // [rsp+128h] [rbp+20h]
  __int64 v96; // [rsp+130h] [rbp+28h]
  double *v97; // [rsp+138h] [rbp+30h]
  __int64 v98; // [rsp+140h] [rbp+38h]
  double *v99; // [rsp+148h] [rbp+40h]
  __int64 v100; // [rsp+150h] [rbp+48h]
  double *v101; // [rsp+158h] [rbp+50h]
  __int64 v102; // [rsp+160h] [rbp+58h]
  __int64 *v103; // [rsp+168h] [rbp+60h]
  __int64 v104; // [rsp+170h] [rbp+68h]
  __int64 v105; // [rsp+1D8h] [rbp+D0h] BYREF

  v105 = a3;
  v4 = *((_BYTE *)this + 416);
  v5 = 0;
  v70 = 0LL;
  v7 = v4 & 0xF3 | (2 * (v4 & 4));
  v8 = 0;
  *((_BYTE *)this + 416) = v7;
  v9 = 0LL;
  v68[1] = (v7 & 8) != 0;
  if ( *((_DWORD *)this + 64) || (v7 & 2) != 0 || *((_DWORD *)this + 40) )
  {
    v10 = v7 & 0xFD;
    *((_BYTE *)this + 416) = v10;
    if ( *((_DWORD *)this + 40) || CCommonRegistryData::m_fLogExpressionPerfStats )
    {
      CExpressionPerformanceCounter::Reset((CExpressionManager *)((char *)this + 88));
      QpcStopwatch::Start((QpcStopwatch *)&v70);
      v10 = *((_BYTE *)this + 416);
      a3 = v105;
      v9 = v70;
    }
    v11 = v10 | 1;
    *((_QWORD *)this + 2) = a2;
    *((_QWORD *)this + 3) = a3;
    *((_BYTE *)this + 416) = v11;
    if ( (v11 & 8) != 0 )
    {
      v69 = 0LL;
      if ( CCommonRegistryData::m_fLogExpressionPerfStats )
        QpcStopwatch::Start((QpcStopwatch *)&v69);
      a3 = *((unsigned int *)this + 41);
      v33 = 0;
      if ( *((_DWORD *)this + 8 * a3 + 48) )
      {
        do
        {
          v34 = a3;
          v35 = *(CBaseExpression **)(*((_QWORD *)this + 4 * (unsigned int)a3 + 21) + 8LL * v33);
          if ( v35 )
          {
            CBaseExpression::InsertInOrder(v35, *((_QWORD *)this + 3));
            v34 = *((_DWORD *)this + 41);
          }
          ++v33;
          a3 = v34;
        }
        while ( v33 < *((_DWORD *)this + 8 * v34 + 48) );
      }
      *((_DWORD *)this + 8 * (unsigned int)a3 + 48) = 0;
      v36 = 1 - *((_DWORD *)this + 41);
      *((_BYTE *)this + 416) &= ~8u;
      v37 = CCommonRegistryData::m_fLogExpressionPerfStats == 0;
      *((_DWORD *)this + 41) = v36;
      if ( !v37 )
      {
        Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v69);
        ++*((_DWORD *)this + 24);
        *((_QWORD *)this + 16) += Elapsed;
      }
    }
    v12 = *((unsigned int *)this + 41);
    v13 = 0;
    *(_QWORD *)((char *)this + 420) = 0LL;
    if ( *((_DWORD *)this + 8 * v12 + 48) )
    {
      do
      {
        v14 = *((_QWORD *)this + 4 * (unsigned int)v12 + 21);
        v15 = *(CBaseExpression **)(v14 + 8LL * v13);
        if ( v15 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v15 + 48LL))(
                 *(_QWORD *)(v14 + 8LL * v13),
                 90LL) )
          {
            v30 = *((_BYTE *)v15 + 540);
            if ( (v30 & 1) != 0 || (v30 & 6) != 0 )
            {
              v31 = *((_QWORD *)v15 + 6);
              if ( v31 )
              {
                ++*(_DWORD *)(v31 + 76);
                *(_BYTE *)(*((_QWORD *)v15 + 2) + 520LL) = 1;
              }
            }
          }
          v16 = *((_QWORD *)this + 3);
          v68[0] = 0;
          CBaseExpression::CalculateValue(v15, (CExpressionManager *)((char *)this + 32), v16, v68);
          *((_BYTE *)this + 416) |= 2 * v68[0];
          v17 = *((_DWORD *)this + 41);
        }
        else
        {
          ++v8;
          v17 = v12;
        }
        ++v13;
        LODWORD(v12) = v17;
      }
      while ( v13 < *((_DWORD *)this + 8 * v17 + 48) );
      if ( v8 > 0x100 )
      {
        v39 = 32LL * v17;
        v40 = 0;
        for ( i = (char *)this + 32 * (1 - v17); v40 < *(_DWORD *)((char *)this + v39 + 192); ++v40 )
        {
          v69 = *(_QWORD *)(*(_QWORD *)((char *)this + v39 + 168) + 8LL * v40);
          if ( v69 )
          {
            v42 = *((_DWORD *)i + 48);
            v43 = v42 + 1;
            if ( v42 + 1 < v42 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, 0x80070216, 0xB8u, 0LL);
            }
            else if ( v43 > *((_DWORD *)i + 47) )
            {
              v44 = DynArrayImpl<1>::AddMultipleAndSet(i + 168, 8LL, a3, &v69);
              if ( v44 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0xC3u, 0LL);
            }
            else
            {
              *(_QWORD *)(*((_QWORD *)i + 21) + 8LL * v42) = v69;
              *((_DWORD *)i + 48) = v43;
            }
          }
        }
        *(_DWORD *)((char *)this + v39 + 192) = 0;
        *((_DWORD *)this + 41) = 1 - *((_DWORD *)this + 41);
      }
    }
    *((_BYTE *)this + 416) &= ~1u;
    for ( j = 0; j < *((_DWORD *)this + 64); ++j )
    {
      v32 = (unsigned int *)(*((_QWORD *)this + 29) + 16LL * j);
      CBaseExpression::NotifyAnimationStateChanged(*((_QWORD *)v32 + 1), *v32);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v32 + 1) + 16LL))(*((_QWORD *)v32 + 1));
    }
    v19 = (void *)*((_QWORD *)this + 29);
    *((_DWORD *)this + 64) = 0;
    if ( v19 != *((void **)this + 30) )
    {
      operator delete(v19);
      *((_QWORD *)this + 29) = *((_QWORD *)this + 30);
      *((_DWORD *)this + 63) = *((_DWORD *)this + 62);
    }
    v20 = (char *)this + 400;
    v21 = (__int64 *)*((_QWORD *)this + 50);
    v22 = *v21;
    while ( (__int64 *)v22 != v21 )
    {
      CExpressionManager::SuspendAnimations(this, *(_DWORD *)(v22 + 28), 1, 0);
      v48 = *(_QWORD *)(v22 + 16);
      if ( *(_BYTE *)(v48 + 25) )
      {
        for ( k = *(_QWORD *)(v22 + 8); !*(_BYTE *)(k + 25); k = *(_QWORD *)(k + 8) )
        {
          if ( v22 != *(_QWORD *)(k + 16) )
            break;
          v22 = k;
        }
        v22 = k;
      }
      else
      {
        v22 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min(
                v48,
                v46,
                v47);
      }
    }
    v23 = *(_QWORD *)v20;
    v24 = *(_QWORD *)v20;
    v25 = *(__int64 **)(*(_QWORD *)v20 + 8LL);
    v26 = v25;
    if ( !*((_BYTE *)v25 + 25) )
    {
      do
      {
        std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Erase(
          (char *)this + 400,
          v26[2]);
        v26 = (__int64 *)*v26;
        std::_Deallocate<16,0>(v25, 32LL);
        v25 = v26;
      }
      while ( !*((_BYTE *)v26 + 25) );
      v24 = *(_QWORD *)v20;
    }
    *(_QWORD *)(v24 + 8) = v23;
    **(_QWORD **)v20 = v23;
    *(_QWORD *)(*(_QWORD *)v20 + 16LL) = v23;
    *((_QWORD *)this + 51) = 0LL;
    if ( v9 )
    {
      v50 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v70);
      v51 = (double)(int)g_qpcFrequency.LowPart / 1000000.0;
      v52 = (double)v50;
      if ( dword_180337240 > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 1uLL) )
        {
          v80 = 8LL;
          v79 = &v71;
          v82 = 4LL;
          v81 = (char *)this + 420;
          v83 = (char *)this + 424;
          v54 = *((unsigned int *)this + 41) + 6LL;
          v84 = 4LL;
          v71 = v52 / v51;
          LODWORD(v69) = *((_DWORD *)this + 8 * v54);
          v85 = &v69;
          LODWORD(v70) = *((_DWORD *)this + 80);
          v87 = &v70;
          v90 = v53;
          v89 = &v68[1];
          v86 = 4LL;
          v88 = 4LL;
          DurationAverage = CExpressionPerformanceCounter::GetDurationAverage((char *)this + 88, 0LL);
          v92 = 8LL;
          v91 = &v72;
          v72 = DurationAverage / v51;
          v57 = CExpressionPerformanceCounter::GetDurationAverage(v56, 1LL);
          v94 = 8LL;
          v93 = &v73;
          v73 = v57 / v51;
          v59 = CExpressionPerformanceCounter::GetDurationAverage(v58, 2LL);
          v96 = 8LL;
          v95 = &v74;
          v74 = v59 / v51;
          v61 = CExpressionPerformanceCounter::GetDurationAverage(v60, 3LL);
          v98 = 8LL;
          v97 = &v75;
          v75 = v61 / v51;
          v63 = CExpressionPerformanceCounter::GetDurationAverage(v62, 4LL);
          v100 = 8LL;
          v99 = &v76;
          v76 = v63 / v51;
          v65 = CExpressionPerformanceCounter::GetDurationAverage(v64, 5LL);
          v102 = 8LL;
          v101 = &v77;
          v103 = &v105;
          v104 = 8LL;
          v77 = v65 / v51;
          TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802D9AF3, 0LL, 0LL, 0xFu, &pData);
        }
      }
    }
  }
  v27 = *((_DWORD *)this + 72);
  for ( m = 0; m < v27; ++m )
  {
    v66 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL * m);
    v67 = *(CInteractionTrackerBindingManager **)(v66 + 632);
    if ( v67 && *(_DWORD *)(v66 + 168) == 2 && (*(_BYTE *)(v66 + 533) & 1) != 0 )
      CInteractionTrackerBindingManager::TryUpdateBoundTrackerInertiaCallbackValues(
        v67,
        (struct CInteractionTracker *)v66);
    v27 = *((_DWORD *)this + 72);
  }
  if ( v27 )
  {
    do
      CInteractionTracker::NotifyExpressionProcessingComplete(*(CInteractionTracker **)(*((_QWORD *)this + 33)
                                                                                      + 8LL * v5++));
    while ( v5 < *((_DWORD *)this + 72) );
  }
  return 0LL;
}
