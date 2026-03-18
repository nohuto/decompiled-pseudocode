/*
 * XREFs of ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x1800292D0
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800B63D0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180027190 (-GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x18002777C (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800293DC (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::GetDrawListCacheForCommandRun(
        CRenderData *this,
        struct IRenderTarget **a2,
        struct CTreeData *a3,
        int a4,
        struct CDrawListCache **a5)
{
  int Cache; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  struct IRenderTarget **v11; // r8
  CMILRefCountBase *v12; // rdi
  unsigned __int8 (__fastcall *v13)(CRenderData *, CMILRefCountBase *, struct IRenderTarget **, _DWORD *, _QWORD); // rax
  int v15; // eax
  unsigned int v16; // ecx
  CMILRefCountBase *v17; // [rsp+30h] [rbp-18h] BYREF
  _DWORD v18[4]; // [rsp+38h] [rbp-10h] BYREF

  v17 = 0LL;
  if ( CCommonRegistryData::m_fDisableDrawListCaching || !*((_BYTE *)a2 + 6350) )
  {
    v15 = CDrawListCache::Create(&v17);
    v9 = v15;
    if ( v15 >= 0 )
    {
      v12 = v17;
LABEL_6:
      *a5 = v12;
      return v9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1ADu);
  }
  else
  {
    Cache = CDrawListCacheSet::GetCache((struct CTreeData *)((char *)a3 + 128), 3, a4, a2[44], &v17);
    v9 = Cache;
    if ( Cache >= 0 )
    {
      v10 = *(_QWORD *)this;
      v11 = a2;
      v12 = v17;
      v18[0] = 1065353216;
      v13 = *(unsigned __int8 (__fastcall **)(CRenderData *, CMILRefCountBase *, struct IRenderTarget **, _DWORD *, _QWORD))(v10 + 224);
      v18[1] = 1065353216;
      if ( v13(this, v17, v11, v18, 0LL) )
        CDrawListCache::Invalidate(v12);
      goto LABEL_6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, Cache, 0x1A3u);
  }
  if ( v17 )
    CMILRefCountBase::Release(v17);
  return v9;
}
