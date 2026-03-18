/*
 * XREFs of HasMaximizedState @ 0x1C002DC40
 * Callers:
 *     GetNewMonitor @ 0x1C002D640 (GetNewMonitor.c)
 *     xxxInheritWindowMonitor @ 0x1C0030244 (xxxInheritWindowMonitor.c)
 *     DetectNewMonitor @ 0x1C01AEDC4 (DetectNewMonitor.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01B0038 (xxxAppAdjustDpiCandidateRect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasMaximizedState(__int64 a1)
{
  _BYTE *v1; // rdx
  unsigned int v2; // ecx

  v1 = *(_BYTE **)(a1 + 40);
  v2 = 1;
  if ( (v1[233] & 3) == 0 && (v1[31] & 1) == 0 )
    return (v1[20] & 0x40) != 0;
  return v2;
}
