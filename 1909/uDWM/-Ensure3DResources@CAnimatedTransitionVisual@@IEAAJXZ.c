/*
 * XREFs of ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009FF2C
 * Callers:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000E3E8 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ??$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x180017140 (--$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z.c)
 *     ??$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x180037D14 (--$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCMatrixTransform3dProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransform3dProxy@@@Z @ 0x1800B5B90 (--$CreateProxy@VCMatrixTransform3dProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransform3dProxy@@@Z.c)
 *     ??$CreateProxy@VCTransform3dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCTransform3dGroupProxy@@@Z @ 0x1800B5E78 (--$CreateProxy@VCTransform3dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCTransform3dGroupProxy@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Ensure3DResources(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 36)
    || (v3 = CCompositor::CreateProxy<CMatrixTransform3dProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)),
        v1 = v3,
        v3 >= 0) )
  {
    if ( *((_QWORD *)this + 37)
      || (v4 = CCompositor::CreateProxy<CMatrixTransform3dProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 5)),
          v1 = v4,
          v4 >= 0) )
    {
      if ( *((_QWORD *)this + 38)
        || (v5 = CCompositor::CreateProxy<CTransform3dGroupProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 5)),
            v1 = v5,
            v5 >= 0) )
      {
        if ( *((_QWORD *)this + 39)
          || (v6 = CCompositor::CreateProxy<CEffectGroupProxy>(
                     *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                     (__int64 *)this + 39),
              v1 = v6,
              v6 >= 0) )
        {
          if ( !*((_QWORD *)this + 40) )
          {
            v7 = CCompositor::CreateProxy<CScaleTransformProxy>(
                   *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                   (__int64 *)this + 40);
            v1 = v7;
            if ( v7 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x60Fu);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x60Au);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x605u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x600u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x5FBu);
  }
  return v1;
}
