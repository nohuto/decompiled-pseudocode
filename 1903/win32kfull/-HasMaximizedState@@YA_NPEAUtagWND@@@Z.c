/*
 * XREFs of ?HasMaximizedState@@YA_NPEAUtagWND@@@Z @ 0x1C00CA81C
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C00C78F8 (xxxInheritWindowMonitor.c)
 *     GetNewMonitor @ 0x1C00CA150 (GetNewMonitor.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E7AEC (xxxAppAdjustDpiCandidateRect.c)
 * Callees:
 *     <none>
 */

char __fastcall HasMaximizedState(struct tagWND *a1)
{
  _BYTE *v1; // rdx
  char v2; // cl

  v1 = (_BYTE *)*((_QWORD *)a1 + 5);
  v2 = 1;
  if ( (v1[233] & 3) == 0 && (v1[31] & 1) == 0 )
    return (v1[20] & 0x40) != 0;
  return v2;
}
