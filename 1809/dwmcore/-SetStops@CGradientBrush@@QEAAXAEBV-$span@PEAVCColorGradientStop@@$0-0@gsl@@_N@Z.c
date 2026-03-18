/*
 * XREFs of ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x180005D50
 * Callers:
 *     ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x180005F34 (-ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLOR.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1801C306C (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 * Callees:
 *     ??$_Insert_range@V?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@1Uforward_iterator_tag@1@@Z @ 0x180005BAC (--$_Insert_range@V-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@@-.c)
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@01@0@Z @ 0x180005E94 (--9details@gsl@@YA_NV-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ??E?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ @ 0x180005ED4 (--E-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ.c)
 *     ??D?$span_iterator@V?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@$0A@@details@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@XZ @ 0x180005F08 (--D-$span_iterator@V-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@$0A@@details@gsl@@QEB.c)
 *     ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x1800061EC (-FlattenStops@CGradientBrush@@AEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CGradientBrush::SetStops(CGradientBrush *this, _QWORD *a2, char a3)
{
  struct CResource **v6; // rax
  int v7; // eax
  struct CResource **v8; // r14
  __int64 v9; // r12
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  __int128 i; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int128 v16; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]

  *((_QWORD *)&v15 + 1) = *a2;
  *(_QWORD *)&v15 = a2;
  for ( i = (unsigned __int64)a2; ; gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++(&i) )
  {
    v16 = i;
    if ( !(unsigned __int8)gsl::details::operator!=(&v16, &v15) )
      break;
    v6 = (struct CResource **)gsl::details::span_iterator<gsl::span<COverlayContext::OverlayPlaneInfo *,-1>,0>::operator*(&i);
    v7 = CResource::RegisterNotifier(this, *v6);
    if ( v7 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v7, retaddr);
  }
  if ( !a3 )
  {
    v8 = (struct CResource **)*((_QWORD *)this + 14);
    v9 = 0LL;
    v10 = (unsigned __int64)(*((_QWORD *)this + 15) - (_QWORD)v8 + 7LL) >> 3;
    if ( (unsigned __int64)v8 > *((_QWORD *)this + 15) )
      v10 = 0LL;
    if ( v10 )
    {
      do
      {
        CResource::UnRegisterNotifierInternal(this, *v8);
        ++v9;
        ++v8;
      }
      while ( v9 != v10 );
    }
    *((_QWORD *)this + 15) = *((_QWORD *)this + 14);
  }
  v11 = (_QWORD *)*((_QWORD *)this + 15);
  *((_QWORD *)&v15 + 1) = *a2;
  *(_QWORD *)&v15 = a2;
  i = (unsigned __int64)a2;
  v16 = v15;
  v15 = (unsigned __int64)a2;
  std::vector<CColorGradientStop *>::_Insert_range<gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>>(
    (__int64)this + 112,
    v11,
    &v15,
    &v16);
  CGradientBrush::FlattenStops(this);
  v12 = *(_QWORD *)this;
  *((_BYTE *)this + 168) = 0;
  return (*(__int64 (__fastcall **)(CGradientBrush *, __int64, CGradientBrush *))(v12 + 64))(this, 6LL, this);
}
