/*
 * XREFs of ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001E250
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B210 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18001EDD0 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022AF4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4Reportin.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180024F58 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CClientArea@@KAJIPEAPEAV1@@Z @ 0x180037CD0 (-Create@CClientArea@@KAJIPEAPEAV1@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x180038A2C (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004E888 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?SetSize@CHolographicSlate@@QEAAJII@Z @ 0x180081838 (-SetSize@CHolographicSlate@@QEAAJII@Z.c)
 *     ?UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z @ 0x1800B66C0 (-UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaBounds(CTopLevelWindow *this)
{
  unsigned int v1; // r14d
  struct CClientArea **v2; // rsi
  int v3; // edi
  int v5; // edi
  __int128 v6; // xmm0
  __int64 v7; // r8
  int cyBottomHeight; // edx
  int cyTopHeight; // ecx
  int cxRightWidth; // r9d
  int cxLeftWidth; // r10d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  CIndirectSwapchainRenderTargetProxy *v17; // rcx
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // r15
  unsigned int v24; // ecx
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

  v1 = 0;
  v2 = (struct CClientArea **)((char *)this + 472);
  v3 = 0;
  if ( !*((_QWORD *)this + 59) )
  {
    v23 = *((_QWORD *)this + 90);
    v24 = *(_DWORD *)(v23 + 128);
    if ( v24 )
    {
      v25 = CClientArea::Create(v24, v2);
      v3 = v25;
      if ( v25 >= 0 )
        *((_QWORD *)*v2 + 30) = v23;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x48u, v43);
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x7B2u, v43);
        goto LABEL_2;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 66) + 32LL), *v2, 0LL, 1u, 1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        v42 = 1972;
LABEL_39:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v42, v43);
        goto LABEL_2;
      }
      v27 = *v2;
      *(_QWORD *)&v44.cxLeftWidth = 0LL;
      *(_QWORD *)&v44.cyTopHeight = 0LL;
      CVisual::SetInsetFromParent(v27, &v44);
      if ( (*((_BYTE *)this + 240) & 4) != 0 )
      {
        inserted = CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
        v3 = inserted;
        if ( inserted < 0 )
        {
          v42 = 1979;
          goto LABEL_39;
        }
      }
    }
  }
LABEL_2:
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x13B4u, v43);
  }
  else if ( *v2 )
  {
    v5 = *((_DWORD *)this + 146);
    v6 = *(_OWORD *)(*((_QWORD *)this + 90) + 48LL);
    *(_QWORD *)&v44.cxLeftWidth = 0LL;
    *(_QWORD *)&v44.cyTopHeight = 0LL;
    v45 = v6;
    if ( (unsigned __int8)IsOpenThemeDataPresent() && (v5 & 6) != 0 || (*((_DWORD *)this + 146) & 0x200000) != 0 )
    {
      v19 = *((_BYTE *)this + 240) & 4 | 0x9BLL;
      v7 = *((_QWORD *)this + 90);
      cxLeftWidth = *((_DWORD *)this + v19);
      cxRightWidth = *((_DWORD *)this + v19 + 1);
      cyBottomHeight = *((_DWORD *)this + v19 + 3);
      if ( !v7 || (*(_BYTE *)(v7 + 604) & 8) != 0 )
      {
        v20 = 0;
        if ( *((_DWORD *)this + 151) - cxLeftWidth - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL) >= 0 )
          v20 = *((_DWORD *)this + 151) - cxLeftWidth - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL);
        cxLeftWidth += v20;
        v21 = 0;
        if ( *((_DWORD *)this + 152) - cxRightWidth - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL) >= 0 )
          v21 = *((_DWORD *)this + 152) - cxRightWidth - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
        cxRightWidth += v21;
        v22 = 0;
        if ( *((_DWORD *)this + 154) - cyBottomHeight - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL) >= 0 )
          v22 = *((_DWORD *)this + 154) - cyBottomHeight - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL);
        cyBottomHeight += v22;
      }
      cyTopHeight = *((_DWORD *)this + v19 + 2);
    }
    else
    {
      wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::ReportUsageToService();
      v7 = *((_QWORD *)this + 90);
      cyBottomHeight = v44.cyBottomHeight;
      cyTopHeight = v44.cyTopHeight;
      cxRightWidth = v44.cxRightWidth;
      cxLeftWidth = v44.cxLeftWidth;
    }
    LODWORD(v45) = cxLeftWidth + v45;
    DWORD2(v45) -= cxRightWidth;
    DWORD1(v45) += cyTopHeight;
    HIDWORD(v45) -= cyBottomHeight;
    v12 = *(_QWORD *)(*((_QWORD *)*v2 + 2) + 16LL);
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64))(**(_QWORD **)(v12 + 16) + 552LL))(
           *(_QWORD *)(v12 + 16),
           *(unsigned int *)(v12 + 24),
           v7 + 180,
           v7 + 196,
           v7 + 212);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x13C7u, v43);
    }
    else
    {
      v13 = *(_QWORD *)(*((_QWORD *)*v2 + 2) + 16LL);
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v13 + 16) + 392LL))(
             *(_QWORD *)(v13 + 16),
             *(unsigned int *)(v13 + 24),
             *((_QWORD *)this + 90) + 228LL);
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x13CAu, v43);
      }
      else
      {
        v14 = *(_QWORD *)(*((_QWORD *)*v2 + 2) + 16LL);
        v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(v14 + 16) + 544LL))(
               *(_QWORD *)(v14 + 16),
               *(unsigned int *)(v14 + 24),
               &v45);
        if ( v3 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x13CDu, v43);
        }
        else
        {
          v15 = *((_QWORD *)this + 104);
          if ( v15
            && ((*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v15 + 40LL))(v15, &v45),
                v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 26)
                                                       + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 26)),
                v3 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x13D2u, v43);
          }
          else
          {
            v16 = *(_QWORD *)(*((_QWORD *)*v2 + 2) + 16LL);
            v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v16 + 16) + 376LL))(
                   *(_QWORD *)(v16 + 16),
                   *(unsigned int *)(v16 + 24));
            if ( v3 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x13D8u, v43);
            }
            else
            {
              v17 = (CIndirectSwapchainRenderTargetProxy *)*((_QWORD *)this + 97);
              v3 = 0;
              if ( v17 )
              {
                v28 = 0;
                if ( *((_BYTE *)this + 768) )
                {
                  CTopLevelWindow::GetOutsideMargins(this, &v44);
                  v3 = v44.cxLeftWidth;
                  v28 = v44.cyTopHeight;
                  v17 = (CIndirectSwapchainRenderTargetProxy *)*((_QWORD *)this + 97);
                  v29 = *(_QWORD *)(*((_QWORD *)this + 90) + 48LL);
                  v30 = _mm_srli_si128(*(__m128i *)(*((_QWORD *)this + 90) + 48LL), 8).m128i_u64[0];
                  v31 = v30 - v44.cxRightWidth - v29 - v44.cxLeftWidth;
                  v32 = HIDWORD(v30) - HIDWORD(v29) - v44.cyBottomHeight - v44.cyTopHeight;
                }
                else
                {
                  v33 = *((_QWORD *)this + 90);
                  v34 = *(float *)(v33 + 304);
                  v35 = *(_QWORD *)(v33 + 196);
                  v36 = _mm_srli_si128(*(__m128i *)(v33 + 196), 8).m128i_u64[0];
                  v31 = (int)(float)((float)((int)v36 - v35) * v34);
                  v32 = (int)(float)((float)(HIDWORD(v36) - HIDWORD(v35)) * v34);
                }
                updated = CIndirectSwapchainRenderTargetProxy::UpdateTargetBounds(v17, v3, v28, v31, v32);
                v3 = updated;
                if ( updated < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x167Eu, v43);
              }
              if ( v3 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x13DBu, v43);
              }
              else
              {
                v3 = 0;
                if ( (*((_BYTE *)this + 241) & 2) != 0 )
                {
                  v38 = (CHolographicSlate *)*((_QWORD *)this + 98);
                  if ( v38 )
                  {
                    v39 = (_DWORD *)*((_QWORD *)this + 90);
                    v40 = 0;
                    if ( v39[52] - v39[50] >= 0 )
                      v40 = v39[52] - v39[50];
                    if ( v39[51] - v39[49] >= 0 )
                      v1 = v39[51] - v39[49];
                    v41 = CHolographicSlate::SetSize(v38, v1, v40);
                    v3 = v41;
                    if ( v41 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x1A9u, v43);
                  }
                }
                if ( v3 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x13DDu, v43);
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v3;
}
