/*
 * XREFs of ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C00431F0
 * Callers:
 *     UnredirectDCEs @ 0x1C000E880 (UnredirectDCEs.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C0010724 (ChangeRedirectionParentInDCEs.c)
 *     RedirectDCEs @ 0x1C0042500 (RedirectDCEs.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1C01D3F0C (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     _IsDescendant @ 0x1C0043A2C (_IsDescendant.c)
 */

__int64 __fastcall WindowMatchesDCE(struct tagWND *const a1, const struct tagDCE *a2)
{
  __int64 DesktopWindow; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int v5; // r9d

  DesktopWindow = GetDesktopWindow(a1);
  if ( v4 == DesktopWindow )
  {
    LOBYTE(v5) = v4 == *(_QWORD *)(v3 + 16);
  }
  else if ( (unsigned int)IsDescendant(v4, *(_QWORD *)(v3 + 16)) )
  {
    ++v5;
  }
  return v5;
}
