/*
 * XREFs of ?DirtyProjectedShadowReceivers@CVisual@@AEAAXXZ @ 0x1800664B0
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800034A0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180041660 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x1801AD9C0 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 */

void __fastcall CVisual::DirtyProjectedShadowReceivers(CVisual *this)
{
  __int64 v1; // rbx
  __int64 ProjectedShadowCasters; // rax
  _QWORD *v3; // rsi
  unsigned __int64 v4; // rdi

  if ( (**((_DWORD **)this + 28) & 0x20000) != 0 )
  {
    v1 = 0LL;
    if ( !CCommonRegistryData::m_fDisableProjectedShadows )
    {
      ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this);
      v3 = *(_QWORD **)ProjectedShadowCasters;
      v4 = (unsigned __int64)(*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters + 7LL) >> 3;
      if ( *(_QWORD *)ProjectedShadowCasters > *(_QWORD *)(ProjectedShadowCasters + 8) )
        v4 = 0LL;
      if ( v4 )
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 64LL))(*v3, 6LL);
          ++v1;
          ++v3;
        }
        while ( v1 != v4 );
      }
    }
  }
}
