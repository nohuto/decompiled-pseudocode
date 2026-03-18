/*
 * XREFs of ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001391C
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800AF360 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x1801B8014 (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 * Callees:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180027190 (-GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180030964 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18008DCB4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _Init_thread_footer @ 0x1800EC020 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800EC088 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::RenderContentWorker(
        CVisual *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        struct IRenderTarget **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  CMILRefCountBase *v12; // rbx
  int v13; // edi
  struct CTreeData *TreeData; // rax
  unsigned int v15; // ecx
  int Cache; // eax
  int v17; // eax
  unsigned int v18; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  struct CDrawListCache *v22; // [rsp+40h] [rbp-28h] BYREF

  if ( dword_18030BCFC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18030BCFC);
    if ( dword_18030BCFC == -1 )
    {
      dword_18030687C = -2147022876;
      Init_thread_footer(&dword_18030BCFC);
    }
  }
  if ( CDrawingContext::IsBounding((CDrawingContext *)a5)
    || !(*(unsigned __int8 (__fastcall **)(__int64, struct IRenderTarget **))(*(_QWORD *)a2 + 208LL))(a2, a5) )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, struct IRenderTarget **, __int64, __int64, __int64))(*(_QWORD *)a2 + 160LL))(
            a2,
            a5,
            a6,
            a7,
            a8);
    v13 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, &dword_180306878, 2u, v20, 0x110Eu);
      return (unsigned int)v13;
    }
    if ( !CDrawingContext::IsBounding((CDrawingContext *)a5) )
      ++dword_1803081C4;
    return 0;
  }
  v12 = 0LL;
  v22 = 0LL;
  if ( CCommonRegistryData::m_fDisableDrawListCaching || !*((_BYTE *)a5 + 6350) )
    goto LABEL_11;
  v13 = -2003292412;
  TreeData = CVisual::FindTreeData(this, a5[757]);
  if ( TreeData )
  {
    Cache = CDrawListCacheSet::GetCache((struct CTreeData *)((char *)TreeData + 128), a3, a4, a5[44], &v22);
    v13 = Cache;
    if ( Cache < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, Cache, 0x774u);
    v12 = v22;
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_180306878, 2u, v13, 0x1102u);
  }
  else
  {
LABEL_11:
    v17 = (*(__int64 (__fastcall **)(__int64, struct IRenderTarget **, __int64, __int64, __int64, CMILRefCountBase *))(*(_QWORD *)a2 + 240LL))(
            a2,
            a5,
            a6,
            a7,
            a8,
            v12);
    v13 = v17;
    if ( v17 >= 0 )
    {
      if ( v12 )
        CMILRefCountBase::Release(v12);
      return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_180306878, 2u, v17, 0x110Au);
  }
  if ( v12 )
    CMILRefCountBase::Release(v12);
  return (unsigned int)v13;
}
