/*
 * XREFs of ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E956C
 * Callers:
 *     xxxMoveSize @ 0x1C01EBF38 (xxxMoveSize.c)
 * Callees:
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C006A128 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C006A180 (IsShellWndManagementBehaviorEnabled.c)
 *     ?IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z @ 0x1C01E5260 (-IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YA_NPEAUtagWND@@H@Z @ 0x1C0222304 (-xxxWindowSizeStartingHandler@CallShell@@YA_NPEAUtagWND@@H@Z.c)
 */

void __fastcall xxxQueryShellForSizeCooperation(struct _MOVESIZEDATA *a1)
{
  __int64 v2; // r9
  struct tagWND *v3; // r9
  int v4; // r8d

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
  }
}
