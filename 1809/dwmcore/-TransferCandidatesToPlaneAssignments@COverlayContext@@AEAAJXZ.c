/*
 * XREFs of ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1800D51A0
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18004A458 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x1800207E4 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x1800D539C (-swap@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverl.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800D7F38 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?RectContainedInDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016C4B8 (-RectContainedInDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?erase@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x18016CBBC (-erase@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801BCDF0 (-PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x1801BD35C (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

__int64 __fastcall COverlayContext::TransferCandidatesToPlaneAssignments(COverlayContext *this)
{
  char *v1; // r15
  int v3; // r14d
  __int64 *v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rbx
  bool v8; // cf
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int i; // ebp
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  char v19; // [rsp+68h] [rbp+10h] BYREF

  v1 = (char *)this + 8432;
  v3 = 0;
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 8432);
  v4 = (__int64 *)((char *)this + 192);
  v5 = *((_QWORD *)this + 25);
  v6 = *((_QWORD *)this + 24);
  if ( ((v5 - v6) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
  {
    while ( v6 != v5 )
    {
      if ( !*(_BYTE *)(v6 + 200) )
      {
        v8 = CCommonRegistryData::m_dwOverlayTestMode < 3;
        *(_BYTE *)(v6 + 248) = 1;
        if ( v8 )
        {
          v9 = CCompositionSurfaceInfo::CBindInfo::PinResources(
                 (CCompositionSurfaceInfo::CBindInfo *)(*(_QWORD *)(v6 + 24) + 48LL),
                 *(struct _LUID *)((char *)this + 80));
          v3 = v9;
          if ( v9 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1080u);
          CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)(*(_QWORD *)(v6 + 24) + 48LL), 2, 1);
          if ( v3 == -2005532292 )
          {
            v12 = *v4;
            v3 = 0;
            for ( i = 0; i < (unsigned int)((__int64)(*((_QWORD *)this + 25) - *((_QWORD *)this + 24)) >> 8); v12 = *v4 )
            {
              v14 = (unsigned __int64)i << 8;
              if ( *(_BYTE *)(v14 + v12 + 248) )
              {
                v15 = *(_QWORD *)(v14 + v12 + 24);
                if ( *(_BYTE *)(v15 + 228) )
                {
                  CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(v15 + 48));
                  v12 = *v4;
                }
                v18 = v14 + v12;
                detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
                  (char *)this + 192,
                  &v19,
                  &v18);
              }
              else
              {
                ++i;
              }
            }
            break;
          }
          if ( v3 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v3, 0x1090u);
            goto LABEL_2;
          }
        }
        if ( !*((_BYTE *)this + 13432) && !(unsigned __int8)COverlayContext::RectContainedInDirty(this, v6 + 152) )
          *((_BYTE *)this + 13432) = 1;
        *(_BYTE *)(v6 + 200) = 1;
        *(_BYTE *)(v6 + 224) = 1;
      }
      v6 += 256LL;
    }
    v16 = *((_QWORD *)this + 25);
    v17 = *v4;
    if ( ((v16 - *((_QWORD *)this + 24)) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
    {
      while ( v17 != v16 )
      {
        *(_BYTE *)(v17 + 248) = 0;
        v17 += 256LL;
      }
      detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
        v1,
        (char *)this + 192);
      *((_BYTE *)this + 13417) = 1;
    }
    else
    {
      *((_DWORD *)this + 27) = *((_DWORD *)this + 26);
      *((_BYTE *)this + 13431) = 1;
    }
    if ( (*((_QWORD *)this + 1570) - *((_QWORD *)this + 1569)) / 120LL && !*((_DWORD *)this + 3351) )
      *((_BYTE *)this + 13432) = 1;
  }
LABEL_2:
  *((_DWORD *)this + 3255) = 0;
  return (unsigned int)v3;
}
