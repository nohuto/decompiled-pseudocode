/*
 * XREFs of ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C002473C
 * Callers:
 *     RedirectDCEs @ 0x1C00246A0 (RedirectDCEs.c)
 *     UnredirectDCEs @ 0x1C002702C (UnredirectDCEs.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C00EDA08 (ChangeRedirectionParentInDCEs.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1C01E908C (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C002477C (IsDesktopWindow.c)
 *     _IsDescendant @ 0x1C00247A4 (_IsDescendant.c)
 */

__int64 __fastcall WindowMatchesDCE(struct tagWND *const a1, const struct tagDCE *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r9d
  __int64 v4; // r10

  if ( (unsigned int)IsDesktopWindow(a1) )
  {
    LOBYTE(v3) = v2 == *(_QWORD *)(v4 + 16);
  }
  else if ( (unsigned int)IsDescendant(v2, *(_QWORD *)(v4 + 16)) )
  {
    ++v3;
  }
  return v3;
}
