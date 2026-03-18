/*
 * XREFs of IsWindowSubjectToShellSizingPolicy @ 0x1C01C57A0
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01C4114 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021CE4 (IsWindowSubjectToShellWindowBehavior.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0021D3C (IsShellWndManagementBehaviorEnabled.c)
 *     ?IsLeftOrRightArranged@@YAEPEBUtagWND@@@Z @ 0x1C01C1010 (-IsLeftOrRightArranged@@YAEPEBUtagWND@@@Z.c)
 */

__int64 __fastcall IsWindowSubjectToShellSizingPolicy(const struct tagWND *a1)
{
  __int64 v1; // r9
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9

  v2 = 0;
  if ( IsLeftOrRightArranged(a1) && !(unsigned int)IsShellWndManagementBehaviorEnabled(*(_QWORD *)(v1 + 24), 8) )
    return (unsigned int)IsWindowSubjectToShellWindowBehavior(v4, 64LL, v3) != 0;
  return v2;
}
