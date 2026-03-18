/*
 * XREFs of ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180097A30
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18003AB30 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180042214 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180055FF0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18005A24C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18007DF14 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008ABF0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4Report.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x180098680 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180099040 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?PreRender@CRenderTargetManager@@QEAAJXZ @ 0x18009A618 (-PreRender@CRenderTargetManager@@QEAAJXZ.c)
 *     ??_GCDisplaySet@@AEAAPEAXI@Z @ 0x1800A376C (--_GCDisplaySet@@AEAAPEAXI@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800A7788 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x1800B1074 (-DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z @ 0x1800D60E8 (-RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z.c)
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x1800D6AE0 (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _Init_thread_footer @ 0x1800E8500 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E8568 (_Init_thread_header.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x1800E97B0 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateCompa.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqq @ 0x18015A750 (McTemplateU0qqq.c)
 *     ?ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ @ 0x18015BFCC (-ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ.c)
 *     McTemplateU0 @ 0x18015EAF8 (McTemplateU0.c)
 *     McTemplateU0d @ 0x18015EC70 (McTemplateU0d.c)
 *     McTemplateU0x @ 0x18015ECCC (McTemplateU0x.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18017BBC4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVIDeviceResour.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18017BC10 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x18017C254 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18017C7F4 (-clear@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U-$less@PEAVIDevic.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18017C888 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x180195F10 (-SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18021F9CC (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
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
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // ebx
  _QWORD *v30; // rbx
  unsigned __int64 v31; // rcx
  HANDLE CurrentThread; // rax
  BOOL v33; // eax
  __int64 v34; // rcx
  signed int v35; // eax
  unsigned __int64 v36; // rcx
  HANDLE v37; // rax
  BOOL v38; // eax
  _QWORD *v39; // rdi
  unsigned int v40; // ebx
  __int64 v41; // rcx
  signed int v42; // eax
  _DWORD *v43; // rbx
  int v44; // edi
  struct CRenderTarget *v45; // r14
  char v46; // r15
  __int64 v47; // rdi
  struct CRenderTarget *v48; // r12
  signed int v49; // eax
  __int64 v50; // rcx
  char v51; // cl
  unsigned int v52; // r13d
  CDisplaySet *v53; // rdi
  CD3DModuleLoaderInternal *v54; // rcx
  CDXGIEnumeration *v55; // rbx
  char v56; // r12
  int v57; // r15d
  int v58; // r13d
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  struct CDXGIEnumeration *v62; // rbx
  __int64 v63; // rcx
  volatile signed __int32 *v64; // rax
  unsigned int v65; // ebx
  __m128i v66; // xmm2
  __int64 v67; // rdx
  __int64 v68; // r8
  int v69; // r10d
  unsigned int v70; // r11d
  int v71; // ebx
  __int64 v72; // rsi
  bool v73; // r13
  __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // r15
  unsigned int v77; // r10d
  char v78; // cl
  CSceneResourceManager *v79; // r15
  __int64 v80; // rcx
  _QWORD *v81; // r13
  PVOID v82; // rcx
  bool *v83; // rax
  int v84; // ebx
  unsigned __int64 v85; // rcx
  HANDLE v86; // rax
  BOOL v87; // eax
  _QWORD *v88; // rcx
  __int64 v89; // rax
  signed int v90; // eax
  __int64 v91; // rcx
  char *v92; // rbx
  char *v93; // rbx
  __int64 v94; // r15
  char *v95; // rcx
  __int64 v96; // rax
  PSLIST_ENTRY v97; // rdi
  PSLIST_ENTRY j; // rbx
  void (__fastcall ***v100)(_QWORD, __int64, __int64, __int64); // rcx
  _DWORD *v101; // rdi
  int v102; // ebx
  unsigned int v103; // edx
  unsigned int v104; // ebx
  __int64 v105; // rdi
  PSLIST_ENTRY v106; // rbx
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rax
  signed int v110; // eax
  unsigned int v111; // eax
  struct ISpectreRenderer **v112; // rdi
  struct ISpectreRenderer *v113; // rbx
  unsigned __int64 v114; // rcx
  _QWORD *v115; // rdi
  __int64 v116; // r15
  unsigned __int64 v117; // rbx
  struct ISpectreRenderer *v118; // rsi
  __int64 v119; // r15
  _QWORD *v120; // rcx
  __int64 v121; // rax
  __int64 v123; // rcx
  __int64 v124; // r9
  unsigned int i; // r8d
  __int64 v126; // rax
  __int64 v127; // rdi
  _QWORD *v128; // r14
  __int64 v129; // r13
  unsigned __int64 v130; // rax
  __int64 v131; // r15
  unsigned __int64 v132; // rbx
  bool v133; // [rsp+30h] [rbp-D0h]
  unsigned int v134; // [rsp+34h] [rbp-CCh]
  int v135; // [rsp+38h] [rbp-C8h]
  int v136; // [rsp+3Ch] [rbp-C4h]
  int D3DObjects; // [rsp+48h] [rbp-B8h] BYREF
  struct ISpectreRenderer *SpectreRenderer; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v140; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 CycleTime; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v142; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v143; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v144[2]; // [rsp+78h] [rbp-88h] BYREF
  CDisplaySet *v145; // [rsp+80h] [rbp-80h]
  RTL_SRWLOCK *v146; // [rsp+88h] [rbp-78h]
  __int64 v147; // [rsp+B0h] [rbp-50h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+B8h] [rbp-48h] BYREF
  int v149; // [rsp+C0h] [rbp-40h]
  __int64 v150; // [rsp+C4h] [rbp-3Ch]
  __int128 v151; // [rsp+CCh] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  GUID *v153; // [rsp+100h] [rbp+0h]
  __int64 v154; // [rsp+108h] [rbp+8h]

  v2 = this + 71;
  v146 = this;
  v3 = this;
  *a2 = 0;
  v4 = a2;
  AcquireSRWLockExclusive(this + 71);
  LODWORD(v2[1].Ptr) = GetCurrentThreadId();
  memset_0(&v147, 0, 0x30uLL);
  if ( dword_180340240 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180340240);
    if ( dword_180340240 == -1 )
    {
      qword_18033CBE0 = g_qpcFrequency.QuadPart * LODWORD(v3[160].Ptr);
      Init_thread_footer(&dword_180340240);
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
  if ( (_BYTE *)v6 - Ptr >= (unsigned __int64)qword_18033CBE0 )
  {
    v103 = qword_180340430;
    v104 = 0;
    if ( (_DWORD)qword_180340430 )
    {
      do
      {
        v105 = *(_QWORD *)(qword_1803403E0 + 24LL * v104);
        if ( !*(_BYTE *)(v105 + 1161) )
        {
          CD3DResourceManager::DestroyDelayedResources((CD3DResourceManager *)(v105 + 896));
          *(_BYTE *)(v105 + 1161) = 1;
          v103 = qword_180340430;
        }
        ++v104;
      }
      while ( v104 < v103 );
      v6 = v3[45].Ptr;
      v7 = 0;
    }
    v3[161].Ptr = v6;
  }
  v8 = v3[47].Ptr;
  if ( v8 )
  {
    v3[45].Ptr = *(PVOID *)(*(_QWORD *)v8 + 312LL);
    v147 = *(_QWORD *)(*(_QWORD *)v8 + 304LL);
    v9 = *(LARGE_INTEGER *)(*(_QWORD *)v8 + 1184LL);
    PerformanceCount = v9;
    v149 = v8[4] + *(_DWORD *)(*(_QWORD *)v8 + 108LL);
    v150 = *(_QWORD *)(*(_QWORD *)v8 + 1336LL);
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount);
    v9 = PerformanceCount;
    v147 = 0LL;
    v149 = 0;
    v150 = 0x10000003CLL;
  }
  v10 = v3[64].Ptr;
  v11 = v150;
  v3[62].Ptr = (PVOID)v9;
  v10[519] = v11;
  v12 = v3[68].Ptr;
  v151 = *(_OWORD *)&v3[163].Ptr;
  v13 = (*(__int64 (__fastcall **)(PVOID, __int64 *, unsigned int *))(*(_QWORD *)v12 + 16LL))(v12, &v147, v144);
  v15 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x101Fu, 0LL);
  if ( LOBYTE(v3[165].Ptr) )
  {
    RtlPublishWnfStateData(WNF_DWM_COMPOSITIONCAPABILITIES, 0LL, 0LL, 0LL, 0LL);
    LOBYTE(v3[165].Ptr) = 0;
  }
  v16 = v3[47].Ptr;
  v17 = *(_QWORD *)v144;
  v18 = *(_QWORD *)v144;
  if ( v16 )
  {
    *(_QWORD *)(*(_QWORD *)v16 + 24LL) = *(_QWORD *)v144;
    v17 = *(_QWORD *)v144;
  }
  v19 = DWORD2(v151) == 0;
  v3[48].Ptr = (PVOID)v18;
  if ( !v19 )
    dword_18033C790 |= 0x40u;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_1802C0180, 2u, v15, 0x106Fu, 0LL);
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
          dword_18033C818 += v24;
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
  v29 = v25;
  if ( v25 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v25, 0x1174u, 0LL);
  if ( !v15 )
    goto LABEL_30;
  if ( v15 < 0 )
    goto LABEL_253;
  if ( v29 < 0 )
LABEL_30:
    v15 = v29;
  if ( v15 < 0 )
  {
LABEL_253:
    MilInstrumentationCheckHR_MaybeFailFast(v27, &dword_1802C0180, 2u, v15, 0x1072u, 0LL);
    goto LABEL_138;
  }
  v30 = v3[30].Ptr;
  if ( *((_DWORD *)v30 + 72) )
  {
    do
    {
      v108 = v30[33];
      if ( *(_BYTE *)(*(_QWORD *)(v108 + 8LL * v7) + 312LL) )
        InteractionSourceManager::UpdateActiveManipulations((InteractionSourceManager *)(*(_QWORD *)(v108 + 8LL * v7)
                                                                                       + 192LL));
      ++v7;
    }
    while ( v7 < *((_DWORD *)v30 + 72) );
  }
  v31 = 0LL;
  CycleTime = 0LL;
  if ( ::CycleTime )
  {
    CurrentThread = GetCurrentThread();
    v33 = QueryThreadCycleTime(CurrentThread, &CycleTime);
    v31 = CycleTime;
    if ( v33 )
      qword_18033C7D0 += CycleTime - ::CycleTime;
  }
  ::CycleTime = v31;
  wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsageToService(v31, v26, v28);
  v15 = 0;
  if ( v17 )
  {
    if ( BYTE1(v3[40].Ptr) )
    {
      CD3DDeviceManager::FlushAllDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
      BYTE1(v3[40].Ptr) = 0;
    }
    v35 = (*(__int64 (__fastcall **)(PVOID, __int64))(*(_QWORD *)v3[9].Ptr + 40LL))(v3[9].Ptr, v17);
    v15 = v35;
    if ( v35 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v35, 0x114Bu, 0LL);
  }
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_1802C0180, 2u, v15, 0x1082u, 0LL);
  }
  else
  {
    v36 = 0LL;
    v142 = 0LL;
    if ( ::CycleTime )
    {
      v37 = GetCurrentThread();
      v38 = QueryThreadCycleTime(v37, &v142);
      v36 = v142;
      if ( v38 )
        qword_18033C7D8 += v142 - ::CycleTime;
    }
    ::CycleTime = v36;
    v39 = v3[8].Ptr;
    v15 = 0;
    v40 = 0;
    if ( *((_DWORD *)v39 + 20) )
    {
      while ( 1 )
      {
        v41 = *(_QWORD *)(v39[7] + 8LL * v40);
        v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 152LL))(v41);
        v15 = v42;
        if ( v42 < 0 )
          break;
        if ( ++v40 >= *((_DWORD *)v39 + 20) )
          goto LABEL_48;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v36, &dword_1802BFF28, 2u, v42, 0x296u, 0LL);
    }
LABEL_48:
    if ( v15 >= 0 )
    {
      *v4 = 0;
      v43 = v3[8].Ptr;
      v44 = v43[12];
      if ( v44 )
      {
        do
        {
          v45 = *(struct CRenderTarget **)(*((_QWORD *)v43 + 3) + 8LL * (unsigned int)--v44);
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*((_QWORD *)v45 + 8) + 32LL))((_QWORD *)v45 + 8) )
            CRenderTargetManager::RemoveRenderTarget((CRenderTargetManager *)v43, v45);
        }
        while ( v44 );
        v43 = v3[8].Ptr;
      }
      v46 = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Start);
      v47 = 0LL;
      if ( v43[12] )
      {
        do
        {
          v48 = *(struct CRenderTarget **)(*((_QWORD *)v43 + 3) + 8 * v47);
          v49 = (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)v48 + 8) + 48LL))((_QWORD *)v48 + 8);
          v135 = v49;
          v15 = v49;
          if ( v49 < 0 )
          {
            v53 = 0LL;
            MilInstrumentationCheckHR_MaybeFailFast(v50, &dword_1802C0180, 2u, v49, 0x525u, 0LL);
            goto LABEL_199;
          }
          v15 = 0;
          v133 = v49 == 142213121;
          v51 = 0;
          if ( v49 == 142213121 )
            v51 = v46;
          v46 = v51;
          if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)v48 + 48LL))(v48, 80LL) )
          {
            v52 = v43[24];
            v135 = 0;
            if ( v52 < v43[12] )
            {
              while ( 1 )
              {
                v109 = *((_QWORD *)v43 + 3);
                SpectreRenderer = (struct ISpectreRenderer *)(8LL * v52);
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)((char *)SpectreRenderer + v109)
                                                                        + 48LL))(
                       *(_QWORD *)((char *)SpectreRenderer + v109),
                       84LL) )
                {
                  v110 = CIndirectSwapchainRenderTarget::SetTargetOcclusion(
                           *(CIndirectSwapchainRenderTarget **)((char *)SpectreRenderer + *((_QWORD *)v43 + 3)),
                           v48,
                           v133);
                  v135 = v110;
                  v15 = v110;
                  if ( v110 < 0 )
                    break;
                }
                if ( ++v52 >= v43[12] )
                  goto LABEL_62;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v110, 0x318u, 0LL);
            }
LABEL_62:
            if ( v15 < 0 )
            {
              v53 = 0LL;
              MilInstrumentationCheckHR_MaybeFailFast(v36, &dword_1802C0180, 2u, v15, 0x520u, 0LL);
LABEL_199:
              v4 = a2;
              goto LABEL_66;
            }
          }
          v47 = (unsigned int)(v47 + 1);
        }
        while ( (unsigned int)v47 < v43[12] );
        v4 = a2;
        if ( v46 )
          goto LABEL_159;
      }
      else
      {
LABEL_159:
        if ( !*((_BYTE *)v43 + 113) )
        {
          v15 = 142213121;
          v53 = 0LL;
          v135 = 142213121;
LABEL_66:
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Stop);
          if ( v15 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v36, &dword_1802920EC, 1u, v15, 0xC4Fu, 0LL);
          CComposition::ProcessRenderingStatus((CComposition *)v3, v15);
          if ( v15 == 142213121 )
          {
            *v4 = 1;
            v15 = 0;
            v135 = 0;
          }
          else
          {
            if ( v15 == -2003304307
              && dword_18033A1D0 > 5u
              && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A1D0, 0x400000000000uLL) )
            {
              v154 = 16LL;
              v153 = &gDwmCoreTelemetryActivityId;
              TlgWrite((TraceLoggingHProvider)&dword_18033A1D0, &unk_1802D91B4, 0LL, 0LL, 3u, &pData);
            }
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v54, &dword_1802C0180, 2u, v15, 0x108Bu, 0LL);
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
          v55 = qword_18033CC08;
          v56 = 1;
          v136 = 4;
          v57 = 1366;
          v145 = 0LL;
          v58 = 768;
          v134 = 0;
          if ( !qword_18033CC08 )
            goto LABEL_179;
          if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_18033CC08 + 2) + 104LL))(*((_QWORD *)qword_18033CC08 + 2))
            || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v55 + 14)
            || qword_18033CC08 != v55 )
          {
            ReleaseInterface<CD3DSurface>((__int64 *)&qword_18033CC08);
          }
          if ( !qword_18033CC08 )
          {
LABEL_179:
            D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(v54, &qword_18033CC08);
            TranslateDXGIorD3DErrorInContext(D3DObjects, 4, &D3DObjects);
            v61 = (unsigned int)D3DObjects;
            v134 = D3DObjects;
            if ( D3DObjects < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v107, &dword_1802BFEC8, 1u, D3DObjects, 0xFEu, 0LL);
            if ( qword_18033CC18 )
              (*(void (__fastcall **)(__int64, CDXGIEnumeration *))(*(_QWORD *)qword_18033CC18 + 32LL))(
                qword_18033CC18,
                qword_18033CC08);
          }
          v62 = qword_18033CC08;
          if ( qword_18033CC08 )
            (**(void (__fastcall ***)(CDXGIEnumeration *))qword_18033CC08)(qword_18033CC08);
          v63 = v134;
          if ( (v134 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v134, 0LL, 0, v134, 0xD8u, 0LL);
          }
          else
          {
            v64 = (volatile signed __int32 *)g_DisplayManager;
            if ( g_DisplayManager )
            {
LABEL_84:
              _InterlockedIncrement(v64);
              v53 = g_DisplayManager;
              v145 = g_DisplayManager;
LABEL_85:
              if ( v62 )
              {
                (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v62 + 8LL))(v62);
                v63 = v134;
              }
              v65 = 0;
              if ( (int)v63 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v63, 0xC9u, 0LL);
              if ( v53 )
              {
                v57 = 0;
                v136 = 0;
                v58 = 0;
                v61 = 0LL;
                if ( *((_DWORD *)v53 + 18) )
                {
                  v59 = *((_QWORD *)v53 + 6);
                  do
                  {
                    v66 = *(__m128i *)(*(_QWORD *)v59 + 264LL);
                    v70 = GetPixelFormatSize(*(_DWORD *)(*(_QWORD *)v59 + 280LL)) >> 3;
                    v71 = _mm_cvtsi128_si32(v66);
                    if ( v71 * v69 * v70 > v57 * v58 * (int)v61 )
                    {
                      v57 = v71;
                      v58 = v69;
                      v61 = v70;
                    }
                    v59 = v67 + 8;
                    v60 = v68 - 1;
                  }
                  while ( v60 );
                  v136 = v61;
                  v65 = 0;
                }
              }
              if ( (_DWORD)qword_180340430 )
              {
                v72 = v136 * ((v57 + 255) & 0xFFFFFF00) * ((v58 + 255) & 0xFFFFFF00)
                    + ((v136 * ((v57 + 255) & 0xFFFFFF00) * ((v58 + 255) & 0xFFFFFF00)) >> 2);
                do
                {
                  v60 = qword_1803403E0;
                  v73 = 0;
                  v74 = *(_QWORD *)(qword_1803403E0 + 24LL * v65 + 8);
                  v75 = *(_QWORD *)(qword_1803403E0 + 24LL * v65);
                  v76 = 24LL * v65;
                  v140 = v74;
                  if ( !CD3DDeviceManager::s_bHwProtectionTempDisabled && !CD3DDeviceManager::s_bHwProtectionTeardown )
                  {
                    v61 = HIDWORD(qword_1803403C4);
                    v77 = 0;
                    if ( HIDWORD(qword_1803403C4) )
                    {
                      while ( 1 )
                      {
                        v59 = 12LL * v77;
                        if ( *(_QWORD *)(qword_1803403B0 + v59) == __PAIR64__(HIDWORD(v140), v74) )
                          break;
                        if ( ++v77 >= HIDWORD(qword_1803403C4) )
                          goto LABEL_101;
                      }
                      v73 = *(_DWORD *)(qword_1803403B0 + v59 + 8) != 0;
                    }
                  }
LABEL_101:
                  if ( *(_BYTE *)(qword_1803403E0 + v76 + 16) && !v73 )
                    CD3DDeviceLevel1::ClearProtectedResources((CD3DDeviceLevel1 *)v75);
                  LODWORD(v140) = 1;
                  LOBYTE(v59) = !*(_QWORD *)(v75 + 216)
                             || ((*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)(v75 + 224)
                                                                                             + 40LL))(
                                   *(_QWORD *)(v75 + 224),
                                   2000LL,
                                   v72,
                                   &v140),
                                 (_DWORD)v140 == 1);
                  v78 = 0;
                  if ( (_BYTE)v59 )
                    v78 = v56;
                  ++v65;
                  v56 = v78;
                  *(_BYTE *)(qword_1803403E0 + v76 + 16) = v73;
                }
                while ( v65 < (unsigned int)qword_180340430 );
                v3 = v146;
                v15 = v135;
                v53 = v145;
              }
              if ( v53 && _InterlockedExchangeAdd((volatile signed __int32 *)v53, 0xFFFFFFFF) == 1 )
                CDisplaySet::`scalar deleting destructor'(v53, v59);
              if ( v56 )
                v56 = (*(__int64 (__fastcall **)(PVOID, __int64, __int64, __int64))(*(_QWORD *)v3[70].Ptr + 32LL))(
                        v3[70].Ptr,
                        2000LL,
                        v60,
                        v61);
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                McTemplateU0d(
                  &Microsoft_Windows_Dwm_Core_Provider_Context,
                  &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Stop,
                  v56 != 0);
              v79 = (CSceneResourceManager *)v3[16].Ptr;
              if ( (__int64)(*((_QWORD *)v79 + 5) - *((_QWORD *)v79 + 4)) >> 3
                && HIDWORD(v3[164].Ptr)
                && !LODWORD(v3[164].Ptr) )
              {
                CSceneResourceManager::EnsureSceneCompositor((CSceneResourceManager *)v3[16].Ptr);
              }
              else
              {
                v80 = *((_QWORD *)v79 + 3);
                v81 = (_QWORD *)((char *)v79 + 24);
                if ( v80 )
                {
                  CD3DResource::RemoveResourceNotifier(
                    (CD3DResource *)(v80 + 24),
                    (const struct IDeviceResourceNotify *)v3[16].Ptr);
                  v112 = (struct ISpectreRenderer **)*((_QWORD *)v79 + 7);
                  v113 = *v112;
                  SpectreRenderer = *v112;
                  while ( v113 != (struct ISpectreRenderer *)v112 )
                  {
                    (*(void (__fastcall **)(_QWORD, CSceneResourceManager *))(**((_QWORD **)v113 + 4) + 32LL))(
                      *((_QWORD *)v113 + 4),
                      v79);
                    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v113 + 5) + 16LL))(*((_QWORD *)v113 + 5));
                    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>>,std::_Iterator_base0>::operator++(&SpectreRenderer);
                    v113 = SpectreRenderer;
                  }
                  std::_Tree<std::_Tmap_traits<IDeviceResource *,ISpectreRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>,0>>::clear((char *)v79 + 56);
                  SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(v79);
                  if ( SpectreRenderer )
                  {
                    v114 = *((_QWORD *)v79 + 5);
                    v115 = (_QWORD *)*((_QWORD *)v79 + 4);
                    v116 = 0LL;
                    v117 = (v114 - (unsigned __int64)v115 + 7) >> 3;
                    if ( (unsigned __int64)v115 > v114 )
                      v117 = 0LL;
                    if ( v117 )
                    {
                      v118 = SpectreRenderer;
                      do
                      {
                        (*(void (__fastcall **)(_QWORD, struct ISpectreRenderer *))(*(_QWORD *)*v115 + 8LL))(
                          *v115,
                          v118);
                        ++v116;
                        ++v115;
                      }
                      while ( v116 != v117 );
                      v3 = v146;
                    }
                  }
                  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(v81);
                }
              }
              v82 = v3[14].Ptr;
              if ( v82 )
                (*(void (__fastcall **)(PVOID, __int64, __int64, __int64))(*(_QWORD *)v82 + 16LL))(v82, v59, v60, v61);
              v83 = a2;
              if ( *a2 )
              {
                dword_18033C790 |= 0x200u;
                v101 = v3[30].Ptr;
                v102 = v101[64] - 1;
                if ( v102 >= 0 )
                {
                  v119 = 16LL * v102;
                  do
                  {
                    if ( !CNotificationResource::ShouldNotify(*(CNotificationResource **)(v119
                                                                                        + *((_QWORD *)v101 + 29)
                                                                                        + 8)) )
                    {
                      v121 = v120[3];
                      if ( !((v121 & 2) != 0 ? *(_QWORD *)(v121 & 0xFFFFFFFFFFFFFFFCuLL) : v120[3] & 1LL) )
                      {
                        (*(void (__fastcall **)(_QWORD *))(*v120 + 16LL))(v120);
                        v123 = (unsigned int)v101[64];
                        if ( v102 < (unsigned int)v123 )
                        {
                          v124 = *((_QWORD *)v101 + 29);
                          for ( i = v102; i < (int)v123 - 1; LODWORD(v123) = v101[64] )
                          {
                            v126 = 2LL * i;
                            v123 = 2LL * ++i;
                            *(_OWORD *)(v124 + 8 * v126) = *(_OWORD *)(v124 + 8 * v123);
                          }
                          v101[64] = v123 - 1;
                        }
                        else
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(v123, 0LL, 0, 0x80070057, 0x19Fu, 0LL);
                        }
                      }
                    }
                    v119 -= 16LL;
                    --v102;
                  }
                  while ( v102 >= 0 );
                  v83 = a2;
                }
              }
              else
              {
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                  McTemplateU0(
                    &Microsoft_Windows_Dwm_Core_Provider_Context,
                    &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Start);
                v84 = (int)v3[82].Ptr;
                while ( v84 )
                {
                  v100 = (void (__fastcall ***)(_QWORD, __int64, __int64, __int64))*((_QWORD *)v3[79].Ptr
                                                                                   + (unsigned int)--v84);
                  (**v100)(v100, v59, v60, v61);
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
                v85 = 0LL;
                v143 = 0LL;
                if ( ::CycleTime )
                {
                  v86 = GetCurrentThread();
                  v87 = QueryThreadCycleTime(v86, &v143);
                  v85 = v143;
                  if ( v87 )
                    qword_18033C7E0 += v143 - ::CycleTime;
                }
                ::CycleTime = v85;
                v88 = v3[16].Ptr;
                v89 = v88[3];
                if ( v89 )
                {
                  v127 = *(_QWORD *)(v89 + 120);
                  if ( v127 )
                  {
                    v128 = (_QWORD *)v88[4];
                    v129 = *(_QWORD *)(v88[1] + 496LL);
                    v130 = v88[5];
                    v131 = 0LL;
                    v132 = (v130 - (unsigned __int64)v128 + 7) >> 3;
                    if ( (unsigned __int64)v128 > v130 )
                      v132 = 0LL;
                    if ( v132 )
                    {
                      do
                      {
                        (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v128 + 16LL))(*v128, v127, v129);
                        ++v131;
                        ++v128;
                      }
                      while ( v131 != v132 );
                    }
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v127 + 104LL))(v127);
                  }
                }
                v90 = CRenderTargetManager::PreRender((CRenderTargetManager *)v3[8].Ptr);
                v15 = v90;
                if ( v90 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v91, &dword_1802C0180, 2u, v90, 0x10B6u, 0LL);
                v83 = a2;
              }
              if ( !v56 && !*v83 )
                (*(void (__fastcall **)(PVOID, __int64, __int64))(*(_QWORD *)v3[69].Ptr + 96LL))(
                  v3[69].Ptr,
                  2000LL,
                  4LL);
              goto LABEL_137;
            }
            v111 = CDisplayManager::DeriveCurrentDisplaySet((CDisplayManager *)v134, v62, 0LL);
            v134 = v111;
            v63 = v111;
            if ( (v111 & 0x80000000) == 0 )
            {
              v64 = (volatile signed __int32 *)g_DisplayManager;
              goto LABEL_84;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v111, 0LL, 0, v111, 0xDFu, 0LL);
          }
          v63 = v134;
          goto LABEL_85;
        }
      }
      v53 = 0LL;
      v15 = 0;
      v135 = 0;
      goto LABEL_66;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v36, &dword_1802C0180, 2u, v15, 0x1087u, 0LL);
  }
LABEL_138:
  v92 = (char *)v3[11].Ptr;
  if ( v92 )
  {
    v93 = v92 + 104;
    while ( 1 )
    {
      v94 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(v93 + 24));
      v95 = *(char **)v93;
      if ( *(char **)(*(_QWORD *)v93 + 8LL) != v93 || (v96 = *(_QWORD *)v95, *(char **)(*(_QWORD *)v95 + 8LL) != v95) )
        __fastfail(3u);
      *(_QWORD *)v93 = v96;
      *(_QWORD *)(v96 + 8) = v93;
      if ( v95 != v93 )
      {
        v94 = *((_QWORD *)v95 + 2);
        operator delete(v95, 0x18uLL);
        --*((_DWORD *)v93 + 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v93 + 24));
      if ( !v94 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v94 + 16LL))(v94);
    }
  }
  v97 = InterlockedFlushSList((PSLIST_HEADER)&v3[156]);
  for ( j = v97; j; j = j->Next )
  {
    if ( BYTE5(v3[159].Ptr) )
      LODWORD(j[2].Next->Next) = -2147467260;
    else
      LODWORD(j[2].Next->Next) = CVisualTree::PreCompute((__int64)j[1].Next, 0LL);
  }
  LODWORD(v2[1].Ptr) = 0;
  ReleaseSRWLockExclusive(v2);
  if ( BYTE3(v3[159].Ptr) )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v3[10].Ptr + 64LL))(v3[10].Ptr);
    BYTE3(v3[159].Ptr) = 0;
  }
  while ( v97 )
  {
    v106 = v97;
    SetEvent(*((HANDLE *)&v97[1].Next + 1));
    v97 = v97->Next;
    operator delete(v106, 0x30uLL);
  }
  if ( dword_180340480 )
    SetEvent(hEvent);
  return (unsigned int)v15;
}
