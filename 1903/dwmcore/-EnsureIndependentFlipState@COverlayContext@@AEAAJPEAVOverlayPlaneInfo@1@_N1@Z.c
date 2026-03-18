/*
 * XREFs of ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x180185E80
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x180059110 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800B0BE0 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1800E68CC (-ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x18018747C (-SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x1801945B8 (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180053490 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ @ 0x180183B90 (-AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ.c)
 *     ?ForceUpdateRenderingRealization@OverlayPlaneInfo@COverlayContext@@QEBAJXZ @ 0x180186264 (-ForceUpdateRenderingRealization@OverlayPlaneInfo@COverlayContext@@QEBAJXZ.c)
 *     ?HasDWMClones@CRenderTargetManager@@QEAA_NXZ @ 0x1801863A4 (-HasDWMClones@CRenderTargetManager@@QEAA_NXZ.c)
 *     ?IsFullscreenSingleMonitor@COverlayContext@@AEBA_NXZ @ 0x180186A5C (-IsFullscreenSingleMonitor@COverlayContext@@AEBA_NXZ.c)
 *     ?UpdateLastNotifyPresentCount@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x1801875D4 (-UpdateLastNotifyPresentCount@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 *     ?HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ @ 0x1801CD834 (-HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall COverlayContext::EnsureIndependentFlipState(
        COverlayContext *this,
        struct COverlayContext::OverlayPlaneInfo *a2,
        char a3,
        __int64 a4)
{
  unsigned int v4; // r12d
  char v5; // r15
  char v6; // r14
  char v7; // di
  __int64 i; // rax
  unsigned int v11; // r14d
  signed int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  int v19; // [rsp+30h] [rbp-40h]
  _BYTE v20[4]; // [rsp+50h] [rbp-20h] BYREF
  int v21; // [rsp+54h] [rbp-1Ch] BYREF
  float v22[4]; // [rsp+58h] [rbp-18h] BYREF

  v4 = 0;
  v5 = 0;
  v21 = 0;
  v6 = a4;
  v7 = a3;
  if ( a3 )
  {
    if ( *((_BYTE *)this + 13429)
      || !*((_BYTE *)this + 13443)
      || !*((_BYTE *)a2 + 186)
      || CRenderTargetManager::HasDWMClones(*(CRenderTargetManager **)(*((_QWORD *)this + 1682) + 64LL)) )
    {
      v7 = 0;
    }
    if ( v7 )
    {
      if ( *((_BYTE *)this + 13444) )
      {
        for ( i = 0LL; i < 4; ++i )
          v22[i] = (float)*((int *)a2 + i + 15);
        v7 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((float *)this + 14, v22) ? v7 : 0;
      }
      if ( v7 )
      {
        if ( v6
          || CCompositionSurfaceInfo::HasSecondaryRepresentations(*((CCompositionSurfaceInfo **)a2 + 3))
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 224LL))(*((_QWORD *)a2 + 2))
          || CRenderTargetManager::AlwaysNeedsRenderPass(*(CRenderTargetManager **)(*((_QWORD *)this + 1682) + 64LL))
          || *((_BYTE *)a2 + 209)
          && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 3) + 224LL))(*((_QWORD *)a2 + 3)) == *((_DWORD *)a2 + 61) )
        {
          v5 = 1;
        }
        v11 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 3) + 40LL))(*((_QWORD *)a2 + 3)) + 188);
        if ( v11 )
        {
          if ( COverlayContext::IsFullscreenSingleMonitor(this) )
          {
            if ( v11 == *((_DWORD *)a2 + 54) )
            {
              v21 = *((_DWORD *)a2 + 55);
            }
            else
            {
              v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 2) + 472LL))(
                      *((_QWORD *)this + 2),
                      v11,
                      &v21);
              v4 = v12;
              if ( v12 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC3Du, 0LL);
                return v4;
              }
              *((_DWORD *)a2 + 55) = v21;
              *((_DWORD *)a2 + 54) = v11;
            }
          }
        }
      }
    }
  }
  if ( *((_BYTE *)a2 + 208) != v7 || *((_BYTE *)a2 + 209) != v5 || *((_DWORD *)a2 + 53) != v21 )
  {
    v14 = *((_QWORD *)a2 + 3);
    v15 = *((unsigned int *)a2 + 57);
    LOBYTE(a4) = v7;
    v19 = *((_DWORD *)this + 24);
    v16 = *((_QWORD *)a2 + 4);
    v20[0] = 0;
    if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64, char, int, int, _BYTE *))(*(_QWORD *)v14 + 184LL))(
           v14,
           v16,
           v15,
           a4,
           v5,
           v21,
           v19,
           v20) >= 0 )
    {
      if ( *((_BYTE *)a2 + 208) != v7 )
      {
        LOBYTE(v17) = v7;
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)a2 + 3) + 296LL))(
          *((_QWORD *)a2 + 3),
          3LL,
          v17);
      }
      if ( !v7 && v20[0] )
        *((_BYTE *)this + 13434) = 1;
      if ( v5 || !v7 )
      {
        COverlayContext::OverlayPlaneInfo::UpdateLastNotifyPresentCount(a2);
        if ( *((_BYTE *)a2 + 208) && !*((_BYTE *)a2 + 209) )
          COverlayContext::OverlayPlaneInfo::ForceUpdateRenderingRealization(a2);
      }
      *((_DWORD *)a2 + 53) = v21;
      *((_BYTE *)a2 + 208) = v7;
      *((_BYTE *)a2 + 209) = v5;
    }
  }
  return v4;
}
