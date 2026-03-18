/*
 * XREFs of ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801B78E4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ @ 0x1801B7024 (-GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ.c)
 *     ?GetWorldUpVectorOverride@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1801B7078 (-GetWorldUpVectorOverride@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z @ 0x1801B8724 (-SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z.c)
 *     ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1801B876C (-SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetContextOverrides(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETCONTEXTOVERRIDES *a3)
{
  float v5; // xmm1_4
  __m128 v6; // xmm1
  __int64 v7; // rax
  char v8; // al
  struct D2D_VECTOR_3F v10; // [rsp+20h] [rbp-28h] BYREF
  FLOAT v11; // [rsp+38h] [rbp-10h]

  CVisual::GetWorldUpVectorOverride(this, &v10);
  v5 = *((float *)a3 + 2);
  if ( v5 != CVisual::GetWorldRenderingScaleOverride(this)
    || *((float *)a3 + 3) != v10.x
    || *((float *)a3 + 4) != v10.y
    || *((float *)a3 + 5) != v10.z )
  {
    CVisual::SetWorldRenderingScaleOverride(this, v5);
    v6 = (__m128)*((unsigned int *)a3 + 4);
    v11 = *((float *)a3 + 5);
    *(_QWORD *)&v10.x = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 3), v6).m128_u64[0];
    v10.z = v11;
    CVisual::SetWorldUpVectorOverride(this, &v10);
    v7 = *((_QWORD *)this + 27);
    if ( (*(_DWORD *)(v7 + 4) & 0x40000) != 0 || (*(_DWORD *)(v7 + 4) & 0x20000) != 0 )
      v8 = 4;
    else
      v8 = 0;
    *((_BYTE *)this + 95) &= ~4u;
    *((_BYTE *)this + 95) |= v8;
    if ( (*((_DWORD *)this + 22) & 0x800) != 0 )
    {
      *((_QWORD *)this + 56) = 0LL;
      CVisual::PropagateFlags((__int64)this, 0x10u, 0);
    }
  }
  return 0LL;
}
