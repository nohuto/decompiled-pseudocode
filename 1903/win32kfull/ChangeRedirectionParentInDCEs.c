/*
 * XREFs of ChangeRedirectionParentInDCEs @ 0x1C00EDA08
 * Callers:
 *     UnredirectDCEs @ 0x1C002702C (UnredirectDCEs.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     RecreateRedirectionBitmap @ 0x1C00ED748 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E8FFC (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C002473C (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C00EE8D0 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall ChangeRedirectionParentInDCEs(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 *i; // rbx
  int v7; // ecx

  v5 = a2;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), a2, a3, a4);
  for ( i = *(__int64 **)(gpDispInfo + 24LL); i; i = (__int64 *)*i )
  {
    v7 = *((_DWORD *)i + 16);
    if ( (v7 & 0x4404800) == 0x4000
      && i[2]
      && (v7 & 0x1000) != 0
      && (unsigned int)WindowMatchesDCE(a1, (const struct tagDCE *)i) )
    {
      UpdateRedirectedDCE(i, v5);
    }
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
