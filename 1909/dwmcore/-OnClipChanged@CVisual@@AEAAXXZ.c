/*
 * XREFs of ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800B9BD0
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800219C0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800671F0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18007B610 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180087420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x1800A09A8 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800B9728 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 * Callees:
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x180004010 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x180004130 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 */

void __fastcall CVisual::OnClipChanged(CVisual *this)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  __int64 v4; // rcx
  _BYTE *v5; // rdx
  unsigned int i; // eax
  _QWORD ***v7; // rcx
  _QWORD **v8; // rcx
  _QWORD *j; // rax
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v11; // rdi
  unsigned __int64 v12; // rsi

  v1 = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  v3 = *((_QWORD *)this + 28);
  if ( *(int *)v3 < 0 )
  {
    v4 = *(unsigned int *)(v3 + 4);
    v5 = (_BYTE *)(v3 + 8);
    for ( i = 0; i < (unsigned int)v4; ++v5 )
    {
      if ( *v5 == 1 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v4 )
      v7 = 0LL;
    else
      v7 = (_QWORD ***)(v4 + 15 + v3 + 8LL * i - (((_BYTE)v4 + 15) & 7));
    v8 = *v7;
    if ( v8 )
    {
      for ( j = *v8; j != v8; j = (_QWORD *)*j )
        *(j - 5) = 0LL;
    }
  }
  if ( (**((_DWORD **)this + 28) & 0x20000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters((__int64)this);
    v11 = *(CProjectedShadowCaster ***)ProjectedShadowCasters;
    v12 = (unsigned __int64)(*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters + 7LL) >> 3;
    if ( *(_QWORD *)ProjectedShadowCasters > *(_QWORD *)(ProjectedShadowCasters + 8) )
      v12 = 0LL;
    if ( v12 )
    {
      do
      {
        CProjectedShadowCaster::InvalidateMaskContent(*v11);
        ++v1;
        ++v11;
      }
      while ( v1 != v12 );
    }
  }
}
