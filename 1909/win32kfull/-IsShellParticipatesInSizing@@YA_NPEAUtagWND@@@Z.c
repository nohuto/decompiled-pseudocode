/*
 * XREFs of ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00236DC
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C0022FF4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FED54 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C02367B0 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0023EEC (IsShellWndManagementBehaviorEnabled.c)
 */

char __fastcall IsShellParticipatesInSizing(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  char v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // rax

  v4 = IsShellWndManagementBehaviorEnabled(*(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL), 64LL, a3, a4);
  v7 = 0;
  if ( v4 )
  {
    if ( !(unsigned int)IsShellWndManagementBehaviorEnabled(v5, 8LL, v6, 0LL) )
    {
      v10 = *(_QWORD *)(v9 + 664);
      if ( v10 )
      {
        if ( *(_QWORD *)(v10 + 16) == v8 && (*(_DWORD *)(v10 + 280) & 4) != 0 )
          return 1;
      }
    }
  }
  return v7;
}
