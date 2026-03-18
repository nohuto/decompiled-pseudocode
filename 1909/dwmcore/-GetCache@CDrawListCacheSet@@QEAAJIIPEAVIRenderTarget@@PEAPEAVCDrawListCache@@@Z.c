/*
 * XREFs of ?GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180065260
 * Callers:
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180014D24 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18003523C (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800686F0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EEC40 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18006674C (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x180066860 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawListCacheSet::GetCache(
        CDrawListCacheSet *this,
        int a2,
        __int64 a3,
        struct IRenderTarget *a4,
        struct CDrawListCache **a5)
{
  _QWORD *v5; // rsi
  volatile signed __int32 *v6; // rbx
  int v8; // r15d
  unsigned int v11; // ebp
  _QWORD *v12; // rdi
  _QWORD *v13; // rdx
  struct IRenderTarget *v14; // rax
  _QWORD *v15; // rcx
  __int64 i; // rax
  __int64 result; // rax
  _QWORD *v18; // rax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rax
  void *retaddr; // [rsp+68h] [rbp+0h]
  CDirtyRegion *v24; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(_QWORD **)this;
  v6 = 0LL;
  v8 = a3;
  v11 = 0;
  if ( *(_QWORD *)this == -1LL )
    ModuleFailFastForHRESULT(2147549183LL, retaddr, a3);
  v12 = *(_QWORD **)this;
  *(_QWORD *)this = -1LL;
  v13 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      v14 = (struct IRenderTarget *)v12[2];
      v15 = v12;
      if ( v14 == a4 )
        break;
      v12 = (_QWORD *)v12[10];
      if ( v14 )
        v15 = v13;
      v13 = v15;
      if ( !v12 )
        goto LABEL_16;
    }
  }
  if ( v12 )
    goto LABEL_5;
LABEL_16:
  if ( !v13 )
    v13 = v12;
  v12 = v13;
  if ( v13 )
  {
LABEL_5:
    for ( i = v12[3]; i != v12[4]; i += 16LL )
    {
      if ( *(_DWORD *)i == a2 && *(_DWORD *)(i + 4) == (_DWORD)a3 )
      {
        v6 = *(volatile signed __int32 **)(i + 8);
        v24 = (CDirtyRegion *)v6;
        if ( !v6 )
          goto LABEL_12;
        _InterlockedIncrement(v6 + 2);
        goto LABEL_11;
      }
    }
    goto LABEL_21;
  }
  v18 = DefaultHeap::Alloc(0x58uLL);
  v12 = v18;
  if ( !v18 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024882, 0x6Bu, 0LL);
    goto LABEL_12;
  }
  memset_0(v18, 0, 0x58uLL);
  v12[3] = v12 + 6;
  v12[4] = v12 + 6;
  v12[5] = v12 + 10;
  v12[10] = v5;
  v5 = v12;
  v12[2] = 0LL;
LABEL_21:
  v24 = 0LL;
  v20 = CDrawListCache::Create(&v24);
  v11 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x7Eu, 0LL);
LABEL_11:
    v6 = (volatile signed __int32 *)v24;
  }
  else
  {
    v6 = (volatile signed __int32 *)v24;
    if ( v24 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v24 + 2);
      v6 = (volatile signed __int32 *)v24;
    }
    v22 = detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::reserve_region(
            v12 + 3,
            (__int64)(v12[4] - v12[3]) >> 4);
    *(_DWORD *)v22 = a2;
    *(_DWORD *)(v22 + 4) = v8;
    *(_QWORD *)(v22 + 8) = v6;
    if ( v6 )
    {
      _InterlockedIncrement(v6 + 2);
      v6 = (volatile signed __int32 *)v24;
      CDirtyRegion::Release(v24);
    }
    if ( (struct IRenderTarget *)v12[2] != a4 )
    {
      (*(void (__fastcall **)(struct IRenderTarget *, _QWORD *))(*(_QWORD *)a4 + 184LL))(a4, v12);
      v12[2] = a4;
    }
  }
LABEL_12:
  *a5 = (struct CDrawListCache *)v6;
  result = v11;
  *(_QWORD *)this = v5;
  return result;
}
