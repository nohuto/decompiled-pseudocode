/*
 * XREFs of ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x1800C8544
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x1800CB2C0 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x1801D49D8 (--0EffectInput@@QEAA@AEBU0@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall std::vector<EffectInput>::reserve(__int64 **a1, unsigned __int64 a2)
{
  signed __int64 v2; // r8
  unsigned __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 *v8; // r15
  __int64 v9; // rsi
  __int64 *v10; // rbx
  EffectInput *v11; // rbp
  __int64 *v12; // rbp
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (char *)a1[2] - (char *)*a1;
  result = (unsigned __int64)((unsigned __int128)(v2 * (__int128)0x4EC4EC4EC4EC4EC5LL) >> 64) >> 63;
  if ( a2 > v2 / 104 )
  {
    if ( a2 > 0x276276276276276LL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v5 = 104 * a2;
    v6 = ((char *)a1[1] - (char *)*a1) / 104;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(104 * a2);
    v8 = a1[1];
    v9 = v7;
    v10 = *a1;
    v11 = (EffectInput *)v7;
    if ( *a1 != v8 )
    {
      do
      {
        EffectInput::EffectInput(v11, (const struct EffectInput *)v10);
        v11 = (EffectInput *)((char *)v11 + 104);
        v10 += 13;
      }
      while ( v10 != v8 );
      v10 = *a1;
    }
    if ( v10 )
    {
      v12 = a1[1];
      if ( v10 != v12 )
      {
        do
        {
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v10 + 1);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v10);
          v10 += 13;
        }
        while ( v10 != v12 );
        v10 = *a1;
      }
      std::_Deallocate<16,0>(v10, 104 * (((char *)a1[2] - (char *)v10) / 104));
    }
    *a1 = (__int64 *)v9;
    a1[1] = (__int64 *)(v9 + 104 * v6);
    result = v5 + v9;
    a1[2] = (__int64 *)(v5 + v9);
  }
  return result;
}
