/*
 * XREFs of ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x18007B974
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x18007B41C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18001617C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x18002A738 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18002A990 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x18007C5C8 (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CLivePreview::_CollectExcludedImmersiveWindows(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // ebx
  struct _LIST_ENTRY *WindowListForDesktop; // r12
  struct _LIST_ENTRY *Flink; // rdi
  CWindowData *v8; // rcx
  int *v9; // rsi
  unsigned int v10; // ebp
  int v11; // r15d
  char ShouldCloneWindow; // al
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  CWindowData *v17; // [rsp+70h] [rbp+8h] BYREF
  int v18; // [rsp+80h] [rbp+18h] BYREF
  int v19; // [rsp+84h] [rbp+1Ch]

  v18 = 10;
  v3 = *(_QWORD *)(a1 + 288);
  v19 = 8;
  v5 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           v3);
  Flink = WindowListForDesktop->Flink;
  if ( WindowListForDesktop->Flink == WindowListForDesktop )
    return v5;
  while ( 2 )
  {
    v8 = (CWindowData *)Flink;
    v9 = &v18;
    v17 = (CWindowData *)Flink;
    v10 = 0;
    v11 = (int)Flink[7].Flink;
    while ( 1 )
    {
      if ( v11 == *v9 )
      {
        ShouldCloneWindow = CTransitionVisualController::ShouldCloneWindow(*((HWND *)v8 + 5));
        v8 = v17;
        if ( ShouldCloneWindow )
        {
          if ( CWindowData::IsWindowVisibleAndUncloaked(v17) )
            break;
        }
      }
      ++v10;
      ++v9;
      if ( v10 >= 2 )
        goto LABEL_15;
    }
    if ( (unsigned int)CLivePreview::_GetCoverageStateOfWindow(a1, v8) )
      goto LABEL_15;
    v13 = *(_DWORD *)(a2 + 24);
    v14 = v13 + 1;
    if ( v13 + 1 < v13 )
    {
      v5 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      goto LABEL_18;
    }
    if ( v14 <= *(_DWORD *)(a2 + 20) )
    {
      v5 = 0;
      *(_QWORD *)(*(_QWORD *)a2 + 8LL * v13) = v17;
      *(_DWORD *)(a2 + 24) = v14;
      goto LABEL_15;
    }
    v15 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8, 1, &v17);
    v5 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0xC0u);
    if ( (v5 & 0x80000000) != 0 )
    {
LABEL_18:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x2C6u);
      return v5;
    }
LABEL_15:
    Flink = Flink->Flink;
    if ( Flink != WindowListForDesktop )
      continue;
    return v5;
  }
}
