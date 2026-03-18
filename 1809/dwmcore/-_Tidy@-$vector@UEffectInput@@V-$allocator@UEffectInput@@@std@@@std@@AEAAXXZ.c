/*
 * XREFs of ?_Tidy@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXXZ @ 0x18005E0B0
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x1800CB2C0 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180063BC0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<EffectInput>::_Tidy(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        v4 = v1[1];
        if ( v4 )
        {
          v1[1] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        v5 = *v1;
        if ( *v1 )
        {
          *v1 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        v1 += 13;
      }
      while ( v1 != v3 );
      v1 = *(__int64 **)a1;
    }
    v6 = *(_QWORD *)(a1 + 16) - (_QWORD)v1;
    v9 = v1;
    v7 = 104 * (v6 / 104);
    v8 = v7;
    if ( v7 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v9, &v8);
      v7 = v8;
      v1 = (__int64 *)v9;
    }
    operator delete(v1, v7);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
