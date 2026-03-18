/*
 * XREFs of ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C0076540
 * Callers:
 *     ChangeRedirectionParentInDCEs @ 0x1C00755E4 (ChangeRedirectionParentInDCEs.c)
 *     UnredirectDCEs @ 0x1C00760F4 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C00764B0 (RedirectDCEs.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C0076580 (IsDesktopWindow.c)
 *     _IsDescendant @ 0x1C00765A8 (_IsDescendant.c)
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
