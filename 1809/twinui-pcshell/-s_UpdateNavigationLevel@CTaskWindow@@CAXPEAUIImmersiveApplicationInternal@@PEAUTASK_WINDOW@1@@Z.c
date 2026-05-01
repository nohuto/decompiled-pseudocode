/*
 * XREFs of ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x180042984
 * Callers:
 *     ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x180042AD8 (-_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ.c)
 *     ?HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z @ 0x180124C00 (-HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z.c)
 * Callees:
 *     ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x180051364 (-ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAU.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CTaskWindow::s_UpdateNavigationLevel(
        struct IImmersiveApplicationInternal *a1,
        struct CTaskWindow::TASK_WINDOW *a2)
{
  int v4; // r8d
  __int64 v5; // rbx
  unsigned int v6; // r15d
  int v7; // r8d
  unsigned int v8; // esi
  __int64 v9; // r12
  __int64 v10; // r9
  int v11; // eax
  _QWORD v12[2]; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+88h] [rbp+48h] BYREF
  __int64 v14; // [rsp+90h] [rbp+50h] BYREF
  __int64 v15; // [rsp+98h] [rbp+58h] BYREF

  v12[1] = -2LL;
  v4 = *((_DWORD *)a2 + 22);
  v5 = 0LL;
  v6 = 1;
  if ( v4 )
  {
    v7 = v4 - 1;
    if ( !v7 )
    {
      v8 = 3;
      goto LABEL_5;
    }
    if ( v7 == 1 )
    {
      v8 = 4;
      goto LABEL_5;
    }
  }
  v8 = 1;
LABEL_5:
  v12[0] = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))a2 + 2))(
    *((_QWORD *)a2 + 2),
    &GUID_d6ecd9bf_13b0_4264_955c_6e96d28a37ae,
    v12);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v12[0] + 392LL))(v12[0], v8);
  v15 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 2))(
    *((_QWORD *)a2 + 2),
    &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
    &v15);
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 48LL))(v15, &v13) >= 0 )
  {
    v9 = v13;
    v10 = 0LL;
    v14 = 0LL;
    if ( a1 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a1 + 464LL))(a1, &v14);
      v10 = v14;
    }
    v11 = *((_DWORD *)a2 + 3);
    if ( v11 != 5 )
      v6 = v11 + 8;
    LOBYTE(v5) = v8 == 4;
    CReportWindowVisibilityChange::ReportOwnedWindowsVisibilityChange(
      &CApplicationManagerUtility::g_pIAMGlobals[1],
      v9,
      v6,
      v10,
      a1,
      v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
}
