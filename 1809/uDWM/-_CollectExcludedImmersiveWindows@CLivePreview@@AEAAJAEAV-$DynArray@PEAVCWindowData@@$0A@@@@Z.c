/*
 * XREFs of ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x180075040
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x180074B14 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000C108 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180020FE0 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180028BF0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x180036C3C (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x180075C5C (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CLivePreview::_CollectExcludedImmersiveWindows(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // edi
  struct _LIST_ENTRY *WindowListForDesktop; // r14
  struct _LIST_ENTRY *Flink; // rbx
  int *v8; // rsi
  int v9; // r15d
  CWindowData *v10; // rcx
  unsigned int v11; // ebp
  char ShouldCloneWindow; // al
  int v13; // eax
  CWindowData *v15; // [rsp+70h] [rbp+8h] BYREF
  int v16; // [rsp+80h] [rbp+18h] BYREF
  int v17; // [rsp+84h] [rbp+1Ch]

  v16 = 10;
  v3 = *(_QWORD *)(a1 + 288);
  v17 = 8;
  v5 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           v3);
  Flink = WindowListForDesktop->Flink;
  if ( WindowListForDesktop->Flink != WindowListForDesktop )
  {
    while ( 2 )
    {
      v15 = (CWindowData *)Flink;
      v8 = &v16;
      v9 = (int)Flink[7].Flink;
      v10 = (CWindowData *)Flink;
      v11 = 0;
      while ( 1 )
      {
        if ( v9 == *v8 )
        {
          ShouldCloneWindow = CTransitionVisualController::ShouldCloneWindow(*((HWND *)v10 + 5));
          v10 = v15;
          if ( ShouldCloneWindow )
          {
            if ( CWindowData::IsWindowVisibleAndUncloaked(v15) )
              break;
          }
        }
        ++v11;
        ++v8;
        if ( v11 >= 2 )
          goto LABEL_10;
      }
      if ( !(unsigned int)CLivePreview::_GetCoverageStateOfWindow(a1, v10) )
      {
        v13 = DynArray<CWindowData *,0>::AddMultipleAndSet(a2, &v15);
        v5 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x2C5u);
          return v5;
        }
      }
LABEL_10:
      Flink = Flink->Flink;
      if ( Flink != WindowListForDesktop )
        continue;
      break;
    }
  }
  return v5;
}
