/*
 * XREFs of ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801C40D8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18008E9C0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ @ 0x1801C37AC (-GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ.c)
 *     ?GetWorldUpVectorOverride@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1801C3800 (-GetWorldUpVectorOverride@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z @ 0x1801C4CD8 (-SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z.c)
 *     ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1801C4D20 (-SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetContextOverrides(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETCONTEXTOVERRIDES *a3)
{
  float v5; // xmm1_4
  __m128 v6; // xmm2
  __m128 v7; // xmm1
  __int64 v8; // rax
  char v9; // al
  struct D2D_VECTOR_3F v11; // [rsp+20h] [rbp-28h] BYREF
  FLOAT v12; // [rsp+38h] [rbp-10h]

  CVisual::GetWorldUpVectorOverride(this, &v11);
  v5 = *((float *)a3 + 2);
  if ( v5 != CVisual::GetWorldRenderingScaleOverride(this)
    || *((float *)a3 + 3) != v11.x
    || *((float *)a3 + 4) != v11.y
    || *((float *)a3 + 5) != v11.z )
  {
    CVisual::SetWorldRenderingScaleOverride(this, v5);
    v6 = (__m128)*((unsigned int *)a3 + 4);
    v7 = (__m128)*((unsigned int *)a3 + 3);
    v12 = *((float *)a3 + 5);
    *(_QWORD *)&v11.x = _mm_unpacklo_ps(v7, v6).m128_u64[0];
    v11.z = v12;
    CVisual::SetWorldUpVectorOverride(this, &v11);
    v8 = *((_QWORD *)this + 27);
    if ( (*(_DWORD *)(v8 + 4) & 0x40000) != 0 || (*(_DWORD *)(v8 + 4) & 0x20000) != 0 )
      v9 = 2;
    else
      v9 = 0;
    *((_BYTE *)this + 95) &= ~2u;
    *((_BYTE *)this + 95) |= v9;
    if ( (*((_DWORD *)this + 22) & 0x2000) != 0 )
    {
      *((_QWORD *)this + 56) = 0LL;
      CVisual::PropagateFlags((__int64)this, 0x10u, 0);
    }
  }
  return 0LL;
}
