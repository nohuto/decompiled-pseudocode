/*
 * XREFs of ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001EBB0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B120 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180014944 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4Reportin.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800183E8 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180024918 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CClientArea@@KAJIPEAPEAV1@@Z @ 0x180024D04 (-Create@CClientArea@@KAJIPEAPEAV1@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x180037DC4 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004E738 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?SetSize@CHolographicSlate@@QEAAJII@Z @ 0x1800814D8 (-SetSize@CHolographicSlate@@QEAAJII@Z.c)
 *     ?UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z @ 0x1800B6360 (-UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaBounds(CTopLevelWindow *this, __int64 a2)
{
  unsigned int v2; // r14d
  struct CClientArea **v3; // rsi
  int v4; // edi
  CTopLevelWindow *v5; // rbx
  int v6; // edi
  __int128 v7; // xmm0
  __int64 v8; // r8
  int cyBottomHeight; // edx
  int cyTopHeight; // ecx
  int cxRightWidth; // r9d
  int cxLeftWidth; // r10d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  CIndirectSwapchainRenderTargetProxy *v18; // rcx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // r15
  int v25; // eax
  int inserted; // eax
  CVisual *v27; // rcx
  unsigned int v28; // esi
  __int64 v29; // rax
  unsigned __int64 v30; // xmm0_8
  unsigned int v31; // r8d
  unsigned int v32; // edx
  __int64 v33; // rax
  float v34; // xmm2_4
  __int64 v35; // r10
  unsigned __int64 v36; // xmm0_8
  int updated; // eax
  CHolographicSlate *v38; // rcx
  _DWORD *v39; // rax
  unsigned int v40; // r8d
  int v41; // eax
  unsigned int v42; // [rsp+20h] [rbp-40h]
  void *v43; // [rsp+28h] [rbp-38h]
  struct _MARGINS v44; // [rsp+30h] [rbp-30h] BYREF
  __int128 v45; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0;
  v3 = (struct CClientArea **)((char *)this + 472);
  v4 = 0;
  v5 = this;
  if ( !*((_QWORD *)this + 59) )
  {
    v24 = *((_QWORD *)this + 90);
    this = (CTopLevelWindow *)*(unsigned int *)(v24 + 128);
    if ( (_DWORD)this )
    {
      v25 = CClientArea::Create((unsigned int)this, v3);
      v4 = v25;
      if ( v25 >= 0 )
        *((_QWORD *)*v3 + 30) = v24;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x48u, v43);
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x7B0u, v43);
        goto LABEL_2;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)v5 + 66) + 32LL), *v3, 0LL, 1u, 1);
      v4 = inserted;
      if ( inserted < 0 )
      {
        v42 = 1970;
LABEL_39:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v42, v43);
        goto LABEL_2;
      }
      v27 = *v3;
      *(_QWORD *)&v44.cxLeftWidth = 0LL;
      *(_QWORD *)&v44.cyTopHeight = 0LL;
      CVisual::SetInsetFromParent(v27, &v44);
      if ( (*((_BYTE *)v5 + 240) & 4) != 0 )
      {
        inserted = CTopLevelWindow::UpdateClientAreaMaximizedClip(v5);
        v4 = inserted;
        if ( inserted < 0 )
        {
          v42 = 1977;
          goto LABEL_39;
        }
      }
    }
  }
LABEL_2:
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1353u, v43);
  }
  else if ( *v3 )
  {
    v6 = *((_DWORD *)v5 + 146);
    v7 = *(_OWORD *)(*((_QWORD *)v5 + 90) + 48LL);
    *(_QWORD *)&v44.cxLeftWidth = 0LL;
    *(_QWORD *)&v44.cyTopHeight = 0LL;
    v45 = v7;
    if ( (unsigned __int8)IsOpenThemeDataPresent(this, a2) && (v6 & 6) != 0 || (*((_DWORD *)v5 + 146) & 0x200000) != 0 )
    {
      v20 = *((_BYTE *)v5 + 240) & 4 | 0x9BLL;
      v8 = *((_QWORD *)v5 + 90);
      cxLeftWidth = *((_DWORD *)v5 + v20);
      cxRightWidth = *((_DWORD *)v5 + v20 + 1);
      cyBottomHeight = *((_DWORD *)v5 + v20 + 3);
      if ( !v8 || (*(_BYTE *)(v8 + 604) & 8) != 0 )
      {
        v21 = 0;
        if ( *((_DWORD *)v5 + 151) - cxLeftWidth - *(_DWORD *)(*((_QWORD *)v5 + 40) + 24LL) >= 0 )
          v21 = *((_DWORD *)v5 + 151) - cxLeftWidth - *(_DWORD *)(*((_QWORD *)v5 + 40) + 24LL);
        cxLeftWidth += v21;
        v22 = 0;
        if ( *((_DWORD *)v5 + 152) - cxRightWidth - *(_DWORD *)(*((_QWORD *)v5 + 41) + 24LL) >= 0 )
          v22 = *((_DWORD *)v5 + 152) - cxRightWidth - *(_DWORD *)(*((_QWORD *)v5 + 41) + 24LL);
        cxRightWidth += v22;
        v23 = 0;
        if ( *((_DWORD *)v5 + 154) - cyBottomHeight - *(_DWORD *)(*((_QWORD *)v5 + 43) + 28LL) >= 0 )
          v23 = *((_DWORD *)v5 + 154) - cyBottomHeight - *(_DWORD *)(*((_QWORD *)v5 + 43) + 28LL);
        cyBottomHeight += v23;
      }
      cyTopHeight = *((_DWORD *)v5 + v20 + 2);
    }
    else
    {
      wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::ReportUsageToService();
      v8 = *((_QWORD *)v5 + 90);
      cyBottomHeight = v44.cyBottomHeight;
      cyTopHeight = v44.cyTopHeight;
      cxRightWidth = v44.cxRightWidth;
      cxLeftWidth = v44.cxLeftWidth;
    }
    LODWORD(v45) = cxLeftWidth + v45;
    DWORD2(v45) -= cxRightWidth;
    DWORD1(v45) += cyTopHeight;
    HIDWORD(v45) -= cyBottomHeight;
    v13 = *(_QWORD *)(*((_QWORD *)*v3 + 2) + 16LL);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64))(**(_QWORD **)(v13 + 16) + 552LL))(
           *(_QWORD *)(v13 + 16),
           *(unsigned int *)(v13 + 24),
           v8 + 180,
           v8 + 196,
           v8 + 212);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1366u, v43);
    }
    else
    {
      v14 = *(_QWORD *)(*((_QWORD *)*v3 + 2) + 16LL);
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v14 + 16) + 392LL))(
             *(_QWORD *)(v14 + 16),
             *(unsigned int *)(v14 + 24),
             *((_QWORD *)v5 + 90) + 228LL);
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1369u, v43);
      }
      else
      {
        v15 = *(_QWORD *)(*((_QWORD *)*v3 + 2) + 16LL);
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(v15 + 16) + 544LL))(
               *(_QWORD *)(v15 + 16),
               *(unsigned int *)(v15 + 24),
               &v45);
        if ( v4 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x136Cu, v43);
        }
        else
        {
          v16 = *((_QWORD *)v5 + 104);
          if ( v16
            && ((*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v16 + 40LL))(v16, &v45),
                v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 26)
                                                       + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 26)),
                v4 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1371u, v43);
          }
          else
          {
            v17 = *(_QWORD *)(*((_QWORD *)*v3 + 2) + 16LL);
            v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v17 + 16) + 376LL))(
                   *(_QWORD *)(v17 + 16),
                   *(unsigned int *)(v17 + 24));
            if ( v4 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1377u, v43);
            }
            else
            {
              v18 = (CIndirectSwapchainRenderTargetProxy *)*((_QWORD *)v5 + 97);
              v4 = 0;
              if ( v18 )
              {
                v28 = 0;
                if ( *((_BYTE *)v5 + 768) )
                {
                  CTopLevelWindow::GetOutsideMargins(v5, &v44);
                  v4 = v44.cxLeftWidth;
                  v28 = v44.cyTopHeight;
                  v18 = (CIndirectSwapchainRenderTargetProxy *)*((_QWORD *)v5 + 97);
                  v29 = *(_QWORD *)(*((_QWORD *)v5 + 90) + 48LL);
                  v30 = _mm_srli_si128(*(__m128i *)(*((_QWORD *)v5 + 90) + 48LL), 8).m128i_u64[0];
                  v31 = v30 - v44.cxRightWidth - v29 - v44.cxLeftWidth;
                  v32 = HIDWORD(v30) - HIDWORD(v29) - v44.cyBottomHeight - v44.cyTopHeight;
                }
                else
                {
                  v33 = *((_QWORD *)v5 + 90);
                  v34 = *(float *)(v33 + 304);
                  v35 = *(_QWORD *)(v33 + 196);
                  v36 = _mm_srli_si128(*(__m128i *)(v33 + 196), 8).m128i_u64[0];
                  v31 = (int)(float)((float)((int)v36 - v35) * v34);
                  v32 = (int)(float)((float)(HIDWORD(v36) - HIDWORD(v35)) * v34);
                }
                updated = CIndirectSwapchainRenderTargetProxy::UpdateTargetBounds(v18, v4, v28, v31, v32);
                v4 = updated;
                if ( updated < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x161Du, v43);
              }
              if ( v4 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x137Au, v43);
              }
              else
              {
                v4 = 0;
                if ( (*((_BYTE *)v5 + 241) & 2) != 0 )
                {
                  v38 = (CHolographicSlate *)*((_QWORD *)v5 + 98);
                  if ( v38 )
                  {
                    v39 = (_DWORD *)*((_QWORD *)v5 + 90);
                    v40 = 0;
                    if ( v39[52] - v39[50] >= 0 )
                      v40 = v39[52] - v39[50];
                    if ( v39[51] - v39[49] >= 0 )
                      v2 = v39[51] - v39[49];
                    v41 = CHolographicSlate::SetSize(v38, v2, v40);
                    v4 = v41;
                    if ( v41 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x1A7u, v43);
                  }
                }
                if ( v4 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x137Cu, v43);
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
