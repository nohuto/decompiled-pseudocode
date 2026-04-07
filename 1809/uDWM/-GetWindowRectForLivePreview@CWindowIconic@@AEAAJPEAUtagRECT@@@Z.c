/*
 * XREFs of ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x18008DA78
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18008EA40 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180009708 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4Reportin.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x18008A980 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x18008AE8C (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 */

__int64 __fastcall CWindowIconic::GetWindowRectForLivePreview(CWindowIconic *this, struct tagRECT *a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  struct CWindowData *MDIOwner; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r8
  __m128i v11; // xmm1
  LONG left; // ecx
  int WindowRestoreRect; // eax

  v4 = 0;
  v5 = *((_QWORD *)this + 9);
  if ( (*(_BYTE *)(v5 + 598) & 1) == 0 || (MDIOwner = CWindowData::GetMDIOwner((HWND *)v5)) == 0LL )
  {
    wil::Feature<__WilFeatureTraits_Feature_ThumbnailTabs>::ReportUsageToService(v5, (__int64)a2, a3);
    MDIOwner = (struct CWindowData *)*((_QWORD *)this + 9);
  }
  v8 = *((_QWORD *)MDIOwner + 53);
  if ( v8 )
  {
    MDIOwner = *(struct CWindowData **)(v8 + 32);
    *a2 = *((struct tagRECT *)MDIOwner + 3);
  }
  else
  {
    WindowRestoreRect = CWindowData::GetWindowRestoreRect(MDIOwner, a2, 1);
    v4 = WindowRestoreRect;
    if ( WindowRestoreRect < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, WindowRestoreRect, 0x1BFu);
      return v4;
    }
  }
  if ( *((_DWORD *)this + 4) == 2 )
  {
    v9 = *((_QWORD *)this + 3);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 24);
      v11 = _mm_cvtsi32_si128(HIDWORD(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 37) + 104LL)));
      a2->left += (int)(float)((float)((float)(int)*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                               + 37)
                                                             + 104LL)
                                     * *((float *)MDIOwner + 76))
                             + (float)*((int *)MDIOwner + 16));
      left = a2->left;
      a2->top += (int)(float)((float)(_mm_cvtepi32_ps(v11).m128_f32[0] * *((float *)MDIOwner + 76))
                            + (float)*((int *)MDIOwner + 18));
      a2->bottom = a2->top + HIDWORD(v10);
      a2->right = left + v10;
      AdjustWindowRectEx(a2, *(_DWORD *)(*((_QWORD *)this + 10) + 100LL), 0, 0);
    }
  }
  return v4;
}
