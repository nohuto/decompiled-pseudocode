/*
 * XREFs of ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z @ 0x1800E0AD8
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0A98 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800E0B98 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?size@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBA_KXZ @ 0x1800E1728 (-size@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurfaceDe.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EFDAC (-clear_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$b_ea_1800EFDAC.c)
 */

bool __fastcall CRenderingTechniqueFragment::NeedsToBeBrokenUp(
        CRenderingTechniqueFragment *this,
        struct CBrushRenderingGraph *a2)
{
  bool v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  void *v7; // rcx
  bool v8; // zf
  _QWORD v10[3]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[448]; // [rsp+38h] [rbp-C8h] BYREF
  char v12; // [rsp+1F8h] [rbp+F8h] BYREF

  v10[0] = v11;
  v10[1] = v11;
  v10[2] = &v12;
  v2 = (unsigned int)CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(this, a2, v10) > 4;
  v5 = detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::size(
         v10,
         v3,
         v4);
  if ( v5 )
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::clear_region(
      v10,
      v6,
      v5);
  v7 = (void *)v10[0];
  v8 = v10[0] == (_QWORD)v11;
  v10[0] = 0LL;
  if ( v8 )
    v7 = 0LL;
  WPF::ProcessHeapImpl::Free(v7);
  return v2;
}
