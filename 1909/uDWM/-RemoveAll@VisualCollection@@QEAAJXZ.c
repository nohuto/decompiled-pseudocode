/*
 * XREFs of ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180036AD8
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180003834 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800090A8 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18000FFB0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180018AB0 (--1CVisual@@MEAA@XZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180026AD0 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x1800299B8 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180029F64 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18002D210 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18004AFB4 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x18007ADBC (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x18007B35C (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18007B4DC (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18008BCF4 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x18008ECC0 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800A5CCC (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800AF7B8 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180033B00 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VisualCollection::RemoveAll(VisualCollection *this)
{
  unsigned int v1; // edi
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  void *v10; // [rsp+28h] [rbp-10h]

  v1 = 0;
  if ( *((_DWORD *)this + 10) )
  {
    v4 = 0LL;
    do
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v4);
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, 0LL);
      v1 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x14Au, v10);
        return v1;
      }
      v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v4);
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1LL);
        *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v4) = 0LL;
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 10) );
    v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v8 + 16) + 456LL))(
           *(_QWORD *)(v8 + 16),
           *(unsigned int *)(v8 + 24));
    v1 = v9;
    if ( v9 >= 0 )
      goto LABEL_2;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x14Fu, v10);
  }
  else
  {
LABEL_2:
    *((_DWORD *)this + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 16, 8u);
  }
  return v1;
}
