/*
 * XREFs of ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1C01E908C
 * Callers:
 *     UserRecreateRedirectionBitmap @ 0x1C01E9890 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C002473C (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     GreSelectRedirectionBitmap @ 0x1C00EEBB0 (GreSelectRedirectionBitmap.c)
 */

void __fastcall UnselectRedirectionBitmapsInDCEs(struct tagWND *const a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *i; // rbx
  int v6; // ecx

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), a2, a3, a4);
  for ( i = *(__int64 **)(gpDispInfo + 24LL); i; i = (__int64 *)*i )
  {
    v6 = *((_DWORD *)i + 16);
    if ( (v6 & 0x4404800) == 0x4000
      && i[2]
      && (v6 & 0x1000) != 0
      && (unsigned int)WindowMatchesDCE(a1, (const struct tagDCE *)i)
      && !(unsigned int)GreSelectRedirectionBitmap(i[1], 0LL) )
    {
      GreSelectVisRgn(i[1], 0LL, 1LL);
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
