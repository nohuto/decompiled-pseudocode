/*
 * XREFs of ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x180030604
 * Callers:
 *     ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x180002DE0 (-OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x1800305C0 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ @ 0x1800A8960 (-OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGrowPanel@@UEAAJXZ @ 0x1800A89D0 (-OnEndTransitionRequest@CGrowPanel@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ @ 0x1800A8AF0 (-OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ.c)
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800A8B74 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000455C (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x1800167EC (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180030234 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x18003076C (-_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800A733C (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CStoryboard::_EnumerateWindows(CStoryboard *a1, unsigned int a2)
{
  __int64 v4; // rax
  char v5; // di
  struct _LIST_ENTRY *WindowListForDesktop; // rbp
  struct _LIST_ENTRY *Blink; // rbx
  unsigned int i; // ebx
  CTransitionVisualController *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rbp
  void *v12; // [rsp+28h] [rbp-30h]
  struct CTransitionWindowSnapshot *v13; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0;
  if ( (unsigned int)GetDesktopID(1LL, &v15) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31) + 96LL);
    if ( (v4 == -1 || v4 == v15)
      && *(_DWORD *)((*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 16LL))(a1) + 4) )
    {
      v5 = 1;
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                               v15);
      Blink = WindowListForDesktop->Blink;
      do
      {
        if ( Blink == WindowListForDesktop )
          break;
        if ( (GetWindowLongPtrW((HWND)Blink[2].Blink, -16) & 0x10000000) != 0
          || (HIDWORD(Blink[38].Flink) & 0x20000000) == 0 )
        {
          v5 = CStoryboard::_InvokeWindowEnumCallback(a1, Blink, a2, &v14);
        }
        Blink = Blink->Blink;
      }
      while ( v5 );
      for ( i = 0; v5; ++i )
      {
        v9 = (CTransitionVisualController *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
        if ( i >= *((_DWORD *)v9 + 20) )
          break;
        if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v9, i, &v13) >= 0 )
        {
          v11 = *(_QWORD *)(*((_QWORD *)v13 + 35) + 32LL);
          if ( !CTransitionVisualController::HasVisibleStyle(*(HWND *)(v11 + 40)) )
            v5 = CStoryboard::_InvokeWindowEnumCallback(a1, v11, a2, &v14);
        }
      }
    }
  }
  else
  {
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x1498u,
      v12);
  }
  result = (unsigned int)v14;
  if ( v14 < 0 )
  {
    CStoryboard::Abandon(a1);
    return (unsigned int)v14;
  }
  return result;
}
