/*
 * XREFs of ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180014D24
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180068610 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180035AFC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18003F594 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180065260 (-GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _Init_thread_footer @ 0x1800E93B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E9418 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::RenderContentWorker(
        CVisual *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        struct IRenderTarget **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v11; // ebx
  struct CTreeData *TreeData; // rax
  unsigned int v13; // ecx
  int Cache; // eax
  int v15; // eax
  unsigned int v16; // ecx
  CDirtyRegion *v17; // rcx
  CDirtyRegion *v19; // rcx
  int v20; // eax
  unsigned int v21; // ecx
  CDirtyRegion *v22; // [rsp+40h] [rbp-18h] BYREF

  if ( dword_18033D374 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18033D374);
    if ( dword_18033D374 == -1 )
    {
      dword_180337EF4 = -2147022876;
      Init_thread_footer(&dword_18033D374);
    }
  }
  if ( CDrawingContext::IsBounding((CDrawingContext *)a5)
    || !(*(unsigned __int8 (__fastcall **)(__int64, struct IRenderTarget **))(*(_QWORD *)a2 + 256LL))(a2, a5) )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, struct IRenderTarget **, __int64, __int64, __int64))(*(_QWORD *)a2 + 200LL))(
            a2,
            a5,
            a6,
            a7,
            a8);
    v11 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, &dword_180337EF0, 2u, v20, 0x11A5u, 0LL);
      return (unsigned int)v11;
    }
    if ( !CDrawingContext::IsBounding((CDrawingContext *)a5) )
      ++dword_180339994;
    return 0;
  }
  v22 = 0LL;
  if ( CCommonRegistryData::m_fDisableDrawListCaching || !*((_BYTE *)a5 + 6350) )
    goto LABEL_10;
  v11 = -2003292412;
  TreeData = CVisual::FindTreeData(this, a5[757]);
  if ( TreeData )
  {
    Cache = CDrawListCacheSet::GetCache((struct CTreeData *)((char *)TreeData + 128), a3, 0, a5[44], &v22);
    v11 = Cache;
    if ( Cache < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, Cache, 0x7C1u, 0LL);
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180337EF0, 2u, v11, 0x1199u, 0LL);
  }
  else
  {
LABEL_10:
    v15 = (*(__int64 (__fastcall **)(__int64, struct IRenderTarget **, __int64, __int64, __int64, CDirtyRegion *))(*(_QWORD *)a2 + 288LL))(
            a2,
            a5,
            a6,
            a7,
            a8,
            v22);
    v11 = v15;
    if ( v15 >= 0 )
    {
      v17 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        CDirtyRegion::Release(v17);
      }
      return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_180337EF0, 2u, v15, 0x11A1u, 0LL);
  }
  v19 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    CDirtyRegion::Release(v19);
  }
  return (unsigned int)v11;
}
