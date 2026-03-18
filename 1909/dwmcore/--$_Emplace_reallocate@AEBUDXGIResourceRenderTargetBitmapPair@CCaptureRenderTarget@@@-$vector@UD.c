/*
 * XREFs of ??$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@QEAAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU23@AEBU23@@Z @ 0x18024D4B8
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18024DA3C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@AEAAXQEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@_K1@Z @ 0x18024E798 (-_Change_array@-$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V-$allocator@U.c)
 */

unsigned __int64 __fastcall std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Emplace_reallocate<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair const &>(
        __int64 a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // r15
  __int64 v5; // rax
  char *v6; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  unsigned __int64 v13; // r15
  __int64 v14; // r12
  char *v15; // r14
  __int64 v16; // rcx
  char *v17; // rdx
  _QWORD *v18; // r8
  char *v19; // rcx
  __int64 v20; // rax
  signed __int64 v21; // r14
  __int64 v22; // rax
  __int64 v24; // rax

  v4 = (unsigned __int64)&a2[-*(_QWORD *)a1];
  v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v6 = a2;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error((const char *)a1);
  v8 = v5 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v5 + 1;
  }
  else
  {
    v11 = v5 + 1;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v15 = (char *)(v13 + v14);
  *(_QWORD *)v15 = *a3;
  v16 = a3[1];
  *((_QWORD *)v15 + 1) = v16;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v17 = *(char **)(a1 + 8);
  v18 = (_QWORD *)v14;
  v19 = *(char **)a1;
  if ( v6 == v17 )
  {
    while ( v19 != v17 )
    {
      *v18 = *(_QWORD *)v19;
      v18 += 2;
      v24 = *((_QWORD *)v19 + 1);
      *((_QWORD *)v19 + 1) = 0LL;
      v19 += 16;
      *(v18 - 1) = v24;
    }
  }
  else
  {
    if ( v19 != v6 )
    {
      do
      {
        *v18 = *(_QWORD *)v19;
        v18 += 2;
        v20 = *((_QWORD *)v19 + 1);
        *((_QWORD *)v19 + 1) = 0LL;
        v19 += 16;
        *(v18 - 1) = v20;
      }
      while ( v19 != v6 );
      v17 = *(char **)(a1 + 8);
    }
    if ( v6 != v17 )
    {
      v21 = v15 - v6;
      do
      {
        *(_QWORD *)&v6[v21 + 16] = *(_QWORD *)v6;
        v22 = *((_QWORD *)v6 + 1);
        *((_QWORD *)v6 + 1) = 0LL;
        *(_QWORD *)&v6[v21 + 24] = v22;
        v6 += 16;
      }
      while ( v6 != v17 );
    }
  }
  std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Change_array(a1, v14, v8, v11);
  return v13 + *(_QWORD *)a1;
}
