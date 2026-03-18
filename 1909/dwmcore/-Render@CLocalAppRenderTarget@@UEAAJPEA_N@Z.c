/*
 * XREFs of ?Render@CLocalAppRenderTarget@@UEAAJPEA_N@Z @ 0x18024F150
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180058DE4 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcOcclusion@CLocalAppRenderTarget@@IEAAJXZ @ 0x18024EA28 (-CalcOcclusion@CLocalAppRenderTarget@@IEAAJXZ.c)
 *     ?EnsureRenderTarget@CLocalAppRenderTarget@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x18024EB68 (-EnsureRenderTarget@CLocalAppRenderTarget@@IEAAJAEBUD2D_SIZE_F@@@Z.c)
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJXZ @ 0x18024F228 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CLocalAppRenderTarget::Render(CLocalAppRenderTarget *this, bool *a2)
{
  unsigned int v2; // edi
  CDirtyRegion *v5; // rcx
  signed int v6; // eax
  __int64 v7; // rcx
  signed int v8; // eax
  __int64 v9; // rcx
  __int64 result; // rax

  v2 = 0;
  *((_BYTE *)this + 136) = 0;
  v5 = (CDirtyRegion *)*((_QWORD *)this + 15);
  if ( v5 && !CDirtyRegion::IsEmpty(v5) )
  {
    v6 = CLocalAppRenderTarget::EnsureRenderTarget(
           (CLocalAppRenderTarget *)((char *)this - 64),
           (const struct D2D_SIZE_F *)(*(_QWORD *)(*((_QWORD *)this + 7) + 24LL) + 132LL));
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x53u, 0LL);
    }
    else if ( *((_QWORD *)this + 14) )
    {
      CLocalAppRenderTarget::CalcOcclusion((CLocalAppRenderTarget *)((char *)this - 64));
      v8 = CLocalAppRenderTarget::RenderDirtyRegion((CLocalAppRenderTarget *)((char *)this - 64));
      v2 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x59u, 0LL);
      else
        *((_BYTE *)this + 136) = 1;
    }
  }
  *a2 = *((_BYTE *)this + 136);
  result = v2;
  *((_QWORD *)this + 16) = 0LL;
  return result;
}
