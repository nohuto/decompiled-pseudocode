/*
 * XREFs of ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180074920
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800716E0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800265E8 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??_GCDisplaySet@@AEAAPEAXI@Z @ 0x18002B9B0 (--_GCDisplaySet@@AEAAPEAXI@Z.c)
 *     ?DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18002BDB4 (-DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800484B8 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004F7E0 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x180075570 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800757E0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?PreRender@CRenderTargetManager@@QEAAJXZ @ 0x180076DE8 (-PreRender@CRenderTargetManager@@QEAAJXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180077CD8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4Report.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FDD0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800A7828 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z @ 0x1800D64A8 (-RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z.c)
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x1800D6ED0 (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _Init_thread_footer @ 0x1800E93B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E9418 (_Init_thread_header.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x1800EA5D0 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateCompa.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqq @ 0x180159070 (McTemplateU0qqq.c)
 *     ?ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ @ 0x18015A8EC (-ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 *     McTemplateU0d @ 0x18015D590 (McTemplateU0d.c)
 *     McTemplateU0x @ 0x18015D5EC (McTemplateU0x.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18017A4C4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVIDeviceResour.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18017A510 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x18017AB54 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18017B0F4 (-clear@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U-$less@PEAVIDevic.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18017B188 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x1801947D0 (-SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18021E2BC (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 */

__int64 __fastcall CComposition::PreRender(RTL_SRWLOCK *this, bool *a2)
{
  RTL_SRWLOCK *v2; // r12
  RTL_SRWLOCK *v3; // rsi
  bool *v4; // r13
  _BYTE *Ptr; // rdx
  PVOID v6; // rcx
  unsigned int v7; // edi
  _DWORD *v8; // rdx
  LARGE_INTEGER v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rax
  PVOID v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  int v15; // r14d
  PVOID v16; // rax
  __int64 v17; // r15
  __int64 v18; // rcx
  bool v19; // zf
  signed int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rdi
  int v24; // eax
  signed int v25; // eax
  __int64 v26; // rcx
  int v27; // ebx
  _QWORD *v28; // rbx
  unsigned __int64 v29; // rcx
  HANDLE CurrentThread; // rax
  BOOL v31; // eax
  __int64 v32; // rcx
  signed int v33; // eax
  unsigned __int64 v34; // rcx
  HANDLE v35; // rax
  BOOL v36; // eax
  _QWORD *v37; // rdi
  unsigned int v38; // ebx
  __int64 v39; // rcx
  signed int v40; // eax
  _DWORD *v41; // rbx
  int v42; // edi
  struct CRenderTarget *v43; // r14
  char v44; // r15
  __int64 v45; // rdi
  struct CRenderTarget *v46; // r12
  signed int v47; // eax
  __int64 v48; // rcx
  char v49; // cl
  unsigned int v50; // r13d
  CDisplaySet *v51; // rdi
  CD3DModuleLoaderInternal *v52; // rcx
  CDXGIEnumeration *v53; // rbx
  char v54; // r12
  int v55; // r15d
  int v56; // r13d
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  struct CDXGIEnumeration *v60; // rbx
  __int64 v61; // rcx
  volatile signed __int32 *v62; // rax
  unsigned int v63; // ebx
  __m128i v64; // xmm2
  __int64 v65; // rdx
  __int64 v66; // r8
  int v67; // r10d
  unsigned int v68; // r11d
  int v69; // ebx
  __int64 v70; // rsi
  bool v71; // r13
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 v74; // r15
  unsigned int v75; // r10d
  char v76; // cl
  CSceneResourceManager *v77; // r15
  __int64 v78; // rcx
  _QWORD *v79; // r13
  PVOID v80; // rcx
  bool *v81; // rax
  int v82; // ebx
  unsigned __int64 v83; // rcx
  HANDLE v84; // rax
  BOOL v85; // eax
  _QWORD *v86; // rcx
  __int64 v87; // rax
  signed int v88; // eax
  __int64 v89; // rcx
  char *v90; // rbx
  char *v91; // rbx
  __int64 v92; // r15
  char *v93; // rcx
  __int64 v94; // rax
  PSLIST_ENTRY v95; // rdi
  PSLIST_ENTRY j; // rbx
  void (__fastcall ***v98)(_QWORD, __int64, __int64, __int64); // rcx
  _DWORD *v99; // rdi
  int v100; // ebx
  unsigned int v101; // edx
  unsigned int v102; // ebx
  __int64 v103; // rdi
  PSLIST_ENTRY v104; // rbx
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rax
  signed int v108; // eax
  unsigned int v109; // eax
  struct ISpectreRenderer **v110; // rdi
  struct ISpectreRenderer *v111; // rbx
  unsigned __int64 v112; // rcx
  _QWORD *v113; // rdi
  __int64 v114; // r15
  unsigned __int64 v115; // rbx
  struct ISpectreRenderer *v116; // rsi
  __int64 v117; // r15
  _QWORD *v118; // rcx
  __int64 v119; // rax
  __int64 v121; // rcx
  __int64 v122; // r9
  unsigned int i; // r8d
  __int64 v124; // rax
  __int64 v125; // rdi
  _QWORD *v126; // r14
  __int64 v127; // r13
  unsigned __int64 v128; // rax
  __int64 v129; // r15
  unsigned __int64 v130; // rbx
  bool v131; // [rsp+30h] [rbp-D0h]
  unsigned int v132; // [rsp+34h] [rbp-CCh]
  int v133; // [rsp+38h] [rbp-C8h]
  int v134; // [rsp+3Ch] [rbp-C4h]
  int D3DObjects; // [rsp+48h] [rbp-B8h] BYREF
  struct ISpectreRenderer *SpectreRenderer; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v138; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 CycleTime; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v140; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v141; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v142[2]; // [rsp+78h] [rbp-88h] BYREF
  CDisplaySet *v143; // [rsp+80h] [rbp-80h]
  RTL_SRWLOCK *v144; // [rsp+88h] [rbp-78h]
  __int64 v145; // [rsp+B0h] [rbp-50h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+B8h] [rbp-48h] BYREF
  int v147; // [rsp+C0h] [rbp-40h]
  __int64 v148; // [rsp+C4h] [rbp-3Ch]
  __int128 v149; // [rsp+CCh] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  GUID *v151; // [rsp+100h] [rbp+0h]
  __int64 v152; // [rsp+108h] [rbp+8h]

  v2 = this + 71;
  v144 = this;
  v3 = this;
  *a2 = 0;
  v4 = a2;
  AcquireSRWLockExclusive(this + 71);
  LODWORD(v2[1].Ptr) = GetCurrentThreadId();
  memset_0(&v145, 0, 0x30uLL);
  if ( dword_18033D320 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18033D320);
    if ( dword_18033D320 == -1 )
    {
      qword_180339CD0 = g_qpcFrequency.QuadPart * LODWORD(v3[160].Ptr);
      Init_thread_footer(&dword_18033D320);
    }
  }
  Ptr = v3[161].Ptr;
  v6 = v3[45].Ptr;
  if ( !Ptr )
  {
    v3[161].Ptr = v6;
    Ptr = v6;
  }
  v7 = 0;
  if ( (_BYTE *)v6 - Ptr >= (unsigned __int64)qword_180339CD0 )
  {
    v101 = qword_18033D510;
    v102 = 0;
    if ( (_DWORD)qword_18033D510 )
    {
      do
      {
        v103 = *(_QWORD *)(qword_18033D4C0 + 24LL * v102);
        if ( !*(_BYTE *)(v103 + 1161) )
        {
          CD3DResourceManager::DestroyDelayedResources((CD3DResourceManager *)(v103 + 896));
          *(_BYTE *)(v103 + 1161) = 1;
          v101 = qword_18033D510;
        }
        ++v102;
      }
      while ( v102 < v101 );
      v6 = v3[45].Ptr;
      v7 = 0;
    }
    v3[161].Ptr = v6;
  }
  v8 = v3[47].Ptr;
  if ( v8 )
  {
    v3[45].Ptr = *(PVOID *)(*(_QWORD *)v8 + 312LL);
    v145 = *(_QWORD *)(*(_QWORD *)v8 + 304LL);
    v9 = *(LARGE_INTEGER *)(*(_QWORD *)v8 + 1184LL);
    PerformanceCount = v9;
    v147 = v8[4] + *(_DWORD *)(*(_QWORD *)v8 + 108LL);
    v148 = *(_QWORD *)(*(_QWORD *)v8 + 1336LL);
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount);
    v9 = PerformanceCount;
    v145 = 0LL;
    v147 = 0;
    v148 = 0x10000003CLL;
  }
  v10 = v3[64].Ptr;
  v11 = v148;
  v3[62].Ptr = (PVOID)v9;
  v10[519] = v11;
  v12 = v3[68].Ptr;
  v149 = *(_OWORD *)&v3[163].Ptr;
  v13 = (*(__int64 (__fastcall **)(PVOID, __int64 *, unsigned int *))(*(_QWORD *)v12 + 16LL))(v12, &v145, v142);
  v15 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x101Fu, 0LL);
  if ( LOBYTE(v3[165].Ptr) )
  {
    RtlPublishWnfStateData(WNF_DWM_COMPOSITIONCAPABILITIES, 0LL, 0LL, 0LL, 0LL);
    LOBYTE(v3[165].Ptr) = 0;
  }
  v16 = v3[47].Ptr;
  v17 = *(_QWORD *)v142;
  v18 = *(_QWORD *)v142;
  if ( v16 )
  {
    *(_QWORD *)(*(_QWORD *)v16 + 24LL) = *(_QWORD *)v142;
    v17 = *(_QWORD *)v142;
  }
  v19 = DWORD2(v149) == 0;
  v3[48].Ptr = (PVOID)v18;
  if ( !v19 )
    dword_180339880 |= 0x40u;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_1802BE2C0, 2u, v15, 0x106Fu, 0LL);
    goto LABEL_138;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Start, v3);
  v20 = (*(__int64 (__fastcall **)(PVOID, RTL_SRWLOCK *, __int64))(*(_QWORD *)v3[68].Ptr + 48LL))(v3[68].Ptr, v3, v17);
  v15 = v20;
  if ( v20 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x1167u, 0LL);
  v22 = 0;
  if ( LODWORD(v3[44].Ptr) )
  {
    do
    {
      v23 = *((_QWORD *)v3[41].Ptr + v22);
      if ( v23 )
      {
        v24 = *(_DWORD *)(v23 + 80);
        if ( v24 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000) != 0 )
          {
            McTemplateU0qqq(
              (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
              (unsigned int)&CHANNELBATCHES_PROCESSED,
              *(_DWORD *)(v23 + 16),
              *(_DWORD *)(v23 + 20),
              *(_DWORD *)(v23 + 80));
            v24 = *(_DWORD *)(v23 + 80);
          }
          dword_180339908 += v24;
          ++*(_DWORD *)(*(_QWORD *)(v23 + 40) + 36LL);
          *(_DWORD *)(v23 + 80) = 0;
        }
      }
      ++v22;
    }
    while ( v22 < LODWORD(v3[44].Ptr) );
    v7 = 0;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Stop, v3);
  v25 = (*(__int64 (__fastcall **)(PVOID, __int64))(*(_QWORD *)v3[162].Ptr + 24LL))(v3[162].Ptr, 3LL);
  v27 = v25;
  if ( v25 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x1174u, 0LL);
  if ( !v15 )
    goto LABEL_30;
  if ( v15 < 0 )
    goto LABEL_253;
  if ( v27 < 0 )
LABEL_30:
    v15 = v27;
  if ( v15 < 0 )
  {
LABEL_253:
    MilInstrumentationCheckHR_MaybeFailFast(v26, &dword_1802BE2C0, 2u, v15, 0x1072u, 0LL);
    goto LABEL_138;
  }
  v28 = v3[30].Ptr;
  if ( *((_DWORD *)v28 + 72) )
  {
    do
    {
      v106 = v28[33];
      if ( *(_BYTE *)(*(_QWORD *)(v106 + 8LL * v7) + 312LL) )
        InteractionSourceManager::UpdateActiveManipulations((InteractionSourceManager *)(*(_QWORD *)(v106 + 8LL * v7)
                                                                                       + 192LL));
      ++v7;
    }
    while ( v7 < *((_DWORD *)v28 + 72) );
  }
  v29 = 0LL;
  CycleTime = 0LL;
  if ( ::CycleTime )
  {
    CurrentThread = GetCurrentThread();
    v31 = QueryThreadCycleTime(CurrentThread, &CycleTime);
    v29 = CycleTime;
    if ( v31 )
      qword_1803398C0 += CycleTime - ::CycleTime;
  }
  ::CycleTime = v29;
  wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsageToService();
  v15 = 0;
  if ( v17 )
  {
    if ( BYTE1(v3[40].Ptr) )
    {
      CD3DDeviceManager::FlushAllDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
      BYTE1(v3[40].Ptr) = 0;
    }
    v33 = (*(__int64 (__fastcall **)(PVOID, __int64))(*(_QWORD *)v3[9].Ptr + 40LL))(v3[9].Ptr, v17);
    v15 = v33;
    if ( v33 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v33, 0x114Bu, 0LL);
  }
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v32, &dword_1802BE2C0, 2u, v15, 0x1082u, 0LL);
  }
  else
  {
    v34 = 0LL;
    v140 = 0LL;
    if ( ::CycleTime )
    {
      v35 = GetCurrentThread();
      v36 = QueryThreadCycleTime(v35, &v140);
      v34 = v140;
      if ( v36 )
        qword_1803398C8 += v140 - ::CycleTime;
    }
    ::CycleTime = v34;
    v37 = v3[8].Ptr;
    v15 = 0;
    v38 = 0;
    if ( *((_DWORD *)v37 + 20) )
    {
      while ( 1 )
      {
        v39 = *(_QWORD *)(v37[7] + 8LL * v38);
        v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 152LL))(v39);
        v15 = v40;
        if ( v40 < 0 )
          break;
        if ( ++v38 >= *((_DWORD *)v37 + 20) )
          goto LABEL_48;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_1802BE078, 2u, v40, 0x296u, 0LL);
    }
LABEL_48:
    if ( v15 >= 0 )
    {
      *v4 = 0;
      v41 = v3[8].Ptr;
      v42 = v41[12];
      if ( v42 )
      {
        do
        {
          v43 = *(struct CRenderTarget **)(*((_QWORD *)v41 + 3) + 8LL * (unsigned int)--v42);
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*((_QWORD *)v43 + 8) + 32LL))((_QWORD *)v43 + 8) )
            CRenderTargetManager::RemoveRenderTarget((CRenderTargetManager *)v41, v43);
        }
        while ( v42 );
        v41 = v3[8].Ptr;
      }
      v44 = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Start);
      v45 = 0LL;
      if ( v41[12] )
      {
        do
        {
          v46 = *(struct CRenderTarget **)(*((_QWORD *)v41 + 3) + 8 * v45);
          v47 = (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)v46 + 8) + 48LL))((_QWORD *)v46 + 8);
          v133 = v47;
          v15 = v47;
          if ( v47 < 0 )
          {
            v51 = 0LL;
            MilInstrumentationCheckHR_MaybeFailFast(v48, &dword_1802BE2C0, 2u, v47, 0x525u, 0LL);
            goto LABEL_199;
          }
          v15 = 0;
          v131 = v47 == 142213121;
          v49 = 0;
          if ( v47 == 142213121 )
            v49 = v44;
          v44 = v49;
          if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)v46 + 48LL))(v46, 80LL) )
          {
            v50 = v41[24];
            v133 = 0;
            if ( v50 < v41[12] )
            {
              while ( 1 )
              {
                v107 = *((_QWORD *)v41 + 3);
                SpectreRenderer = (struct ISpectreRenderer *)(8LL * v50);
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)((char *)SpectreRenderer + v107)
                                                                        + 48LL))(
                       *(_QWORD *)((char *)SpectreRenderer + v107),
                       84LL) )
                {
                  v108 = CIndirectSwapchainRenderTarget::SetTargetOcclusion(
                           *(CIndirectSwapchainRenderTarget **)((char *)SpectreRenderer + *((_QWORD *)v41 + 3)),
                           v46,
                           v131);
                  v133 = v108;
                  v15 = v108;
                  if ( v108 < 0 )
                    break;
                }
                if ( ++v50 >= v41[12] )
                  goto LABEL_62;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v108, 0x318u, 0LL);
            }
LABEL_62:
            if ( v15 < 0 )
            {
              v51 = 0LL;
              MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_1802BE2C0, 2u, v15, 0x520u, 0LL);
LABEL_199:
              v4 = a2;
              goto LABEL_66;
            }
          }
          v45 = (unsigned int)(v45 + 1);
        }
        while ( (unsigned int)v45 < v41[12] );
        v4 = a2;
        if ( v44 )
          goto LABEL_159;
      }
      else
      {
LABEL_159:
        if ( !*((_BYTE *)v41 + 113) )
        {
          v15 = 142213121;
          v51 = 0LL;
          v133 = 142213121;
LABEL_66:
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Stop);
          if ( v15 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_180280CA0, 1u, v15, 0xC4Fu, 0LL);
          CComposition::ProcessRenderingStatus((CComposition *)v3, v15);
          if ( v15 == 142213121 )
          {
            *v4 = 1;
            v15 = 0;
            v133 = 0;
          }
          else
          {
            if ( v15 == -2003304307
              && dword_1803371D0 > 5u
              && TlgKeywordOn((TraceLoggingHProvider)&dword_1803371D0, 0x400000000000uLL) )
            {
              v152 = 16LL;
              v151 = &gDwmCoreTelemetryActivityId;
              TlgWrite((TraceLoggingHProvider)&dword_1803371D0, &unk_1802D7314, 0LL, 0LL, 3u, &pData);
            }
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v52, &dword_1802BE2C0, 2u, v15, 0x108Bu, 0LL);
LABEL_137:
              v2 = v3 + 71;
              goto LABEL_138;
            }
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0d(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Start,
              2000LL);
          v53 = qword_180339CF8;
          v54 = 1;
          v134 = 4;
          v55 = 1366;
          v143 = 0LL;
          v56 = 768;
          v132 = 0;
          if ( !qword_180339CF8 )
            goto LABEL_179;
          if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_180339CF8 + 2) + 104LL))(*((_QWORD *)qword_180339CF8 + 2))
            || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v53 + 14)
            || qword_180339CF8 != v53 )
          {
            ReleaseInterface<CD3DSurface>((__int64 *)&qword_180339CF8);
          }
          if ( !qword_180339CF8 )
          {
LABEL_179:
            D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(v52, &qword_180339CF8);
            TranslateDXGIorD3DErrorInContext(D3DObjects, 4, &D3DObjects);
            v59 = (unsigned int)D3DObjects;
            v132 = D3DObjects;
            if ( D3DObjects < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v105, &dword_1802BE018, 1u, D3DObjects, 0xFEu, 0LL);
            if ( qword_180339D08 )
              (*(void (__fastcall **)(__int64, CDXGIEnumeration *))(*(_QWORD *)qword_180339D08 + 32LL))(
                qword_180339D08,
                qword_180339CF8);
          }
          v60 = qword_180339CF8;
          if ( qword_180339CF8 )
            (**(void (__fastcall ***)(CDXGIEnumeration *))qword_180339CF8)(qword_180339CF8);
          v61 = v132;
          if ( (v132 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v132, 0LL, 0, v132, 0xD8u, 0LL);
          }
          else
          {
            v62 = (volatile signed __int32 *)g_DisplayManager;
            if ( g_DisplayManager )
            {
LABEL_84:
              _InterlockedIncrement(v62);
              v51 = g_DisplayManager;
              v143 = g_DisplayManager;
LABEL_85:
              if ( v60 )
              {
                (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v60 + 8LL))(v60);
                v61 = v132;
              }
              v63 = 0;
              if ( (int)v61 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, v61, 0xC9u, 0LL);
              if ( v51 )
              {
                v55 = 0;
                v134 = 0;
                v56 = 0;
                v59 = 0LL;
                if ( *((_DWORD *)v51 + 18) )
                {
                  v57 = *((_QWORD *)v51 + 6);
                  do
                  {
                    v64 = *(__m128i *)(*(_QWORD *)v57 + 264LL);
                    v68 = GetPixelFormatSize(*(_DWORD *)(*(_QWORD *)v57 + 280LL)) >> 3;
                    v69 = _mm_cvtsi128_si32(v64);
                    if ( v69 * v67 * v68 > v55 * v56 * (int)v59 )
                    {
                      v55 = v69;
                      v56 = v67;
                      v59 = v68;
                    }
                    v57 = v65 + 8;
                    v58 = v66 - 1;
                  }
                  while ( v58 );
                  v134 = v59;
                  v63 = 0;
                }
              }
              if ( (_DWORD)qword_18033D510 )
              {
                v70 = v134 * ((v55 + 255) & 0xFFFFFF00) * ((v56 + 255) & 0xFFFFFF00)
                    + ((v134 * ((v55 + 255) & 0xFFFFFF00) * ((v56 + 255) & 0xFFFFFF00)) >> 2);
                do
                {
                  v58 = qword_18033D4C0;
                  v71 = 0;
                  v72 = *(_QWORD *)(qword_18033D4C0 + 24LL * v63 + 8);
                  v73 = *(_QWORD *)(qword_18033D4C0 + 24LL * v63);
                  v74 = 24LL * v63;
                  v138 = v72;
                  if ( !CD3DDeviceManager::s_bHwProtectionTempDisabled && !CD3DDeviceManager::s_bHwProtectionTeardown )
                  {
                    v59 = HIDWORD(qword_18033D4A4);
                    v75 = 0;
                    if ( HIDWORD(qword_18033D4A4) )
                    {
                      while ( 1 )
                      {
                        v57 = 12LL * v75;
                        if ( *(_QWORD *)(qword_18033D490 + v57) == __PAIR64__(HIDWORD(v138), v72) )
                          break;
                        if ( ++v75 >= HIDWORD(qword_18033D4A4) )
                          goto LABEL_101;
                      }
                      v71 = *(_DWORD *)(qword_18033D490 + v57 + 8) != 0;
                    }
                  }
LABEL_101:
                  if ( *(_BYTE *)(qword_18033D4C0 + v74 + 16) && !v71 )
                    CD3DDeviceLevel1::ClearProtectedResources((CD3DDeviceLevel1 *)v73);
                  LODWORD(v138) = 1;
                  LOBYTE(v57) = !*(_QWORD *)(v73 + 216)
                             || ((*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)(v73 + 224)
                                                                                             + 40LL))(
                                   *(_QWORD *)(v73 + 224),
                                   2000LL,
                                   v70,
                                   &v138),
                                 (_DWORD)v138 == 1);
                  v76 = 0;
                  if ( (_BYTE)v57 )
                    v76 = v54;
                  ++v63;
                  v54 = v76;
                  *(_BYTE *)(qword_18033D4C0 + v74 + 16) = v71;
                }
                while ( v63 < (unsigned int)qword_18033D510 );
                v3 = v144;
                v15 = v133;
                v51 = v143;
              }
              if ( v51 && _InterlockedExchangeAdd((volatile signed __int32 *)v51, 0xFFFFFFFF) == 1 )
                CDisplaySet::`scalar deleting destructor'(v51);
              if ( v54 )
                v54 = (*(__int64 (__fastcall **)(PVOID, __int64, __int64, __int64))(*(_QWORD *)v3[70].Ptr + 32LL))(
                        v3[70].Ptr,
                        2000LL,
                        v58,
                        v59);
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                McTemplateU0d(
                  &Microsoft_Windows_Dwm_Core_Provider_Context,
                  &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Stop,
                  v54 != 0);
              v77 = (CSceneResourceManager *)v3[16].Ptr;
              if ( (__int64)(*((_QWORD *)v77 + 5) - *((_QWORD *)v77 + 4)) >> 3
                && HIDWORD(v3[164].Ptr)
                && !LODWORD(v3[164].Ptr) )
              {
                CSceneResourceManager::EnsureSceneCompositor((CSceneResourceManager *)v3[16].Ptr);
              }
              else
              {
                v78 = *((_QWORD *)v77 + 3);
                v79 = (_QWORD *)((char *)v77 + 24);
                if ( v78 )
                {
                  CD3DResource::RemoveResourceNotifier(
                    (CD3DResource *)(v78 + 24),
                    (const struct IDeviceResourceNotify *)v3[16].Ptr);
                  v110 = (struct ISpectreRenderer **)*((_QWORD *)v77 + 7);
                  v111 = *v110;
                  SpectreRenderer = *v110;
                  while ( v111 != (struct ISpectreRenderer *)v110 )
                  {
                    (*(void (__fastcall **)(_QWORD, CSceneResourceManager *))(**((_QWORD **)v111 + 4) + 32LL))(
                      *((_QWORD *)v111 + 4),
                      v77);
                    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v111 + 5) + 16LL))(*((_QWORD *)v111 + 5));
                    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>>,std::_Iterator_base0>::operator++(&SpectreRenderer);
                    v111 = SpectreRenderer;
                  }
                  std::_Tree<std::_Tmap_traits<IDeviceResource *,ISpectreRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>,0>>::clear((char *)v77 + 56);
                  SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(v77);
                  if ( SpectreRenderer )
                  {
                    v112 = *((_QWORD *)v77 + 5);
                    v113 = (_QWORD *)*((_QWORD *)v77 + 4);
                    v114 = 0LL;
                    v115 = (v112 - (unsigned __int64)v113 + 7) >> 3;
                    if ( (unsigned __int64)v113 > v112 )
                      v115 = 0LL;
                    if ( v115 )
                    {
                      v116 = SpectreRenderer;
                      do
                      {
                        (*(void (__fastcall **)(_QWORD, struct ISpectreRenderer *))(*(_QWORD *)*v113 + 8LL))(
                          *v113,
                          v116);
                        ++v114;
                        ++v113;
                      }
                      while ( v114 != v115 );
                      v3 = v144;
                    }
                  }
                  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(v79);
                }
              }
              v80 = v3[14].Ptr;
              if ( v80 )
                (*(void (__fastcall **)(PVOID, __int64, __int64, __int64))(*(_QWORD *)v80 + 16LL))(v80, v57, v58, v59);
              v81 = a2;
              if ( *a2 )
              {
                dword_180339880 |= 0x200u;
                v99 = v3[30].Ptr;
                v100 = v99[64] - 1;
                if ( v100 >= 0 )
                {
                  v117 = 16LL * v100;
                  do
                  {
                    if ( !CNotificationResource::ShouldNotify(*(CNotificationResource **)(v117
                                                                                        + *((_QWORD *)v99 + 29)
                                                                                        + 8)) )
                    {
                      v119 = v118[3];
                      if ( !((v119 & 2) != 0 ? *(_QWORD *)(v119 & 0xFFFFFFFFFFFFFFFCuLL) : v118[3] & 1LL) )
                      {
                        (*(void (__fastcall **)(_QWORD *))(*v118 + 16LL))(v118);
                        v121 = (unsigned int)v99[64];
                        if ( v100 < (unsigned int)v121 )
                        {
                          v122 = *((_QWORD *)v99 + 29);
                          for ( i = v100; i < (int)v121 - 1; LODWORD(v121) = v99[64] )
                          {
                            v124 = 2LL * i;
                            v121 = 2LL * ++i;
                            *(_OWORD *)(v122 + 8 * v124) = *(_OWORD *)(v122 + 8 * v121);
                          }
                          v99[64] = v121 - 1;
                        }
                        else
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(v121, 0LL, 0, 0x80070057, 0x19Fu, 0LL);
                        }
                      }
                    }
                    v117 -= 16LL;
                    --v100;
                  }
                  while ( v100 >= 0 );
                  v81 = a2;
                }
              }
              else
              {
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                  McTemplateU0(
                    &Microsoft_Windows_Dwm_Core_Provider_Context,
                    &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Start);
                v82 = (int)v3[82].Ptr;
                while ( v82 )
                {
                  v98 = (void (__fastcall ***)(_QWORD, __int64, __int64, __int64))*((_QWORD *)v3[79].Ptr
                                                                                  + (unsigned int)--v82);
                  (**v98)(v98, v57, v58, v59);
                }
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                {
                  McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, "q");
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_PROCESS_EXPRESSIONS_Start);
                }
                CExpressionManager::UpdateExpressions(
                  (CExpressionManager *)v3[30].Ptr,
                  (unsigned __int64)v3[62].Ptr,
                  (unsigned __int64)v3[48].Ptr);
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                  McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_PROCESS_EXPRESSIONS_Stop);
                v83 = 0LL;
                v141 = 0LL;
                if ( ::CycleTime )
                {
                  v84 = GetCurrentThread();
                  v85 = QueryThreadCycleTime(v84, &v141);
                  v83 = v141;
                  if ( v85 )
                    qword_1803398D0 += v141 - ::CycleTime;
                }
                ::CycleTime = v83;
                v86 = v3[16].Ptr;
                v87 = v86[3];
                if ( v87 )
                {
                  v125 = *(_QWORD *)(v87 + 120);
                  if ( v125 )
                  {
                    v126 = (_QWORD *)v86[4];
                    v127 = *(_QWORD *)(v86[1] + 496LL);
                    v128 = v86[5];
                    v129 = 0LL;
                    v130 = (v128 - (unsigned __int64)v126 + 7) >> 3;
                    if ( (unsigned __int64)v126 > v128 )
                      v130 = 0LL;
                    if ( v130 )
                    {
                      do
                      {
                        (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v126 + 16LL))(*v126, v125, v127);
                        ++v129;
                        ++v126;
                      }
                      while ( v129 != v130 );
                    }
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v125 + 104LL))(v125);
                  }
                }
                v88 = CRenderTargetManager::PreRender((CRenderTargetManager *)v3[8].Ptr);
                v15 = v88;
                if ( v88 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v89, &dword_1802BE2C0, 2u, v88, 0x10B6u, 0LL);
                v81 = a2;
              }
              if ( !v54 && !*v81 )
                (*(void (__fastcall **)(PVOID, __int64, __int64))(*(_QWORD *)v3[69].Ptr + 96LL))(
                  v3[69].Ptr,
                  2000LL,
                  4LL);
              goto LABEL_137;
            }
            v109 = CDisplayManager::DeriveCurrentDisplaySet((CDisplayManager *)v132, v60, 0LL);
            v132 = v109;
            v61 = v109;
            if ( (v109 & 0x80000000) == 0 )
            {
              v62 = (volatile signed __int32 *)g_DisplayManager;
              goto LABEL_84;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v109, 0LL, 0, v109, 0xDFu, 0LL);
          }
          v61 = v132;
          goto LABEL_85;
        }
      }
      v51 = 0LL;
      v15 = 0;
      v133 = 0;
      goto LABEL_66;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_1802BE2C0, 2u, v15, 0x1087u, 0LL);
  }
LABEL_138:
  v90 = (char *)v3[11].Ptr;
  if ( v90 )
  {
    v91 = v90 + 104;
    while ( 1 )
    {
      v92 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(v91 + 24));
      v93 = *(char **)v91;
      if ( *(char **)(*(_QWORD *)v91 + 8LL) != v91 || (v94 = *(_QWORD *)v93, *(char **)(*(_QWORD *)v93 + 8LL) != v93) )
        __fastfail(3u);
      *(_QWORD *)v91 = v94;
      *(_QWORD *)(v94 + 8) = v91;
      if ( v93 != v91 )
      {
        v92 = *((_QWORD *)v93 + 2);
        operator delete(v93);
        --*((_DWORD *)v91 + 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v91 + 24));
      if ( !v92 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 16LL))(v92);
    }
  }
  v95 = InterlockedFlushSList((PSLIST_HEADER)&v3[156]);
  for ( j = v95; j; j = j->Next )
  {
    if ( BYTE5(v3[159].Ptr) )
      LODWORD(j[2].Next->Next) = -2147467260;
    else
      LODWORD(j[2].Next->Next) = CVisualTree::PreCompute(j[1].Next, 0LL);
  }
  LODWORD(v2[1].Ptr) = 0;
  ReleaseSRWLockExclusive(v2);
  if ( BYTE3(v3[159].Ptr) )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v3[10].Ptr + 64LL))(v3[10].Ptr);
    BYTE3(v3[159].Ptr) = 0;
  }
  while ( v95 )
  {
    v104 = v95;
    SetEvent(*((HANDLE *)&v95[1].Next + 1));
    v95 = v95->Next;
    operator delete(v104);
  }
  if ( dword_18033D560 )
    SetEvent(hEvent);
  return (unsigned int)v15;
}
