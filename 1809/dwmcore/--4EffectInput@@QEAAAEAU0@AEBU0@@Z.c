/*
 * XREFs of ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x18005D4DC
 * Callers:
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x18005D438 (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$vec.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x1800CB2C0 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall EffectInput::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 *result; // rax

  v2 = *a2;
  v4 = *a1;
  if ( v4 != *a2 )
  {
    if ( v2 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*a2);
      v4 = *a1;
    }
    *a1 = v2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v6 = a1[1];
  v7 = a2[1];
  if ( v6 != v7 )
  {
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(a2[1]);
      v6 = a1[1];
    }
    a1[1] = v7;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_BYTE *)a1 + 16) = *((_BYTE *)a2 + 16);
  *(_OWORD *)(a1 + 3) = *(_OWORD *)(a2 + 3);
  *((_DWORD *)a1 + 10) = *((_DWORD *)a2 + 10);
  *((_BYTE *)a1 + 44) = *((_BYTE *)a2 + 44);
  *((_BYTE *)a1 + 45) = *((_BYTE *)a2 + 45);
  result = a1;
  *((_OWORD *)a1 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)a1 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)a1 + 5) = *((_OWORD *)a2 + 5);
  a1[12] = a2[12];
  *((_OWORD *)a1 + 3) = *((_OWORD *)a2 + 3);
  return result;
}
