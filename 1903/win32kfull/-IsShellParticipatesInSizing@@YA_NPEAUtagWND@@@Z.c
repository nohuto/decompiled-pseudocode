/*
 * XREFs of ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C002DFBC
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C002D8D4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF004 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C0236DD0 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     IsShellWndManagementBehaviorEnabled @ 0x1C002E7CC (IsShellWndManagementBehaviorEnabled.c)
 */

char __fastcall IsShellParticipatesInSizing(struct tagWND *a1)
{
  int v1; // eax
  __int64 v2; // rcx
  char v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax

  v1 = IsShellWndManagementBehaviorEnabled(*(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL), 64LL);
  v3 = 0;
  if ( v1 )
  {
    if ( !(unsigned int)IsShellWndManagementBehaviorEnabled(v2, 8LL) )
    {
      v6 = *(_QWORD *)(v5 + 664);
      if ( v6 )
      {
        if ( *(_QWORD *)(v6 + 16) == v4 && (*(_DWORD *)(v6 + 280) & 4) != 0 )
          return 1;
      }
    }
  }
  return v3;
}
