/*
 * XREFs of ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x180032184
 * Callers:
 *     ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x180003F30 (-OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180032140 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ @ 0x1800A4660 (-OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGrowPanel@@UEAAJXZ @ 0x1800A46D0 (-OnEndTransitionRequest@CGrowPanel@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ @ 0x1800A47F0 (-OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ.c)
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800A4874 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180006C50 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180028BF0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180032028 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?HasUsableBitmapResource@CTransitionVisualController@@QEAA_NPEAUHWND__@@PEAVCStoryboard@@@Z @ 0x18009F9A0 (-HasUsableBitmapResource@CTransitionVisualController@@QEAA_NPEAUHWND__@@PEAVCStoryboard@@@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800A3088 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x1800A629C (-_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z.c)
 */

__int64 __fastcall CStoryboard::_EnumerateWindows(struct CStoryboard *a1, unsigned int a2)
{
  __int64 v4; // rax
  char v5; // di
  struct _LIST_ENTRY *WindowListForDesktop; // r13
  struct _LIST_ENTRY *Blink; // rsi
  int v8; // r15d
  unsigned int j; // esi
  CTransitionVisualController *v10; // rcx
  __int64 i; // r14
  __int64 v13; // r14
  struct CTransitionWindowSnapshot *v14; // [rsp+30h] [rbp-10h] BYREF
  int v15; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 v16; // [rsp+98h] [rbp+58h] BYREF

  v15 = 0;
  if ( (unsigned int)GetDesktopID(1LL, &v16) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31) + 96LL);
    if ( (v4 == -1 || v4 == v16)
      && *(_DWORD *)((*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)a1 + 16LL))(a1) + 4) )
    {
      v5 = 1;
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                               v16);
      Blink = WindowListForDesktop->Blink;
      do
      {
        if ( Blink == WindowListForDesktop )
          break;
        if ( (GetWindowLongPtrW((HWND)Blink[2].Blink, -16) & 0x10000000) != 0
          || (HIDWORD(Blink[37].Blink) & 0x20000000) == 0 )
        {
          v15 = 0;
          v5 = 1;
          v8 = HIDWORD(Blink[37].Blink) & 0xFFF;
          if ( v8 != 4095 )
          {
            for ( i = 0LL;
                  (unsigned int)i < *(_DWORD *)((*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)a1 + 16LL))(a1)
                                              + 4);
                  i = (unsigned int)(i + 1) )
            {
              if ( v8 == *(_DWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)a1 + 16LL))(a1)
                                               + 8)
                                   + 4 * i)
                || (*(unsigned __int8 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)a1 + 72LL))(a1)
                && CTransitionVisualController::HasUsableBitmapResource(
                     *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
                     (HWND)Blink[2].Blink,
                     a1) )
              {
                v5 = (*(unsigned __int8 (__fastcall **)(struct CStoryboard *, struct _LIST_ENTRY *, _QWORD, int *))(*(_QWORD *)a1 + 136LL))(
                       a1,
                       Blink,
                       a2,
                       &v15)
                  && v15 >= 0;
                break;
              }
            }
          }
        }
        Blink = Blink->Blink;
      }
      while ( v5 );
      for ( j = 0; v5; ++j )
      {
        v10 = (CTransitionVisualController *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
        if ( j >= *((_DWORD *)v10 + 20) )
          break;
        if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v10, j, &v14) >= 0 )
        {
          v13 = *(_QWORD *)(*((_QWORD *)v14 + 35) + 32LL);
          if ( !CTransitionVisualController::HasVisibleStyle(*(HWND *)(v13 + 40)) )
            v5 = CStoryboard::_InvokeWindowEnumCallback(a1, v13, a2, &v15);
        }
      }
    }
  }
  else
  {
    v15 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x14B1u);
  }
  if ( v15 < 0 )
    CStoryboard::Abandon(a1);
  return (unsigned int)v15;
}
