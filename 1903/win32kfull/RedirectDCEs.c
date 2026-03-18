/*
 * XREFs of RedirectDCEs @ 0x1C00246A0
 * Callers:
 *     SetRedirectedWindow @ 0x1C002BF18 (SetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C0044CD4 (UnsetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C002473C (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C00EE8D0 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall RedirectDCEs(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *i; // rbx
  int v6; // eax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), a2, a3, a4);
  for ( i = *(__int64 **)(gpDispInfo + 24LL); i; i = (__int64 *)*i )
  {
    v6 = *((_DWORD *)i + 16);
    if ( (v6 & 0x4400800) == 0 && i[2] && (v6 & 0x1000) != 0 )
    {
      if ( (unsigned int)WindowMatchesDCE(a1, (const struct tagDCE *)i) )
        UpdateRedirectedDCE(i, 0LL);
    }
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
