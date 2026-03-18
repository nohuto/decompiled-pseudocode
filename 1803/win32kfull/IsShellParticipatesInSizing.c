/*
 * XREFs of IsShellParticipatesInSizing @ 0x1C0074B18
 * Callers:
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C0073BD0 (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01C416C (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C01F6F30 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0021D3C (IsShellWndManagementBehaviorEnabled.c)
 */

__int64 __fastcall IsShellParticipatesInSizing(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  unsigned int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax

  v1 = IsShellWndManagementBehaviorEnabled(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL), 64);
  v3 = 0;
  if ( v1 )
  {
    if ( !(unsigned int)IsShellWndManagementBehaviorEnabled(v2, 8) )
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
