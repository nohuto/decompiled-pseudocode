/*
 * XREFs of RedirectDCEs @ 0x1C0042500
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UnsetLayeredWindow @ 0x1C000D7F8 (UnsetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1C0074068 (SetRedirectedWindow.c)
 * Callees:
 *     UpdateRedirectedDCE @ 0x1C000E950 (UpdateRedirectedDCE.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C00431F0 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 */

__int64 __fastcall RedirectDCEs(struct tagWND *a1)
{
  __int64 i; // rbx
  int v3; // eax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(_QWORD *)(gpDispInfo + 24LL); i; i = *(_QWORD *)i )
  {
    v3 = *(_DWORD *)(i + 64);
    if ( (v3 & 0x4400800) == 0 && *(_QWORD *)(i + 16) && (v3 & 0x1000) != 0 )
    {
      if ( (unsigned int)WindowMatchesDCE(a1, (const struct tagDCE *)i) )
        UpdateRedirectedDCE(i, 0);
    }
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
