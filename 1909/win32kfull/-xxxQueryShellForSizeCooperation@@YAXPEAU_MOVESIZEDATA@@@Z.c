/*
 * XREFs of ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FEC9C
 * Callers:
 *     xxxMoveSize @ 0x1C0201A40 (xxxMoveSize.c)
 * Callees:
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C0023E94 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0023EEC (IsShellWndManagementBehaviorEnabled.c)
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     ?IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z @ 0x1C01FA8A4 (-IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YA_NPEAUtagWND@@H@Z @ 0x1C023A3BC (-xxxWindowSizeStartingHandler@CallShell@@YA_NPEAUtagWND@@H@Z.c)
 */

void __fastcall xxxQueryShellForSizeCooperation(struct _MOVESIZEDATA *a1)
{
  __int64 v2; // r9
  __int64 v3; // r8
  struct tagWND *v4; // r9
  int v5; // r8d
  int v6; // edx
  int v7; // ecx

  if ( (unsigned int)(*((_DWORD *)a1 + 44) - 1) <= 1
    && (*((_DWORD *)a1 + 49) & 2) == 0
    && IsLeftOrRightArranged(*((const struct tagWND **)a1 + 2))
    && !(unsigned int)IsShellWndManagementBehaviorEnabled(*(_QWORD *)(v2 + 24), 8)
    && IsWindowSubjectToShellWindowBehavior(v4, 64LL, v3)
    && CallShell::xxxWindowSizeStartingHandler(
         *((CallShell **)a1 + 2),
         (struct tagWND *)(unsigned int)(*((_DWORD *)a1 + 44) + 9),
         v5) )
  {
    *((_DWORD *)a1 + 70) |= 4u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(v7, v6, 1, 10, (__int64)&WPP_c0d2aea0028b3d709fe1f4aa428b688d_Traceguids, *((_QWORD *)a1 + 2));
  }
}
