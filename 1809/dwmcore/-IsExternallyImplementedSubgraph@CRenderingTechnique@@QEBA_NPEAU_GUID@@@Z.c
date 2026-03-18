/*
 * XREFs of ?IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z @ 0x1800E0514
 * Callers:
 *     ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x18007708C (-IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x1800E0494 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderingTechnique::IsExternallyImplementedSubgraph(CRenderingTechnique *this, struct _GUID *a2)
{
  char v3; // di
  unsigned int *v5; // rbx
  __int64 v6; // rax

  v3 = *((_BYTE *)this + 96) & 1;
  if ( v3 && a2 )
  {
    v5 = (unsigned int *)*((_QWORD *)this + 2);
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 16LL))(*(_QWORD *)v5);
    (*(void (__fastcall **)(__int64, _QWORD, struct _GUID *))(*(_QWORD *)v6 + 96LL))(v6, v5[4], a2);
  }
  return v3;
}
