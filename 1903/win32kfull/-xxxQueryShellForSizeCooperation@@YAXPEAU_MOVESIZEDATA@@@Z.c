/*
 * XREFs of ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FEF4C
 * Callers:
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C002E774 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C002E7CC (IsShellWndManagementBehaviorEnabled.c)
 *     ?IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z @ 0x1C01FAB54 (-IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YA_NPEAUtagWND@@H@Z @ 0x1C023A9DC (-xxxWindowSizeStartingHandler@CallShell@@YA_NPEAUtagWND@@H@Z.c)
 */

void __fastcall xxxQueryShellForSizeCooperation(struct _MOVESIZEDATA *a1)
{
  __int64 v2; // r9
  struct tagWND *v3; // r9
  int v4; // r8d
  int v5; // edx
  int v6; // ecx

  if ( (unsigned int)(*((_DWORD *)a1 + 44) - 1) <= 1
    && (*((_DWORD *)a1 + 49) & 2) == 0
    && IsLeftOrRightArranged(*((const struct tagWND **)a1 + 2))
    && !(unsigned int)IsShellWndManagementBehaviorEnabled(*(_QWORD *)(v2 + 24), 8)
    && IsWindowSubjectToShellWindowBehavior(v3, 64LL)
    && CallShell::xxxWindowSizeStartingHandler(
         *((CallShell **)a1 + 2),
         (struct tagWND *)(unsigned int)(*((_DWORD *)a1 + 44) + 9),
         v4) )
  {
    *((_DWORD *)a1 + 70) |= 4u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        v6,
        v5,
        1u,
        0xAu,
        (__int64)&WPP_c0d2aea0028b3d709fe1f4aa428b688d_Traceguids,
        *((_QWORD *)a1 + 2));
  }
}
