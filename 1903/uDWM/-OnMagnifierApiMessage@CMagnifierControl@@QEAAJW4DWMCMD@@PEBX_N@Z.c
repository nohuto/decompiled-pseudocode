/*
 * XREFs of ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180084818
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180013790 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022BF4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4Repo.c)
 *     _Init_thread_footer @ 0x18004E4AC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004E51C (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x180080954 (-OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x1800809CC (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 *     ?OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x180080A18 (-OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@.c)
 *     ?OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x180080A94 (-OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x180083C40 (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x180083F10 (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetMagnifierSamplingMode@CMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x1800840BC (-OnSetMagnifierSamplingMode@CMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x180084128 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 *     ?OnSetSlicer@CMagnifier@@QEAAJPEBUMAGN_SLICER_PARAM@@@Z @ 0x1800843D4 (-OnSetSlicer@CMagnifier@@QEAAJPEBUMAGN_SLICER_PARAM@@@Z.c)
 *     ??$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18008442C (--$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x18008474C (-LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z.c)
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x180084D24 (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x180084F3C (-OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z.c)
 *     ?RenderAndCommit@CMagnifierControl@@AEAAJXZ @ 0x180085380 (-RenderAndCommit@CMagnifierControl@@AEAAJXZ.c)
 *     ?reset@?$unique_ptr@VMagnifierExperienceHelper@@U?$default_delete@VMagnifierExperienceHelper@@@wistd@@@wistd@@QEAAXPEAVMagnifierExperienceHelper@@@Z @ 0x180085544 (-reset@-$unique_ptr@VMagnifierExperienceHelper@@U-$default_delete@VMagnifierExperienceHelper@@@w.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___ @ 0x18008EA54 (CWindowList--ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___.c)
 *     ?RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener@@@Z @ 0x180091BEC (-RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener.c)
 *     ??0MagnifierExperienceHelper@@QEAA@AEBN@Z @ 0x1800B5580 (--0MagnifierExperienceHelper@@QEAA@AEBN@Z.c)
 *     ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z @ 0x1800B57BC (-SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierApiMessage(unsigned __int64 a1, int a2, __int64 a3, char a4)
{
  unsigned int v4; // edi
  int v8; // ebx
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // eax
  CMagnifierControl *v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r9
  double *v29; // rsi
  MagnifierExperienceHelper *v30; // rcx
  int v31; // eax
  int v32; // eax
  int v33; // esi
  int v34; // esi
  int v35; // esi
  int v36; // esi
  int v37; // esi
  MagnifierExperienceHelper *v38; // rax
  MagnifierExperienceHelper *v39; // rax
  int v40; // eax
  CMagnifier *v41; // rax
  __int64 v42; // rcx
  int v43; // eax
  int v44; // eax
  int v45; // eax
  __int64 v46; // rdx
  int v47; // eax
  int v48; // eax
  __int64 v49; // rdx
  int v50; // eax
  int v51; // eax
  CMagnifier *v53; // [rsp+30h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v54; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v55[2]; // [rsp+40h] [rbp-10h] BYREF
  int v56; // [rsp+88h] [rbp+38h] BYREF
  char v57; // [rsp+98h] [rbp+48h] BYREF

  v57 = a4;
  v4 = 0;
  v8 = 0;
  if ( dword_1800DEE94 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800DEE94);
    if ( dword_1800DEE94 == -1 )
    {
      dword_1800DEDEC = -2147023728;
      Init_thread_footer(&dword_1800DEE94);
    }
  }
  v54 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( a2 > 1073741928 )
  {
    v33 = a2 - 1073741930;
    if ( v33 )
    {
      v34 = v33 - 1;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( !v35 )
        {
          v44 = CFullScreenMagnifier::OnSetDesktopMagnifierSamplingMode(*(_QWORD *)(a1 + 64), *(_DWORD *)(a3 + 12));
          v8 = v44;
          if ( v44 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v44, 0x158u);
            goto LABEL_68;
          }
          goto LABEL_58;
        }
        v36 = v35 - 1;
        if ( !v36 )
        {
          v43 = CFullScreenMagnifier::OnSetPersistentDesktopColorEffect(
                  *(CFullScreenMagnifier **)(a1 + 64),
                  (const struct MilColorTransform *)(a3 + 12));
          v8 = v43;
          if ( v43 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v43, 0x162u);
            goto LABEL_68;
          }
          goto LABEL_58;
        }
        if ( v36 != 1 )
          goto LABEL_68;
        wil::Feature<__WilFeatureTraits_Feature_MagnifierNoJitter>::ReportUsageToService();
        v37 = *(_DWORD *)(a3 + 12);
        v38 = (MagnifierExperienceHelper *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 8LL))(
                                             WPF::g_pProcessHeap,
                                             104LL);
        if ( v38 )
          v39 = MagnifierExperienceHelper::MagnifierExperienceHelper(v38, (const double *)(a1 + 168));
        else
          v39 = 0LL;
        v53 = 0LL;
        wistd::unique_ptr<MagnifierExperienceHelper,wistd::default_delete<MagnifierExperienceHelper>>::reset(
          a1 + 176,
          v39);
        wistd::unique_ptr<MagnifierExperienceHelper,wistd::default_delete<MagnifierExperienceHelper>>::reset(&v53, 0LL);
        if ( v37 )
        {
          v40 = CWindowList::RegisterForSoftwareCursorChangeNotification(
                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                  (struct ISoftwareCursorChangeListener *)((a1 + 16) & ((unsigned __int128)-(__int128)a1 >> 64)));
          v8 = v40;
          if ( v40 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v40, 0x17Cu);
            goto LABEL_68;
          }
        }
        else
        {
          v41 = (CMagnifier *)(a1 + 16);
          if ( !a1 )
            v41 = 0LL;
          v53 = v41;
          v42 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61);
          v55[0] = &v53;
          v55[1] = v42;
          CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___(v42, v55);
        }
        *(_BYTE *)(a1 + 144) = *(_DWORD *)(a3 + 12) != 0;
      }
      else
      {
        v46 = *(_QWORD *)(a3 + 4);
        v53 = 0LL;
        v47 = CMagnifierControl::LookupAndValidateMagnifier((struct _RTL_GENERIC_TABLE *)a1, v46, &v53);
        v8 = v47;
        if ( v47 >= 0 )
        {
          v48 = CMagnifier::OnSetMagnifierSamplingMode((__int64)v53, *(_DWORD *)(a3 + 20));
          v8 = v48;
          if ( v48 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v48, 0x150u);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v47, 0x14Eu);
        }
      }
    }
    else
    {
      v49 = *(_QWORD *)(a3 + 4);
      v53 = 0LL;
      v50 = CMagnifierControl::LookupAndValidateMagnifier((struct _RTL_GENERIC_TABLE *)a1, v49, &v53);
      v8 = v50;
      if ( v50 >= 0 )
      {
        v51 = CMagnifier::OnSetSlicer(v53, (const struct MAGN_SLICER_PARAM *)(a3 + 20));
        v8 = v51;
        if ( v51 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v51, 0x10Au);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v50, 0x106u);
      }
    }
  }
  else
  {
    if ( a2 == 1073741928 )
    {
      wil::Feature<__WilFeatureTraits_Feature_MagnifierNoJitter>::ReportUsageToService();
      v29 = (double *)(a3 + 12);
      if ( *(_BYTE *)(a1 + 144) )
      {
        if ( *(double *)(a1 + 168) == *v29 )
        {
          v56 = 0;
          v57 = 0;
          if ( (int)wil::wnf_query_nothrow<unsigned int>(v27, &v57, (__int64)&v56, v28) >= 0 && v57 && !v56 )
            goto LABEL_68;
        }
        v30 = *(MagnifierExperienceHelper **)(a1 + 176);
        *(double *)(a1 + 168) = *v29;
        MagnifierExperienceHelper::SetMagnificationFactor(v30, (const double *)(a3 + 12));
        v31 = CFullScreenMagnifier::OnSetDesktopMagnificationFactor(
                *(CFullScreenMagnifier **)(a1 + 64),
                *v29,
                *(_DWORD *)(a3 + 20),
                *(_DWORD *)(a3 + 24));
        v8 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v31, 0x138u);
          goto LABEL_68;
        }
      }
      else
      {
        v32 = CFullScreenMagnifier::OnSetDesktopMagnificationFactor(
                *(CFullScreenMagnifier **)(a1 + 64),
                *v29,
                *(_DWORD *)(a3 + 20),
                *(_DWORD *)(a3 + 24));
        v8 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v32, 0x141u);
          goto LABEL_68;
        }
      }
      goto LABEL_58;
    }
    v9 = a2 - 1073741920;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              if ( v13 != 3 )
                goto LABEL_68;
              v14 = CFullScreenMagnifier::OnSetDesktopColorEffect(
                      *(CFullScreenMagnifier **)(a1 + 64),
                      (const struct MilColorTransform *)(a3 + 12));
              v8 = v14;
              if ( v14 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v14, 0x112u);
                goto LABEL_68;
              }
LABEL_58:
              v45 = CMagnifierControl::RenderAndCommit(v15);
              v8 = v45;
              if ( v45 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v45, 0x18Bu);
              goto LABEL_68;
            }
            v16 = *(_QWORD *)(a3 + 8);
            v53 = 0LL;
            v17 = CMagnifierControl::LookupAndValidateMagnifier((struct _RTL_GENERIC_TABLE *)a1, v16, &v53);
            v8 = v17;
            if ( v17 >= 0 )
            {
              v18 = CMagnifier::OnSetRenderTargetTextures(v53, (const struct MAGN_ADAPTERTEXTURES *)(a3 + 16));
              v8 = v18;
              if ( v18 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v18, 0xFCu);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v17, 0xF8u);
            }
          }
          else
          {
            v19 = *(_QWORD *)(a3 + 8);
            v53 = 0LL;
            v20 = CMagnifierControl::LookupAndValidateMagnifier((struct _RTL_GENERIC_TABLE *)a1, v19, &v53);
            v8 = v20;
            if ( v20 >= 0 )
            {
              v21 = CMagnifier::OnModifyWindowFilterList(v53, (const struct MAGN_FILTERLIST *)(a3 + 16));
              v8 = v21;
              if ( v21 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v21, 0xEEu);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v20, 0xEAu);
            }
          }
        }
        else
        {
          v22 = *(_QWORD *)(a3 + 4);
          v53 = 0LL;
          v23 = CMagnifierControl::LookupAndValidateMagnifier((struct _RTL_GENERIC_TABLE *)a1, v22, &v53);
          v8 = v23;
          if ( v23 >= 0 )
          {
            v24 = CMagnifier::OnSetColorEffect(v53, (const struct MilColorTransform *)(a3 + 20));
            v8 = v24;
            if ( v24 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v24, 0xE0u);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v23, 0xDEu);
          }
        }
      }
      else
      {
        wil::Feature<__WilFeatureTraits_Feature_MagnifierNoJitter>::ReportUsageToService();
        *(_BYTE *)(a1 + 144) = 0;
        v25 = CMagnifierControl::OnMagnifierDestroy((CMagnifierControl *)a1, *(HWND *)(a3 + 4));
        v8 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v25, 0xD4u);
      }
    }
    else
    {
      v26 = CMagnifierControl::OnMagnifierCreate((CMagnifierControl *)a1, *(HWND *)(a3 + 4), *(_DWORD *)(a3 + 20));
      v8 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDEC, 1LL, v26, 0xC6u);
    }
  }
LABEL_68:
  if ( v8 != -2147023728 )
    v4 = v8;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v54);
  return v4;
}
