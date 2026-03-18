/*
 * XREFs of ??$AddChildLink@VCVisual@@@CVisualTreeDumpContext@@QEAAXPEAVCVisual@@@Z @ 0x1801C1EA0
 * Callers:
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801C2BA0 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x180162680 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ??$RegisterNodeForVisit@VCVisual@@@CDebugTreeDumper@@QEAAXPEAVCVisual@@_N@Z @ 0x180174098 (--$RegisterNodeForVisit@VCVisual@@@CDebugTreeDumper@@QEAAXPEAVCVisual@@_N@Z.c)
 */

__int64 __fastcall CVisualTreeDumpContext::AddChildLink<CVisual>(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  _BYTE *v5; // rdx
  __int64 result; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v7 = a2;
    v3 = a1 + 88;
    v5 = *(_BYTE **)(v3 + 8);
    if ( *(_BYTE **)(v3 + 16) == v5 )
    {
      std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(v3, v5, &v7);
    }
    else
    {
      *(_QWORD *)v5 = a2;
      *(_QWORD *)(v3 + 8) += 8LL;
    }
    return CDebugTreeDumper::RegisterNodeForVisit<CVisual>(*(_QWORD *)(a1 + 112), a2);
  }
  return result;
}
