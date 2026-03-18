/*
 * XREFs of UnredirectDCEs @ 0x1C002702C
 * Callers:
 *     UnsetRedirectedWindow @ 0x1C0044AF0 (UnsetRedirectedWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00983A4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C002473C (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     GetStyleWindow @ 0x1C0025520 (GetStyleWindow.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C00EDA08 (ChangeRedirectionParentInDCEs.c)
 *     UpdateRedirectedDCE @ 0x1C00EE8D0 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall UnredirectDCEs(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  const struct tagDCE *i; // rbx
  __int16 v6; // r11

  if ( GetStyleWindow((__int64)a1, 2848) )
    return ChangeRedirectionParentInDCEs(a1);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v2, v3, v4);
  for ( i = *(const struct tagDCE **)(gpDispInfo + 24LL); i; i = *(const struct tagDCE **)i )
  {
    if ( (*((_DWORD *)i + 16) & 0x4400800) == 0
      && *((_QWORD *)i + 2)
      && (unsigned int)WindowMatchesDCE(a1, i)
      && (v6 & 0x1002) != 2 )
    {
      UpdateRedirectedDCE(i, 0LL);
    }
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
