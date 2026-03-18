/*
 * XREFs of ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x18022C050
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0A98 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800E0B98 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?size@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBA_KXZ @ 0x1800E1728 (-size@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurfaceDe.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EFDAC (-clear_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$b_ea_1800EFDAC.c)
 *     ?ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ @ 0x18022BFC0 (-ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ.c)
 */

_QWORD *__fastcall CRenderingTechniqueFragment::RemoveLargestInputFragment(
        __int64 a1,
        _QWORD *a2,
        const struct CBrushRenderingGraph *a3,
        int a4)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  _QWORD *v6; // r15
  __int64 v8; // rax
  unsigned int v9; // r12d
  unsigned int v10; // ebx
  __int64 v11; // r14
  unsigned int v12; // r13d
  CRenderingTechniqueFragment *v14; // rcx
  unsigned int CumulativeSurfaceInputCount; // eax
  __int64 v16; // rbx
  CRenderingTechniqueFragment *v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  char *v21; // rcx
  bool v22; // zf
  const char *v26[3]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v27[448]; // [rsp+58h] [rbp-A8h] BYREF
  char v28; // [rsp+218h] [rbp+118h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
  v26[0] = v27;
  v5 = 0LL;
  v26[1] = v27;
  v6 = a2;
  v26[2] = &v28;
  v8 = *(_QWORD *)(a1 + 32);
  v9 = 0;
  v10 = 0;
  v11 = (v4 - v8) >> 4;
  v12 = v11;
  if ( (_DWORD)v11 )
  {
    do
    {
      v14 = *(CRenderingTechniqueFragment **)(v5 + *(_QWORD *)(a1 + 32) + 8);
      if ( v14 )
      {
        CumulativeSurfaceInputCount = CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(
                                        v14,
                                        a3,
                                        (__int64 *)v26);
        if ( CumulativeSurfaceInputCount > v9 )
        {
          v9 = CumulativeSurfaceInputCount;
          v12 = v10;
        }
      }
      ++v10;
      v5 += 16LL;
    }
    while ( v10 < (unsigned int)v11 );
    v8 = *(_QWORD *)(a1 + 32);
    v6 = a2;
  }
  v16 = v8 + 16LL * v12;
  v17 = *(CRenderingTechniqueFragment **)(v16 + 8);
  *(_BYTE *)(v16 + 4) = 1;
  *(_DWORD *)v16 = a4;
  CRenderingTechniqueFragment::ClearConsumerUVClampingRequirement(v17);
  v18 = *(_QWORD *)(v16 + 8);
  *(_QWORD *)(v16 + 8) = 0LL;
  *v6 = v18;
  v19 = detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::size(v26);
  if ( v19 )
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::clear_region(
      v26,
      v20,
      v19);
  v21 = (char *)v26[0];
  v22 = v26[0] == v27;
  v26[0] = 0LL;
  if ( v22 )
    v21 = 0LL;
  WPF::ProcessHeapImpl::Free(v21);
  return v6;
}
