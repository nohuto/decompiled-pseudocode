/*
 * XREFs of ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180030B48
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180030D74 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?RecordCompositionMode@CCompositionSurfaceInfo@@QEAAXPEAUHMONITOR__@@W4BufferCompositionMode@@_N@Z @ 0x1800129C0 (-RecordCompositionMode@CCompositionSurfaceInfo@@QEAAXPEAUHMONITOR__@@W4BufferCompositionMode@@_N.c)
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x1800207E4 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x1800A1078 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800D7DB8 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800D7F60 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x1801491D8 (McTemplateU0xq.c)
 *     ?CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z @ 0x180178DE0 (-CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z.c)
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x1801790F0 (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180179534 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z @ 0x180179554 (-TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall COverlayContext::ApplyOverlayOrDirectFlipConfiguration(COverlayContext *this, bool *a2, bool *a3)
{
  int v3; // esi
  char v4; // r15
  bool v5; // r14
  __int64 v8; // rbx
  char v9; // bp
  __int64 v10; // r12
  CDirectFlipInfo **v11; // rbx
  __int64 v12; // rcx
  CDirectFlipInfo *v13; // rax
  char v14; // al
  _BYTE *v15; // rcx
  __int64 result; // rax
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v18; // r9
  int v19; // eax
  int Candidate; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rcx
  unsigned int v25; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF
  bool *v27; // [rsp+78h] [rbp+10h]

  v27 = a2;
  v3 = 0;
  v4 = 0;
  v26 = 0LL;
  v5 = 0;
  if ( *((_BYTE *)this + 13431) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 128LL))(
      *((_QWORD *)this + 2),
      *((unsigned int *)this + 27));
  v8 = *((_QWORD *)this + 1054);
  v9 = 1;
  v10 = *((_QWORD *)this + 1055);
  while ( v8 != v10 )
  {
    CCompositionSurfaceInfo::RecordCompositionMode(*(_QWORD *)(v8 + 24), *((_QWORD *)this + 11), 1u, 1);
    v8 += 256LL;
  }
  v11 = (CDirectFlipInfo **)((char *)this + 13288);
  v12 = *((_QWORD *)this + 1661);
  if ( v12
    && *(_QWORD *)(v12 + 24) == *((_QWORD *)this + 1647)
    && *(_QWORD *)(v12 + 32) == *((_QWORD *)this + 1648)
    && *(_QWORD *)(v12 + 72) == *((_QWORD *)this + 1653) )
  {
    v5 = *(_DWORD *)(v12 + 100) == *((_DWORD *)this + 3313);
  }
  if ( *((int *)this + 3304) > 0
    && ((*((_QWORD *)this + 1055) - *((_QWORD *)this + 1054)) & 0xFFFFFFFFFFFFFF00uLL) == 0
    && !*((_DWORD *)this + 3350) )
  {
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                      + 1648));
    v4 = 1;
    if ( RenderingRealizationNoRef )
      (**(void (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))RenderingRealizationNoRef)(
        RenderingRealizationNoRef,
        &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
        &v26);
    if ( v26 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v26 + 40LL))(v26) )
    {
      v4 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_7;
      v18 = 0LL;
      goto LABEL_46;
    }
    if ( *((int *)this + 3305) >= 2
      && (!v5 || *((_BYTE *)*v11 + 86))
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 424LL))(*((_QWORD *)this + 2)) )
    {
      v4 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_7;
      v18 = 2LL;
      goto LABEL_46;
    }
    if ( v5 && !CDirectFlipInfo::RenderingRealizationChanged(*v11) )
    {
      v19 = *((_DWORD *)this + 3305);
      if ( v19 >= 2 && v19 != 3 )
      {
        v4 = 0;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v18 = 1LL;
LABEL_46:
          McTemplateU0xq(
            *(_QWORD *)(*((_QWORD *)this + 1648) + 40LL),
            &EVTDESC_ADVANCED_DIRECTFLIP_CANCEL,
            (unsigned int)*(_QWORD *)(*((_QWORD *)this + 1648) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*((_QWORD *)this + 1648) + 40LL)) << 32),
            v18);
        }
      }
    }
  }
LABEL_7:
  v13 = *v11;
  if ( !*v11 )
    goto LABEL_8;
  if ( *((int *)v13 + 16) < 4 || !v4 || !v5 )
  {
    COverlayContext::ClearDirectFlip(this);
    v13 = *v11;
    *((_BYTE *)this + 13432) = 1;
  }
  if ( !v13 )
  {
LABEL_8:
    if ( v4 )
    {
      Candidate = CDirectFlipInfo::CreateCandidate(
                    (COverlayContext *)((char *)this + 13152),
                    (struct CDirectFlipInfo **)this + 1661);
      v3 = Candidate;
      if ( Candidate < 0 )
      {
        v25 = 784;
        goto LABEL_63;
      }
      v22 = CDirectFlipInfo::EnsurePinnedResources(*v11);
      v3 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x312u);
      if ( v3 == -2005532292 )
      {
        COverlayContext::ClearDirectFlip(this);
        v3 = 0;
      }
      else if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v3, 0x31Eu);
        goto LABEL_14;
      }
      if ( *v11 )
      {
        CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)(*((_QWORD *)*v11 + 4) + 48LL), 1, 1);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0xq(v24, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *((_QWORD *)this + 11), 1LL);
      }
    }
  }
  if ( *v11 )
  {
    Candidate = CDirectFlipInfo::TransferAdvancedDirectFlipState(*v11, (COverlayContext *)((char *)this + 13152));
    v3 = Candidate;
    if ( Candidate >= 0 )
    {
      if ( *((int *)*v11 + 17) >= 2 )
        *((_BYTE *)this + 13432) = 1;
      goto LABEL_10;
    }
    v25 = 813;
LABEL_63:
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, Candidate, v25);
    goto LABEL_14;
  }
LABEL_10:
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1644) + 8LL))((char *)this + 13152);
  v14 = *((_BYTE *)this + 13431);
  if ( !*((_BYTE *)this + 13432) && !v14 )
  {
    v14 = 0;
    v9 = 0;
  }
  v15 = v27;
  *a3 = v14;
  *v15 = v9;
LABEL_14:
  if ( v3 < 0 )
    COverlayContext::Reset(this);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  result = (unsigned int)v3;
  *(_WORD *)((char *)this + 13431) = 0;
  return result;
}
