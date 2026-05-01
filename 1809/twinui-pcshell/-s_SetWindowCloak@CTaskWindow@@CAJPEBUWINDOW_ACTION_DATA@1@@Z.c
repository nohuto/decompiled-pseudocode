/*
 * XREFs of ?s_SetWindowCloak@CTaskWindow@@CAJPEBUWINDOW_ACTION_DATA@1@@Z @ 0x1801255C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x1800FB98C (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?s_UpdateDelayedVisibilityTimestamp@CTaskWindow@@CAXPEAUTASK_WINDOW@1@_J@Z @ 0x180125708 (-s_UpdateDelayedVisibilityTimestamp@CTaskWindow@@CAXPEAUTASK_WINDOW@1@_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::s_SetWindowCloak(const struct CTaskWindow::WINDOW_ACTION_DATA *a1)
{
  __int64 v2; // rax
  char v3; // cl
  int v4; // esi
  struct IUnknown *v5; // rbx
  __int64 v6; // r10
  unsigned __int64 v7; // rbp
  struct IImmersiveApplicationInternal *v8; // r8
  struct IUnknown *v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 3);
  v3 = *((_BYTE *)a1 + 8);
  if ( v3 != *(_BYTE *)(v2 + 24) )
  {
    v4 = 1;
    if ( (*(_BYTE *)(v2 + 28) & 1) == 0 )
    {
      *(_BYTE *)(v2 + 24) = v3;
      v5 = 0LL;
      if ( (*(int (__fastcall **)(PVOID, _QWORD, bool))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                      + 24LL))(
             CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
             **((_QWORD **)a1 + 3),
             *((_BYTE *)a1 + 8) != 0) >= 0 )
      {
        v6 = *((_QWORD *)a1 + 3);
        v7 = (*((_BYTE *)a1 + 8) == 0) | (unsigned __int64)*(unsigned int *)(v6 + 84);
        v10 = 0LL;
        v8 = (struct IImmersiveApplicationInternal *)*((_QWORD *)a1 + 2);
        if ( v8 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
          (*(void (__fastcall **)(_QWORD, struct IUnknown **))(**((_QWORD **)a1 + 2) + 464LL))(
            *((_QWORD *)a1 + 2),
            &v10);
          v6 = *((_QWORD *)a1 + 3);
          v8 = (struct IImmersiveApplicationInternal *)*((_QWORD *)a1 + 2);
          v5 = v10;
        }
        if ( *(_DWORD *)(v6 + 12) == 4 )
        {
          v4 = 13;
        }
        else if ( *(_DWORD *)(v6 + 12) != 5 )
        {
          v4 = *(_DWORD *)(v6 + 12) + 8;
        }
        CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
          (__int64)&CApplicationManagerUtility::g_pIAMGlobals[1],
          *(HWND *)v6,
          v4,
          v5,
          v8,
          v7);
        CTaskWindow::s_UpdateDelayedVisibilityTimestamp(*((struct CTaskWindow::TASK_WINDOW **)a1 + 3), v7);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
      }
    }
  }
  return 0LL;
}
