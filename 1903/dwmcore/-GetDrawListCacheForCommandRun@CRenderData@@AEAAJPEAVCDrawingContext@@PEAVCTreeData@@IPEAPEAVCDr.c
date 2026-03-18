/*
 * XREFs of ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18007B26C
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800961D0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18004D300 (-GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x18004EBCC (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18007A8E8 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?IsDrawListCachingDisabled@CDrawingContext@@QEBA_NXZ @ 0x18007B34C (-IsDrawListCachingDisabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::GetDrawListCacheForCommandRun(
        CRenderData *this,
        struct CDrawingContext *a2,
        struct CTreeData *a3,
        __int64 a4,
        struct CDrawListCache **a5)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // r10d
  int Cache; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  unsigned __int8 (__fastcall *v14)(CRenderData *, CDrawListCache *, struct CDrawingContext *, _DWORD *, _QWORD); // rax
  CDirtyRegion *v15; // rdx
  int v17; // eax
  unsigned int v18; // ecx
  CDrawListCache *v19; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v20[2]; // [rsp+38h] [rbp-8h] BYREF

  v19 = 0LL;
  if ( CDrawingContext::IsDrawListCachingDisabled(a2) )
  {
    v17 = CDrawListCache::Create(&v19);
    v12 = v17;
    if ( v17 >= 0 )
    {
LABEL_5:
      v15 = 0LL;
      *a5 = v19;
      goto LABEL_6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1B3u, 0LL);
  }
  else
  {
    Cache = CDrawListCacheSet::GetCache(
              (CDrawListCacheSet *)(v8 + 128),
              2,
              v9,
              *(struct IRenderTarget **)(v7 + 352),
              &v19);
    v12 = Cache;
    if ( Cache >= 0 )
    {
      v13 = *(_QWORD *)this;
      v20[0] = 1065353216;
      v14 = *(unsigned __int8 (__fastcall **)(CRenderData *, CDrawListCache *, struct CDrawingContext *, _DWORD *, _QWORD))(v13 + 272);
      v20[1] = 1065353216;
      if ( v14(this, v19, a2, v20, 0LL) )
        CDrawListCache::Invalidate(v19);
      goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, Cache, 0x1A9u, 0LL);
  }
  v15 = v19;
LABEL_6:
  if ( v15 )
  {
    v19 = 0LL;
    CDirtyRegion::Release(v15);
  }
  return v12;
}
