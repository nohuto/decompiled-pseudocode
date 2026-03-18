/*
 * XREFs of ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800A96E0
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800034A0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A100 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180041660 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18006DAE4 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x18009F3A0 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x1800A2E28 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x1800A9030 (-ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyMaskIntermediate@CProjectedShadowCaster@@QEAAXXZ @ 0x1801ACFC4 (-DestroyMaskIntermediate@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x1801AD9C0 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 */

void __fastcall CVisual::OnClipChanged(CVisual *this)
{
  __int64 v1; // r8
  __int64 v2; // rdi
  __int64 v4; // rcx
  _BYTE *v5; // rdx
  unsigned int i; // eax
  _QWORD ***v7; // rcx
  _QWORD **v8; // rcx
  _QWORD *j; // rax
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v11; // r14
  unsigned __int64 v12; // rsi
  CProjectedShadowCaster *v13; // rbx

  v1 = *((_QWORD *)this + 28);
  v2 = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  if ( *(int *)v1 < 0 )
  {
    v4 = *(unsigned int *)(v1 + 4);
    v5 = (_BYTE *)(v1 + 8);
    for ( i = 0; i < (unsigned int)v4; ++v5 )
    {
      if ( *v5 == 1 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v4 )
      v7 = 0LL;
    else
      v7 = (_QWORD ***)(v1 + v4 + 15 + 8LL * i - (((_BYTE)v4 + 15) & 7));
    v8 = *v7;
    if ( v8 )
    {
      for ( j = *v8; j != v8; j = (_QWORD *)*j )
        *(j - 5) = 0LL;
    }
  }
  if ( (**((_DWORD **)this + 28) & 0x20000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this);
    v11 = *(CProjectedShadowCaster ***)ProjectedShadowCasters;
    v12 = (unsigned __int64)(*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters + 7LL) >> 3;
    if ( *(_QWORD *)ProjectedShadowCasters > *(_QWORD *)(ProjectedShadowCasters + 8) )
      v12 = 0LL;
    if ( v12 )
    {
      do
      {
        v13 = *v11;
        CProjectedShadowCaster::DestroyMaskIntermediate(*v11);
        (*(void (__fastcall **)(CProjectedShadowCaster *, __int64))(*(_QWORD *)v13 + 64LL))(v13, 6LL);
        ++v2;
        ++v11;
      }
      while ( v2 != v12 );
    }
  }
}
