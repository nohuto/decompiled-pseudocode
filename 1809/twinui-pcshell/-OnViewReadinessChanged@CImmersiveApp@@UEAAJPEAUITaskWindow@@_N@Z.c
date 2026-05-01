/*
 * XREFs of ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180042E70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180042F7C (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x180042FA4 (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180043060 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180043320 (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18004393C (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180045B9C (-QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18011AD3C (-CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x18011FB98 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     WPP_SF_Sdql @ 0x180122D10 (WPP_SF_Sdql.c)
 */

__int64 __fastcall CImmersiveApp::OnViewReadinessChanged(CImmersiveApp *this, struct ITaskWindow *a2, char a3)
{
  HWND v5; // rax
  char *v6; // rdi
  HWND v7; // rsi
  int v8; // edx
  int v9; // r8d
  bool v10; // bl
  bool v12; // dl
  unsigned __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = (HWND)(*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  v6 = (char *)this + 152;
  v7 = v5;
  if ( a3
    && (int)CImmersiveApp::CImmersiveWindowCollection::_FindWindow(
              (CImmersiveApp::CImmersiveWindowCollection *)v6,
              v5,
              &v13) >= 0 )
  {
    if ( !v13 )
    {
      v10 = (*(unsigned int (__fastcall **)(_QWORD))(***((_QWORD ***)v6 + 21) + 216LL))(**((_QWORD **)v6 + 21)) == 3;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v6 + 19) + 32LL))(
        *((_QWORD *)v6 + 19),
        **((_QWORD **)v6 + 21));
      if ( v10 )
        CImmersiveApp::CImmersiveWindowCollection::QueueAyncPositionReconciliation((CImmersiveApp::CImmersiveWindowCollection *)v6);
    }
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_Sdql(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        v8,
        v9,
        *(_QWORD *)(*((_QWORD *)v6 + 20) + 560LL),
        *(_DWORD *)(*((_QWORD *)v6 + 20) + 568LL),
        (char)v7,
        a3);
    if ( *((_QWORD *)v6 + 17)
      && CImmersiveApp::CImmersiveWindowCollection::CanShowPendingApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)v6) )
    {
      CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
        (CImmersiveApp::CImmersiveWindowCollection *)v6,
        v7);
      goto LABEL_12;
    }
    if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)v6)
      && CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost((CImmersiveApp::CImmersiveWindowCollection *)v6) )
    {
      CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(
        (CImmersiveApp::CImmersiveWindowCollection *)v6,
        v12);
LABEL_12:
      CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged((CImmersiveApp::CImmersiveWindowCollection *)v6);
    }
  }
  return 0LL;
}
