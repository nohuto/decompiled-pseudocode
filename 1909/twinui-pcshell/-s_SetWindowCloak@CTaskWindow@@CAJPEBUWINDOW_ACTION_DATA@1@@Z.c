/*
 * XREFs of ?s_SetWindowCloak@CTaskWindow@@CAJPEBUWINDOW_ACTION_DATA@1@@Z @ 0x18016DF00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x180140DFC (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?s_UpdateDelayedVisibilityTimestamp@CTaskWindow@@CAXPEAUTASK_WINDOW@1@_J@Z @ 0x18016E048 (-s_UpdateDelayedVisibilityTimestamp@CTaskWindow@@CAXPEAUTASK_WINDOW@1@_J@Z.c)
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
  struct IImmersiveApplicationInternal *v8; // r14
  void (__fastcall *v9)(struct IImmersiveApplicationInternal *, struct IUnknown **); // rbx
  struct IUnknown *v11; // [rsp+60h] [rbp+8h] BYREF

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
        v11 = 0LL;
        v8 = (struct IImmersiveApplicationInternal *)*((_QWORD *)a1 + 2);
        if ( v8 )
        {
          v9 = *(void (__fastcall **)(struct IImmersiveApplicationInternal *, struct IUnknown **))(*(_QWORD *)v8 + 464LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
          v9(v8, &v11);
          v6 = *((_QWORD *)a1 + 3);
          v8 = (struct IImmersiveApplicationInternal *)*((_QWORD *)a1 + 2);
          v5 = v11;
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
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
      }
    }
  }
  return 0LL;
}
