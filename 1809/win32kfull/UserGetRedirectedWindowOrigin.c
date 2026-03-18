/*
 * XREFs of UserGetRedirectedWindowOrigin @ 0x1C007A680
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C007BECC (xxxSetLayeredWindow.c)
 *     GreGetRandomRgn @ 0x1C010DA60 (GreGetRandomRgn.c)
 *     GetDCOrgOnScreen @ 0x1C010DCE4 (GetDCOrgOnScreen.c)
 *     DxgkEngBltViaGDI @ 0x1C025A990 (DxgkEngBltViaGDI.c)
 * Callees:
 *     GetStyleWindow @ 0x1C0039EC0 (GetStyleWindow.c)
 *     IsDesktopWindow @ 0x1C007A740 (IsDesktopWindow.c)
 */

__int64 __fastcall UserGetRedirectedWindowOrigin(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 StyleWindow; // rax

  v4 = 0;
  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
  v5 = LookupDC(a1, 1LL);
  if ( v5 && (*(_DWORD *)(v5 + 64) & 0x4000) != 0 )
  {
    if ( (unsigned int)IsDesktopWindow(*(_QWORD *)(v5 + 16)) )
    {
      *(_QWORD *)a2 = 0LL;
      goto LABEL_6;
    }
    StyleWindow = GetStyleWindow(v6, 2848);
    if ( StyleWindow )
    {
      *(_DWORD *)a2 = *(_DWORD *)(*(_QWORD *)(StyleWindow + 40) + 88LL);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(*(_QWORD *)(StyleWindow + 40) + 92LL);
LABEL_6:
      v4 = 1;
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return v4;
}
